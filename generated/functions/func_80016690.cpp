#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80016690(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_17 = 0;
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

    goto loc_80016690;

loc_80016690:
{
    MemoryInline::FlatWriteRam32((r1 + -592), r1);
    r1 = (r1 + -592);
    r0 = ctx->lr;
    r5 = 0x80270000u;
    MemoryInline::FlatWriteRam32((r1 + 596), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWriteRamFloat64((r1 + 584), f31.d);
    f31.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(509));
}

loc_800166B0:
{
    MemoryInline::FlatWriteRam32((r1 + 580), r31);
    MemoryInline::FlatWriteRam32((r1 + 576), r30);
    MemoryInline::FlatWriteRam32((r1 + 572), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 568), r28);
    r28 = r3;
    r5 = MemoryInline::FlatRead32((r5 + 3992));
    r30 = MemoryInline::FlatRead8(r5);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800166DC;
    }
}

loc_800166D4:
{
    r3 = 0;
    goto loc_80016DF8;
}

loc_800166DC:
{
    r3 = 0;
    r0 = 32;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r3 = (r1 + 8);
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    ctx->lr = 0x800166F8u;
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
    goto loc_80016720;
}

loc_80016708:
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

loc_80016720:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_80016728:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80016738;
    }
}

loc_8001672C:
{
    r5 = (r5 + -1);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80016734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_80016708;
    }
}

loc_80016738:
{
    r0 = MemoryInline::FlatRead8((r1 + 17));
}

loc_80016740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_80016758;
    }
}

loc_80016744:
{
}

loc_80016748:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_80016764;
    }
}

loc_8001674C:
{
}

loc_80016750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(78))) {
        goto loc_8001684C;
    }
}

loc_80016754:
{
    goto loc_80016934;
}

loc_80016758:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80016934;
}

loc_80016764:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32496));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8001676C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800167DC;
    }
}

loc_80016770:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r31 = (r28 + -10);
}

loc_8001677C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(256))) {
        goto loc_80016788;
    }
}

loc_80016780:
{
    r0 = 0;
    goto loc_800167A4;
}

loc_80016788:
{
    r3 = 0x80270000u;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 131070);
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_6);
    r0 = (r0 & 512);
}

loc_800167A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800167A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800167C4;
    }
}

loc_800167AC:
{
    r4 = 0x80270000u;
    r3 = r31;
    r4 = (r4 + 6240);
    r4 = (r4 + 36);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800179B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_80016844;
}

loc_800167C4:
{
    r4 = 0x80270000u;
    r3 = r31;
    r4 = (r4 + 6240);
    r4 = (r4 + 46);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800179B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_80016844;
}

loc_800167DC:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r31 = (r28 + -8);
}

loc_800167E8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(256))) {
        goto loc_800167F4;
    }
}

loc_800167EC:
{
    r0 = 0;
    goto loc_80016810;
}

loc_800167F4:
{
    r3 = 0x80270000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 131070);
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_8);
    r0 = (r0 & 512);
}

loc_80016810:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80016814:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80016830;
    }
}

loc_80016818:
{
    r4 = 0x80270000u;
    r3 = r31;
    r4 = (r4 + 6240);
    r4 = (r4 + 56);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800179B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_80016844;
}

loc_80016830:
{
    r4 = 0x80270000u;
    r3 = r31;
    r4 = (r4 + 6240);
    r4 = (r4 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800179B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_80016844:
{
    r3 = r31;
    goto loc_80016DF8;
}

loc_8001684C:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800168C4;
    }
}

loc_80016858:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r31 = (r28 + -10);
}

loc_80016864:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(256))) {
        goto loc_80016870;
    }
}

loc_80016868:
{
    r0 = 0;
    goto loc_8001688C;
}

loc_80016870:
{
    r3 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 131070);
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
    r0 = (r0 & 512);
}

loc_8001688C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80016890:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800168AC;
    }
}

