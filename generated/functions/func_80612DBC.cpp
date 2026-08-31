#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80612DBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
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
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
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
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_10 = 0;
    uint32_t r5_addr_11 = 0;
    uint32_t r5_addr_12 = 0;
    uint32_t r5_addr_13 = 0;
    uint32_t r5_addr_14 = 0;
    uint32_t r5_addr_15 = 0;
    uint32_t r5_addr_16 = 0;
    uint32_t r5_addr_17 = 0;
    uint32_t r5_addr_18 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r5_stbu_ea_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80612DBC;

loc_80612DBC:
{
    MemoryInline::FlatWriteRam32((r1 + -704), r1);
    r1 = (r1 + -704);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 708), r0);
    r11 = (r1 + 704);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    r0 = MemoryInline::FlatRead32((r3 + 3132));
    r28 = 0x80890000u;
    r26 = MemoryInline::FlatRead32((r3 + 3128));
    r23 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80612DE4:
{
    r28 = (r28 + 29424);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80612DF8;
    }
}

loc_80612DEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80612DF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80612E00;
    }
}

loc_80612DF4:
{
    goto loc_80612E04;
}

loc_80612DF8:
{
    r21 = 1;
    goto loc_80612E04;
}

loc_80612E00:
{
    r21 = 0;
}

loc_80612E04:
{
    r7 = 0x808B0000u;
    r3 = 0x809C0000u;
    r29 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 128), 0, 23u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r1 + 138), static_cast<uint8_t>(r29));
    r7 = (r7 + 11588);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 128), r7);
    r4 = r26;
    r5 = r21;
    r6 = (r1 + 120);
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r1 + 132), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 134), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r1 + 136), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 140), r7);
    MemoryInline::WriteResolved8(guest_range_2, 22u, (r1 + 150), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r1 + 144), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 18u, (r1 + 146), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_2, 20u, (r1 + 148), static_cast<uint16_t>(r29));
    ctx->lr = 0x80612E50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066B5F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80612E54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80612F50;
    }
}

