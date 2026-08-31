#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80078110(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r15_psq_tmp_0 = 0;
    uint32_t r15_psq_tmp_1 = 0;
    uint32_t r15_psq_tmp_10 = 0;
    uint32_t r15_psq_tmp_2 = 0;
    uint32_t r15_psq_tmp_3 = 0;
    uint32_t r15_psq_tmp_4 = 0;
    uint32_t r15_psq_tmp_5 = 0;
    uint32_t r15_psq_tmp_6 = 0;
    uint32_t r15_psq_tmp_7 = 0;
    uint32_t r15_psq_tmp_8 = 0;
    uint32_t r15_psq_tmp_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r7_psq_tmp_0 = 0;
    uint32_t r7_psq_tmp_1 = 0;
    uint32_t r7_psq_tmp_10 = 0;
    uint32_t r7_psq_tmp_11 = 0;
    uint32_t r7_psq_tmp_12 = 0;
    uint32_t r7_psq_tmp_13 = 0;
    uint32_t r7_psq_tmp_14 = 0;
    uint32_t r7_psq_tmp_15 = 0;
    uint32_t r7_psq_tmp_16 = 0;
    uint32_t r7_psq_tmp_17 = 0;
    uint32_t r7_psq_tmp_18 = 0;
    uint32_t r7_psq_tmp_19 = 0;
    uint32_t r7_psq_tmp_2 = 0;
    uint32_t r7_psq_tmp_20 = 0;
    uint32_t r7_psq_tmp_21 = 0;
    uint32_t r7_psq_tmp_22 = 0;
    uint32_t r7_psq_tmp_23 = 0;
    uint32_t r7_psq_tmp_24 = 0;
    uint32_t r7_psq_tmp_25 = 0;
    uint32_t r7_psq_tmp_26 = 0;
    uint32_t r7_psq_tmp_3 = 0;
    uint32_t r7_psq_tmp_4 = 0;
    uint32_t r7_psq_tmp_5 = 0;
    uint32_t r7_psq_tmp_6 = 0;
    uint32_t r7_psq_tmp_7 = 0;
    uint32_t r7_psq_tmp_8 = 0;
    uint32_t r7_psq_tmp_9 = 0;
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];
    [[maybe_unused]] uint32_t mkw_gqr2 = ctx->gqr[2];

    goto loc_80078110;

loc_80078110:
{
    MemoryInline::FlatWriteRam32((r1 + -1456), r1);
    r1 = (r1 + -1456);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1460), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 1440), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 1448);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 1440);
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
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    // inline leaf 0x8004E550 (13 guest instruction(s))
}

loc_inl1_0x8004E550:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x8004E55C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004E568;
    }
}

loc_inl1_0x8004E560:
{
    r3 = (r3 + r0);
    goto loc_inl1_0x8004E56C;
}

loc_inl1_0x8004E568:
{
    r3 = 0;
}

loc_inl1_0x8004E56C:
{
}

loc_inl1_0x8004E570:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004E57C;
    }
}

loc_inl1_0x8004E574:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl1_cont_8004E550;
}

loc_inl1_0x8004E57C:
{
    r3 = 0;
}

loc_inl1_cont_8004E550:
{
    // end of inlined leaf 0x8004E550
    r14 = (r1 + 872);
    r24 = (r1 + 1368);
    r4 = (r24 - r14);
    r23 = r3;
    r5 = (r4 + 15);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29200));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r5) >> 4);
    r20 = (r4 & -2147483648);
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r0 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r19 = (r5 & -2147483648);
    r21 = (r3 + 1);
    r22 = (r1 + 1240);
    r18 = (r3 & -2147483648);
    r31 = 0;
    r17 = (r21 & -2147483648);
    r25 = 0;
    goto loc_800788EC;
}

loc_80078184:
{
    r3 = r26;
    r4 = r31;
    // inline leaf 0x8005D570 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 & 49152);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8005D570
}

loc_80078194:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800788E4;
    }
}

loc_80078198:
{
    r3 = (r1 + 872);
    MemoryInline::FlatWriteRam32((r1 + 840), r25);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r24));
}

