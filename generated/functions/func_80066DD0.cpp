#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80066DD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
    uint32_t r3_psq_tmp_15 = 0;
    uint32_t r3_psq_tmp_16 = 0;
    uint32_t r3_psq_tmp_17 = 0;
    uint32_t r3_psq_tmp_18 = 0;
    uint32_t r3_psq_tmp_19 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_20 = 0;
    uint32_t r3_psq_tmp_21 = 0;
    uint32_t r3_psq_tmp_22 = 0;
    uint32_t r3_psq_tmp_23 = 0;
    uint32_t r3_psq_tmp_24 = 0;
    uint32_t r3_psq_tmp_25 = 0;
    uint32_t r3_psq_tmp_26 = 0;
    uint32_t r3_psq_tmp_27 = 0;
    uint32_t r3_psq_tmp_28 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_12 = 0;
    uint32_t r4_psq_tmp_13 = 0;
    uint32_t r4_psq_tmp_14 = 0;
    uint32_t r4_psq_tmp_15 = 0;
    uint32_t r4_psq_tmp_16 = 0;
    uint32_t r4_psq_tmp_17 = 0;
    uint32_t r4_psq_tmp_18 = 0;
    uint32_t r4_psq_tmp_19 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_20 = 0;
    uint32_t r4_psq_tmp_21 = 0;
    uint32_t r4_psq_tmp_22 = 0;
    uint32_t r4_psq_tmp_23 = 0;
    uint32_t r4_psq_tmp_24 = 0;
    uint32_t r4_psq_tmp_25 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80066DD0;

loc_80066DD0:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 192);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80066DF0:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r15 = r5;
    r16 = r8;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r17 = r9;
    r18 = r10;
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006724C;
    }
}

loc_80066E14:
{
    r4 = (r7 * 48);
    r5 = -536870912;
    r0 = (r5 + 4096);
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    r4 = (r4 + 31);
    r22 = (r5 + 2048);
    r19 = (r4 & -32);
    r0 = (r5 + 10240);
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r0 = (r5 + 12288);
    r14 = (r5 + 6144);
    r4 = r19;
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    r0 = (r5 + 14336);
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80066E5C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80066EA4;
    }
}

loc_80066E68:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r0 * 36);
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    r0 = (r4 + 31);
    r4 = (r0 & -32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
}

loc_80066E8C:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80066EA4;
    }
}

loc_80066E90:
{
    r0 = 3;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    r3 = r18;
    r4 = r19;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
}

loc_80066EA4:
{
    // inline leaf 0x80067900 (3 guest instruction(s))
    r3 = 0x802C0000u;
    r3 = (r3 + -10752);
    // end of inlined leaf 0x80067900
    r29 = r3;
    r3 = 0;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1988u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r30 = 0x80240000u;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29456));
    r30 = (r30 + 32424);
    MemoryInline::FlatWriteRam32((r1 + 116), r15);
    r21 = 0;
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r18);
    goto loc_80067240;
}

loc_80066EDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r20 = (r0 - r21);
}

loc_80066EE8:
{
    if ((static_cast<uint32_t>(r20) <= static_cast<uint32_t>(40))) {
        goto loc_80066F04;
    }
}

loc_80066EEC:
{
    r0 = 60;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = 45;
    r20 = 40;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    goto loc_80066F24;
}

loc_80066F04:
{
    r4 = (r20 * 48);
    r3 = (r20 * 36);
    r0 = (r4 + 31);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r3 = (r3 + 31);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
}

loc_80066F24:
{
    r3 = MemoryInline::FlatRead32((r1 + 88));
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1988u>(ctx);
}

loc_80066F30:
{
    if ((static_cast<uint32_t>(r20) <= static_cast<uint32_t>(1))) {
        goto loc_80066F4C;
    }
}

loc_80066F34:
{
    r4 = MemoryInline::FlatRead32((r1 + 116));
    r3 = r16;
    r5 = r22;
    r6 = r20;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80199E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    goto loc_80066F5C;
}

loc_80066F4C:
{
    r4 = MemoryInline::FlatRead32((r1 + 116));
    r3 = r16;
    r5 = r22;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
}

loc_80066F5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r27 = r22;
    r25 = r22;
    r19 = 0;
    r23 = (r0 + r31);
    r26 = 0;
    r28 = r23;
    goto loc_800670E4;
}

loc_80066F7C:
{
    r8 = MemoryInline::FlatRead32(r28);
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80066F84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80067054;
    }
}

loc_80066F88:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5 = MemoryInline::FlatRead32(r17);
    r30_addr_3 = (r30 + r0);
    r12 = MemoryInline::FlatRead32(r30_addr_3);
    r3 = r27;
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r5 = (r5_rot_3 & 1);
    r4 = r15;
    r6 = r16;
    r7 = (r1 + 24);
    r8 = (r21 + r19);
    ctr = r12;
    ctx->lr = 0x80066FB8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r4 = MemoryInline::FlatRead32(r17);
    r3 = r17;
    r4 = (r4 + 76);
    r0 = MemoryInline::FlatRead32((r4 + 36));
    r0 = (r4 + r0);
    r0 = (r0 + r31);
    r4 = (r0 + r26);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E3A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
}