loc_80612E58:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = 1127219200;
    r3 = (r21 + r3);
    r5 = (r23 + 131072);
    r4 = (r3 * 192);
    r5 = MemoryInline::FlatRead32((r5 + -14720));
    MemoryInline::FlatWriteRam32((r1 + 640), r0);
    r9 = 1;
    f4.d = MemoryInline::FlatReadFloat64((r28 + 8));
    r3 = (r1 + 152);
    MemoryInline::FlatWriteRam32((r1 + 648), r0);
    r30 = (r5 + r4);
    r5_addr_1 = (r5 + r4);
    r0 = MemoryInline::FlatRead32(r5_addr_1);
    r4 = (r30 + 16);
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    r5 = 76;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    r10 = MemoryInline::FlatRead16((r30 + 4));
    r7 = MemoryInline::FlatRead16((r30 + 6));
    r8 = MemoryInline::FlatRead16((r30 + 8));
    r0 = (r10 * 60);
    r6 = (r7 & 255);
    MemoryInline::FlatWriteRam16((r1 + 136), static_cast<uint16_t>(r8));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r0 = (r6 + r0);
    MemoryInline::FlatWriteRam8((r1 + 138), static_cast<uint8_t>(r9));
    r0 = (r0 * 1000);
    MemoryInline::FlatWriteRam8((r1 + 134), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam16((r1 + 132), static_cast<uint16_t>(r10));
    r7 = (r8 + r0);
    r11 = MemoryInline::FlatRead16((r30 + 10));
    r8 = MemoryInline::FlatRead16((r30 + 12));
    r10 = MemoryInline::FlatRead16((r30 + 14));
    r0 = (r11 * 60);
    r6 = (r8 & 255);
    MemoryInline::FlatWriteRam32((r1 + 644), r7);
    r0 = (r6 + r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 640));
    r0 = (r0 * 1000);
    MemoryInline::FlatWriteRam8((r1 + 150), static_cast<uint8_t>(r9));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    MemoryInline::FlatWriteRam16((r1 + 144), static_cast<uint16_t>(r11));
    r0 = (r10 + r0);
    MemoryInline::FlatWriteRam32((r1 + 652), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 648));
    MemoryInline::FlatWriteRam8((r1 + 146), static_cast<uint8_t>(r8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    MemoryInline::FlatWriteRam16((r1 + 148), static_cast<uint16_t>(r10));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    r3 = (r1 + 244);
    r4 = (r30 + 92);
    MemoryInline::FlatWriteRam32((r1 + 232), r0);
    r5 = 100;
    MemoryInline::FlatWriteRam32((r1 + 236), r0);
    MemoryInline::FlatWriteRam8((r1 + 240), static_cast<uint8_t>(r29));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80612F50:
{
    r3 = (r1 + 344);
    ctx->lr = 0x80612F58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061A5A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r5 = MemoryInline::FlatRead32((r23 + 3140));
    r3 = (r1 + 344);
    r6 = MemoryInline::FlatRead32((r23 + 3144));
    r4 = 0;
    // inline leaf 0x80619A58 (4 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam32((r3 + 52), r5);
    MemoryInline::FlatWriteRam32((r3 + 56), r6);
    // end of inlined leaf 0x80619A58
    r0 = MemoryInline::FlatRead16((r1 + 132));
    r3 = (r1 + 344);
    r4 = MemoryInline::FlatRead8((r1 + 134));
    r0 = (r0 * 60);
    r5 = MemoryInline::FlatRead16((r1 + 136));
    r0 = (r4 + r0);
    r0 = (r0 * 1000);
    r4 = (r5 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80619A68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r30 = MemoryInline::FlatRead16((r5 + 54));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80612FA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80612FC0;
    }
}

loc_80612FA4:
{
    r3 = 65536;
    r4 = (r30 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_80612FC4;
}

loc_80612FC0:
{
    r3 = 0;
}

loc_80612FC4:
{
    r5 = r26;
    r4 = 0;
    ctx->lr = 0x80612FD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80548E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80612FD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806130E4;
    }
}

loc_80612FD8:
{
    r0 = MemoryInline::FlatRead8((r3 + 86));
}

loc_80612FE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806130E4;
    }
}

loc_80612FE4:
{
    r5 = MemoryInline::FlatRead16((r3 + 80));
    r4 = 6029312;
    r0 = (r4 + -29313);
    r6 = MemoryInline::FlatRead8((r3 + 82));
    r4 = (r5 * 60);
    r5 = MemoryInline::FlatRead16((r3 + 84));
    r3 = (r6 + r4);
    r3 = (r3 * 1000);
    r29 = (r5 + r3);
}

loc_8061300C:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_80613014;
    }
}

loc_80613010:
{
    r0 = r29;
}

loc_80613014:
{
    r4 = (r30 * 628);
    r3 = (r1 + 344);
    r4 = (r23 + r4);
    MemoryInline::FlatWrite32((r4 + 3544), r0);
    r4 = (r4 + 3156);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5_addr_3 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_3, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
    r0 = MemoryInline::FlatRead32((r23 + 3132));
}

loc_80613034:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80613100;
    }
}

loc_80613038:
{
    r0 = MemoryInline::FlatRead16((r1 + 144));
    r3 = -858980352;
    r5 = MemoryInline::FlatRead16((r1 + 132));
    r8 = (r3 + -13107);
    r0 = (r0 * 60);
    r3 = MemoryInline::FlatRead8((r1 + 146));
    r6 = MemoryInline::FlatRead8((r1 + 134));
    r4 = MemoryInline::FlatRead16((r1 + 148));
    r0 = (r3 + r0);
    r7 = MemoryInline::FlatRead16((r1 + 136));
    r5 = (r5 * 60);
    r3 = (r6 + r5);
    r0 = (r0 * 1000);
    r5 = (r3 * 1000);
    r0 = (r4 + r0);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r0 = (r7 + r5);
    r0 = (r3 + r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r8) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
}

