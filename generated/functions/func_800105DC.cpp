#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800105DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r31_stbu_ea_0 = 0;
    uint32_t r31_stbu_ea_1 = 0;
    uint32_t r31_stbu_ea_10 = 0;
    uint32_t r31_stbu_ea_11 = 0;
    uint32_t r31_stbu_ea_12 = 0;
    uint32_t r31_stbu_ea_13 = 0;
    uint32_t r31_stbu_ea_14 = 0;
    uint32_t r31_stbu_ea_15 = 0;
    uint32_t r31_stbu_ea_16 = 0;
    uint32_t r31_stbu_ea_17 = 0;
    uint32_t r31_stbu_ea_18 = 0;
    uint32_t r31_stbu_ea_19 = 0;
    uint32_t r31_stbu_ea_2 = 0;
    uint32_t r31_stbu_ea_20 = 0;
    uint32_t r31_stbu_ea_21 = 0;
    uint32_t r31_stbu_ea_22 = 0;
    uint32_t r31_stbu_ea_23 = 0;
    uint32_t r31_stbu_ea_24 = 0;
    uint32_t r31_stbu_ea_25 = 0;
    uint32_t r31_stbu_ea_26 = 0;
    uint32_t r31_stbu_ea_27 = 0;
    uint32_t r31_stbu_ea_28 = 0;
    uint32_t r31_stbu_ea_29 = 0;
    uint32_t r31_stbu_ea_3 = 0;
    uint32_t r31_stbu_ea_30 = 0;
    uint32_t r31_stbu_ea_31 = 0;
    uint32_t r31_stbu_ea_32 = 0;
    uint32_t r31_stbu_ea_33 = 0;
    uint32_t r31_stbu_ea_34 = 0;
    uint32_t r31_stbu_ea_35 = 0;
    uint32_t r31_stbu_ea_36 = 0;
    uint32_t r31_stbu_ea_37 = 0;
    uint32_t r31_stbu_ea_38 = 0;
    uint32_t r31_stbu_ea_4 = 0;
    uint32_t r31_stbu_ea_5 = 0;
    uint32_t r31_stbu_ea_6 = 0;
    uint32_t r31_stbu_ea_7 = 0;
    uint32_t r31_stbu_ea_8 = 0;
    uint32_t r31_stbu_ea_9 = 0;
    uint32_t r3_addic_src_0 = 0;
    uint32_t r3_addic_src_1 = 0;
    uint32_t r3_addic_src_2 = 0;
    uint32_t r3_addic_src_3 = 0;
    uint32_t r3_addic_src_4 = 0;
    uint32_t r3_addic_src_5 = 0;
    uint32_t r3_addic_src_6 = 0;
    uint32_t r3_addic_src_7 = 0;
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800105DC;

loc_800105DC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 0x80270000u;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f31.d);
    f31.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(509));
}

loc_800105FC:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r31);
    MemoryInline::FlatWriteRam32((r1 + 64), r30);
    MemoryInline::FlatWriteRam32((r1 + 60), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 56), r28);
    r28 = r3;
    r5 = MemoryInline::FlatRead32((r5 + 3992));
    r30 = MemoryInline::FlatRead8(r5);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80010628;
    }
}

loc_80010620:
{
    r3 = 0;
    goto loc_80010D50;
}

loc_80010628:
{
    r3 = 0;
    r0 = 32;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r3 = (r1 + 8);
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    ctx->lr = 0x80010644u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000DAFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r5 = (r1 + 17);
    r5 = (r5 + r0);
    goto loc_8001066C;
}

loc_80010654:
{
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r3 = MemoryInline::FlatRead16((r1 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 + -1);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
}

loc_8001066C:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_80010674:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80010684;
    }
}

loc_80010678:
{
    r5 = (r5 + -1);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80010680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_80010654;
    }
}

loc_80010684:
{
    r0 = MemoryInline::FlatRead8((r1 + 17));
}

