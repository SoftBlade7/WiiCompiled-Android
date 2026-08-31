#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80203EA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_10 = 0;
    uint32_t r22_addr_11 = 0;
    uint32_t r22_addr_12 = 0;
    uint32_t r22_addr_13 = 0;
    uint32_t r22_addr_14 = 0;
    uint32_t r22_addr_15 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_addr_4 = 0;
    uint32_t r22_addr_5 = 0;
    uint32_t r22_addr_6 = 0;
    uint32_t r22_addr_7 = 0;
    uint32_t r22_addr_8 = 0;
    uint32_t r22_addr_9 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_11 = 0;
    uint32_t r31_addr_12 = 0;
    uint32_t r31_addr_13 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
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
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80203EA0;

loc_80203EA0:
{
    MemoryInline::FlatWriteRam32((r1 + -608), r1);
    r1 = (r1 + -608);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 612), r0);
    r11 = (r1 + 608);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r14 = r4;
    r31 = r3;
    r3 = r14;
    r21 = 0;
    r20 = 0;
    // inline leaf 0x801EF7FC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x801EF7FC
}

loc_80203ED0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_80203EF4;
    }
}

loc_80203ED4:
{
    r3 = r14;
    r4 = 1;
    // inline leaf 0x801EF804 (6 guest instruction(s))
}

loc_inl2_0x801EF804:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_inl2_0x801EF808:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x801EF814;
    }
}

loc_inl2_0x801EF80C:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_801EF804;
}

loc_inl2_0x801EF814:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_801EF804:
{
    // end of inlined leaf 0x801EF804
    r4 = r3;
    r3 = (r1 + 16);
    ctx->lr = 0x80203EECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80203CDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r22 = (r1 + 16);
    goto loc_80203F04;
}

loc_80203EF4:
{
    r3 = r14;
    r4 = 1;
    // inline leaf 0x801EF804 (6 guest instruction(s))
}

loc_inl3_0x801EF804:
{
}

loc_inl3_0x801EF808:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_inl3_0x801EF814;
    }
}

loc_inl3_0x801EF80C:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl3_cont_801EF804;
}

loc_inl3_0x801EF814:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_801EF804:
{
    // end of inlined leaf 0x801EF804
    r22 = r3;
}

loc_80203F04:
{
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r0 & 2);
}

loc_80203F14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8020459C;
    }
}

loc_80203F18:
{
    goto loc_80203F24;
}

loc_80203F1C:
{
    r20 = 1;
    r22 = (r22 + 1);
}

loc_80203F24:
{
    r0 = MemoryInline::FlatRead8(r22);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80203F30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_80203F1C;
    }
}

loc_80203F34:
{
}

loc_80203F38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(46))) {
        goto loc_80203F1C;
    }
}

loc_80203F3C:
{
    r16 = 0;
    r4 = 0;
    r5 = 0;
    goto loc_80203F6C;
}

loc_80203F4C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80203F54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_80203F68;
    }
}

loc_80203F58:
{
    r0 = (r16 & 65535);
}

loc_80203F5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80203F64;
    }
}

loc_80203F60:
{
    r4 = r16;
}

loc_80203F64:
{
    r16 = r5;
}

loc_80203F68:
{
    r5 = (r5 + 1);
}

loc_80203F6C:
{
    r0 = (r5 & 65535);
    r22_addr_2 = (r22 + r0);
    r3 = MemoryInline::FlatRead8(r22_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80203F4C;
    }
}

loc_80203F7C:
{
    r0 = (r16 & 65535);
}

loc_80203F80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80203FA4;
    }
}

loc_80203F84:
{
    r3 = (r0 + r22);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80203FA4;
    }
}

loc_80203F94:
{
    r0 = (r4 & 65535);
}

loc_80203F98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80203FA0;
    }
}

loc_80203F9C:
{
    r16 = r4;
}

loc_80203FA0:
{
    r20 = 1;
}

loc_80203FA4:
{
    r15 = 0;
    r19 = (r1 + 12);
    r27 = 0x80360000u;
    r29 = 0x80250000u;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r15));
    r26 = r19;
    r28 = r19;
    r27 = (r27 + -20912);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r15));
    r29 = (r29 + 12544);
    r25 = (r1 + 10);
    r24 = 0;
    r18 = 1;
    r17 = 1;
    goto loc_80204264;
}

