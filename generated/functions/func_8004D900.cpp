#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004D900(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_46 = 0;
    uint32_t r0_rot_47 = 0;
    uint32_t r0_rot_48 = 0;
    uint32_t r0_rot_49 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_50 = 0;
    uint32_t r0_rot_51 = 0;
    uint32_t r0_rot_52 = 0;
    uint32_t r0_rot_53 = 0;
    uint32_t r0_rot_54 = 0;
    uint32_t r0_rot_55 = 0;
    uint32_t r0_rot_56 = 0;
    uint32_t r0_rot_57 = 0;
    uint32_t r0_rot_58 = 0;
    uint32_t r0_rot_59 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_60 = 0;
    uint32_t r0_rot_61 = 0;
    uint32_t r0_rot_62 = 0;
    uint32_t r0_rot_63 = 0;
    uint32_t r0_rot_64 = 0;
    uint32_t r0_rot_65 = 0;
    uint32_t r0_rot_66 = 0;
    uint32_t r0_rot_67 = 0;
    uint32_t r0_rot_68 = 0;
    uint32_t r0_rot_69 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004D900;

loc_8004D900:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -208), 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r1 + 212), r0);
    r11 = (r1 + 208);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 204u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r4 = MemoryInline::FlatRead32(r3);
    r31 = 0x80270000u;
    r31 = (r31 + 9888);
    r29 = r3;
    r5 = (r4 + 24);
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r1 + 160), r5);
    r0 = (r31 + 0);
    r4 = (r1 + 164);
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    r3 = (r1 + 160);
    ctx->lr = 0x8004D940u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004D944:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004D968;
    }
}

loc_8004D948:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_8004D954:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004D960;
    }
}

loc_8004D958:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004D96C;
}

loc_8004D960:
{
    r27 = 0;
    goto loc_8004D96C;
}

loc_8004D968:
{
    r27 = 0;
}

loc_8004D96C:
{
    r28 = (r31 + 0);
    r30 = 0;
    goto loc_8004DA00;
}

loc_8004D978:
{
    r5 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 152);
    MemoryInline::FlatWriteRam32((r1 + 152), r28);
    r3 = (r1 + 156);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    ctx->lr = 0x8004D994u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004D998:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004D9DC;
    }
}

loc_8004D99C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_8004D9A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004D9D4;
    }
}

loc_8004D9AC:
{
    r0 = (r30 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8004D9C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004D9CC;
    }
}

loc_8004D9C4:
{
    r3 = (r3 + r0);
    goto loc_8004D9E0;
}

loc_8004D9CC:
{
    r3 = 0;
    goto loc_8004D9E0;
}

loc_8004D9D4:
{
    r3 = 0;
    goto loc_8004D9E0;
}

loc_8004D9DC:
{
    r3 = 0;
}

loc_8004D9E0:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -11);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_7 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004D9F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004D9FC;
    }
}

loc_8004D9F4:
{
    r3 = 0;
    goto loc_8004E234;
}

loc_8004D9FC:
{
    r30 = (r30 + 1);
}

loc_8004DA00:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004DA04:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004D978;
    }
}

loc_8004DA08:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r31 + 64);
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r4 = (r1 + 148);
    r0 = (r3 + 24);
    r3 = (r1 + 144);
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
    ctx->lr = 0x8004DA28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DA2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DA50;
    }
}

loc_8004DA30:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
}

loc_8004DA3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DA48;
    }
}

loc_8004DA40:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004DA54;
}

loc_8004DA48:
{
    r27 = 0;
    goto loc_8004DA54;
}

loc_8004DA50:
{
    r27 = 0;
}

loc_8004DA54:
{
    r28 = (r31 + 64);
    r30 = 0;
    goto loc_8004DAE8;
}

loc_8004DA60:
{
    r5 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 136);
    MemoryInline::FlatWriteRam32((r1 + 136), r28);
    r3 = (r1 + 140);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    ctx->lr = 0x8004DA7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DA80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DAC4;
    }
}

loc_8004DA84:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & 1);
}

