#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80184874(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_14 = 0;
    uint32_t r4_rot_15 = 0;
    uint32_t r4_rot_16 = 0;
    uint32_t r4_rot_17 = 0;
    uint32_t r4_rot_18 = 0;
    uint32_t r4_rot_19 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_20 = 0;
    uint32_t r4_rot_21 = 0;
    uint32_t r4_rot_22 = 0;
    uint32_t r4_rot_23 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_15 = 0;
    uint32_t r5_rot_16 = 0;
    uint32_t r5_rot_17 = 0;
    uint32_t r5_rot_18 = 0;
    uint32_t r5_rot_19 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_20 = 0;
    uint32_t r5_rot_21 = 0;
    uint32_t r5_rot_22 = 0;
    uint32_t r5_rot_23 = 0;
    uint32_t r5_rot_24 = 0;
    uint32_t r5_rot_25 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_15 = 0;
    uint32_t r6_rot_16 = 0;
    uint32_t r6_rot_17 = 0;
    uint32_t r6_rot_18 = 0;
    uint32_t r6_rot_19 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_13 = 0;
    uint32_t r7_rot_14 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80184874;

loc_80184874:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 256);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r26 = r3;
    r28 = r4;
    r27 = r5;
    r30 = 1;
    r23 = 0;
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017054Cu>(ctx);
    r3 = MemoryInline::FlatRead32((r26 + 76));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 1);
}

loc_801848BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80184960;
    }
}

loc_801848C0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 15);
    r7 = MemoryInline::FlatRead32((r26 + 88));
    r0 = (r0 * 20);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r5 = (r5_rot_0 & 60);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r4 = (r4_rot_0 & 480);
    r3 = 0;
    r6 = (r5 + r4);
    r4 = 0;
    r0 = (r7 + r0);
    r5 = 0;
    r24 = (r6 + r0);
    r6_addr_0 = (r6 + r0);
    r6 = MemoryInline::FlatRead8(r6_addr_0);
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170570u>(ctx);
    r6 = MemoryInline::FlatRead8((r24 + 1));
    r3 = 2;
    r4 = 0;
    r5 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170570u>(ctx);
    r3 = MemoryInline::FlatRead8(r24);
    r30 = 1;
}

loc_8018492C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80184940;
    }
}

loc_80184930:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_80184938:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80184940;
    }
}

loc_8018493C:
{
    r30 = 0;
}

loc_80184940:
{
}

loc_80184944:
{
    r23 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80184958;
    }
}

loc_8018494C:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_80184954:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80184980;
    }
}

loc_80184958:
{
    r23 = 1;
    goto loc_80184980;
}

loc_80184960:
{
    r3 = 4;
    r4 = 0;
    r5 = 0;
    r6 = 1;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170570u>(ctx);
}

loc_80184980:
{
}

loc_80184984:
{
    r29 = 0;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8018499C;
    }
}

loc_8018498C:
{
}

loc_80184990:
{
    r29 = 1;
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8018499C;
    }
}

loc_80184998:
{
    r29 = 0;
}

loc_8018499C:
{
}

loc_801849A0:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80184A74;
    }
}

loc_801849A4:
{
    r5 = MemoryInline::FlatRead32((r26 + 76));
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(25));
    r0 = (r0_rot_3 & 1);
}

loc_801849B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80184A00;
    }
}

loc_801849B8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & 15);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r4 = (r4_rot_3 & 60);
    r3 = (r0 * 20);
    r6 = MemoryInline::FlatRead32((r26 + 88));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(9));
    r0 = (r0_rot_5 & 480);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(26));
    r5 = (r5_rot_3 & 4);
    r0 = (r4 + r0);
    r3 = (r5 + r3);
    r0 = (r6 + r0);
    r6 = (r3 + r0);
    r3_addr_1 = (r3 + r0);
    r5 = MemoryInline::FlatRead8(r3_addr_1);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 51), static_cast<uint8_t>(r0));
}

loc_80184A00:
{
    r0 = MemoryInline::FlatRead32((r1 + 48));
    r5 = r27;
    r3 = (r1 + 36);
    r4 = (r1 + 40);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    // inline leaf 0x80180AA0 (21 guest instruction(s))
}

loc_inl1_0x80180AA0:
{
    r8 = MemoryInline::FlatRead8(r4);
}