loc_80203FE0:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_80203FE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_80204000;
    }
}

loc_80203FEC:
{
    r3 = (r16 & 65535);
}

loc_80203FF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80204008;
    }
}

loc_80203FF4:
{
    r0 = (r24 & 65535);
}

loc_80203FFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80204008;
    }
}

loc_80204000:
{
}

loc_80204004:
{
    if ((static_cast<uint32_t>(r19) != static_cast<uint32_t>(r25))) {
        goto loc_8020422C;
    }
}

loc_80204008:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80204010:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_80204224;
    }
}

loc_80204014:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(46));
}

loc_80204018:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80204224;
    }
}

loc_8020401C:
{
    r12 = MemoryInline::FlatRead32((r27 + 44));
    r0 = (r24 & 65535);
    r3 = (r22 + r0);
    ctr = r12;
    ctx->lr = 0x80204030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80204034:
{
    r23 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8020417C;
    }
}

loc_8020403C:
{
    r4 = (r24 & 65535);
    r0 = (r16 & 65535);
}

loc_80204048:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_80204054;
    }
}

loc_8020404C:
{
}

loc_80204050:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8020406C;
    }
}

loc_80204054:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r0 = (r0 + r3);
}

loc_80204060:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8020406C;
    }
}

loc_80204064:
{
    r20 = 1;
    goto loc_80204260;
}

loc_8020406C:
{
    r4 = (r16 & 65535);
}

loc_80204070:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80204098;
    }
}

loc_80204074:
{
    r0 = (r24 & 65535);
}

loc_8020407C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r4))) {
        goto loc_80204098;
    }
}

loc_80204080:
{
    r5 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r5 + r3);
}

loc_8020408C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3))) {
        goto loc_80204098;
    }
}

loc_80204090:
{
    r20 = 1;
    goto loc_80204280;
}

loc_80204098:
{
}

loc_8020409C:
{
    if ((static_cast<uint32_t>(r19) != static_cast<uint32_t>(r26))) {
        goto loc_8020416C;
    }
}

loc_802040A0:
{
    r17 = r18;
    r18 = (r3 & 65535);
    goto loc_8020416C;
}

loc_802040AC:
{
    r0 = (r24 & 65535);
    r12 = MemoryInline::FlatRead32((r27 + 36));
    r22_addr_6 = (r22 + r0);
    r5 = MemoryInline::FlatRead8(r22_addr_6);
    r3 = (r22 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r4 = (r1 + 8);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r5 = (r5_rot_3 & -256);
    r0 = (r5 + r0);
    r30 = (r0 & 65535);
    ctr = r12;
    ctx->lr = 0x802040D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r1 + 8));
}

loc_802040E0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(65345))) {
        goto loc_802040FC;
    }
}

loc_802040E4:
{
}

loc_802040E8:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(65370))) {
        goto loc_802040FC;
    }
}

loc_802040EC:
{
    r0 = (r3 + -32);
    r3 = 1;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    goto loc_80204100;
}

loc_802040FC:
{
    r3 = 0;
}

loc_80204100:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_80204104:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80204124;
    }
}

loc_80204108:
{
    r12 = MemoryInline::FlatRead32((r27 + 40));
    r3 = (r1 + 8);
    r4 = r3;
    ctr = r12;
    ctx->lr = 0x8020411Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 1;
    goto loc_80204128;
}

loc_80204124:
{
    r3 = 0;
}

loc_80204128:
{
}

loc_8020412C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80204138;
    }
}

loc_80204130:
{
    r30 = MemoryInline::FlatRead16((r1 + 8));
    r21 = 1;
}

loc_80204138:
{
    r0 = (r15 & 65535);
    r3 = (r15 + 2);
    r4 = (r31 + r0);
    r23 = (r23 + -2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 255);
    r15 = (r3 & 65535);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = (r24 + 2);
    r24 = (r0 & 65535);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead16(r19);
    r0 = (r3 + 2);
    MemoryInline::FlatWrite16(r19, static_cast<uint16_t>(r0));
}

loc_8020416C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80204170:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802040AC;
    }
}

loc_80204174:
{
    r24 = (r24 + -1);
    goto loc_80204260;
}