loc_8004DA90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DABC;
    }
}

loc_8004DA94:
{
    r0 = (r30 + 1);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_12 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8004DAA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DAB4;
    }
}

loc_8004DAAC:
{
    r0 = (r3 + r0);
    goto loc_8004DAC8;
}

loc_8004DAB4:
{
    r0 = 0;
    goto loc_8004DAC8;
}

loc_8004DABC:
{
    r0 = 0;
    goto loc_8004DAC8;
}

loc_8004DAC4:
{
    r0 = 0;
}

loc_8004DAC8:
{
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    r3 = (r1 + 172);
    // inline leaf 0x80052AB0 (9 guest instruction(s))
}

loc_inl1_0x80052AB0:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_inl1_0x80052AC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_inl1_0x80052ACC;
    }
}

loc_inl1_0x80052AC4:
{
}

loc_inl1_0x80052AC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80052ACC:
{
    r3 = 1;
    goto loc_inl1_cont_80052AB0;
}

loc_inl1_return:
{
}

loc_inl1_cont_80052AB0:
{
    // end of inlined leaf 0x80052AB0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004DAD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004DAE4;
    }
}

loc_8004DADC:
{
    r3 = 0;
    goto loc_8004E234;
}

loc_8004DAE4:
{
    r30 = (r30 + 1);
}

loc_8004DAE8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004DAEC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004DA60;
    }
}

loc_8004DAF0:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r31 + 32);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r4 = (r1 + 132);
    r0 = (r3 + 24);
    r3 = (r1 + 128);
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    ctx->lr = 0x8004DB10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DB14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DB38;
    }
}

loc_8004DB18:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & 1);
}

loc_8004DB24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DB30;
    }
}

loc_8004DB28:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004DB3C;
}

loc_8004DB30:
{
    r27 = 0;
    goto loc_8004DB3C;
}

loc_8004DB38:
{
    r27 = 0;
}

loc_8004DB3C:
{
    r28 = (r31 + 32);
    r30 = 0;
    goto loc_8004DBD0;
}

loc_8004DB48:
{
    r5 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 120);
    MemoryInline::FlatWriteRam32((r1 + 120), r28);
    r3 = (r1 + 124);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    ctx->lr = 0x8004DB64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DB68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DBAC;
    }
}

loc_8004DB6C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_17 & 1);
}

loc_8004DB78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DBA4;
    }
}

loc_8004DB7C:
{
    r0 = (r30 + 1);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_18 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8004DB90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DB9C;
    }
}

loc_8004DB94:
{
    r0 = (r3 + r0);
    goto loc_8004DBB0;
}

loc_8004DB9C:
{
    r0 = 0;
    goto loc_8004DBB0;
}

loc_8004DBA4:
{
    r0 = 0;
    goto loc_8004DBB0;
}

loc_8004DBAC:
{
    r0 = 0;
}

loc_8004DBB0:
{
    MemoryInline::FlatWriteRam32((r1 + 168), r0);
    r3 = (r1 + 168);
    // inline leaf 0x80052900 (9 guest instruction(s))
}

loc_inl2_0x80052900:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_inl2_0x80052910:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_inl2_0x8005291C;
    }
}

loc_inl2_0x80052914:
{
}

loc_inl2_0x80052918:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8005291C:
{
    r3 = 1;
    goto loc_inl2_cont_80052900;
}

loc_inl2_return:
{
}

loc_inl2_cont_80052900:
{
    // end of inlined leaf 0x80052900
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004DBC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004DBCC;
    }
}

loc_8004DBC4:
{
    r3 = 0;
    goto loc_8004E234;
}

loc_8004DBCC:
{
    r30 = (r30 + 1);
}

loc_8004DBD0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004DBD4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004DB48;
    }
}

loc_8004DBD8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r31 + 96);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r4 = (r1 + 116);
    r0 = (r3 + 24);
    r3 = (r1 + 112);
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    ctx->lr = 0x8004DBF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DBFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DC20;
    }
}

loc_8004DC00:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & 1);
}