loc_80016894:
{
    r4 = 0x80270000u;
    r3 = r31;
    r4 = (r4 + 6240);
    r4 = (r4 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800179B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8001692C;
}

loc_800168AC:
{
    r4 = 0x80270000u;
    r3 = r31;
    r4 = (r4 + 6240);
    r4 = (r4 + 82);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800179B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8001692C;
}

loc_800168C4:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r31 = (r28 + -8);
}

loc_800168D0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(256))) {
        goto loc_800168DC;
    }
}

loc_800168D4:
{
    r0 = 0;
    goto loc_800168F8;
}

loc_800168DC:
{
    r3 = 0x80270000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 131070);
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_3);
    r0 = (r0 & 512);
}

loc_800168F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800168FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80016918;
    }
}

loc_80016900:
{
    r4 = 0x80270000u;
    r3 = r31;
    r4 = (r4 + 6240);
    r4 = (r4 + 92);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800179B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8001692C;
}

loc_80016918:
{
    r4 = 0x80270000u;
    r3 = r31;
    r4 = (r4 + 6240);
    r4 = (r4 + 100);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800179B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8001692C:
{
    r3 = r31;
    goto loc_80016DF8;
}

loc_80016934:
{
    r5 = MemoryInline::FlatRead16((r29 + 6));
    r0 = 0;
    r4 = MemoryInline::FlatRead16((r1 + 14));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r31 = (r1 + 567);
    r3 = MemoryInline::FlatRead8((r1 + 16));
}

loc_8001694C:
{
    MemoryInline::FlatWriteRam8((r1 + 567), static_cast<uint8_t>(r0));
    r3 = (r3 + r4);
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(103))) {
        goto loc_8001698C;
    }
}

loc_80016960:
{
}

loc_80016964:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(71))) {
        goto loc_8001698C;
    }
}

loc_80016968:
{
}

loc_8001696C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(101))) {
        goto loc_80016A44;
    }
}

loc_80016970:
{
}

loc_80016974:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(69))) {
        goto loc_80016A44;
    }
}

loc_80016978:
{
}

loc_8001697C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(102))) {
        goto loc_80016BAC;
    }
}

loc_80016980:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(70));
}

loc_80016984:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80016BAC;
    }
}

loc_80016988:
{
    goto loc_80016DC8;
}

loc_8001698C:
{
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r0 = MemoryInline::FlatRead8((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80016998:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800169A4;
    }
}

loc_8001699C:
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
    InvokeDirectCpu<0x80016568u>(ctx);
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

loc_800169A4:
{
    r4 = MemoryInline::FlatRead16((r1 + 14));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_800169AC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(-4))) {
        goto loc_800169BC;
    }
}

loc_800169B0:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
}

loc_800169B8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r3))) {
        goto loc_80016A08;
    }
}

loc_800169BC:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_800169C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800169D8;
    }
}

loc_800169C8:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_800169E4;
}

loc_800169D8:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
}

loc_800169E4:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
}

loc_800169EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(103))) {
        goto loc_800169FC;
    }
}

loc_800169F0:
{
    r0 = 101;
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    goto loc_80016A44;
}

loc_800169FC:
{
    r0 = 69;
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    goto loc_80016A44;
}

loc_80016A08:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_80016A10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80016A24;
    }
}

loc_80016A14:
{
    r0 = (r4 + 1);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_80016BAC;
}

loc_80016A24:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r3 = (r4 + 1);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80016BAC;
    }
}

loc_80016A38:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_80016BAC;
}

loc_80016A44:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r4 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80016A54:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80016A60;
    }
}

loc_80016A58:
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
    InvokeDirectCpu<0x80016568u>(ctx);
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

loc_80016A60:
{
    r6 = MemoryInline::FlatRead16((r1 + 14));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r8 = 43;
}

loc_80016A6C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_80016A78;
    }
}

loc_80016A70:
{
    r6 = (0 - r6);
    r8 = 45;
}

loc_80016A78:
{
    r3 = 1717960704;
    r7 = 0;
    r5 = (r3 + 26215);
    goto loc_80016ABC;
}

loc_80016A88:
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

loc_80016ABC:
{
}

loc_80016AC0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80016A88;
    }
}

loc_80016AC4:
{
}

loc_80016AC8:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(2))) {
        goto loc_80016A88;
    }
}