loc_8001068C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_800106A4;
    }
}

loc_80010690:
{
}

loc_80010694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_800106B0;
    }
}

loc_80010698:
{
}

loc_8001069C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(78))) {
        goto loc_800107B4;
    }
}

loc_800106A0:
{
    goto loc_800108BC;
}

loc_800106A4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_800108BC;
}

loc_800106B0:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32544));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_800106B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80010734;
    }
}

loc_800106BC:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r31 = (r28 + -5);
    r3 = 1;
}

loc_800106CC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_800106D4;
    }
}

loc_800106D0:
{
    r3 = 0;
}

loc_800106D4:
{
}

loc_800106D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800106E4;
    }
}

loc_800106DC:
{
    r0 = 0;
    goto loc_80010700;
}

loc_800106E4:
{
    r3 = 0x80270000u;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_6);
    r0 = (r0 & 512);
}

loc_80010700:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80010704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001071C;
    }
}

loc_80010708:
{
    r4 = 0x80240000u;
    r3 = r31;
    r4 = (r4 + 26152);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800107AC;
}

loc_8001071C:
{
    r4 = 0x80240000u;
    r3 = r31;
    r4 = (r4 + 26152);
    r4 = (r4 + 5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800107AC;
}

loc_80010734:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r31 = (r28 + -4);
    r3 = 1;
}

loc_80010744:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8001074C;
    }
}

loc_80010748:
{
    r3 = 0;
}

loc_8001074C:
{
}

loc_80010750:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8001075C;
    }
}

loc_80010754:
{
    r0 = 0;
    goto loc_80010778;
}

loc_8001075C:
{
    r3 = 0x80270000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_8);
    r0 = (r0 & 512);
}

loc_80010778:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001077C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80010798;
    }
}

loc_80010780:
{
    r4 = 0x80240000u;
    r3 = r31;
    r4 = (r4 + 26152);
    r4 = (r4 + 10);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800107AC;
}

loc_80010798:
{
    r4 = 0x80240000u;
    r3 = r31;
    r4 = (r4 + 26152);
    r4 = (r4 + 14);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800107AC:
{
    r3 = r31;
    goto loc_80010D50;
}

loc_800107B4:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001083C;
    }
}

loc_800107C0:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r31 = (r28 + -5);
    r3 = 1;
}

loc_800107D0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_800107D8;
    }
}

loc_800107D4:
{
    r3 = 0;
}

loc_800107D8:
{
}

loc_800107DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800107E8;
    }
}

loc_800107E0:
{
    r0 = 0;
    goto loc_80010804;
}

loc_800107E8:
{
    r3 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
    r0 = (r0 & 512);
}

loc_80010804:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80010808:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80010824;
    }
}

loc_8001080C:
{
    r4 = 0x80240000u;
    r3 = r31;
    r4 = (r4 + 26152);
    r4 = (r4 + 18);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800108B4;
}

loc_80010824:
{
    r4 = 0x80240000u;
    r3 = r31;
    r4 = (r4 + 26152);
    r4 = (r4 + 23);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800108B4;
}

loc_8001083C:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r31 = (r28 + -4);
    r3 = 1;
}

loc_8001084C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_80010854;
    }
}

loc_80010850:
{
    r3 = 0;
}

loc_80010854:
{
}

loc_80010858:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80010864;
    }
}

loc_8001085C:
{
    r0 = 0;
    goto loc_80010880;
}

loc_80010864:
{
    r3 = 0x80270000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_3);
    r0 = (r0 & 512);
}

loc_80010880:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80010884:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800108A0;
    }
}