loc_8061308C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80613100;
    }
}

loc_80613090:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 652), r29);
    f3.d = MemoryInline::FlatReadFloat64((r28 + 8));
    MemoryInline::FlatWriteRam32((r1 + 648), r0);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 648));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = 6029312;
    r0 = (r4 + -29313);
}

loc_806130C8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_806130D0;
    }
}

loc_806130CC:
{
    r0 = r3;
}

loc_806130D0:
{
    MemoryInline::FlatWrite32((r23 + 26152), r0);
    r3 = (r1 + 344);
    r4 = (r23 + 25764);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5_addr_4 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_4, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
    goto loc_80613100;
}

loc_806130E4:
{
    r4 = (r30 * 628);
    r0 = -1;
    r3 = (r1 + 344);
    r4 = (r23 + r4);
    MemoryInline::FlatWrite32((r4 + 3544), r0);
    r4 = (r4 + 3156);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5_addr_5 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_5, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
}

loc_80613100:
{
    r25 = 0;
    r22 = 6029312;
    r29 = 65536;
    r30 = 0x809C0000u;
}

loc_80613110:
{
    r5 = MemoryInline::FlatRead32((r30 + -10424));
    r4 = (r25 & 255);
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80613120:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_806131E0;
    }
}

loc_80613124:
{
    r0 = (r29 + -29504);
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r4 * r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
}

loc_80613140:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20548))) {
        goto loc_806131E0;
    }
}

loc_80613144:
{
    r0 = (r29 + -27664);
    r0 = (r4 * r0);
    r0 = (r5 + r0);
    r21 = (r0 + 56);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(56)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80613154:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_806131E0;
    }
}

loc_80613158:
{
    r27 = (r4 * 628);
    r3 = (r23 + 372);
    r31 = (r23 + r27);
    r4 = MemoryInline::FlatRead32((r31 + 3536));
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805FA930
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80613178:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806131E0;
    }
}

loc_8061317C:
{
    r3 = r21;
    r5 = r26;
    r4 = 0;
    ctx->lr = 0x8061318Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80548E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80613190:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806131E0;
    }
}

loc_80613194:
{
    r0 = MemoryInline::FlatRead8((r3 + 86));
}

loc_8061319C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806131E0;
    }
}

loc_806131A0:
{
    r4 = MemoryInline::FlatRead16((r3 + 80));
    r0 = (r22 + -29313);
    r5 = MemoryInline::FlatRead8((r3 + 82));
    r4 = (r4 * 60);
    r6 = MemoryInline::FlatRead16((r3 + 84));
    r3 = (r5 + r4);
    r3 = (r3 * 1000);
    r3 = (r6 + r3);
}

loc_806131C4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_806131CC;
    }
}

loc_806131C8:
{
    r0 = r3;
}

loc_806131CC:
{
    r4 = (r23 + r27);
    MemoryInline::FlatWrite32((r31 + 3544), r0);
    r3 = (r1 + 344);
    r4 = (r4 + 3156);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r5_addr_8 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_8, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
}

loc_806131E0:
{
    r25 = (r25 + 1);
}

loc_806131E8:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(4))) {
        goto loc_80613110;
    }
}

loc_806131EC:
{
    r0 = MemoryInline::FlatRead32((r23 + 3132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806131F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80613204;
    }
}

loc_806131F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806131FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061320C;
    }
}

loc_80613200:
{
    goto loc_80613210;
}

loc_80613204:
{
    r24 = 1;
    goto loc_80613210;
}

loc_8061320C:
{
    r24 = 0;
}

loc_80613210:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = 0x808B0000u;
    r3 = (r3 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r26;
    r21 = (r4 + 131072);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80613254;
    }
}

loc_8061324C:
{
    r6 = 0;
    goto loc_806132B0;
}