loc_inl1_0x80180AA8:
{
    r7 = MemoryInline::FlatRead8((r4 + 1));
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80180AC8:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r4 = 0x80810000u;
    r4 = (r4 + -32639);
    r0 = (r0 * r5);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r4 + r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 7);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80180AA0;
}

loc_inl1_return:
{
}

loc_inl1_cont_80180AA0:
{
    // end of inlined leaf 0x80180AA0
    r7 = MemoryInline::FlatRead8((r1 + 36));
    r4 = (r1 + 32);
    r6 = MemoryInline::FlatRead8((r1 + 37));
    r3 = 4;
    r5 = MemoryInline::FlatRead8((r1 + 38));
    r0 = MemoryInline::FlatRead8((r1 + 39));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 20u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 16u, (r1 + 48), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 17u, (r1 + 49), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 18u, (r1 + 50), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 19u, (r1 + 51), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 32), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 33), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r1 + 34), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r1 + 35), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170474u>(ctx);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80184A58:
{
    r29 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80184A70;
    }
}

loc_80184A60:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r3 + 65536);
}

loc_80184A6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80184A74;
    }
}

loc_80184A70:
{
    r29 = 1;
}

loc_80184A74:
{
    r31 = 0;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r1 + 92), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r1 + 93), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r1 + 94), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r1 + 95), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r1 + 96), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r1 + 97), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r1 + 98), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r1 + 99), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r1 + 100), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r1 + 101), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r3 = (r3_rot_0 & 15);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016E5A4u>(ctx);
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_8 & 15);
}

loc_80184AB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80184B48;
    }
}

loc_80184AB8:
{
    r4 = MemoryInline::FlatRead32((r26 + 76));
    r3 = -1431633920;
    r5 = MemoryInline::FlatRead32((r26 + 88));
    r27 = (r1 + 92);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_9 & 15);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r4 = (r4_rot_8 & 480);
    r0 = (r0 * 20);
    r25 = (r3 + -21845);
    r28 = 0;
    r24 = 1;
    r0 = (r5 + r0);
    r23 = (r4 + r0);
    goto loc_80184B38;
}

loc_80184AEC:
{
    r0 = MemoryInline::FlatRead8(r23);
    r6 = MemoryInline::FlatRead8((r23 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80184AF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80184B18;
    }
}

loc_80184AFC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(60));
}

loc_80184B00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80184B18;
    }
}

loc_80184B04:
{
    r0 = (r6 + -30);
    r31 = 1;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r25) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_12 & 2147483647);
    r27_addr_2 = (r27 + r0);
    MemoryInline::FlatWrite8(r27_addr_2, static_cast<uint8_t>(r24));
}

loc_80184B18:
{
    r4 = MemoryInline::FlatRead8(r23);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r23 + 1));
    r7 = 0;
    r8 = 125;
    ctx->lr = 0x80184B30u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016E37Cu>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r23 = (r23 + 4);
    r28 = (r28 + 1);
}

loc_80184B38:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_11 & 15);
}

loc_80184B44:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_80184AEC;
    }
}

loc_80184B48:
{
}

loc_80184B4C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80184BC0;
    }
}

loc_80184B50:
{
    r0 = MemoryInline::FlatRead32((r26 + 76));
    r27 = (r1 + 92);
    r3 = MemoryInline::FlatRead32((r26 + 88));
    r28 = 0;
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r0 = (r0_rot_15 & 480);
    r23 = (r3 + r0);
    goto loc_80184BAC;
}

loc_80184B6C:
{
    r3 = (r28 & 255);
    r27_addr_6 = (r27 + r3);
    r0 = MemoryInline::FlatRead8(r27_addr_6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80184B78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80184BA8;
    }
}

loc_80184B7C:
{
    r0 = (r3 * 20);
    r3 = (r1 + 160);
    r4 = (r23 + r0);
    ctx->lr = 0x80184B8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801825B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r28 & 255);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & 1020);
    r4 = (r0 - r3);
    r5 = 1;
    r3 = (r1 + 160);
    r4 = (r4 + 30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80173234u>(ctx);
}

loc_80184BA8:
{
    r28 = (r28 + 1);
}

loc_80184BAC:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r3 = (r28 & 255);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_17 & 15);
}

loc_80184BBC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80184B6C;
    }
}

loc_80184BC0:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_21 & 15);
}

loc_80184BC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80184C98;
    }
}