loc_8020417C:
{
}

loc_80204180:
{
    if ((static_cast<uint32_t>(r19) != static_cast<uint32_t>(r28))) {
        goto loc_8020418C;
    }
}

loc_80204184:
{
    r17 = r18;
    r18 = 1;
}

loc_8020418C:
{
    r0 = MemoryInline::FlatRead32((r27 + 20));
    r0 = (r0 & 65536);
}

loc_80204194:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802041BC;
    }
}

loc_80204198:
{
    r22_addr_7 = (r22 + r30);
    r0 = MemoryInline::FlatRead8(r22_addr_7);
}

loc_802041A0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(128))) {
        goto loc_802041BC;
    }
}

loc_802041A4:
{
}

loc_802041A8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(32))) {
        goto loc_80204200;
    }
}

loc_802041AC:
{
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -32));
    r0 = (r0 & 2);
}

loc_802041B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80204200;
    }
}

loc_802041BC:
{
    r22_addr_9 = (r22 + r30);
    r3 = MemoryInline::FlatRead8(r22_addr_9);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    // inline leaf 0x801EF3C0 (6 guest instruction(s))
}

loc_inl4_0x801EF3C0:
{
}

loc_inl4_0x801EF3C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(97))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x801EF3C8:
{
}

loc_inl4_0x801EF3CC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(122))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x801EF3D0:
{
    r3 = (r3 + -32);
    goto loc_inl4_cont_801EF3C0;
}

loc_inl4_return:
{
}

loc_inl4_cont_801EF3C0:
{
    // end of inlined leaf 0x801EF3C0
    r0 = (r15 & 65535);
    r15 = (r15 + 1);
    r31_addr_4 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_4, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead16(r19);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16(r19, static_cast<uint16_t>(r0));
    r22_addr_10 = (r22 + r30);
    r0 = MemoryInline::FlatRead8(r22_addr_10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802041EC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(97))) {
        goto loc_80204260;
    }
}

loc_802041F0:
{
}

loc_802041F4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(122))) {
        goto loc_80204260;
    }
}

loc_802041F8:
{
    r21 = 1;
    goto loc_80204260;
}

loc_80204200:
{
    r3 = (r15 & 65535);
    r0 = 95;
    r31_addr_3 = (r31 + r3);
    MemoryInline::FlatWrite8(r31_addr_3, static_cast<uint8_t>(r0));
    r20 = 1;
    r15 = (r15 + 1);
    r3 = MemoryInline::FlatRead16(r19);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16(r19, static_cast<uint16_t>(r0));
    goto loc_80204260;
}

loc_80204224:
{
    r20 = 1;
    goto loc_80204260;
}

loc_8020422C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r19 = r25;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80204244;
    }
}

loc_80204238:
{
}

loc_8020423C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(46))) {
        goto loc_80204244;
    }
}

loc_80204240:
{
    r20 = 1;
}

loc_80204244:
{
    r0 = (r16 & 65535);
}

loc_80204248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80204280;
    }
}

loc_8020424C:
{
    r3 = (r15 & 65535);
    r0 = 46;
    r31_addr_2 = (r31 + r3);
    MemoryInline::FlatWrite8(r31_addr_2, static_cast<uint8_t>(r0));
    r24 = r16;
    r15 = (r15 + 1);
}

loc_80204260:
{
    r24 = (r24 + 1);
}

loc_80204264:
{
    r5 = MemoryInline::FlatRead16((r1 + 10));
}

loc_8020426C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(3))) {
        goto loc_80204280;
    }
}

loc_80204270:
{
    r30 = (r24 & 65535);
    r22_addr_4 = (r22 + r30);
    r4 = MemoryInline::FlatRead8(r22_addr_4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80203FE0;
    }
}

loc_80204280:
{
    r0 = (r5 & 65535);
}

loc_80204288:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802042A0;
    }
}

loc_8020428C:
{
    r0 = (r24 & 65535);
    r22_addr_13 = (r22 + r0);
    r0 = MemoryInline::FlatRead8(r22_addr_13);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802042A0;
    }
}

loc_8020429C:
{
    r20 = 1;
}

loc_802042A0:
{
}

loc_802042A4:
{
    r0 = (r15 & 65535);
    r3 = 0;
    r31_addr_6 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_6, static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80204564;
    }
}