loc_8004DC0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DC18;
    }
}

loc_8004DC10:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004DC24;
}

loc_8004DC18:
{
    r27 = 0;
    goto loc_8004DC24;
}

loc_8004DC20:
{
    r27 = 0;
}

loc_8004DC24:
{
    r28 = (r31 + 96);
    r30 = 0;
    goto loc_8004DCB8;
}

loc_8004DC30:
{
    r5 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 104);
    MemoryInline::FlatWriteRam32((r1 + 104), r28);
    r3 = (r1 + 108);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    ctx->lr = 0x8004DC4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DC50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DC94;
    }
}

loc_8004DC54:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_23 & 1);
}

loc_8004DC60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DC8C;
    }
}

loc_8004DC64:
{
    r0 = (r30 + 1);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_24 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8004DC78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DC84;
    }
}

loc_8004DC7C:
{
    r3 = (r3 + r0);
    goto loc_8004DC98;
}

loc_8004DC84:
{
    r3 = 0;
    goto loc_8004DC98;
}

loc_8004DC8C:
{
    r3 = 0;
    goto loc_8004DC98;
}

loc_8004DC94:
{
    r3 = 0;
}

loc_8004DC98:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_26 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004DCA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004DCB4;
    }
}

loc_8004DCAC:
{
    r3 = 0;
    goto loc_8004E234;
}

loc_8004DCB4:
{
    r30 = (r30 + 1);
}

loc_8004DCB8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004DCBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004DC30;
    }
}

loc_8004DCC0:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r31 + 128);
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r4 = (r1 + 100);
    r0 = (r3 + 24);
    r3 = (r1 + 96);
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    ctx->lr = 0x8004DCE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DCE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DD08;
    }
}

loc_8004DCE8:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_27 & 1);
}

loc_8004DCF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DD00;
    }
}

loc_8004DCF8:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004DD0C;
}

loc_8004DD00:
{
    r27 = 0;
    goto loc_8004DD0C;
}

loc_8004DD08:
{
    r27 = 0;
}

loc_8004DD0C:
{
    r28 = (r31 + 128);
    r30 = 0;
    goto loc_8004DDA0;
}

loc_8004DD18:
{
    r5 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 88);
    MemoryInline::FlatWriteRam32((r1 + 88), r28);
    r3 = (r1 + 92);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    ctx->lr = 0x8004DD34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DD38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DD7C;
    }
}

loc_8004DD3C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_30 & 1);
}

loc_8004DD48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DD74;
    }
}

loc_8004DD4C:
{
    r0 = (r30 + 1);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_31 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8004DD60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DD6C;
    }
}

loc_8004DD64:
{
    r3 = (r3 + r0);
    goto loc_8004DD80;
}

loc_8004DD6C:
{
    r3 = 0;
    goto loc_8004DD80;
}

loc_8004DD74:
{
    r3 = 0;
    goto loc_8004DD80;
}

loc_8004DD7C:
{
    r3 = 0;
}

loc_8004DD80:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_33 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004DD90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004DD9C;
    }
}

loc_8004DD94:
{
    r3 = 0;
    goto loc_8004E234;
}

loc_8004DD9C:
{
    r30 = (r30 + 1);
}

loc_8004DDA0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004DDA4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004DD18;
    }
}

loc_8004DDA8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r31 + 160);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r4 = (r1 + 84);
    r0 = (r3 + 24);
    r3 = (r1 + 80);
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    ctx->lr = 0x8004DDC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DDCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DDF0;
    }
}

loc_8004DDD0:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_34 & 1);
}

loc_8004DDDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DDE8;
    }
}

loc_8004DDE0:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004DDF4;
}

loc_8004DDE8:
{
    r27 = 0;
    goto loc_8004DDF4;
}

loc_8004DDF0:
{
    r27 = 0;
}

loc_8004DDF4:
{
    r28 = (r31 + 160);
    r30 = 0;
    goto loc_8004DE88;
}

loc_8004DE00:
{
    r5 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 72);
    MemoryInline::FlatWriteRam32((r1 + 72), r28);
    r3 = (r1 + 76);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    ctx->lr = 0x8004DE1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DE20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DE64;
    }
}