loc_80016ACC:
{
    MemoryInline::FlatWrite8((r31 + -1), static_cast<uint8_t>(r8));
    r0 = (r1 + 56);
    r3 = MemoryInline::FlatRead16((r29 + 6));
    r31_stbu_ea_1 = (r31 + -2);
    MemoryInline::FlatWrite8(r31_stbu_ea_1, static_cast<uint8_t>(r3));
    r31 = r31_stbu_ea_1;
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 - r31);
    r0 = (r0 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(509));
}

loc_80016AEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80016AF8;
    }
}

loc_80016AF0:
{
    r3 = 0;
    goto loc_80016DF8;
}

loc_80016AF8:
{
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r3 + 1);
}

loc_80016B04:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80016B24;
    }
}

loc_80016B08:
{
    r3 = (r3 + 2);
    r0 = 48;
    r3 = (r3 - r4);
    goto loc_80016B1C;
}

loc_80016B18:
{
    r31_stbu_ea_3 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_3, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_3;
}

loc_80016B1C:
{
    r3_addic_src_2 = r3;
    r3 = (r3_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80016B20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80016B18;
    }
}

loc_80016B24:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r4 = (r1 + 17);
    r4 = (r4 + r3);
    goto loc_80016B3C;
}

loc_80016B34:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    r31_stbu_ea_6 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_6, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_6;
}

loc_80016B3C:
{
    r3_addic_src_5 = r3;
    r3 = (r3_addic_src_5 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addic_src_5)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80016B40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80016B34;
    }
}

loc_80016B44:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80016B4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80016B5C;
    }
}

loc_80016B50:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_80016B58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80016B60;
    }
}

loc_80016B5C:
{
    r31_stbu_ea_7 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_7, static_cast<uint8_t>(r30));
    r31 = r31_stbu_ea_7;
}

loc_80016B60:
{
    r0 = MemoryInline::FlatRead8((r1 + 17));
    r31_stbu_ea_9 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_9, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_9;
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80016B80;
    }
}

loc_80016B74:
{
    r0 = 45;
    r31_stbu_ea_10 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_10, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_10;
    goto loc_80016DC8;
}

loc_80016B80:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80016B88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80016B98;
    }
}

loc_80016B8C:
{
    r0 = 43;
    r31_stbu_ea_11 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_11, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_11;
    goto loc_80016DC8;
}

loc_80016B98:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80016B9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80016DC8;
    }
}

loc_80016BA0:
{
    r0 = 32;
    r31_stbu_ea_12 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_12, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_12;
    goto loc_80016DC8;
}

loc_80016BAC:
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

loc_80016BBC:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_80016BC4;
    }
}

loc_80016BC0:
{
    r8 = 0;
}

loc_80016BC4:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_80016BCC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80016BF8;
    }
}

loc_80016BD0:
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
    InvokeDirectCpu<0x80016568u>(ctx);
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

loc_80016BF0:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_80016BF8;
    }
}

loc_80016BF4:
{
    r8 = 0;
}

loc_80016BF8:
{
    r7 = (r5 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80016BFC:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_80016C04;
    }
}

loc_80016C00:
{
    r7 = 0;
}

loc_80016C04:
{
    r0 = (r7 + r8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(509));
}

loc_80016C0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80016C18;
    }
}

loc_80016C10:
{
    r3 = 0;
    goto loc_80016DF8;
}

loc_80016C18:
{
    r6 = (r1 + 17);
    r5 = 0;
    r6 = (r6 + r4);
    r3 = 48;
    goto loc_80016C34;
}

loc_80016C2C:
{
    r31_stbu_ea_14 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_14, static_cast<uint8_t>(r3));
    r31 = r31_stbu_ea_14;
    r5 = (r5 + 1);
}

loc_80016C34:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 - r8);
}

loc_80016C40:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_80016C2C;
    }
}

loc_80016C44:
{
    r3 = 0;
    goto loc_80016C58;
}

loc_80016C4C:
{
    r6 = (r6 + -1);
    r0 = MemoryInline::FlatRead8(r6);
    r3 = (r3 + 1);
    r31_stbu_ea_16 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_16, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_16;
}