loc_80066FE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80067010;
    }
}

loc_80066FEC:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
}

loc_80066FF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80067000;
    }
}

loc_80066FF8:
{
    r0 = (r3 + r0);
    goto loc_80067004;
}

loc_80067000:
{
    r0 = 0;
}

loc_80067004:
{
    r3 = (0 - r0);
    r0 = (r3 | r0);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
}

loc_80067010:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80067014:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800670D0;
    }
}

loc_80067018:
{
    r0 = (r21 + r19);
    r4 = (r1 + 32);
    r24 = (r0 * 48);
    r3 = (r15 + r24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
}

loc_80067030:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80067048;
    }
}

loc_80067034:
{
    r3 = r25;
    r4 = (r1 + 32);
    r5 = (r29 + r24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    goto loc_800670D0;
}

loc_80067048:
{
    r3 = (r29 + r24);
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7, f2.d);
    // end of inlined leaf 0x80199D04
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_800670D0;
}

loc_80067054:
{
    r3 = MemoryInline::FlatRead32(r17);
    r3 = (r3 + 76);
    r0 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r3 + r0);
    r0 = (r0 + r31);
    r3 = (r0 + r26);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80067074:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800670D0;
    }
}

loc_80067078:
{
    r3 = r17;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E3A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_80067084:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800670D0;
    }
}

loc_80067088:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80067090:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800670D0;
    }
}

loc_80067094:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r3 = r17;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E3A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_800670A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800670B0;
    }
}

loc_800670A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_800670B4;
}

loc_800670B0:
{
    r3 = 0;
}

loc_800670B4:
{
    r0 = (r21 + r19);
    r5 = r27;
    r3 = (r3 * 48);
    r0 = (r0 * 48);
    r3 = (r29 + r3);
    r4 = (r15 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
}

loc_800670D0:
{
    r28 = (r28 + 4);
    r27 = (r27 + 48);
    r26 = (r26 + 4);
    r25 = (r25 + 48);
    r19 = (r19 + 1);
}

loc_800670E4:
{
}

loc_800670E8:
{
    if ((static_cast<uint32_t>(r19) < static_cast<uint32_t>(r20))) {
        goto loc_80066F7C;
    }
}

loc_800670EC:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = r22;
    r5 = MemoryInline::FlatRead32((r1 + 84));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800B1930u>(ctx);
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80067104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800671AC;
    }
}

loc_80067108:
{
    r24 = MemoryInline::FlatRead32((r1 + 104));
    r19 = r22;
    r25 = r14;
    r26 = r14;
    r27 = 0;
    goto loc_800671A4;
}

loc_80067120:
{
    r0 = MemoryInline::FlatRead32(r23);
    r0 = (r0 & 536870912);
}

loc_80067128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006715C;
    }
}

loc_8006712C:
{
}

loc_80067130:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_8006714C;
    }
}

loc_80067134:
{
    r3 = r19;
    r4 = r25;
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_10 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_11 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_12 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_12));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_13 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_13));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_6 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_14 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_14));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_7 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7, f5.d);
    // end of inlined leaf 0x80199D30
    MemoryInline::FlatWriteFloat32((r25 + 44), f31.d);
    MemoryInline::FlatWriteFloat32((r25 + 28), f31.d);
    MemoryInline::FlatWriteFloat32((r25 + 12), f31.d);
}

loc_8006714C:
{
    r3 = r24;
    r4 = r19;
    // inline leaf 0x80085630 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_9 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_9));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_10 = (r4 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_10));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_11 = (r4 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_11));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_12 = (r4 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_13 = (r4 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_13));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_16 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_16, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_17 = (r3 + 12);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_17, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_18 = (r3 + 20);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_18, f3.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_19 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_19, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_20 = (r3 + 32);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_20, f5.d);
    // end of inlined leaf 0x80085630
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    goto loc_8006718C;
}

loc_8006715C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_80067160:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80067180;
    }
}

loc_80067164:
{
    r3 = r19;
    r4 = r25;
    // inline leaf 0x8019A0C0 (50 guest instruction(s))
}