loc_80184BCC:
{
    r31 = MemoryInline::FlatRead32((r26 + 88));
    r28 = 0;
    r27 = 0;
    goto loc_80184C88;
}

loc_80184BDC:
{
    guest_range_5 = MemoryInline::ResolveRangeHost(r31, 0, 32u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_5, 0u, r31);
    r3 = (r1 + 128);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r31 + 4));
    MemoryInline::FlatWriteRam32((r1 + 128), r4);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r31 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r31 + 12));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 136), r4);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r31 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r31 + 20));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 144), r4);
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r31 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r31 + 28));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 152), r4);
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    // inline leaf 0x80170C90 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80170C90
    r0 = (r3 + -8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80184C2C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80184C74;
    }
}

loc_80184C30:
{
    r3 = (r1 + 128);
    // inline leaf 0x80170BF0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80170BF0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80184C3C:
{
    r6 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80184C74;
    }
}

loc_80184C44:
{
    r4 = MemoryInline::FlatRead32((r6 + 8));
    r3 = (r1 + 80);
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = MemoryInline::FlatRead16(r6);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170F80u>(ctx);
    r4 = r28;
    r3 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170FA8u>(ctx);
    r4 = r28;
    r3 = (r1 + 128);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170B64u>(ctx);
    r28 = (r28 + 1);
}

loc_80184C74:
{
    r4 = r27;
    r3 = (r1 + 128);
    ctx->lr = 0x80184C80u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170F2Cu>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + 32);
    r27 = (r27 + 1);
}

loc_80184C88:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_23 & 15);
}

loc_80184C94:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r0))) {
        goto loc_80184BDC;
    }
}

loc_80184C98:
{
    r5 = MemoryInline::FlatRead16((r26 + 36));
    r4 = (r1 + 72);
    r0 = MemoryInline::FlatRead16((r26 + 38));
    r3 = 1;
    MemoryInline::FlatWriteRam16((r1 + 72), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r26 + 40));
    r0 = MemoryInline::FlatRead16((r26 + 42));
    MemoryInline::FlatWriteRam16((r1 + 76), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 78), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171E70u>(ctx);
    r5 = MemoryInline::FlatRead16((r26 + 44));
    r4 = (r1 + 64);
    r0 = MemoryInline::FlatRead16((r26 + 46));
    r3 = 2;
    MemoryInline::FlatWriteRam16((r1 + 64), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 66), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r26 + 48));
    r0 = MemoryInline::FlatRead16((r26 + 50));
    MemoryInline::FlatWriteRam16((r1 + 68), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 70), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171E70u>(ctx);
    r5 = MemoryInline::FlatRead16((r26 + 52));
    r4 = (r1 + 56);
    r0 = MemoryInline::FlatRead16((r26 + 54));
    r3 = 3;
    MemoryInline::FlatWriteRam16((r1 + 56), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r26 + 56));
    r0 = MemoryInline::FlatRead16((r26 + 58));
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 62), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171E70u>(ctx);
    r0 = MemoryInline::FlatRead8((r26 + 60));
    r4 = (r1 + 28);
    r3 = 0;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 61));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 62));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 63));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r0 = MemoryInline::FlatRead8((r26 + 64));
    r4 = (r1 + 24);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 65));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 66));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 67));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r0 = MemoryInline::FlatRead8((r26 + 68));
    r4 = (r1 + 20);
    r3 = 2;
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 69));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 70));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 71));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r0 = MemoryInline::FlatRead8((r26 + 72));
    r4 = (r1 + 16);
    r3 = 3;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 73));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 74));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 75));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r8 = MemoryInline::FlatRead32((r26 + 76));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(18));
    r0 = (r0_rot_25 & 1);
}

loc_80184DD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80184E3C;
    }
}

loc_80184DD8:
{
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r0 = (r0_rot_26 & 15);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(27));
    r6 = (r6_rot_0 & 4);
    r4 = (r0 * 20);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(26));
    r5 = (r5_rot_6 & 4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(14));
    r3 = (r3_rot_1 & 60);
    r7 = MemoryInline::FlatRead32((r26 + 88));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(9));
    r0 = (r0_rot_27 & 480);
    r3 = (r3 + r0);
    r0 = (r6 + r5);
    r23 = 0;
    r3 = (r4 + r3);
    r0 = (r7 + r0);
    r27 = (r3 + r0);
}