loc_80613254:
{
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r21 + 20476));
    r0 = (r0 * 160);
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    r3 = (r3 + r0);
    r0 = (r24 * 80);
    r3 = (r3 + 9008);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80613280:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806132AC;
    }
}

loc_80613284:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r5 = (r5_rot_1 & 1023);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(15));
    r4 = (r4_rot_1 & 127);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_5 & 127);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    r6 = 1;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r5));
    goto loc_806132B0;
}

loc_806132AC:
{
    r6 = 0;
}

loc_806132B0:
{
    r3 = 0x809C0000u;
    r0 = (0 - r6);
    r4 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = (r0 | r6);
    r3 = r26;
    r25_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r25 = (r25_rot_0 & 1);
    r21 = (r4 + 131072);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_806132E0;
    }
}

loc_806132D8:
{
    r0 = 0;
    goto loc_80613304;
}

loc_806132E0:
{
    r0 = (r3 & 65535);
    r4 = MemoryInline::FlatRead32((r21 + 20476));
    r3 = (r0 * 160);
    r4 = (r4 + 131072);
    r0 = (r24 * 80);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 22072));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & 1);
}

loc_80613304:
{
    r3 = (r25 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80613314:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061339C;
    }
}

loc_80613318:
{
    r0 = MemoryInline::FlatRead8((r1 + 150));
}

loc_80613320:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8061332C;
    }
}

loc_80613324:
{
    r0 = 0;
    goto loc_80613394;
}

loc_8061332C:
{
    r0 = MemoryInline::FlatRead8((r1 + 18));
}

loc_80613334:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80613340;
    }
}

loc_80613338:
{
    r0 = 1;
    goto loc_80613394;
}

loc_80613340:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r3 = MemoryInline::FlatRead16((r1 + 144));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8061334C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80613358;
    }
}

loc_80613350:
{
    r0 = 1;
    goto loc_80613394;
}

loc_80613358:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80613390;
    }
}

loc_8061335C:
{
    r0 = MemoryInline::FlatRead8((r1 + 14));
    r3 = MemoryInline::FlatRead8((r1 + 146));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80613368:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80613374;
    }
}

loc_8061336C:
{
    r0 = 1;
    goto loc_80613394;
}

loc_80613374:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80613390;
    }
}

loc_80613378:
{
    r3 = MemoryInline::FlatRead16((r1 + 148));
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_80613384:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80613390;
    }
}

loc_80613388:
{
    r0 = 1;
    goto loc_80613394;
}

loc_80613390:
{
    r0 = 0;
}

loc_80613394:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80613398:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806134D8;
    }
}

loc_8061339C:
{
    r4 = 0x809C0000u;
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r21 = (r4 + 131072);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_806134A8;
    }
}

loc_806133B8:
{
    r0 = MemoryInline::FlatRead8((r1 + 150));
    r4 = MemoryInline::FlatRead32((r21 + 20476));
}

loc_806133C4:
{
    r4 = (r4 + 131072);
    r4 = (r4 + 13064);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806133F4;
    }
}

loc_806133D0:
{
    r0 = (r3 & 65535);
    r3 = (r0 * 160);
    r0 = (r24 * 80);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 9008));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r3 + 9008), r0);
    goto loc_806134A8;
}

loc_806133F4:
{
    r0 = (r3 & 65535);
    r3 = 99;
    r8 = (r0 * 160);
    r7 = (r24 * 80);
    r0 = (r4 + r8);
    r6 = (r0 + r7);
    r0 = MemoryInline::FlatRead32((r6 + 9008));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r6 + 9008), r0);
    r0 = MemoryInline::FlatRead16((r1 + 144));
}

loc_80613420:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_80613428;
    }
}

loc_80613424:
{
    r3 = r0;
}

loc_80613428:
{
    r0 = MemoryInline::FlatRead32((r6 + 9008));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_1 = (r0_rot_15 & 2130706432);
    r0_mdest_1 = (r0 & -2130706433);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r6 + 9008), r0);
    r0 = MemoryInline::FlatRead16((r1 + 144));
}

