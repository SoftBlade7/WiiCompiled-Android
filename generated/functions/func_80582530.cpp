#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80582530(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80582530;

loc_80582530:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & 64);
}

loc_80582554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80582640;
    }
}

loc_80582558:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & 512);
}

loc_80582560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8058259C;
    }
}

loc_80582564:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -65);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -1048577);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -8388609);
    MemoryInline::FlatWrite32((r4 + 8), r0);
}

loc_8058259C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 8388608);
}

loc_805825AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80582640;
    }
}

loc_805825B0:
{
    r3 = r31;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r5 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 23640));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 448));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r5 = MemoryInline::FlatRead32((r3 + 116));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 124));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805825E4:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805825FC;
    }
}

loc_805825F0:
{
    f0.d = f1.d;
    r0 = 1;
    goto loc_80582600;
}

loc_805825FC:
{
    r0 = 0;
}

loc_80582600:
{
}

loc_80582604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8058261C;
    }
}

loc_80582608:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -8388609);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8058261C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = r31;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
}

loc_80582640:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80582650:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80582680;
    }
}

loc_80582654:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058265C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80582680;
    }
}

loc_80582660:
{
    r4 = 0x80890000u;
    r3 = MemoryInline::FlatRead32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 6656));
    MemoryInline::FlatWriteFloat32((r31 + 432), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -1073741825);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_80582680:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80582530 func_80582530 preserves=true fpr_mask=0x00000000