loc_802042B4:
{
    r4 = MemoryInline::FlatRead16((r1 + 12));
}

loc_802042BC:
{
    r5 = r4;
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(8))) {
        goto loc_802042F8;
    }
}

loc_802042C4:
{
}

loc_802042C8:
{
    if ((static_cast<uint32_t>(r18) == static_cast<uint32_t>(1))) {
        goto loc_802042D8;
    }
}

loc_802042CC:
{
    r0 = (8 - r18);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r18) ? 1u : 0u) << 29);
    r5 = (r0 & 65535);
    goto loc_80204308;
}

loc_802042D8:
{
    r3 = (r17 & 65535);
    r0 = 2;
}

loc_802042E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802042EC;
    }
}

loc_802042E8:
{
    r0 = (r3 + 1);
}

loc_802042EC:
{
    r0_subfic_ra_1 = r0;
    r0 = (8 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    r5 = (r0 & 65535);
    goto loc_80204308;
}

loc_802042F8:
{
}

loc_802042FC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(7))) {
        goto loc_80204308;
    }
}

loc_80204300:
{
    r0 = (r4 - r17);
    r5 = (r0 & 65535);
}

loc_80204308:
{
    r0 = (r5 + 2);
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80204314:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80204364;
    }
}

loc_80204318:
{
    r0 = (r4 - r0);
    r7 = -1;
    r0 = (r0 & 65535);
    r6 = (r31 + r0);
    r6 = (r6 + -1);
    goto loc_8020434C;
}

loc_80204330:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7 = (r7 + 1);
    r6_addr_2 = (r6 + r0);
    r4 = MemoryInline::FlatRead8(r6_addr_2);
    r0 = (r31 + r0);
    r6 = (r6 + 1);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r4));
}

loc_8020434C:
{
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0 = (r3 + 1);
}

loc_8020435C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80204330;
    }
}

loc_80204360:
{
    goto loc_80204504;
}

loc_80204364:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80204504;
    }
}

loc_80204368:
{
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 - r4);
    r0 = (r0 & 65535);
    r7 = (r3 + 1);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80204380:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80204504;
    }
}

loc_80204384:
{
    r8 = (r6 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
}

loc_80204390:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_802044CC;
    }
}

loc_80204394:
{
    r4 = 0;
    r3 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_802043AC;
    }
}

loc_802043A0:
{
}

loc_802043A4:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(-32767))) {
        goto loc_802043AC;
    }
}

loc_802043A8:
{
    r3 = 1;
}

loc_802043AC:
{
}

loc_802043B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802043E4;
    }
}

loc_802043B4:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7 = 1;
    r3 = (r3 & -32768);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802043D8;
    }
}

loc_802043C8:
{
    r3 = (r8 & -32768);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802043D8;
    }
}

loc_802043D4:
{
    r7 = 0;
}

loc_802043D8:
{
}

loc_802043DC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_802043E4;
    }
}

loc_802043E0:
{
    r4 = 1;
}

loc_802043E4:
{
}

loc_802043E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802044CC;
    }
}

loc_802043EC:
{
    r4 = (r31 + r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r3 = (r3_rot_1 & 536870911);
    r4 = (r6 + r4);
    ctr = r3;
}

loc_80204400:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(8))) {
        goto loc_802044CC;
    }
}