loc_800781A4:
{
    MemoryInline::FlatWriteRam32((r1 + 844), r25);
    MemoryInline::FlatWriteRam32((r1 + 848), r25);
    MemoryInline::FlatWriteRam32((r1 + 856), r25);
    MemoryInline::FlatWriteRam32((r1 + 860), r25);
    MemoryInline::FlatWriteRam32((r1 + 864), r25);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800782D8;
    }
}

loc_800781BC:
{
}

loc_800781C0:
{
    if ((static_cast<int32_t>(r21) <= static_cast<int32_t>(8))) {
        goto loc_800782AC;
    }
}

loc_800781C4:
{
}

loc_800781C8:
{
    r0 = 0;
    r4 = 0;
    if ((static_cast<uint32_t>(r14) > static_cast<uint32_t>(r24))) {
        goto loc_800781F8;
    }
}

loc_800781D4:
{
}

loc_800781D8:
{
    r5 = 1;
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_800781EC;
    }
}

loc_800781E0:
{
}

loc_800781E4:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_800781EC;
    }
}

loc_800781E8:
{
    r5 = 0;
}

loc_800781EC:
{
}

loc_800781F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800781F8;
    }
}

loc_800781F4:
{
    r4 = 1;
}

loc_800781F8:
{
}

loc_800781FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80078224;
    }
}

loc_80078200:
{
}

loc_80078204:
{
    r4 = 1;
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_80078218;
    }
}

loc_8007820C:
{
}

loc_80078210:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(r17))) {
        goto loc_80078218;
    }
}

loc_80078214:
{
    r4 = 0;
}

loc_80078218:
{
}

loc_8007821C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80078224;
    }
}

loc_80078220:
{
    r0 = 1;
}

loc_80078224:
{
}

loc_80078228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800782AC;
    }
}

loc_8007822C:
{
    r0 = (r22 + 127);
    r0 = (r0 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_3 & 33554431);
    ctr = r0;
}

loc_80078240:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r22))) {
        goto loc_800782AC;
    }
}

loc_80078244:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 124u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r25);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r25);
    }
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r25);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r25);
    }
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 32), r25);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r3 + 36), r25);
    }
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r3 + 40), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r3 + 48), r25);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r3 + 52), r25);
    }
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r3 + 56), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r3 + 64), r25);
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r3 + 68), r25);
    }
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r3 + 72), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 80u, (r3 + 80), r25);
        MemoryInline::WriteResolved32(guest_range_2, 84u, (r3 + 84), r25);
    }
    MemoryInline::WriteResolved32(guest_range_2, 88u, (r3 + 88), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r3 + 96), r25);
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r3 + 100), r25);
    }
    MemoryInline::WriteResolved32(guest_range_2, 104u, (r3 + 104), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r3 + 112), r25);
        MemoryInline::WriteResolved32(guest_range_2, 116u, (r3 + 116), r25);
    }
    MemoryInline::WriteResolved32(guest_range_2, 120u, (r3 + 120), r25);
    r3 = (r3 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80078244;
    }
}

loc_800782AC:
{
    r0 = (r24 + 15);
    r0 = (r0 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & 268435455);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r24));
}

loc_800782C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800782D8;
    }
}

loc_800782C4:
{
    MemoryInline::FlatWrite32(r3, r25);
    MemoryInline::FlatWrite32((r3 + 4), r25);
    MemoryInline::FlatWrite32((r3 + 8), r25);
    r3 = (r3 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800782C4;
    }
}

loc_800782D8:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r5 = r31;
    r4 = (r1 + 832);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x800782F4u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    mkw_gqr2 = ctx->gqr[2];
    r4 = MemoryInline::FlatRead32(r3);
    r30 = r3;
    r0 = (r4 & 1);
}

loc_80078300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800788E4;
    }
}

loc_80078304:
{
    r0 = (r4 & 2);
}

loc_80078308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078520;
    }
}

loc_8007830C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r16 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead32((r16 + 8));
}

loc_80078324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078330;
    }
}

loc_80078328:
{
    r15 = (r16 + r0);
    goto loc_80078334;
}

loc_80078330:
{
    r15 = 0;
}

loc_80078334:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8007833C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80078364;
    }
}

loc_80078340:
{
    r3 = (r1 + 32);
    r4 = (r1 + 28);
    r5 = (r1 + 10);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80052500u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 568), r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 572), f0.d);
}

