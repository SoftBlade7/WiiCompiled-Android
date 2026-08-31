#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8064E4F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8064E4F0;

loc_8064E4F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8064E510:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8064E678;
    }
}

loc_8064E514:
{
    r5 = MemoryInline::FlatRead32((r3 + 2844));
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -25420));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8064E528:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8064E534:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064E678;
    }
}

loc_8064E538:
{
    r0 = MemoryInline::FlatRead8((r3 + 2840));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8064E540:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8064E678;
    }
}

loc_8064E544:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 8408));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 139));
}

loc_8064E560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8064E5E4;
    }
}

loc_8064E564:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 2836), r0);
    r3 = 0x809C0000u;
    r4 = -1;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(104));
}

loc_8064E584:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064E5A4;
    }
}

loc_8064E588:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(105));
}

loc_8064E58C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064E5AC;
    }
}

loc_8064E590:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(108));
}

loc_8064E594:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064E5B4;
    }
}

loc_8064E598:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(109));
}

loc_8064E59C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064E5BC;
    }
}

loc_8064E5A0:
{
    goto loc_8064E5C0;
}

loc_8064E5A4:
{
    r4 = 88;
    goto loc_8064E5C0;
}

loc_8064E5AC:
{
    r4 = 94;
    goto loc_8064E5C0;
}

loc_8064E5B4:
{
    r4 = 89;
    goto loc_8064E5C0;
}

loc_8064E5BC:
{
    r4 = 95;
}

loc_8064E5C0:
{
    r12 = MemoryInline::FlatRead32(r31);
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25420));
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8064E5E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8064E5F4;
}

loc_8064E5E4:
{
    r4 = 0;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl0_0x80602488:
{
}

loc_inl0_0x8060248C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_inl0_0x80602494;
    }
}

loc_inl0_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl0_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl0_cont_80602488:
{
    // end of inlined leaf 0x80602488
    r0 = 72;
    MemoryInline::FlatWrite32((r31 + 2836), r0);
}

loc_8064E5F4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 284));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8064E608:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8064E614;
    }
}

loc_8064E60C:
{
    r30 = 0;
    goto loc_8064E668;
}

loc_8064E614:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7944);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064E664;
    }
}

loc_8064E620:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8064E634u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8064E64C;
}

loc_8064E638:
{
}

loc_8064E63C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_8064E648;
    }
}

loc_8064E640:
{
    r0 = 1;
    goto loc_8064E658;
}

loc_8064E648:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8064E64C:
{
}

loc_8064E650:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8064E638;
    }
}

loc_8064E654:
{
    r0 = 0;
}

loc_8064E658:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8064E65C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064E664;
    }
}

loc_8064E660:
{
    goto loc_8064E668;
}

loc_8064E664:
{
    r30 = 0;
}

loc_8064E668:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 468), static_cast<uint8_t>(r0));
    r3 = (r30 + 84);
    ctx->lr = 0x8064E678u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805C4430u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8064E678:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8064E4F0 func_8064E4F0 preserves=true fpr_mask=0x00000000