loc_80204404:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 2u, true, false);
    r8 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r1 + 12));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r6 = (r6 + -8);
    r7 = (r31 + r8);
    r3_addr_4 = (r3 + r7);
    r7 = MemoryInline::FlatRead8(r3_addr_4);
    r4_addr_2 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r1 + 12));
    r8 = (r31 + r7);
    r7 = (r4 + r7);
    r8 = (r3 + r8);
    r8 = MemoryInline::FlatRead8((r8 + -1));
    MemoryInline::FlatWrite8((r7 + -1), static_cast<uint8_t>(r8));
    r7 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r1 + 12));
    r8 = (r31 + r7);
    r7 = (r4 + r7);
    r8 = (r3 + r8);
    r8 = MemoryInline::FlatRead8((r8 + -2));
    MemoryInline::FlatWrite8((r7 + -2), static_cast<uint8_t>(r8));
    r7 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r1 + 12));
    r8 = (r31 + r7);
    r7 = (r4 + r7);
    r8 = (r3 + r8);
    r8 = MemoryInline::FlatRead8((r8 + -3));
    MemoryInline::FlatWrite8((r7 + -3), static_cast<uint8_t>(r8));
    r7 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r1 + 12));
    r8 = (r31 + r7);
    r7 = (r4 + r7);
    r8 = (r3 + r8);
    r8 = MemoryInline::FlatRead8((r8 + -4));
    MemoryInline::FlatWrite8((r7 + -4), static_cast<uint8_t>(r8));
    r7 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r1 + 12));
    r8 = (r31 + r7);
    r7 = (r4 + r7);
    r8 = (r3 + r8);
    r8 = MemoryInline::FlatRead8((r8 + -5));
    MemoryInline::FlatWrite8((r7 + -5), static_cast<uint8_t>(r8));
    r7 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r1 + 12));
    r8 = (r31 + r7);
    r7 = (r4 + r7);
    r8 = (r3 + r8);
    r8 = MemoryInline::FlatRead8((r8 + -6));
    MemoryInline::FlatWrite8((r7 + -6), static_cast<uint8_t>(r8));
    r7 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r1 + 12));
    r8 = (r31 + r7);
    r7 = (r4 + r7);
    r3 = (r3 + r8);
    r4 = (r4 + -8);
    r3 = MemoryInline::FlatRead8((r3 + -7));
    MemoryInline::FlatWrite8((r7 + -7), static_cast<uint8_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80204404;
    }
}

loc_802044CC:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r3 = (r31 + r0);
    r0 = (r4 + 1);
    r7 = (r4 + r3);
    ctr = r0;
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80204504;
    }
}

loc_802044E4:
{
    r4 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r6 = (r6 + -1);
    r0 = (r31 + r4);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_7);
    r7_addr_2 = (r7 + r4);
    MemoryInline::FlatWrite8(r7_addr_2, static_cast<uint8_t>(r0));
    r7 = (r7 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802044E4;
    }
}

loc_80204504:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_8020450C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80204560;
    }
}

loc_80204510:
{
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r0 & 2);
}

loc_80204524:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80204548;
    }
}

loc_80204528:
{
    r0 = (r5 & 65535);
    r3 = 126;
    r31_addr_7 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_7, static_cast<uint8_t>(r3));
    r5 = (r5 + 1);
    r0 = (r5 & 65535);
    r3 = 49;
    r31_addr_8 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_8, static_cast<uint8_t>(r3));
    goto loc_80204560;
}

loc_80204548:
{
    r0 = (r5 & 65535);
    r3 = 95;
    r31_addr_9 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_9, static_cast<uint8_t>(r3));
    r5 = (r5 + 1);
    r0 = (r5 & 65535);
    r31_addr_10 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_10, static_cast<uint8_t>(r3));
}

loc_80204560:
{
    r21 = 1;
}

loc_80204564:
{
    r3 = r14;
    // inline leaf 0x801EF7FC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x801EF7FC
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_80204570:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802045FC;
    }
}

loc_80204574:
{
    r21 = 1;
    goto loc_802045FC;
}

loc_80204580:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80204588:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(46))) {
        goto loc_80204598;
    }
}

loc_8020458C:
{
}

loc_80204590:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_80204598;
    }
}

loc_80204594:
{
    r20 = 1;
}

loc_80204598:
{
    r22 = (r22 + 1);
}

loc_8020459C:
{
    r3 = MemoryInline::FlatRead8(r22);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802045B0;
    }
}

loc_802045A8:
{
}

loc_802045AC:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80204580;
    }
}

loc_802045B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_802045B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802045F0;
    }
}

loc_802045B8:
{
    r3 = 48;
    r5 = 1;
    r4 = 2;
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r31, static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 3), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + 5), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r31 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r31 + 7), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r31 + 8), static_cast<uint8_t>(r0));
    goto loc_802045F8;
}

loc_802045F0:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_802045F8:
{
    r21 = 1;
}

loc_802045FC:
{
    r11 = (r1 + 608);
    r3 = r21;
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 612));
    ctx->lr = r0;
    r1 = (r1 + 608);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80203EA0 func_80203EA0 preserves=true fpr_mask=0x00000000