loc_80184E0C:
{
    r0 = MemoryInline::FlatRead8(r27);
    r3 = r23;
    r4 = (r0 & 3);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r5 = (r5_rot_8 & 3);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r6 = (r6_rot_2 & 3);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r7 = (r7_rot_2 & 3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017200Cu>(ctx);
    r23 = (r23 + 1);
    r27 = (r27 + 1);
}

loc_80184E34:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(4))) {
        goto loc_80184E0C;
    }
}

loc_80184E38:
{
    goto loc_80184E9C;
}

loc_80184E3C:
{
    r3 = 0;
    r4 = 0;
    r5 = 1;
    r6 = 2;
    r7 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017200Cu>(ctx);
    r3 = 1;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017200Cu>(ctx);
    r3 = 2;
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017200Cu>(ctx);
    r3 = 3;
    r4 = 2;
    r5 = 2;
    r6 = 2;
    r7 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017200Cu>(ctx);
}

loc_80184E9C:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r27 = 0;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r27));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r3 = (r3_rot_3 & 31);
}

loc_80184EAC:
{
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r27));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80185080;
    }
}

loc_80184EB8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801722A8u>(ctx);
    r9 = MemoryInline::FlatRead32((r26 + 76));
    r29 = (r1 + 44);
    r10 = MemoryInline::FlatRead32((r26 + 88));
    r28 = 0;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r3 = (r3_rot_4 & 3);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r0 = (r0_rot_29 & 15);
    r0 = (r3 + r0);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r5 = (r5_rot_10 & 4);
    r8 = (r0 * 20);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 4);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r0 = (r0_rot_30 & 4);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r7 = (r7_rot_4 & 480);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r6 = (r6_rot_5 & 60);
    r0 = (r3 + r0);
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r4 = (r4_rot_10 & 4);
    r5 = (r8 + r5);
    r0 = (r4 + r0);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r3 = (r3_rot_6 & 4);
    r6 = (r7 + r6);
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(19));
    r4 = (r4_rot_11 & 28);
    r3 = (r3 + r0);
    r31 = 1;
    r0 = (r6 + r5);
    r3 = (r4 + r3);
    r0 = (r10 + r0);
    r25 = (r3 + r0);
    goto loc_80185068;
}

loc_80184F28:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r25 + 2));
    r4 = MemoryInline::FlatRead8(r25);
    r5_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5_mrot_2 = (r5_rot_12 & 256);
    r5_mdest_2 = (r5 & -257);
    r5 = (r5_mdest_2 | r5_mrot_2);
    r6 = MemoryInline::FlatRead8((r25 + 1));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r3 = r28;
    r4_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r4 = (r4_rot_13 & 3);
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r5 = (r5_rot_13 & 3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171FD0u>(ctx);
    r0 = MemoryInline::FlatRead8((r25 + 5));
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r25 + 4));
    r6 = (r0 & 15);
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r7 = (r7_rot_6 & 15);
    r4 = (r5 & 15);
    r5_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r5 = (r5_rot_14 & 15);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r6 = MemoryInline::FlatRead8((r25 + 6));
    r3 = r28;
    r0 = MemoryInline::FlatRead8((r25 + 7));
    r4 = (r6 & 15);
    r5_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r5 = (r5_rot_15 & 3);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r6 = (r6_rot_7 & 3);
    r7 = (r0 & 1);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r8 = (r8_rot_2 & 3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171D60u>(ctx);
    r0 = MemoryInline::FlatRead8((r25 + 7));
    r3 = r28;
    r4_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_14 & 31);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171F30u>(ctx);
    r0 = MemoryInline::FlatRead8((r25 + 9));
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r25 + 8));
    r6 = (r0 & 15);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r7 = (r7_rot_7 & 15);
    r4 = (r5 & 15);
    r5_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r5 = (r5_rot_16 & 15);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r6 = MemoryInline::FlatRead8((r25 + 10));
    r3 = r28;
    r0 = MemoryInline::FlatRead8((r25 + 11));
    r4 = (r6 & 15);
    r5_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r5 = (r5_rot_17 & 3);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r6 = (r6_rot_8 & 3);
    r7 = (r0 & 1);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r8 = (r8_rot_3 & 3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171DB8u>(ctx);
    r0 = MemoryInline::FlatRead8((r25 + 11));
    r3 = r28;
    r4_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_15 & 31);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171F80u>(ctx);
    r10 = MemoryInline::FlatRead8((r25 + 15));
    r3 = r28;
    r6 = MemoryInline::FlatRead8((r25 + 13));
    r9 = MemoryInline::FlatRead8((r25 + 14));
    r4_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r4 = (r4_rot_16 & 1);
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r24 = (r24_rot_2 & 15);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r0 = (r0_rot_33 & 3);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r5 = (r10 & 3);
    r8 = (r9 & 7);
    r7 = r24;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r6 = (r6 & 7);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_2 & 7);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(30));
    r10 = (r10_rot_2 & 1);
    r4 = MemoryInline::FlatRead8((r25 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->xer = xer;
    InvokeDirectCpu<0x801717ACu>(ctx);
}

loc_80185048:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(1))) {
        goto loc_80185060;
    }
}