loc_8004DE24:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_37 & 1);
}

loc_8004DE30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DE5C;
    }
}

loc_8004DE34:
{
    r0 = (r30 + 1);
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_38 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8004DE48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DE54;
    }
}

loc_8004DE4C:
{
    r3 = (r3 + r0);
    goto loc_8004DE68;
}

loc_8004DE54:
{
    r3 = 0;
    goto loc_8004DE68;
}

loc_8004DE5C:
{
    r3 = 0;
    goto loc_8004DE68;
}

loc_8004DE64:
{
    r3 = 0;
}

loc_8004DE68:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_40 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004DE78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004DE84;
    }
}

loc_8004DE7C:
{
    r3 = 0;
    goto loc_8004E234;
}

loc_8004DE84:
{
    r30 = (r30 + 1);
}

loc_8004DE88:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004DE8C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004DE00;
    }
}

loc_8004DE90:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r31 + 192);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r4 = (r1 + 68);
    r0 = (r3 + 24);
    r3 = (r1 + 64);
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    ctx->lr = 0x8004DEB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DEB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DED8;
    }
}

loc_8004DEB8:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_41 & 1);
}

loc_8004DEC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DED0;
    }
}

loc_8004DEC8:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004DEDC;
}

loc_8004DED0:
{
    r27 = 0;
    goto loc_8004DEDC;
}

loc_8004DED8:
{
    r27 = 0;
}

loc_8004DEDC:
{
    r28 = (r31 + 192);
    r30 = 0;
    goto loc_8004DF70;
}

loc_8004DEE8:
{
    r5 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 56);
    MemoryInline::FlatWriteRam32((r1 + 56), r28);
    r3 = (r1 + 60);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    ctx->lr = 0x8004DF04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DF08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DF4C;
    }
}

loc_8004DF0C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_44 & 1);
}

loc_8004DF18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DF44;
    }
}

loc_8004DF1C:
{
    r0 = (r30 + 1);
    r0_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_45 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8004DF30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DF3C;
    }
}

loc_8004DF34:
{
    r3 = (r3 + r0);
    goto loc_8004DF50;
}

loc_8004DF3C:
{
    r3 = 0;
    goto loc_8004DF50;
}

loc_8004DF44:
{
    r3 = 0;
    goto loc_8004DF50;
}

loc_8004DF4C:
{
    r3 = 0;
}

loc_8004DF50:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_47 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_47 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004DF60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004DF6C;
    }
}

loc_8004DF64:
{
    r3 = 0;
    goto loc_8004E234;
}

loc_8004DF6C:
{
    r30 = (r30 + 1);
}

loc_8004DF70:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004DF74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004DEE8;
    }
}

loc_8004DF78:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r31 + 224);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r4 = (r1 + 52);
    r0 = (r3 + 24);
    r3 = (r1 + 48);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    ctx->lr = 0x8004DF98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DF9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004DFC0;
    }
}

loc_8004DFA0:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_48 & 1);
}

loc_8004DFAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DFB8;
    }
}

loc_8004DFB0:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004DFC4;
}

loc_8004DFB8:
{
    r27 = 0;
    goto loc_8004DFC4;
}

loc_8004DFC0:
{
    r27 = 0;
}

loc_8004DFC4:
{
    r28 = (r31 + 224);
    r30 = 0;
    goto loc_8004E058;
}

loc_8004DFD0:
{
    r5 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 40);
    MemoryInline::FlatWriteRam32((r1 + 40), r28);
    r3 = (r1 + 44);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    ctx->lr = 0x8004DFECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004DFF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004E034;
    }
}

loc_8004DFF4:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_51 & 1);
}

loc_8004E000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004E02C;
    }
}

loc_8004E004:
{
    r0 = (r30 + 1);
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_52 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8004E018:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004E024;
    }
}

loc_8004E01C:
{
    r3 = (r3 + r0);
    goto loc_8004E038;
}

