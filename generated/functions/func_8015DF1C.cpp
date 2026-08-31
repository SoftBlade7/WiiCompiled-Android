#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015DF1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015DF1C;

loc_8015DF1C:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWrite32((r13 + -26044), r3);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8015DF2C:
{
    MemoryInline::FlatWrite32((r13 + -26048), r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8015DF34:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 * 12);
    MemoryInline::FlatWrite32((r13 + -26056), r3);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r13 + -26052), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002010 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015DF1C func_8015DF1C preserves=true fpr_mask=0x00000000