loc_80078364:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r5 = (r1 + 568);
    r3 = r30;
    r7 = 0;
    r5 = (r5 + r0);
    goto loc_800783C4;
}

loc_80078380:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80078388:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800783BC;
    }
}

loc_8007838C:
{
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead32((r6 + 8));
}

loc_80078398:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800783A4;
    }
}

loc_8007839C:
{
    r0 = (r6 + r0);
    goto loc_800783A8;
}

loc_800783A4:
{
    r0 = 0;
}

loc_800783A8:
{
    MemoryInline::FlatWrite32(r5, r0);
    r4 = (r4 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    r5 = (r5 + 8);
}

loc_800783BC:
{
    r3 = (r3 + 16);
    r7 = (r7 + 1);
}

loc_800783C4:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_800783CC:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_80078380;
    }
}

loc_800783D0:
{
    r5 = MemoryInline::FlatRead32((r1 + 32));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3 = (r1 + 568);
    r4 = MemoryInline::FlatRead16((r5 + 30));
    r3 = (r3 + r0);
    r4 = (r4 * 12);
    r8 = (r15 + r4);
    goto loc_800784FC;
}

loc_800783F0:
{
    r7 = MemoryInline::FlatRead32((r1 + 568));
    r5 = (r1 + 576);
    r6 = (r3 + 7);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 572));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r6 = (r6 - r5);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_3 = (r7 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_3));
    r0 = (r7 + 12);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_80078414:
{
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    MemoryInline::FlatWriteRam32((r1 + 568), r0);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_3 & 536870911);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800784F0;
    }
}

loc_80078428:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r0 = (r0_rot_10 & 1073741823);
}

loc_8007842C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800784C4;
    }
}

loc_80078434:
{
    r7 = MemoryInline::FlatRead32(r5);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r0 = (r7 + 12);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_5 = (r7 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    MemoryInline::FlatWrite32(r5, r0);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r7 = MemoryInline::FlatRead32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r0 = (r7 + 12);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_6 = (r7 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_6));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    MemoryInline::FlatWrite32((r5 + 8), r0);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r7 = MemoryInline::FlatRead32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 20));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r0 = (r7 + 12);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_7 = (r7 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_7));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    MemoryInline::FlatWrite32((r5 + 16), r0);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r7 = MemoryInline::FlatRead32((r5 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 28));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r0 = (r7 + 12);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_8 = (r7 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_8));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    MemoryInline::FlatWrite32((r5 + 24), r0);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80078434;
    }
}

loc_800784BC:
{
    r6 = (r6 & 3);
}

loc_800784C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_800784F0;
    }
}

loc_800784C4:
{
    ctr = r6;
}

loc_800784C8:
{
    r7 = MemoryInline::FlatRead32(r5);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r0 = (r7 + 12);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_11 = (r7 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_11));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    MemoryInline::FlatWrite32(r5, r0);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800784C8;
    } else {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
    }
}

loc_800784F0:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r15, f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r15_psq_tmp_3 = (r15 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r15_psq_tmp_3, f1.d);
    r15 = (r15 + 12);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_800784FC:
{
}

loc_80078500:
{
    if ((static_cast<uint32_t>(r15) < static_cast<uint32_t>(r8))) {
        goto loc_800783F0;
    }
}

loc_80078504:
{
    r0 = MemoryInline::FlatRead32((r16 + 8));
}

loc_8007850C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078518;
    }
}

loc_80078510:
{
    r3 = (r16 + r0);
    goto loc_8007851C;
}

loc_80078518:
{
    r3 = 0;
}

loc_8007851C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A165Cu>(ctx);
}

loc_80078520:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 4);
}

loc_80078528:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078750;
    }
}

loc_8007852C:
{
}

loc_80078530:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80078750;
    }
}

loc_80078534:
{
    r4 = MemoryInline::FlatRead32((r30 + 12));
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r28_addr_2 = (r28 + r0);
    r16 = MemoryInline::FlatRead32(r28_addr_2);
    r0 = MemoryInline::FlatRead32((r16 + 8));
}

loc_80078554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078560;
    }
}

loc_80078558:
{
    r15 = (r16 + r0);
    goto loc_80078564;
}

loc_80078560:
{
    r15 = 0;
}

loc_80078564:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8007856C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80078594;
    }
}