loc_80010888:
{
    r4 = 0x80240000u;
    r3 = r31;
    r4 = (r4 + 26152);
    r4 = (r4 + 28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800108B4;
}

loc_800108A0:
{
    r4 = 0x80240000u;
    r3 = r31;
    r4 = (r4 + 26152);
    r4 = (r4 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800108B4:
{
    r3 = r31;
    goto loc_80010D50;
}

loc_800108BC:
{
    r4 = MemoryInline::FlatRead16((r1 + 14));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = 0;
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r31 = (r28 + -1);
    r5 = MemoryInline::FlatRead8((r29 + 5));
    r3 = (r3 + r4);
    r3 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r3));
}

loc_800108E0:
{
    MemoryInline::FlatWrite8((r28 + -1), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(103))) {
        goto loc_80010914;
    }
}

loc_800108E8:
{
}

loc_800108EC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(71))) {
        goto loc_80010914;
    }
}

loc_800108F0:
{
}

loc_800108F4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(101))) {
        goto loc_800109CC;
    }
}

loc_800108F8:
{
}

loc_800108FC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(69))) {
        goto loc_800109CC;
    }
}

loc_80010900:
{
}

loc_80010904:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(102))) {
        goto loc_80010B30;
    }
}

loc_80010908:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(70));
}

loc_8001090C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80010B30;
    }
}

loc_80010910:
{
    goto loc_80010D4C;
}

loc_80010914:
{
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r0 = MemoryInline::FlatRead8((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80010920:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001092C;
    }
}

loc_80010924:
{
    r3 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800104B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8001092C:
{
    r4 = MemoryInline::FlatRead16((r1 + 14));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80010934:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(-4))) {
        goto loc_80010944;
    }
}

loc_80010938:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80010940:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r3))) {
        goto loc_80010990;
    }
}

loc_80010944:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_8001094C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80010960;
    }
}

loc_80010950:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_8001096C;
}

loc_80010960:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
}

loc_8001096C:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_80010974:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(103))) {
        goto loc_80010984;
    }
}

loc_80010978:
{
    r0 = 101;
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_800109CC;
}

loc_80010984:
{
    r0 = 69;
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_800109CC;
}

loc_80010990:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_80010998:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800109AC;
    }
}

loc_8001099C:
{
    r0 = (r4 + 1);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_80010B30;
}

loc_800109AC:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r3 = (r4 + 1);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80010B30;
    }
}

loc_800109C0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_80010B30;
}

loc_800109CC:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r4 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_800109DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800109E8;
    }
}

loc_800109E0:
{
    r3 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800104B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800109E8:
{
    r6 = MemoryInline::FlatRead16((r1 + 14));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r8 = 43;
}

loc_800109F4:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_80010A00;
    }
}

loc_800109F8:
{
    r6 = (0 - r6);
    r8 = 45;
}

loc_80010A00:
{
    r3 = 1717960704;
    r7 = 0;
    r5 = (r3 + 26215);
    goto loc_80010A44;
}

loc_80010A10:
{
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r7 = (r7 + 1);
    r3 = (static_cast<int32_t>(r0) >> 2);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3 = (r3 + r4);
    r4 = (r3 * 10);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r4 = (r6 - r4);
    r6 = (r0 + r3);
    r0 = (r4 + 48);
    MemoryInline::FlatWrite8((r31 + -1), static_cast<uint8_t>(r0));
    r31 = (r31 + -1);
}

loc_80010A44:
{
}

loc_80010A48:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80010A10;
    }
}

loc_80010A4C:
{
}

loc_80010A50:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(2))) {
        goto loc_80010A10;
    }
}

loc_80010A54:
{
    MemoryInline::FlatWrite8((r31 + -1), static_cast<uint8_t>(r8));
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r31_stbu_ea_1 = (r31 + -2);
    MemoryInline::FlatWrite8(r31_stbu_ea_1, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_1;
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r28 - r31);
    r0 = (r3 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(509));
}

loc_80010A70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80010A7C;
    }
}

loc_80010A74:
{
    r3 = 0;
    goto loc_80010D50;
}

loc_80010A7C:
{
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r3 + 1);
}

loc_80010A88:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80010AA8;
    }
}

loc_80010A8C:
{
    r3 = (r3 + 2);
    r0 = 48;
    r3 = (r3 - r4);
    goto loc_80010AA0;
}