loc_8061343C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_80613448;
    }
}

loc_80613440:
{
    r3 = 59;
    goto loc_8061344C;
}

loc_80613448:
{
    r3 = MemoryInline::FlatRead8((r1 + 146));
}

loc_8061344C:
{
    r0 = MemoryInline::FlatRead32((r6 + 9008));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r0_mrot_2 = (r0_rot_16 & 16646144);
    r0_mdest_2 = (r0 & -16646145);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r6 + 9008), r0);
    r0 = MemoryInline::FlatRead16((r1 + 144));
}

loc_80613460:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8061346C;
    }
}

loc_80613464:
{
    r5 = 999;
    goto loc_80613470;
}

loc_8061346C:
{
    r5 = MemoryInline::FlatRead16((r1 + 148));
}

loc_80613470:
{
    r0 = (r4 + r8);
    r4 = MemoryInline::FlatRead32((r6 + 9008));
    r3 = (r0 + r7);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r4_mrot_1 = (r4_rot_3 & 130944);
    r4_mdest_1 = (r4 & -130945);
    r4 = (r4_mdest_1 | r4_mrot_1);
    MemoryInline::FlatWrite32((r6 + 9008), r4);
    r0 = 38;
    r5 = (r3 + 9011);
    r4 = (r1 + 151);
    ctr = r0;
}

loc_80613494:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_2 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_2, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80613494;
    }
}

loc_806134A8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl7_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl7_0x80621418:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl7_0x80621424:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl7_cont_80621410;
}

loc_inl7_return:
{
}

loc_inl7_cont_80621410:
{
    // end of inlined leaf 0x80621410
    r5 = MemoryInline::FlatRead16((r1 + 144));
    r4 = MemoryInline::FlatRead8((r1 + 146));
    r3 = MemoryInline::FlatRead16((r1 + 148));
    r0 = MemoryInline::FlatRead8((r1 + 150));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
}

loc_806134D8:
{
    r4 = MemoryInline::FlatRead16((r1 + 12));
    r3 = 6029312;
    r0 = (r3 + -29313);
    r5 = MemoryInline::FlatRead8((r1 + 14));
    r3 = (r4 * 60);
    r4 = MemoryInline::FlatRead16((r1 + 16));
    r3 = (r5 + r3);
    r3 = (r3 * 1000);
    r3 = (r4 + r3);
}

loc_80613500:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80613508;
    }
}

loc_80613504:
{
    r0 = r3;
}

loc_80613508:
{
    MemoryInline::FlatWrite32((r23 + 24896), r0);
    r3 = (r1 + 344);
    r4 = (r23 + 24508);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r5_addr_10 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_10, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
    r30 = 0x808B0000u;
    r24 = 0;
    r30 = (r30 + 11588);
    r29 = 0x809C0000u;
    r31 = 0;
    r25 = 6029312;
}

loc_80613530:
{
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r4 = (r24 & 255);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2900 (19 guest instruction(s))
}

loc_inl9_0x805D2900:
{
}

loc_inl9_0x805D2904:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl9_0x805D2944;
    }
}

loc_inl9_0x805D2908:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_7);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x805D2944;
    }
}

loc_inl9_0x805D2920:
{
    r4 = MemoryInline::FlatRead32((r4 + 464));
    r3 = 25;
    r4 = (r4 + -1);
    r0 = (25 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(25) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = (r3 | ~r4);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_21 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    goto loc_inl9_cont_805D2900;
}

loc_inl9_0x805D2944:
{
    r3 = 0;
}

loc_inl9_cont_805D2900:
{
    // end of inlined leaf 0x805D2900
}

loc_80613548:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806135D4;
    }
}

loc_8061354C:
{
    MemoryInline::FlatWriteRam32((r1 + 96), r30);
    r4 = (r24 & 255);
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    MemoryInline::FlatWriteRam16((r1 + 100), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 102), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam16((r1 + 104), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 106), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2890 (14 guest instruction(s))
}

