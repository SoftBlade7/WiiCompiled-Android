#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808487EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808487EC;

loc_808487EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r29 = r4;
    r28 = r3;
    r30 = r5;
    MemoryInline::FlatWrite32((r3 + 3476), r0);
    r4 = MemoryInline::FlatRead32((r4 + 576));
}

loc_80848818:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-100))) {
        goto loc_80848824;
    }
}

loc_8084881C:
{
}

loc_80848820:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(10))) {
        goto loc_808488B4;
    }
}

loc_80848824:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80848838:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(69))) {
        goto loc_80848844;
    }
}

loc_8084883C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(70));
}

loc_80848840:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80848860;
    }
}

loc_80848844:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(71));
}

loc_80848848:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80848874;
    }
}

loc_8084884C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_80848850:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80848888;
    }
}

loc_80848854:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(84));
}

loc_80848858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084889C;
    }
}

loc_8084885C:
{
    goto loc_80848AD4;
}

loc_80848860:
{
    r3 = r28;
    r5 = r29;
    r4 = 66;
    ctx->lr = 0x80848870u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837F20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80848AD4;
}

loc_80848874:
{
    r3 = r28;
    r5 = r29;
    r4 = 103;
    ctx->lr = 0x80848884u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837934u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80848AD4;
}

loc_80848888:
{
    r3 = r28;
    r5 = r29;
    r4 = 97;
    ctx->lr = 0x80848898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837934u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80848AD4;
}

loc_8084889C:
{
    r3 = r29;
    ctx->lr = 0x808488A4u;
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
    r3 = r28;
    r4 = 1;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl0_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl0_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
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
    goto loc_80848AD4;
}

loc_808488B4:
{
    r3 = MemoryInline::FlatRead32((r3 + 68));
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x805FA930
    r6 = MemoryInline::FlatRead32((r29 + 576));
    r4 = 0x809C0000u;
    MemoryInline::FlatWrite32((r28 + 3476), r6);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r28 + 3488));
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r5 = MemoryInline::FlatRead32((r28 + 3480));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r5 = (r5 + r6);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 340), r5);
    r0 = MemoryInline::FlatRead32((r28 + 3484));
}

loc_808488F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80848924;
    }
}

loc_808488F8:
{
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r28 + 3488));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 340));
    r0 = MemoryInline::FlatRead8((r3 + 724));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r5 + 340), r0);
}

loc_80848924:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80848938:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(69))) {
        goto loc_80848944;
    }
}

loc_8084893C:
{
}

loc_80848940:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(71))) {
        goto loc_80848958;
    }
}

loc_80848944:
{
}

loc_80848948:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(90))) {
        goto loc_808489E8;
    }
}

loc_8084894C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(84));
}

loc_80848950:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80848A44;
    }
}

loc_80848954:
{
    goto loc_80848AD4;
}

loc_80848958:
{
    r27 = MemoryInline::FlatRead32((r3 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80848960:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084896C;
    }
}

loc_80848964:
{
    r27 = 0;
    goto loc_808489C0;
}

loc_8084896C:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7292);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808489BC;
    }
}

loc_80848978:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8084898Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808489A4;
}

loc_80848990:
{
}

loc_80848994:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_808489A0;
    }
}

loc_80848998:
{
    r0 = 1;
    goto loc_808489B0;
}

loc_808489A0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_808489A4:
{
}

loc_808489A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80848990;
    }
}

loc_808489AC:
{
    r0 = 0;
}

loc_808489B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808489B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808489BC;
    }
}

loc_808489B8:
{
    goto loc_808489C0;
}

loc_808489BC:
{
    r27 = 0;
}

loc_808489C0:
{
    r3 = r27;
    r4 = (r31 + 148);
    ctx->lr = 0x808489CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805ECDC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r27;
    ctx->lr = 0x808489D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805ECDD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r28;
    r5 = r29;
    r4 = 82;
    ctx->lr = 0x808489E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80848AD4;
}

loc_808489E8:
{
    r3 = MemoryInline::FlatRead32((r28 + 68));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r29 + 576));
    // inline leaf 0x805FA940 (9 guest instruction(s))
}

loc_inl2_0x805FA940:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r6_addr_3 = (r6 + r4);
    r0 = MemoryInline::FlatRead32(r6_addr_3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x805FA950:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x805FA954:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3_addr_6 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    MemoryInline::FlatWrite8((r3 + 166), static_cast<uint8_t>(r5));
    goto loc_inl2_cont_805FA940;
}

loc_inl2_return:
{
}

loc_inl2_cont_805FA940:
{
    // end of inlined leaf 0x805FA940
    r30 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r28 + 68));
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r6 = 1;
    r5 = MemoryInline::FlatRead32((r29 + 576));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 568);
    ctx->lr = 0x80848A18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805FAF34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r4 = 1;
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 568);
    // inline leaf 0x805FA940 (9 guest instruction(s))
}

loc_inl3_0x805FA940:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r6_addr_4 = (r6 + r4);
    r0 = MemoryInline::FlatRead32(r6_addr_4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x805FA950:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x805FA954:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3_addr_8 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    MemoryInline::FlatWrite8((r3 + 166), static_cast<uint8_t>(r5));
    goto loc_inl3_cont_805FA940;
}

loc_inl3_return:
{
}

loc_inl3_cont_805FA940:
{
    // end of inlined leaf 0x805FA940
    r3 = r28;
    r5 = r29;
    r4 = 138;
    ctx->lr = 0x80848A40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80848AD4;
}

loc_80848A44:
{
    r3 = MemoryInline::FlatRead32((r28 + 68));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r28 + 3476));
    // inline leaf 0x805FA940 (9 guest instruction(s))
}

loc_inl4_0x805FA940:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r6_addr_1 = (r6 + r4);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl4_0x805FA950:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x805FA954:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3_addr_1 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    MemoryInline::FlatWrite8((r3 + 166), static_cast<uint8_t>(r5));
    goto loc_inl4_cont_805FA940;
}

loc_inl4_return:
{
}

loc_inl4_cont_805FA940:
{
    // end of inlined leaf 0x805FA940
    r31 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r28 + 68));
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r6 = r30;
    r5 = MemoryInline::FlatRead32((r28 + 3476));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 392);
    ctx->lr = 0x80848A74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805FAF34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = r30;
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 392);
    // inline leaf 0x805FA940 (9 guest instruction(s))
}

loc_inl5_0x805FA940:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r6_addr_2 = (r6 + r4);
    r0 = MemoryInline::FlatRead32(r6_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl5_0x805FA950:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x805FA954:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3_addr_3 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    MemoryInline::FlatWrite8((r3 + 166), static_cast<uint8_t>(r5));
    goto loc_inl5_cont_805FA940;
}

loc_inl5_return:
{
}

loc_inl5_cont_805FA940:
{
    // end of inlined leaf 0x805FA940
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r4 + 6536));
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r27 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r3 + 392);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x805FA930
    r0 = MemoryInline::FlatRead32((r28 + 3488));
    r5 = r3;
    r3 = r27;
    r4 = (r0 & 255);
    ctx->lr = 0x80848AC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80831534u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    ctx->lr = 0x80848AC8u;
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
    r3 = r28;
    r4 = 0;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl7_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl7_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl7_0x80602494;
    }
}

loc_inl7_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl7_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl7_cont_80602488:
{
    // end of inlined leaf 0x80602488
}

loc_80848AD4:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
// RECOMP_REGISTRATION base 0x808487EC func_808487EC preserves=true fpr_mask=0x00000000