loc_inl5_0x8019A0C0:
{
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_21 = (r3 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_21));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_22 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_22));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_23 = (r3 + 20);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_23));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_24 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_24));
    PpcSetPairedFprInline(f7, PPC_PsMerge10Inline(f3.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_25 = (r3 + 36);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_25));
    PpcSetPairedFprInline(f11, PPC_PsMulInline(f3.d, f6.d));
    PpcSetPairedFprInline(f8, PPC_PsMerge10Inline(f5.d, f4.d));
    PpcSetPairedFprInline(f13, PPC_PsMulInline(f5.d, f7.d));
    PpcSetPairedFprInline(f11, PPC_PsMsubInline(f1.d, f7.d, f11.d));
    PpcSetPairedFprInline(f12, PPC_PsMulInline(f1.d, f8.d));
    PpcSetPairedFprInline(f13, PPC_PsMsubInline(f3.d, f8.d, f13.d));
    PpcSetPairedFprInline(f12, PPC_PsMsubInline(f5.d, f6.d, f12.d));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f3.d, f4.d));
    PpcSetPairedFprInline(f9, PPC_PsMulInline(f0.d, f5.d));
    PpcSetPairedFprInline(f8, PPC_PsMulInline(f1.d, f2.d));
    PpcSetPairedFprInline(f10, PPC_PsMsubInline(f2.d, f5.d, f10.d));
    PpcSetPairedFprInline(f9, PPC_PsMsubInline(f1.d, f4.d, f9.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f3.d, f8.d));
    PpcSetPairedFprInline(f7, PPC_PsMulInline(f0.d, f13.d));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f1.d));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f2.d, f12.d, f7.d));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f4.d, f11.d, f7.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f7.d), PpcGetPs0Inline(f1.d));
}

loc_inl5_0x8019A128:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_0x8019A134;
    }
}

loc_inl5_0x8019A12C:
{
    r3 = 0;
    goto loc_inl5_cont_8019A0C0;
}

loc_inl5_0x8019A134:
{
    PpcSetPairedFprInline(f0, PPC_Fres(f7.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_14 = (r4 + 12);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_14, f1.d);
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f0.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_15 = (r4 + 28);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_15, f1.d);
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(f7.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_16 = (r4 + 44);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_16, f1.d);
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f13.d, f0.d));
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f12.d, f0.d));
    PpcSetPairedFprInline(f11, PPC_PsMuls0Inline(f11.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f13.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_17 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_17, f12.d);
    PpcSetPairedFprInline(f10, PPC_PsMuls0Inline(f10.d, f0.d));
    PpcSetPairedFprInline(f9, PPC_PsMuls0Inline(f9.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_18 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_18, f11.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_19 = (r4 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_19, f10.d);
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f8.d, f0.d));
    r3 = 1;
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_20 = (r4 + 24);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_20, f9.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_21 = (r4 + 40);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_21, f8.d);
}

loc_inl5_cont_8019A0C0:
{
    // end of inlined leaf 0x8019A0C0
    r3 = r24;
    r4 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x80085630u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f0.d = PPC_PsToScalarInline(f0.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f7.d = PPC_PsToScalarInline(f7.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    f13.d = PPC_PsToScalarInline(f13.d);
    goto loc_8006718C;
}

loc_80067180:
{
    r3 = r24;
    r4 = r19;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085670u>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
}

loc_8006718C:
{
    r19 = (r19 + 48);
    r24 = (r24 + 36);
    r23 = (r23 + 4);
    r25 = (r25 + 48);
    r26 = (r26 + 48);
    r27 = (r27 + 1);
}

loc_800671A4:
{
}

loc_800671A8:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r20))) {
        goto loc_80067120;
    }
}

loc_800671AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_800671B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800671E0;
    }
}

loc_800671B8:
{
    r3 = MemoryInline::FlatRead32((r1 + 112));
    r4 = MemoryInline::FlatRead32((r1 + 104));
    r5 = MemoryInline::FlatRead32((r1 + 80));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800B1930u>(ctx);
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
}

loc_800671CC:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_800671E0;
    }
}

loc_800671D0:
{
    r3 = MemoryInline::FlatRead32((r1 + 108));
    r4 = r14;
    r5 = MemoryInline::FlatRead32((r1 + 84));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800B1930u>(ctx);
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
}

loc_800671E0:
{
    r3 = r22;
    r22 = MemoryInline::FlatRead32((r1 + 100));
    r5 = r14;
    r14 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWriteRam32((r1 + 100), r3);
    r21 = (r21 + 40);
    r3 = MemoryInline::FlatRead32((r1 + 116));
    r31 = (r31 + 160);
    r4 = MemoryInline::FlatRead32((r1 + 104));
    r3 = (r3 + 1920);
    MemoryInline::FlatWriteRam32((r1 + 116), r3);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 96));
    r3 = (r3 + 1920);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    r3 = (r3 + 1440);
    MemoryInline::FlatWriteRam32((r1 + 112), r3);
    r3 = MemoryInline::FlatRead32((r1 + 108));
    MemoryInline::FlatWriteRam32((r1 + 96), r4);
    r3 = (r3 + 1920);
    MemoryInline::FlatWriteRam32((r1 + 92), r5);
    MemoryInline::FlatWriteRam32((r1 + 108), r3);
}

loc_80067240:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(r0));
}

loc_80067248:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80066EDC;
    }
}

loc_8006724C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 192);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
        r14 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -72));
        r15 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -68));
        r16 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -64));
        r17 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -60));
        r18 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -56));
        r19 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -52));
        r20 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -48));
        r21 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -44));
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 40u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 44u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 48u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 52u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 56u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 60u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 64u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 68u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80066DD0 func_80066DD0 preserves=false fpr_mask=0x80000000
