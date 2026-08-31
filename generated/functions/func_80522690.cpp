#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80522690(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80522690;

loc_80522690:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80890000u;
    r31 = (r31 + -848);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0;
}

loc_805226B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 76));
    // inline leaf 0x801950B4 (7 guest instruction(s))
    r0 = (r3 * 1336);
    r3 = 0x80340000u;
    r3 = (r3 + 22496);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 132), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 136), f2.d);
    // end of inlined leaf 0x801950B4
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 68));
    // inline leaf 0x801950D0 (7 guest instruction(s))
    r0 = (r3 * 1336);
    r3 = 0x80340000u;
    r3 = (r3 + 22496);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 140), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 144), f2.d);
    // end of inlined leaf 0x801950D0
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(4));
}

loc_805226D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805226B0;
    }
}

loc_805226DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000B gpr_write=0xC000000B gpr_return=0x00000008 fpr_read=0x00000006 fpr_write=0x00000006 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80522690 func_80522690 preserves=true fpr_mask=0x00000000