loc_8018504C:
{
}

loc_80185050:
{
    if ((static_cast<int32_t>(r24) > static_cast<int32_t>(3))) {
        goto loc_80185060;
    }
}

loc_80185054:
{
    r3 = (r29 + r24);
    r27 = 1;
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r31));
}

loc_80185060:
{
    r25 = (r25 + 16);
    r28 = (r28 + 1);
}

loc_80185068:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_32 & 31);
}

loc_80185074:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_80184F28;
    }
}

loc_80185078:
{
    r29 = 1;
    goto loc_8018544C;
}

loc_80185080:
{
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_34 & 15);
}

loc_80185084:
{
    r28 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801850DC;
    }
}

loc_8018508C:
{
    r3 = 0;
    r4 = 255;
    r5 = 255;
    r6 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = 0;
    r4 = 15;
    r5 = 4;
    r6 = 10;
    r7 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = 0;
    r4 = 7;
    r5 = 2;
    r6 = 5;
    r7 = 7;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r29 = 1;
    r28 = 1;
    goto loc_801853D4;
}

loc_801850DC:
{
}

loc_801850E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80185130;
    }
}

loc_801850E4:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = 0;
    r4 = 2;
    r5 = 4;
    r6 = 8;
    r7 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = 0;
    r4 = 1;
    r5 = 2;
    r6 = 4;
    r7 = 7;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r28 = 1;
    goto loc_80185380;
}

loc_80185130:
{
}

loc_80185134:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801851E8;
    }
}

loc_80185138:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = 0;
    r4 = 15;
    r5 = 15;
    r6 = 15;
    r7 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = 0;
    r4 = 7;
    r5 = 7;
    r6 = 7;
    r7 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r3 = 1;
    r4 = 1;
    r5 = 1;
    r6 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = 1;
    r4 = 8;
    r5 = 0;
    r6 = 14;
    r7 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = 1;
    r4 = 4;
    r5 = 0;
    r6 = 6;
    r7 = 7;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r4 = 0x80290000u;
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + -17064));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171F30u>(ctx);
    r4 = 0x80290000u;
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + -17032));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171F80u>(ctx);
    r28 = 2;
    goto loc_8018529C;
}

loc_801851E8:
{
    r24 = 0x80290000u;
    r25 = 0x80290000u;
    r24 = (r24 + -17064);
    r23 = 0;
    r25 = (r25 + -17032);
    goto loc_8018528C;
}

loc_80185200:
{
    r22 = (r28 & 255);
    r4 = r23;
    r3 = r22;
    r5 = r23;
    r6 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017214Cu>(ctx);
}

loc_8018521C:
{
    r7 = 0;
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_80185228;
    }
}

loc_80185224:
{
    r7 = 15;
}

loc_80185228:
{
}

loc_8018522C:
{
    r31 = 0;
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_80185238;
    }
}

loc_80185234:
{
    r31 = 7;
}

loc_80185238:
{
    r3 = r22;
    r4 = 15;
    r5 = 8;
    r6 = 14;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = r22;
    r7 = r31;
    r4 = 7;
    r5 = 4;
    r6 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r4 = MemoryInline::FlatRead32(r24);
    r3 = r22;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171F30u>(ctx);
    r4 = MemoryInline::FlatRead32(r25);
    r3 = r22;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171F80u>(ctx);
    r28 = (r28 + 1);
    r24 = (r24 + 4);
    r25 = (r25 + 4);
    r23 = (r23 + 1);
}

loc_8018528C:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_36 & 15);
}

loc_80185298:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r0))) {
        goto loc_80185200;
    }
}

loc_8018529C:
{
    r3 = 0x80250000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r26 + 36), 0, 16u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r26 + 36));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 11048));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = 0;
}