loc_8004E024:
{
    r3 = 0;
    goto loc_8004E038;
}

loc_8004E02C:
{
    r3 = 0;
    goto loc_8004E038;
}

loc_8004E034:
{
    r3 = 0;
}

loc_8004E038:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_54 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_54 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004E048:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004E054;
    }
}

loc_8004E04C:
{
    r3 = 0;
    goto loc_8004E234;
}

loc_8004E054:
{
    r30 = (r30 + 1);
}

loc_8004E058:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004E05C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004DFD0;
    }
}

loc_8004E060:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r31 + 256);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r1 + 36);
    r0 = (r3 + 24);
    r3 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    ctx->lr = 0x8004E080u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004E084:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004E0A8;
    }
}

loc_8004E088:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_55 & 1);
}

loc_8004E094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004E0A0;
    }
}

loc_8004E098:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004E0AC;
}

loc_8004E0A0:
{
    r27 = 0;
    goto loc_8004E0AC;
}

loc_8004E0A8:
{
    r27 = 0;
}

loc_8004E0AC:
{
    r28 = (r31 + 256);
    r30 = 0;
    goto loc_8004E140;
}

loc_8004E0B8:
{
    r5 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 24), r28);
    r3 = (r1 + 28);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x8004E0D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004E0D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004E11C;
    }
}

loc_8004E0DC:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_58 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_58 & 1);
}

loc_8004E0E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004E114;
    }
}

loc_8004E0EC:
{
    r0 = (r30 + 1);
    r0_rot_59 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_59 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8004E100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004E10C;
    }
}

loc_8004E104:
{
    r3 = (r3 + r0);
    goto loc_8004E120;
}

loc_8004E10C:
{
    r3 = 0;
    goto loc_8004E120;
}

loc_8004E114:
{
    r3 = 0;
    goto loc_8004E120;
}

loc_8004E11C:
{
    r3 = 0;
}

loc_8004E120:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_61 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_61 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004E130:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004E13C;
    }
}

loc_8004E134:
{
    r3 = 0;
    goto loc_8004E234;
}

loc_8004E13C:
{
    r30 = (r30 + 1);
}

loc_8004E140:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004E144:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004E0B8;
    }
}

loc_8004E148:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r31 + 288);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r1 + 20);
    r0 = (r3 + 24);
    r3 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x8004E168u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004E16C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004E190;
    }
}

loc_8004E170:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_62 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_62 & 1);
}

loc_8004E17C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004E188;
    }
}

loc_8004E180:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004E194;
}

loc_8004E188:
{
    r27 = 0;
    goto loc_8004E194;
}

loc_8004E190:
{
    r27 = 0;
}

loc_8004E194:
{
    r31 = (r31 + 288);
    r30 = 0;
    goto loc_8004E228;
}

loc_8004E1A0:
{
    r5 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r3 = (r1 + 12);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x8004E1BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004E1C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004E204;
    }
}

loc_8004E1C4:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_65 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_65 & 1);
}

loc_8004E1D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004E1FC;
    }
}

loc_8004E1D4:
{
    r0 = (r30 + 1);
    r0_rot_66 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_66 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8004E1E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004E1F4;
    }
}

loc_8004E1EC:
{
    r3 = (r3 + r0);
    goto loc_8004E208;
}

loc_8004E1F4:
{
    r3 = 0;
    goto loc_8004E208;
}

loc_8004E1FC:
{
    r3 = 0;
    goto loc_8004E208;
}

loc_8004E204:
{
    r3 = 0;
}

loc_8004E208:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_68 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_68 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004E218:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004E224;
    }
}

loc_8004E21C:
{
    r3 = 0;
    goto loc_8004E234;
}

loc_8004E224:
{
    r30 = (r30 + 1);
}

loc_8004E228:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004E22C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004E1A0;
    }
}

loc_8004E230:
{
    r3 = 1;
}

loc_8004E234:
{
    r11 = (r1 + 208);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80001FB gpr_write=0xF80009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004D900 func_8004D900 preserves=true fpr_mask=0x00000000
