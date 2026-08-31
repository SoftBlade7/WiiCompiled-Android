#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083D11C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8083D11C;

loc_8083D11C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8083D124:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8083D128:
{
    r0 = MemoryInline::FlatRead32((r4 + 576));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-100));
}

loc_8083D130:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8083D134:
{
    r4 = 0x808B0000u;
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -12380));
    MemoryInline::FlatWrite8((r3 + 2501), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 2480), f0.d);
    MemoryInline::FlatWrite8((r3 + 2897), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 2876), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8083D11C func_8083D11C preserves=true fpr_mask=0x00000000
