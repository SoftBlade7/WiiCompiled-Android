#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088E60C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8088E60C;

loc_8088E60C:
{
    r4 = (r4 * 24);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r7 = (r0 + r4);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088E620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088E664;
    }
}

loc_8088E624:
{
}

loc_8088E628:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8088E644;
    }
}

loc_8088E62C:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 4));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 12));
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
}

loc_8088E644:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8088E648:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088E65C;
    }
}

loc_8088E64C:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite32(r6, r0);
}

loc_8088E65C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_8088E664:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000099 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8088E60C func_8088E60C preserves=true fpr_mask=0x00000000