loc_801852B0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_801852EC;
    }
}

loc_801852B4:
{
    r4 = (r3 + 11048);
    r3 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r26 + 38));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801852C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_801852EC;
    }
}

loc_801852C8:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r26 + 40));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801852D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_801852EC;
    }
}

loc_801852D8:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r26 + 42));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801852E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_801852EC;
    }
}

loc_801852E8:
{
    r5 = 1;
}

loc_801852EC:
{
}

loc_801852F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80185334;
    }
}

loc_801852F4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r26 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = 0;
}

loc_80185300:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8018532C;
    }
}

loc_80185304:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r26 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8018530C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8018532C;
    }
}

loc_80185310:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r26 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80185318:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8018532C;
    }
}

loc_8018531C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r26 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80185324:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8018532C;
    }
}

loc_80185328:
{
    r3 = 1;
}

loc_8018532C:
{
}

loc_80185330:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80185380;
    }
}

loc_80185334:
{
    r22 = (r28 & 255);
    r4 = 255;
    r3 = r22;
    r5 = 255;
    r6 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = r22;
    r4 = 2;
    r5 = 4;
    r6 = 0;
    r7 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = r22;
    r4 = 1;
    r5 = 2;
    r6 = 0;
    r7 = 7;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r28 = (r28 + 1);
}

loc_80185380:
{
}

loc_80185384:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801853D4;
    }
}

loc_80185388:
{
    r22 = (r28 & 255);
    r4 = 255;
    r3 = r22;
    r5 = 255;
    r6 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = r22;
    r4 = 15;
    r5 = 0;
    r6 = 10;
    r7 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = r22;
    r4 = 7;
    r5 = 0;
    r6 = 5;
    r7 = 7;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r28 = (r28 + 1);
}

loc_801853D4:
{
    r22 = (r28 & 255);
    r23 = 0;
    goto loc_80185438;
}

loc_801853E0:
{
    r24 = (r23 & 255);
    r4 = 0;
    r3 = r24;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171D60u>(ctx);
    r3 = r24;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171DB8u>(ctx);
    r3 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171B58u>(ctx);
    r3 = r24;
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171FD0u>(ctx);
    r23 = (r23 + 1);
}

loc_80185438:
{
    r0 = (r23 & 255);
}

loc_80185440:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_801853E0;
    }
}

loc_80185444:
{
    r3 = r22;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801722A8u>(ctx);
}

loc_8018544C:
{
}

loc_80185450:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80185550;
    }
}

loc_80185454:
{
    r9 = MemoryInline::FlatRead32((r26 + 76));
    r3 = 0x80250000u;
    f30.d = MemoryInline::FlatReadFloat32((r3 + 11068));
    r31 = (r1 + 44);
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r0 = (r0_rot_41 & 15);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r8 = (r8_rot_5 & 4);
    r5 = (r0 * 20);
    r4_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r4 = (r4_rot_18 & 4);
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r7 = (r7_rot_9 & 4);
    r11 = MemoryInline::FlatRead32((r26 + 88));
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r6 = (r6_rot_10 & 4);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r3 = (r3_rot_8 & 60);
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r0 = (r0_rot_42 & 480);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(19));
    r10 = (r10_rot_4 & 28);
    r3 = (r3 + r0);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_4 & 4);
    r0 = (r10 + r9);
    r6 = (r7 + r6);
    r4 = (r8 + r4);
    r3 = (r5 + r3);
    r4 = (r6 + r4);
    r0 = (r11 + r0);
    r3 = (r4 + r3);
    r27 = 0;
    r24 = (r3 + r0);
    goto loc_80185540;
}

loc_801854BC:
{
    r0 = MemoryInline::FlatRead8(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801854C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80185534;
    }
}

loc_801854C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8018AAA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f31.d = f1.d;
    f1.d = PpcFmulsInline(f30.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8018AA30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f2.d = (-(f1.d));
    r3 = (r27 + 1);
    r4 = (r1 + 104);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 16));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r24);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 16));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    ctx->lr = 0x80185534u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801826CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80185534:
{
    r31 = (r31 + 1);
    r24 = (r24 + 20);
    r27 = (r27 + 1);
}

loc_80185540:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_44 & 3);
}

loc_8018554C:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r0))) {
        goto loc_801854BC;
    }
}

loc_80185550:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_10 & 7);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171B38u>(ctx);
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_46 & 7);
}