loc_80078570:
{
    r3 = (r1 + 24);
    r4 = (r1 + 20);
    r5 = (r1 + 9);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800525E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = 1;
    MemoryInline::FlatWriteRam32((r1 + 304), r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 308), f0.d);
}

loc_80078594:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & -8);
    r5 = (r1 + 304);
    r4 = r30;
    r7 = 0;
    r5 = (r5 + r0);
    goto loc_800785F4;
}

loc_800785B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_800785B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800785EC;
    }
}

loc_800785BC:
{
    r6 = MemoryInline::FlatRead32((r4 + 28));
    r0 = MemoryInline::FlatRead32((r6 + 8));
}

loc_800785C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800785D4;
    }
}

loc_800785CC:
{
    r0 = (r6 + r0);
    goto loc_800785D8;
}

loc_800785D4:
{
    r0 = 0;
}

loc_800785D8:
{
    MemoryInline::FlatWrite32(r5, r0);
    r3 = (r3 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    r5 = (r5 + 8);
}

loc_800785EC:
{
    r4 = (r4 + 16);
    r7 = (r7 + 1);
}

loc_800785F4:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_800785FC:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_800785B0;
    }
}

loc_80078600:
{
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_15 & -8);
    r3 = (r1 + 304);
    r4 = MemoryInline::FlatRead16((r4 + 30));
    r3 = (r3 + r0);
    r4 = (r4 * 12);
    r8 = (r15 + r4);
    goto loc_8007872C;
}

loc_80078620:
{
    r7 = MemoryInline::FlatRead32((r1 + 304));
    r5 = (r1 + 312);
    r6 = (r3 + 7);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 308));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r6 = (r6 - r5);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_15 = (r7 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_15));
    r0 = (r7 + 12);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_80078644:
{
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    MemoryInline::FlatWriteRam32((r1 + 304), r0);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_6 & 536870911);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80078720;
    }
}

loc_80078658:
{
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r0 = (r0_rot_17 & 1073741823);
}

loc_8007865C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800786F4;
    }
}

loc_80078664:
{
    r7 = MemoryInline::FlatRead32(r5);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r0 = (r7 + 12);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_17 = (r7 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_17));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    MemoryInline::FlatWrite32(r5, r0);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r7 = MemoryInline::FlatRead32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r0 = (r7 + 12);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_18 = (r7 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_18));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    MemoryInline::FlatWrite32((r5 + 8), r0);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r7 = MemoryInline::FlatRead32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 20));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r0 = (r7 + 12);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_19 = (r7 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_19));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    MemoryInline::FlatWrite32((r5 + 16), r0);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r7 = MemoryInline::FlatRead32((r5 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 28));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r0 = (r7 + 12);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_20 = (r7 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_20));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    MemoryInline::FlatWrite32((r5 + 24), r0);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80078664;
    }
}

loc_800786EC:
{
    r6 = (r6 & 3);
}

loc_800786F0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80078720;
    }
}

loc_800786F4:
{
    ctr = r6;
}

loc_800786F8:
{
    r7 = MemoryInline::FlatRead32(r5);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    r0 = (r7 + 12);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_23 = (r7 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_23));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    MemoryInline::FlatWrite32(r5, r0);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800786F8;
    } else {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
    }
}

loc_80078720:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r15, f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r15_psq_tmp_6 = (r15 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r15_psq_tmp_6, f1.d);
    r15 = (r15 + 12);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_8007872C:
{
}

loc_80078730:
{
    if ((static_cast<uint32_t>(r15) < static_cast<uint32_t>(r8))) {
        goto loc_80078620;
    }
}

loc_80078734:
{
    r0 = MemoryInline::FlatRead32((r16 + 8));
}

loc_8007873C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078748;
    }
}

loc_80078740:
{
    r3 = (r16 + r0);
    goto loc_8007874C;
}

loc_80078748:
{
    r3 = 0;
}

loc_8007874C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A165Cu>(ctx);
}

loc_80078750:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 8);
}

loc_80078758:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800788E4;
    }
}

loc_8007875C:
{
}

loc_80078760:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800788E4;
    }
}

loc_80078764:
{
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r29_addr_2 = (r29 + r0);
    r16 = MemoryInline::FlatRead32(r29_addr_2);
    r0 = MemoryInline::FlatRead32((r16 + 8));
}