loc_80010A9C:
{
    r31_stbu_ea_3 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_3, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_3;
}

loc_80010AA0:
{
    r3_addic_src_2 = r3;
    r3 = (r3_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80010AA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80010A9C;
    }
}

loc_80010AA8:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r4 = (r1 + 17);
    r4 = (r4 + r3);
    goto loc_80010AC0;
}

loc_80010AB8:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    r31_stbu_ea_6 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_6, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_6;
}

loc_80010AC0:
{
    r3_addic_src_5 = r3;
    r3 = (r3_addic_src_5 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addic_src_5)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80010AC4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80010AB8;
    }
}

loc_80010AC8:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80010AD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80010AE0;
    }
}

loc_80010AD4:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_80010ADC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80010AE4;
    }
}

loc_80010AE0:
{
    r31_stbu_ea_7 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_7, static_cast<uint8_t>(r30));
    r31 = r31_stbu_ea_7;
}

loc_80010AE4:
{
    r0 = MemoryInline::FlatRead8((r1 + 17));
    r31_stbu_ea_9 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_9, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_9;
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80010B04;
    }
}

loc_80010AF8:
{
    r0 = 45;
    r31_stbu_ea_10 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_10, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_10;
    goto loc_80010D4C;
}

loc_80010B04:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80010B0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80010B1C;
    }
}

loc_80010B10:
{
    r0 = 43;
    r31_stbu_ea_11 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_11, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_11;
    goto loc_80010D4C;
}

loc_80010B1C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80010B20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80010D4C;
    }
}

loc_80010B24:
{
    r0 = 32;
    r31_stbu_ea_12 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_12, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_12;
    goto loc_80010D4C;
}

loc_80010B30:
{
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r5 = MemoryInline::FlatRead16((r1 + 14));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = (r4 - r5);
    r8 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80010B40:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_80010B48;
    }
}

loc_80010B44:
{
    r8 = 0;
}

loc_80010B48:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_80010B50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80010B7C;
    }
}

loc_80010B54:
{
    r0 = (r8 - r0);
    r3 = (r1 + 12);
    r4 = (r4 - r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800104B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r5 = MemoryInline::FlatRead16((r1 + 14));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = (r4 - r5);
    r8 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80010B74:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_80010B7C;
    }
}

loc_80010B78:
{
    r8 = 0;
}

loc_80010B7C:
{
    r7 = (r5 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80010B80:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_80010B88;
    }
}

loc_80010B84:
{
    r7 = 0;
}

loc_80010B88:
{
    r0 = (r7 + r8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(509));
}

loc_80010B90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80010B9C;
    }
}

loc_80010B94:
{
    r3 = 0;
    goto loc_80010D50;
}

loc_80010B9C:
{
    r6 = (r1 + 17);
    r5 = 0;
    r6 = (r6 + r4);
    r3 = 48;
    goto loc_80010BB8;
}

loc_80010BB0:
{
    r31_stbu_ea_14 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_14, static_cast<uint8_t>(r3));
    r31 = r31_stbu_ea_14;
    r5 = (r5 + 1);
}

loc_80010BB8:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 - r8);
}

loc_80010BC4:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_80010BB0;
    }
}

loc_80010BC8:
{
    r3 = 0;
    goto loc_80010BDC;
}

loc_80010BD0:
{
    r6 = (r6 + -1);
    r0 = MemoryInline::FlatRead8(r6);
    r3 = (r3 + 1);
    r31_stbu_ea_16 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_16, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_16;
}

loc_80010BDC:
{
}

loc_80010BE0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r8))) {
        goto loc_80010BF0;
    }
}

loc_80010BE4:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_80010BEC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80010BD0;
    }
}

loc_80010BF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r8));
}

loc_80010BF4:
{
    r3 = (r8 - r3);
    r4 = 48;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80010C44;
    }
}

loc_80010C00:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_11 & 536870911);
}

