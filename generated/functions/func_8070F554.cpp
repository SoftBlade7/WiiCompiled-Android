#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070F554(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8070F554;

loc_8070F554:
{
    r6 = 0x808A0000u;
    r5 = 0x809C0000u;
    r0 = 11;
    r7 = 0;
    r6 = (r6 + 7496);
    r5 = (r5 + 9912);
    r3 = 0;
    ctr = r0;
}

loc_8070F574:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_8070F578:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070F588;
    }
}

loc_8070F57C:
{
    r4 = (r5 + r3);
    f0.d = MemoryInline::FlatReadFloat32(r6);
    MemoryInline::FlatWriteFloat32((r4 + 20), f0.d);
}

loc_8070F588:
{
    r6 = (r6 + 4);
    r7 = (r7 + 1);
    r3 = (r3 + 28);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8070F574;
    }
}

loc_8070F598:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8070F554 func_8070F554 preserves=true fpr_mask=0x00000000
