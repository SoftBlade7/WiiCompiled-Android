#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071D860(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071D860;

loc_8071D860:
{
}

loc_8071D864:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8071D870;
    }
}

loc_8071D868:
{
    r5 = (r5 + 128);
    goto loc_8071D87C;
}

loc_8071D870:
{
}

loc_8071D874:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(128))) {
        goto loc_8071D87C;
    }
}

loc_8071D878:
{
    r5 = (r5 + -128);
}

loc_8071D87C:
{
    r7 = (r5 - r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071D888;
    }
}

loc_8071D884:
{
    r7 = (r7 + 128);
}

loc_8071D888:
{
    r5 = (r5 * 12);
    r6 = MemoryInline::FlatRead32((r4 + 36));
    r0 = (r7 * 12);
    r4 = (r6 + r5);
    r5 = (r6 + r0);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071D860 func_8071D860 preserves=true fpr_mask=0x00000000