loc_80185564:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801855F4;
    }
}

loc_80185568:
{
    r9 = MemoryInline::FlatRead32((r26 + 76));
    r27 = 0;
    r10 = MemoryInline::FlatRead32((r26 + 88));
    r0_rot_47 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r0 = (r0_rot_47 & 15);
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r8 = (r8_rot_7 & 4);
    r4 = (r0 * 20);
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r6 = (r6_rot_12 & 4);
    r7_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r7 = (r7_rot_11 & 4);
    r5_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r5 = (r5_rot_19 & 4);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r3 = (r3_rot_11 & 60);
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r0 = (r0_rot_48 & 480);
    r0 = (r3 + r0);
    r5 = (r7 + r5);
    r3 = (r8 + r6);
    r6_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r6 = (r6_rot_13 & 4);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r6 + r3);
    r0 = (r10 + r0);
    r24 = (r3 + r0);
    goto loc_801855E4;
}

loc_801855BC:
{
    r4 = MemoryInline::FlatRead8(r24);
    r3 = r27;
    r5 = MemoryInline::FlatRead8((r24 + 1));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171A6Cu>(ctx);
    r4 = MemoryInline::FlatRead8((r24 + 2));
    r3 = r27;
    r5 = MemoryInline::FlatRead8((r24 + 3));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171968u>(ctx);
    r24 = (r24 + 4);
    r27 = (r27 + 1);
}

loc_801855E4:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_50 & 7);
}

loc_801855F0:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r0))) {
        goto loc_801855BC;
    }
}

loc_801855F4:
{
    r7 = MemoryInline::FlatRead32((r26 + 76));
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r0 = (r0_rot_52 & 1);
}

loc_801855FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80185658;
    }
}

loc_80185600:
{
    r5_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(20));
    r5 = (r5_rot_21 & 4);
    r0_rot_53 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r0 = (r0_rot_53 & 4);
    r0 = (r5 + r0);
    r4_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r4 = (r4_rot_20 & 4);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r3 = (r3_rot_13 & 15);
    r6_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(14));
    r6 = (r6_rot_15 & 60);
    r0 = (r4 + r0);
    r5_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r5 = (r5_rot_22 & 480);
    r4 = (r3 * 20);
    r7 = MemoryInline::FlatRead32((r26 + 88));
    r3 = (r6 + r5);
    r0 = (r7 + r0);
    r3 = (r4 + r3);
    r6 = (r3 + r0);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    r4 = MemoryInline::FlatRead8((r6 + 2));
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r3 = (r0 & 15);
    r7 = MemoryInline::FlatRead8((r6 + 3));
    r6_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r6 = (r6_rot_16 & 15);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80172088u>(ctx);
    goto loc_80185670;
}

loc_80185658:
{
    r3 = 7;
    r4 = 0;
    r5 = 0;
    r6 = 7;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80172088u>(ctx);
}

loc_80185670:
{
    r3 = MemoryInline::FlatRead32((r26 + 76));
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_55 & 1);
}

loc_80185678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801856D4;
    }
}

loc_8018567C:
{
    r4_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4 = (r4_rot_22 & 15);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r8 = (r8_rot_9 & 4);
    r0_rot_56 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r0 = (r0_rot_56 & 4);
    r7_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r7 = (r7_rot_13 & 4);
    r6_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r6 = (r6_rot_18 & 4);
    r5_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r5 = (r5_rot_24 & 60);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r3 = (r3_rot_15 & 480);
    r0 = (r8 + r0);
    r6 = (r7 + r6);
    r7 = MemoryInline::FlatRead32((r26 + 88));
    r0 = (r6 + r0);
    r3 = (r5 + r3);
    r4 = (r4 * 20);
    r0 = (r7 + r0);
    r3 = (r4 + r3);
    r6 = (r3 + r0);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_6);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r6 = MemoryInline::FlatRead8((r6 + 3));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017277Cu>(ctx);
    goto loc_801856E8;
}

loc_801856D4:
{
    r3 = 1;
    r4 = 4;
    r5 = 5;
    r6 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017277Cu>(ctx);
}

loc_801856E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801856EC:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80185700;
    }
}

loc_801856F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801856F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80185700;
    }
}

loc_801856FC:
{
    r3 = 1;
}

loc_80185700:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 256);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80184874 func_80184874 preserves=false fpr_mask=0xC0000000