loc_inl10_0x805D2890:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
}

loc_inl10_0x805D2894:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl10_0x805D28C0;
    }
}

loc_inl10_0x805D2898:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_10 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_10);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl10_0x805D28B8;
    }
}

loc_inl10_0x805D28B0:
{
    r3 = (r4 + 8);
    goto loc_inl10_cont_805D2890;
}

loc_inl10_0x805D28B8:
{
    r3 = 0;
    goto loc_inl10_cont_805D2890;
}

loc_inl10_0x805D28C0:
{
    r3 = 0;
}

loc_inl10_cont_805D2890:
{
    // end of inlined leaf 0x805D2890
    r5 = r26;
    r4 = (r1 + 20);
    ctx->lr = 0x80613580u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80519780u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r1 + 106));
}

loc_80613588:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806135D4;
    }
}

loc_8061358C:
{
    r0 = MemoryInline::FlatRead16((r1 + 100));
    r5 = (r25 + -29313);
    r3 = MemoryInline::FlatRead8((r1 + 102));
    r0 = (r0 * 60);
    r4 = MemoryInline::FlatRead16((r1 + 104));
    r0 = (r3 + r0);
    r0 = (r0 * 1000);
    r0 = (r4 + r0);
}

loc_806135B0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_806135B8;
    }
}

loc_806135B4:
{
    r5 = r0;
}

loc_806135B8:
{
    r0 = (r24 & 255);
    r3 = (r1 + 344);
    r0 = (r0 * 628);
    r4 = (r23 + r0);
    MemoryInline::FlatWrite32((r4 + 6056), r5);
    r4 = (r4 + 5668);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r5_addr_12 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_12, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
}

loc_806135D4:
{
    r24 = (r24 + 1);
}

loc_806135DC:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(30))) {
        goto loc_80613530;
    }
}

loc_806135E0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    // inline leaf 0x8066CB30 (7 guest instruction(s))
}

loc_inl12_0x8066CB30:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
}

loc_inl12_0x8066CB38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_inl12_0x8066CB44;
    }
}

loc_inl12_0x8066CB3C:
{
    r3 = (r3 + 30096);
    goto loc_inl12_cont_8066CB30;
}

loc_inl12_0x8066CB44:
{
    r3 = 0;
}

loc_inl12_cont_8066CB30:
{
    // end of inlined leaf 0x8066CB30
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806135F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80613680;
    }
}

loc_806135F4:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = r3;
    r6 = 0;
    r5 = 0;
    ctr = r0;
}

loc_8061360C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80613638;
    }
}

loc_80613610:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80613618:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(r0))) {
        goto loc_8061362C;
    }
}

loc_8061361C:
{
    r0 = (r5 * 112);
    r3 = (r3 + r0);
    r6 = (r3 + 4);
    goto loc_80613638;
}

loc_8061362C:
{
    r4 = (r4 + 112);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80613610;
    }
}

loc_80613638:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8061363C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80613680;
    }
}

loc_80613640:
{
    r4 = MemoryInline::FlatRead16((r6 + 8));
    r3 = 6029312;
    r0 = (r3 + -29313);
    r5 = MemoryInline::FlatRead8((r6 + 10));
    r3 = (r4 * 60);
    r4 = MemoryInline::FlatRead16((r6 + 12));
    r3 = (r5 + r3);
    r3 = (r3 * 1000);
    r3 = (r4 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80613668:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80613670;
    }
}

loc_8061366C:
{
    r0 = r3;
}

loc_80613670:
{
    MemoryInline::FlatWrite32((r23 + 25524), r0);
    r3 = (r1 + 344);
    r4 = (r23 + 25136);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    r5_addr_14 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_14, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
}

loc_80613680:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead16((r1 + 144));
    r4 = 6029312;
    r0 = (r4 + -29313);
    r6 = MemoryInline::FlatRead16((r1 + 148));
    r4 = (r5 * 60);
    r5 = MemoryInline::FlatRead8((r1 + 146));
    r3 = (r3 + r6);
    r4 = (r5 + r4);
    r4 = (r4 * 1000);
    r3 = (r4 + r3);
}