loc_80010C04:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80010C38;
    }
}

loc_80010C0C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + -8), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + -1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + -2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r31 + -3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + -4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r31 + -5), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + -6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + -7), static_cast<uint8_t>(r4));
    r31_stbu_ea_18 = (r31 + -8);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31_stbu_ea_18, static_cast<uint8_t>(r4));
    r31 = r31_stbu_ea_18;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80010C0C;
    }
}

loc_80010C30:
{
    r3 = (r3 & 7);
}

loc_80010C34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80010C44;
    }
}

loc_80010C38:
{
    ctr = r3;
}

loc_80010C3C:
{
    r31_stbu_ea_21 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_21, static_cast<uint8_t>(r4));
    r31 = r31_stbu_ea_21;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80010C3C;
    }
}

loc_80010C44:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80010C4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80010C5C;
    }
}

loc_80010C50:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_80010C58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80010C60;
    }
}

loc_80010C5C:
{
    r31_stbu_ea_23 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_23, static_cast<uint8_t>(r30));
    r31 = r31_stbu_ea_23;
}

loc_80010C60:
{
}

loc_80010C64:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80010D04;
    }
}

loc_80010C68:
{
    r4 = 0;
    r3 = 48;
    goto loc_80010C7C;
}

loc_80010C74:
{
    r31_stbu_ea_26 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_26, static_cast<uint8_t>(r3));
    r31 = r31_stbu_ea_26;
    r4 = (r4 + 1);
}

loc_80010C7C:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r7 - r0);
}

loc_80010C88:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80010C74;
    }
}

loc_80010C8C:
{
}

loc_80010C90:
{
    r3 = (r7 - r4);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r7))) {
        goto loc_80010D0C;
    }
}

loc_80010C98:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 536870911);
}

loc_80010C9C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80010CF0;
    }
}

loc_80010CA4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + -8), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r6 + -1));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + -8), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r31 + -1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r6 + -2));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r31 + -2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r6 + -3));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + -3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r6 + -4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + -4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r6 + -5));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + -5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r6 + -6));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + -6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r6 + -7));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + -7), static_cast<uint8_t>(r0));
    r6 = (r6 + -8);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r6);
    r31_stbu_ea_28 = (r31 + -8);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r31_stbu_ea_28, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_28;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80010CA4;
    }
}

loc_80010CE8:
{
    r3 = (r3 & 7);
}

loc_80010CEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80010D0C;
    }
}

loc_80010CF0:
{
    ctr = r3;
}

loc_80010CF4:
{
    r6 = (r6 + -1);
    r0 = MemoryInline::FlatRead8(r6);
    r31_stbu_ea_31 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_31, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_31;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80010CF4;
    }
}

loc_80010D00:
{
    goto loc_80010D0C;
}

loc_80010D04:
{
    r0 = 48;
    r31_stbu_ea_32 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_32, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_32;
}

loc_80010D0C:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80010D24;
    }
}

loc_80010D18:
{
    r0 = 45;
    r31_stbu_ea_34 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_34, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_34;
    goto loc_80010D4C;
}

loc_80010D24:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80010D2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80010D3C;
    }
}

loc_80010D30:
{
    r0 = 43;
    r31_stbu_ea_35 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_35, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_35;
    goto loc_80010D4C;
}

loc_80010D3C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80010D40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80010D4C;
    }
}

loc_80010D44:
{
    r0 = 32;
    r31_stbu_ea_36 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_36, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_36;
}

loc_80010D4C:
{
    r3 = r31;
}

loc_80010D50:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 72));
    r31 = MemoryInline::FlatRead32((r1 + 68));
    r30 = MemoryInline::FlatRead32((r1 + 64));
    r29 = MemoryInline::FlatRead32((r1 + 60));
    r28 = MemoryInline::FlatRead32((r1 + 56));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0001FFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800105DC func_800105DC preserves=false fpr_mask=0x80000000