loc_80016C58:
{
}

loc_80016C5C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r8))) {
        goto loc_80016C6C;
    }
}

loc_80016C60:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_80016C68:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80016C4C;
    }
}

loc_80016C6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r8));
}

loc_80016C70:
{
    r3 = (r8 - r3);
    r4 = 48;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80016CC0;
    }
}

loc_80016C7C:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_11 & 536870911);
}

loc_80016C80:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80016CB4;
    }
}

loc_80016C88:
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
        goto loc_80016C88;
    }
}

loc_80016CAC:
{
    r3 = (r3 & 7);
}

loc_80016CB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80016CC0;
    }
}

loc_80016CB4:
{
    ctr = r3;
}

loc_80016CB8:
{
    r31_stbu_ea_21 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_21, static_cast<uint8_t>(r4));
    r31 = r31_stbu_ea_21;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80016CB8;
    }
}

loc_80016CC0:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80016CC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80016CD8;
    }
}

loc_80016CCC:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_80016CD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80016CDC;
    }
}

loc_80016CD8:
{
    r31_stbu_ea_23 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_23, static_cast<uint8_t>(r30));
    r31 = r31_stbu_ea_23;
}

loc_80016CDC:
{
}

loc_80016CE0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80016D80;
    }
}

loc_80016CE4:
{
    r4 = 0;
    r3 = 48;
    goto loc_80016CF8;
}

loc_80016CF0:
{
    r31_stbu_ea_26 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_26, static_cast<uint8_t>(r3));
    r31 = r31_stbu_ea_26;
    r4 = (r4 + 1);
}

loc_80016CF8:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r0 = (r7 - r0);
}

loc_80016D04:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80016CF0;
    }
}

loc_80016D08:
{
}

loc_80016D0C:
{
    r3 = (r7 - r4);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r7))) {
        goto loc_80016D88;
    }
}

loc_80016D14:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 536870911);
}

loc_80016D18:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80016D6C;
    }
}

loc_80016D20:
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
        goto loc_80016D20;
    }
}

loc_80016D64:
{
    r3 = (r3 & 7);
}

loc_80016D68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80016D88;
    }
}

loc_80016D6C:
{
    ctr = r3;
}

loc_80016D70:
{
    r6 = (r6 + -1);
    r0 = MemoryInline::FlatRead8(r6);
    r31_stbu_ea_31 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_31, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_31;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80016D70;
    }
}

loc_80016D7C:
{
    goto loc_80016D88;
}

loc_80016D80:
{
    r0 = 48;
    r31_stbu_ea_32 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_32, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_32;
}

loc_80016D88:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80016DA0;
    }
}

loc_80016D94:
{
    r0 = 45;
    r31_stbu_ea_34 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_34, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_34;
    goto loc_80016DC8;
}

loc_80016DA0:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80016DA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80016DB8;
    }
}

loc_80016DAC:
{
    r0 = 43;
    r31_stbu_ea_35 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_35, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_35;
    goto loc_80016DC8;
}

loc_80016DB8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80016DBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80016DC8;
    }
}

loc_80016DC0:
{
    r0 = 32;
    r31_stbu_ea_36 = (r31 + -1);
    MemoryInline::FlatWrite8(r31_stbu_ea_36, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_36;
}

loc_80016DC8:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r3 = r31;
    r4 = (r28 - r0);
    r28 = (r4 + -2);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r5 = r3;
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x80016DF4u;
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
    InvokeDirectCpu<0x8000F078u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r28;
}

loc_80016DF8:
{
    r0 = MemoryInline::FlatRead32((r1 + 596));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 584));
    r31 = MemoryInline::FlatRead32((r1 + 580));
    r30 = MemoryInline::FlatRead32((r1 + 576));
    r29 = MemoryInline::FlatRead32((r1 + 572));
    r28 = MemoryInline::FlatRead32((r1 + 568));
    ctx->lr = r0;
    r1 = (r1 + 592);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80016690 func_80016690 preserves=false fpr_mask=0x80000000