loc_806136BC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_806136C4;
    }
}

loc_806136C0:
{
    r0 = r3;
}

loc_806136C4:
{
    MemoryInline::FlatWrite32((r23 + 26780), r0);
    r3 = (r1 + 344);
    r4 = (r23 + 26392);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r5_addr_16 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_16, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
    r0 = MemoryInline::FlatRead32((r23 + 3132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806136DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806137D0;
    }
}

loc_806136E0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r21 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_806136F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80613700;
    }
}

loc_806136F8:
{
    r21 = 0;
    goto loc_80613754;
}

loc_80613700:
{
    r22 = 0x809C0000u;
    r22 = (r22 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80613750;
    }
}

loc_8061370C:
{
    r12 = MemoryInline::FlatRead32(r21);
    r3 = r21;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80613720u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80613738;
}

loc_80613724:
{
}

loc_80613728:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r22))) {
        goto loc_80613734;
    }
}

loc_8061372C:
{
    r0 = 1;
    goto loc_80613744;
}

loc_80613734:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80613738:
{
}

loc_8061373C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80613724;
    }
}

loc_80613740:
{
    r0 = 0;
}

loc_80613744:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80613748:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80613750;
    }
}

loc_8061374C:
{
    goto loc_80613754;
}

loc_80613750:
{
    r21 = 0;
}

loc_80613754:
{
    r3 = r26;
    ctx->lr = 0x8061375Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80550468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80613760:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061377C;
    }
}

loc_80613764:
{
    r3 = r21;
    r6 = r26;
    r4 = 38;
    r5 = 0;
    ctx->lr = 0x80613778u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805E163Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_80613790;
}

loc_8061377C:
{
    r3 = r21;
    r6 = r26;
    r4 = 37;
    r5 = 0;
    ctx->lr = 0x80613790u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805E163Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80613790:
{
    r5 = MemoryInline::FlatRead16((r3 + 168));
    r4 = 6029312;
    r0 = (r4 + -29313);
    r6 = MemoryInline::FlatRead8((r3 + 170));
    r4 = (r5 * 60);
    r5 = MemoryInline::FlatRead16((r3 + 172));
    r3 = (r6 + r4);
    r3 = (r3 * 1000);
    r3 = (r5 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_806137B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806137C0;
    }
}

loc_806137BC:
{
    r0 = r3;
}

loc_806137C0:
{
    MemoryInline::FlatWrite32((r23 + 27408), r0);
    r3 = (r1 + 344);
    r4 = (r23 + 27020);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_28 & -4);
    r5_addr_17 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_17, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
}

loc_806137D0:
{
    r3 = (r1 + 344);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80619C70u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r23 + 3132));
    r3 = (r1 + 344);
    r4 = (r1 + 120);
    r0 = (r5 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_3 & 134217727);
    ctx->lr = 0x806137F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061A650u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 344);
    ctx->lr = 0x806137FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80619CBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 344);
    r4 = (r23 + 27648);
    ctx->lr = 0x80613808u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061A878u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 344);
    ctx->lr = 0x80613810u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80619F5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = (r23 + 896);
    r22 = 0;
}

loc_80613818:
{
    r4 = r21;
    r5 = r22;
    r3 = (r1 + 344);
    ctx->lr = 0x80613828u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061A23Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r22 = (r22 + 1);
    r21 = (r21 + 372);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(6));
}

loc_80613834:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80613818;
    }
}

loc_80613838:
{
    r3 = (r1 + 344);
    ctx->lr = 0x80613840u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80619F78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 344);
    r4 = -1;
    ctx->lr = 0x8061384Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061A5F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r11 = (r1 + 704);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 708));
    ctx->lr = r0;
    r1 = (r1 + 704);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80612DBC func_80612DBC preserves=true fpr_mask=0x00000000
