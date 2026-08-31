#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B0520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B0520;

loc_800B0520:
{
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r8 = MemoryInline::FlatRead32((r3 + 20));
    r7 = (r6 + r5);
    r7 = (r7 + 31);
    r0 = (r8 + 31);
    r7 = (r7 & -32);
    r0 = (r0 & -32);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_800B0540:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B0550;
    }
}

loc_800B0544:
{
    r5 = (r8 - r6);
    r0 = (r5 + 31);
    r5 = (r0 & -32);
}

loc_800B0550:
{
    r7 = MemoryInline::FlatRead32((r3 + 104));
    r3 = (r3 + 40);
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8015E834u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000179 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B0520 func_800B0520 preserves=true fpr_mask=0x00000000