loc_80078784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078790;
    }
}

loc_80078788:
{
    r15 = (r16 + r0);
    goto loc_80078794;
}

loc_80078790:
{
    r15 = 0;
}

loc_80078794:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8007879C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800787C4;
    }
}

loc_800787A0:
{
    r3 = (r1 + 16);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800526C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = 1;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
}

loc_800787C4:
{
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_21 & -8);
    r5 = (r1 + 40);
    r4 = r30;
    r7 = 0;
    r5 = (r5 + r0);
    goto loc_80078824;
}

loc_800787E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_800787E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007881C;
    }
}

loc_800787EC:
{
    r6 = MemoryInline::FlatRead32((r4 + 32));
    r0 = MemoryInline::FlatRead32((r6 + 8));
}

loc_800787F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078804;
    }
}

loc_800787FC:
{
    r0 = (r6 + r0);
    goto loc_80078808;
}

loc_80078804:
{
    r0 = 0;
}

loc_80078808:
{
    MemoryInline::FlatWrite32(r5, r0);
    r3 = (r3 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    r5 = (r5 + 8);
}

loc_8007881C:
{
    r4 = (r4 + 16);
    r7 = (r7 + 1);
}

loc_80078824:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_8007882C:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_800787E0;
    }
}

loc_80078830:
{
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_22 & -8);
    r3 = (r1 + 40);
    r4 = MemoryInline::FlatRead16((r4 + 30));
    r3 = (r3 + r0);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r6 = (r15 + r4);
    goto loc_800788C0;
}

loc_80078850:
{
    r5 = MemoryInline::FlatRead32((r1 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    // psq_load w=0 quant=2 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 2u>(ctx, mkw_gqr2, r5));
    // psq_load w=0 quant=2 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 2);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 2u>(ctx, mkw_gqr2, r5_psq_tmp_3));
    r7 = (r1 + 48);
    r0 = (r3 + 7);
    r5 = (r5 + 4);
    r0 = (r0 - r7);
    MemoryInline::FlatWriteRam32((r1 + 40), r5);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_24 & 536870911);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    ctr = r0;
}

loc_80078888:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r3))) {
        goto loc_800788B4;
    }
}

loc_8007888C:
{
    r5 = MemoryInline::FlatRead32(r7);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 4));
    // psq_load w=0 quant=2 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 2u>(ctx, mkw_gqr2, r5));
    // psq_load w=0 quant=2 (using PPC_PsqL)
    r5_psq_tmp_5 = (r5 + 2);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 2u>(ctx, mkw_gqr2, r5_psq_tmp_5));
    r0 = (r5 + 4);
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f2.d), f0.d));
    MemoryInline::FlatWrite32(r7, r0);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f4.d, PPC_PsFromScalarInline(f2.d), f1.d));
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8007888C;
    } else {
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
    }
}

loc_800788B4:
{
    // psq_store w=0 quant=2 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 2u>(ctx, mkw_gqr2, r15, f0.d);
    // psq_store w=0 quant=2 (using PPC_PsqSt)
    r15_psq_tmp_9 = (r15 + 2);
    PPC_PsqStGqrInline<0u, 2u>(ctx, mkw_gqr2, r15_psq_tmp_9, f1.d);
    r15 = (r15 + 4);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_800788C0:
{
}

loc_800788C4:
{
    if ((static_cast<uint32_t>(r15) < static_cast<uint32_t>(r6))) {
        goto loc_80078850;
    }
}

loc_800788C8:
{
    r0 = MemoryInline::FlatRead32((r16 + 8));
}

loc_800788D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800788DC;
    }
}

loc_800788D4:
{
    r3 = (r16 + r0);
    goto loc_800788E0;
}

loc_800788DC:
{
    r3 = 0;
}

loc_800788E0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A165Cu>(ctx);
}

loc_800788E4:
{
    r27 = (r27 + 4);
    r31 = (r31 + 1);
}

loc_800788EC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r23));
}

loc_800788F0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80078184;
    }
}

loc_800788F4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 1440);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 1440));
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 1460));
    ctx->lr = r0;
    r1 = (r1 + 1456);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80078110 func_80078110 preserves=false fpr_mask=0x80000000
