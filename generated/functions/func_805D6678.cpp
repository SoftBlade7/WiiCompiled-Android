#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D6678(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805D6678;

loc_805D6678:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r5 = MemoryInline::FlatRead32((r3 + 4524));
    r0 = (r5 + -21);
}

loc_805D66A8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D675C;
    }
}

loc_805D66AC:
{
}

loc_805D66B0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(3))) {
        goto loc_805D6870;
    }
}

loc_805D66B4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r28 = MemoryInline::FlatRead32((r3 + 628));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805D66C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D66D4;
    }
}

loc_805D66CC:
{
    r28 = 0;
    goto loc_805D6728;
}

loc_805D66D4:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7228);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D6724;
    }
}

loc_805D66E0:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805D66F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805D670C;
}

loc_805D66F8:
{
}

loc_805D66FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805D6708;
    }
}

loc_805D6700:
{
    r0 = 1;
    goto loc_805D6718;
}

loc_805D6708:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805D670C:
{
}

loc_805D6710:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805D66F8;
    }
}

loc_805D6714:
{
    r0 = 0;
}

loc_805D6718:
{
}

loc_805D671C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D6724;
    }
}

loc_805D6720:
{
    goto loc_805D6728;
}

loc_805D6724:
{
    r28 = 0;
}

loc_805D6728:
{
    r3 = r28;
    r4 = 1;
    // inline leaf 0x805DE088 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 848), r4);
    // end of inlined leaf 0x805DE088
    r3 = MemoryInline::FlatRead32((r30 + 4360));
    r0 = 155;
    MemoryInline::FlatWrite32((r28 + 852), r3);
    r3 = r31;
    MemoryInline::FlatWrite32((r30 + 4520), r0);
    ctx->lr = 0x805D674Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805BDF88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    r3 = r30;
    r4 = 0;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl1_0x80602488:
{
}

loc_inl1_0x8060248C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_inl1_0x80602494;
    }
}

loc_inl1_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl1_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80602488:
{
    // end of inlined leaf 0x80602488
    goto loc_805D6870;
}

loc_805D675C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r28 = MemoryInline::FlatRead32((r3 + 580));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805D6770:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D677C;
    }
}

loc_805D6774:
{
    r28 = 0;
    goto loc_805D67D0;
}

loc_805D677C:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7488);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D67CC;
    }
}

loc_805D6788:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805D679Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805D67B4;
}

loc_805D67A0:
{
}

loc_805D67A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805D67B0;
    }
}

loc_805D67A8:
{
    r0 = 1;
    goto loc_805D67C0;
}

loc_805D67B0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805D67B4:
{
}

loc_805D67B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805D67A0;
    }
}

loc_805D67BC:
{
    r0 = 0;
}

loc_805D67C0:
{
}

loc_805D67C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D67CC;
    }
}

loc_805D67C8:
{
    goto loc_805D67D0;
}

loc_805D67CC:
{
    r28 = 0;
}

loc_805D67D0:
{
    r0 = MemoryInline::FlatRead32((r30 + 4360));
    MemoryInline::FlatWrite32((r28 + 7420), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4524));
    r0 = (r3 + -21);
}

loc_805D67E4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_805D67FC;
    }
}

loc_805D67E8:
{
}

loc_805D67EC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(23))) {
        goto loc_805D6810;
    }
}

loc_805D67F0:
{
}

loc_805D67F4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(24))) {
        goto loc_805D6808;
    }
}

loc_805D67F8:
{
    goto loc_805D6810;
}

loc_805D67FC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 7412), r0);
    goto loc_805D6810;
}

loc_805D6808:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r28 + 7412), r0);
}

loc_805D6810:
{
    r0 = MemoryInline::FlatRead32((r30 + 4524));
}

loc_805D6818:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_805D6838;
    }
}

loc_805D681C:
{
}

loc_805D6820:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_805D6838;
    }
}

loc_805D6824:
{
}

loc_805D6828:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(22))) {
        goto loc_805D6848;
    }
}

loc_805D682C:
{
}

loc_805D6830:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24))) {
        goto loc_805D6848;
    }
}

loc_805D6834:
{
    goto loc_805D6854;
}

loc_805D6838:
{
    r3 = r28;
    r4 = 0;
    // inline leaf 0x80609CB8 (16 guest instruction(s))
}

loc_inl2_0x80609CB8:
{
}

loc_inl2_0x80609CBC:
{
    MemoryInline::FlatWrite32((r3 + 7416), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80609CD0;
    }
}

loc_inl2_0x80609CC4:
{
}

loc_inl2_0x80609CC8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_inl2_0x80609CE4;
    }
}

loc_inl2_0x80609CCC:
{
    goto loc_inl2_cont_80609CB8;
}

loc_inl2_0x80609CD0:
{
    r3 = 0x809C0000u;
    r0 = 8;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    goto loc_inl2_cont_80609CB8;
}

loc_inl2_0x80609CE4:
{
    r3 = 0x809C0000u;
    r0 = 9;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
}

loc_inl2_cont_80609CB8:
{
    // end of inlined leaf 0x80609CB8
    goto loc_805D6854;
}

loc_805D6848:
{
    r3 = r28;
    r4 = 1;
    // inline leaf 0x80609CB8 (16 guest instruction(s))
}

loc_inl3_0x80609CB8:
{
}

loc_inl3_0x80609CBC:
{
    MemoryInline::FlatWrite32((r3 + 7416), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x80609CD0;
    }
}

loc_inl3_0x80609CC4:
{
}

loc_inl3_0x80609CC8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_inl3_0x80609CE4;
    }
}

loc_inl3_0x80609CCC:
{
    goto loc_inl3_cont_80609CB8;
}

loc_inl3_0x80609CD0:
{
    r3 = 0x809C0000u;
    r0 = 8;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    goto loc_inl3_cont_80609CB8;
}

loc_inl3_0x80609CE4:
{
    r3 = 0x809C0000u;
    r0 = 9;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
}

loc_inl3_cont_80609CB8:
{
    // end of inlined leaf 0x80609CB8
}

loc_805D6854:
{
    r0 = 143;
    MemoryInline::FlatWrite32((r30 + 4520), r0);
    r3 = r31;
    ctx->lr = 0x805D6864u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805BDF88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    r3 = r30;
    r4 = 0;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl4_0x80602488:
{
}

loc_inl4_0x8060248C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_inl4_0x80602494;
    }
}

loc_inl4_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl4_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl4_cont_80602488:
{
    // end of inlined leaf 0x80602488
}

loc_805D6870:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r28 = MemoryInline::FlatRead32((r3 + 604));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805D6884:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D6890;
    }
}

loc_805D6888:
{
    r28 = 0;
    goto loc_805D68E4;
}

loc_805D6890:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7264);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D68E0;
    }
}

loc_805D689C:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805D68B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805D68C8;
}

loc_805D68B4:
{
}

loc_805D68B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805D68C4;
    }
}

loc_805D68BC:
{
    r0 = 1;
    goto loc_805D68D4;
}

loc_805D68C4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805D68C8:
{
}

loc_805D68CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805D68B4;
    }
}

loc_805D68D0:
{
    r0 = 0;
}

loc_805D68D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D68D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D68E0;
    }
}

loc_805D68DC:
{
    goto loc_805D68E4;
}

loc_805D68E0:
{
    r28 = 0;
}

loc_805D68E4:
{
    r3 = r28;
    ctx->lr = 0x805D68ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E5FE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805D6678 func_805D6678 preserves=true fpr_mask=0x00000000
