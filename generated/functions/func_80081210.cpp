#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80081210(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r26_addr_6 = 0;
    uint32_t r26_addr_7 = 0;
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
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_21 = 0;
    uint32_t r3_rot_22 = 0;
    uint32_t r3_rot_23 = 0;
    uint32_t r3_rot_24 = 0;
    uint32_t r3_rot_25 = 0;
    uint32_t r3_rot_26 = 0;
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
    uint32_t r5_rot_26 = 0;
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
    uint32_t r6_rot_20 = 0;
    uint32_t r6_rot_21 = 0;
    uint32_t r6_rot_22 = 0;
    uint32_t r6_rot_23 = 0;
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
    uint32_t r7_rot_15 = 0;
    uint32_t r7_rot_16 = 0;
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

    goto loc_80081210;

loc_80081210:
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
    r27 = r3;
    r31 = r4;
    r28 = r5;
    r30 = 1;
    r23 = 0;
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8017054Cu>(ctx);
    r4 = MemoryInline::FlatRead32((r27 + 56));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 1);
}

loc_80081258:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80081300;
    }
}

loc_8008125C:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & 15);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 15);
    r5 = (r3 * 20);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r6 = (r6_rot_0 & 60);
    r7 = MemoryInline::FlatRead32((r27 + 64));
    r3 = 0;
    r4 = 0;
    r0 = (r0 * 28);
    r6 = (r6 + r5);
    r5 = 0;
    r0 = (r7 + r0);
    r7 = 0;
    r24 = (r6 + r0);
    r6_addr_0 = (r6 + r0);
    r6 = MemoryInline::FlatRead8(r6_addr_0);
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

loc_800812CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_800812E0;
    }
}

loc_800812D0:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_800812D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800812E0;
    }
}

loc_800812DC:
{
    r30 = 0;
}

loc_800812E0:
{
}

loc_800812E4:
{
    r23 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800812F8;
    }
}

loc_800812EC:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_800812F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80081320;
    }
}

loc_800812F8:
{
    r23 = 1;
    goto loc_80081320;
}

loc_80081300:
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

loc_80081320:
{
}

loc_80081324:
{
    r29 = 0;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8008133C;
    }
}

loc_8008132C:
{
}

loc_80081330:
{
    r29 = 1;
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8008133C;
    }
}

loc_80081338:
{
    r29 = 0;
}

loc_8008133C:
{
}

loc_80081340:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80081418;
    }
}

loc_80081344:
{
    r5 = MemoryInline::FlatRead32((r27 + 56));
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(25));
    r0 = (r0_rot_3 & 1);
}

loc_80081354:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800813A4;
    }
}

loc_80081358:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & 15);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 15);
    r4 = (r3 * 20);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(26));
    r6 = (r6_rot_3 & 4);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r5 = (r5_rot_1 & 60);
    r7 = MemoryInline::FlatRead32((r27 + 64));
    r3 = (r0 * 28);
    r0 = (r6 + r5);
    r0 = (r7 + r0);
    r3 = (r4 + r3);
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

loc_800813A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 48));
    r5 = r28;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r3 = (r1 + 36);
    r4 = (r1 + 40);
    // inline leaf 0x80084680 (20 guest instruction(s))
}

loc_inl1_0x80084680:
{
    r8 = MemoryInline::FlatRead8(r4);
}

loc_inl1_0x80084688:
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

loc_inl1_0x800846A8:
{
    r0 = (r0 * r5);
    r4 = 0x80810000u;
    r4 = (r4 + -32639);
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
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80084680;
}

loc_inl1_return:
{
}

loc_inl1_cont_80084680:
{
    // end of inlined leaf 0x80084680
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

loc_800813FC:
{
    r29 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80081414;
    }
}

loc_80081404:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r3 + 65536);
}

loc_80081410:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80081418;
    }
}

loc_80081414:
{
    r29 = 1;
}

loc_80081418:
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
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r3 = (r3_rot_6 & 15);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016E5A4u>(ctx);
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_7 & 15);
}

loc_80081458:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800814F0;
    }
}

loc_8008145C:
{
    r0 = MemoryInline::FlatRead32((r27 + 56));
    r3 = -1431633920;
    r5 = MemoryInline::FlatRead32((r27 + 64));
    r25 = (r3 + -21845);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_4 & 15);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & 15);
    r4 = (r4 * 20);
    r26 = (r1 + 92);
    r28 = 0;
    r24 = 1;
    r3 = (r0 * 28);
    r0 = (r5 + r4);
    r23 = (r3 + r0);
    goto loc_800814E0;
}

loc_80081494:
{
    r0 = MemoryInline::FlatRead8(r23);
    r6 = MemoryInline::FlatRead8((r23 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800814A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800814C0;
    }
}

loc_800814A4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(60));
}

loc_800814A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800814C0;
    }
}

loc_800814AC:
{
    r0 = (r6 + -30);
    r31 = 1;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r25) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_11 & 2147483647);
    r26_addr_2 = (r26 + r0);
    MemoryInline::FlatWrite8(r26_addr_2, static_cast<uint8_t>(r24));
}

loc_800814C0:
{
    r4 = MemoryInline::FlatRead8(r23);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r23 + 1));
    r7 = 0;
    r8 = 125;
    ctx->lr = 0x800814D8u;
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

loc_800814E0:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_10 & 15);
}

loc_800814EC:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_80081494;
    }
}

loc_800814F0:
{
}

loc_800814F4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8008156C;
    }
}

loc_800814F8:
{
    r0 = MemoryInline::FlatRead32((r27 + 56));
    r26 = (r1 + 92);
    r3 = MemoryInline::FlatRead32((r27 + 64));
    r28 = 0;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_14 & 15);
    r0 = (r0 * 28);
    r23 = (r3 + r0);
    goto loc_80081558;
}

loc_80081518:
{
    r3 = (r28 & 255);
    r26_addr_6 = (r26 + r3);
    r0 = MemoryInline::FlatRead8(r26_addr_6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80081524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80081554;
    }
}

loc_80081528:
{
    r0 = (r3 * 20);
    r3 = (r1 + 160);
    r4 = (r23 + r0);
    ctx->lr = 0x80081538u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8007F310u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r28 & 255);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & 1020);
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

loc_80081554:
{
    r28 = (r28 + 1);
}

loc_80081558:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r3 = (r28 & 255);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_16 & 15);
}

loc_80081568:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80081518;
    }
}

loc_8008156C:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_20 & 15);
}

loc_80081574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80081610;
    }
}

loc_80081578:
{
    r24 = MemoryInline::FlatRead32((r27 + 64));
    r23 = 0;
    r25 = 16;
    r26 = 0;
    goto loc_80081600;
}

loc_8008158C:
{
    r3 = r24;
    r4 = (r1 + 128);
    ctx->lr = 0x80081598u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800822F0u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r24 + 24));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3 = (r3_rot_8 & 15);
    r0 = (r3 + -8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800815A8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800815EC;
    }
}

loc_800815AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(10));
}

loc_800815B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800815C0;
    }
}

loc_800815B4:
{
    r28 = r25;
    r25 = (r25 + 1);
    goto loc_800815C8;
}

loc_800815C0:
{
    r28 = r23;
    r23 = (r23 + 1);
}

loc_800815C8:
{
    r4 = r28;
    r3 = (r1 + 128);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170B64u>(ctx);
    r3 = r24;
    r4 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x800823E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r4 = r28;
    r3 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170FA8u>(ctx);
}

loc_800815EC:
{
    r4 = r26;
    r3 = (r1 + 128);
    ctx->lr = 0x800815F8u;
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
    r24 = (r24 + 28);
    r26 = (r26 + 1);
}

loc_80081600:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_22 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
}

loc_8008160C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008158C;
    }
}

loc_80081610:
{
    r5 = MemoryInline::FlatRead16((r27 + 16));
    r4 = (r1 + 72);
    r0 = MemoryInline::FlatRead16((r27 + 18));
    r3 = 1;
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 72), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead16((r27 + 20));
    r0 = MemoryInline::FlatRead16((r27 + 22));
    MemoryInline::FlatWriteRam16((r1 + 78), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 76), static_cast<uint16_t>(r5));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171E70u>(ctx);
    r5 = MemoryInline::FlatRead16((r27 + 24));
    r4 = (r1 + 64);
    r0 = MemoryInline::FlatRead16((r27 + 26));
    r3 = 2;
    MemoryInline::FlatWriteRam16((r1 + 66), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 64), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead16((r27 + 28));
    r0 = MemoryInline::FlatRead16((r27 + 30));
    MemoryInline::FlatWriteRam16((r1 + 70), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 68), static_cast<uint16_t>(r5));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171E70u>(ctx);
    r5 = MemoryInline::FlatRead16((r27 + 32));
    r4 = (r1 + 56);
    r0 = MemoryInline::FlatRead16((r27 + 34));
    r3 = 3;
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 56), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead16((r27 + 36));
    r0 = MemoryInline::FlatRead16((r27 + 38));
    MemoryInline::FlatWriteRam16((r1 + 62), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r5));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171E70u>(ctx);
    r0 = MemoryInline::FlatRead8((r27 + 40));
    r4 = (r1 + 28);
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r27 + 41));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 42));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 43));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r0 = MemoryInline::FlatRead8((r27 + 44));
    r4 = (r1 + 24);
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r0));
    r3 = 1;
    r0 = MemoryInline::FlatRead8((r27 + 45));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 46));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 47));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r0 = MemoryInline::FlatRead8((r27 + 48));
    r4 = (r1 + 20);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r3 = 2;
    r0 = MemoryInline::FlatRead8((r27 + 49));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 50));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 51));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r0 = MemoryInline::FlatRead8((r27 + 52));
    r4 = (r1 + 16);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r3 = 3;
    r0 = MemoryInline::FlatRead8((r27 + 53));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 54));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 55));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r6 = MemoryInline::FlatRead32((r27 + 56));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r0 = (r0_rot_24 & 1);
}

loc_8008174C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800817B8;
    }
}

loc_80081750:
{
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r3 = (r3_rot_10 & 15);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_25 & 15);
    r4 = (r3 * 20);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r7 = (r7_rot_0 & 4);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r5 = (r5_rot_4 & 4);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(14));
    r6 = (r6_rot_6 & 60);
    r3 = (r0 * 28);
    r5 = (r7 + r5);
    r7 = MemoryInline::FlatRead32((r27 + 64));
    r23 = 0;
    r0 = (r6 + r5);
    r3 = (r4 + r3);
    r0 = (r7 + r0);
    r28 = (r3 + r0);
}

loc_80081788:
{
    r0 = MemoryInline::FlatRead8(r28);
    r3 = r23;
    r4 = (r0 & 3);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r5 = (r5_rot_6 & 3);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r6 = (r6_rot_8 & 3);
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
    r28 = (r28 + 1);
}

loc_800817B0:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(4))) {
        goto loc_80081788;
    }
}

loc_800817B4:
{
    goto loc_80081818;
}

loc_800817B8:
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

loc_80081818:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r28 = 0;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r28));
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r3 = (r3_rot_12 & 31);
}

loc_80081828:
{
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r28));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80081A00;
    }
}

loc_80081834:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801722A8u>(ctx);
    r7 = MemoryInline::FlatRead32((r27 + 56));
    r26 = (r1 + 44);
    r8 = MemoryInline::FlatRead32((r27 + 64));
    r29 = 0;
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(14));
    r3 = (r3_rot_13 & 3);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_27 & 15);
    r3 = (r3 + r0);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r5 = (r5_rot_8 & 15);
    r6 = (r3 * 20);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(14));
    r4 = (r4_rot_6 & 60);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r0 = (r0_rot_28 & 4);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r3 = (r3_rot_14 & 4);
    r0 = (r4 + r0);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(20));
    r4 = (r4_rot_7 & 4);
    r0 = (r3 + r0);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(28));
    r3 = (r3_rot_15 & 4);
    r0 = (r4 + r0);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r4 = (r4_rot_8 & 4);
    r5 = (r5 * 28);
    r31 = 1;
    r0 = (r3 + r0);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(19));
    r3 = (r3_rot_16 & 28);
    r5 = (r6 + r5);
    r0 = (r5 + r0);
    r3 = (r4 + r3);
    r0 = (r8 + r0);
    r25 = (r3 + r0);
    goto loc_800819E8;
}

loc_800818A8:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r3 = r29;
    r5 = MemoryInline::FlatRead8((r25 + 2));
    r4 = MemoryInline::FlatRead8(r25);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5_mrot_2 = (r5_rot_10 & 256);
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
    r3 = r29;
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r4 = (r4_rot_10 & 3);
    r5_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r5 = (r5_rot_11 & 3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171FD0u>(ctx);
    r0 = MemoryInline::FlatRead8((r25 + 5));
    r3 = r29;
    r5 = MemoryInline::FlatRead8((r25 + 4));
    r6 = (r0 & 15);
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r7 = (r7_rot_6 & 15);
    r4 = (r5 & 15);
    r5_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r5 = (r5_rot_12 & 15);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r6 = MemoryInline::FlatRead8((r25 + 6));
    r3 = r29;
    r0 = MemoryInline::FlatRead8((r25 + 7));
    r4 = (r6 & 15);
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r5 = (r5_rot_13 & 3);
    r6_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r6 = (r6_rot_11 & 3);
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
    r3 = r29;
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_11 & 31);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171F30u>(ctx);
    r0 = MemoryInline::FlatRead8((r25 + 9));
    r3 = r29;
    r5 = MemoryInline::FlatRead8((r25 + 8));
    r6 = (r0 & 15);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r7 = (r7_rot_7 & 15);
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
    InvokeDirectCpu<0x80171D20u>(ctx);
    r6 = MemoryInline::FlatRead8((r25 + 10));
    r3 = r29;
    r0 = MemoryInline::FlatRead8((r25 + 11));
    r4 = (r6 & 15);
    r5_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r5 = (r5_rot_15 & 3);
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r6 = (r6_rot_12 & 3);
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
    r3 = r29;
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_12 & 31);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171F80u>(ctx);
    r10 = MemoryInline::FlatRead8((r25 + 15));
    r3 = r29;
    r6 = MemoryInline::FlatRead8((r25 + 13));
    r9 = MemoryInline::FlatRead8((r25 + 14));
    r4_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r4 = (r4_rot_13 & 1);
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r24 = (r24_rot_2 & 15);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r0 = (r0_rot_31 & 3);
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

loc_800819C8:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(1))) {
        goto loc_800819E0;
    }
}

loc_800819CC:
{
}

loc_800819D0:
{
    if ((static_cast<int32_t>(r24) > static_cast<int32_t>(3))) {
        goto loc_800819E0;
    }
}

loc_800819D4:
{
    r3 = (r26 + r24);
    r28 = 1;
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r31));
}

loc_800819E0:
{
    r25 = (r25 + 16);
    r29 = (r29 + 1);
}

loc_800819E8:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_30 & 31);
}

loc_800819F4:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_800818A8;
    }
}

loc_800819F8:
{
    r29 = 1;
    goto loc_80081DC8;
}

loc_80081A00:
{
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_32 & 15);
}

loc_80081A04:
{
    r31 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80081A5C;
    }
}

loc_80081A0C:
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
    r31 = 1;
    goto loc_80081D50;
}

loc_80081A5C:
{
}

loc_80081A60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80081AB0;
    }
}

loc_80081A64:
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
    r31 = 1;
    goto loc_80081CFC;
}

loc_80081AB0:
{
}

loc_80081AB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80081B68;
    }
}

loc_80081AB8:
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
    r4 = 0x80270000u;
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 14144));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171F30u>(ctx);
    r4 = 0x80270000u;
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 14176));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171F80u>(ctx);
    r31 = 2;
    goto loc_80081C1C;
}

loc_80081B68:
{
    r24 = 0x80270000u;
    r25 = 0x80270000u;
    r24 = (r24 + 14144);
    r23 = 0;
    r25 = (r25 + 14176);
    goto loc_80081C0C;
}

loc_80081B80:
{
    r22 = (r31 & 255);
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

loc_80081B9C:
{
    r7 = 0;
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_80081BA8;
    }
}

loc_80081BA4:
{
    r7 = 15;
}

loc_80081BA8:
{
}

loc_80081BAC:
{
    r26 = 0;
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_80081BB8;
    }
}

loc_80081BB4:
{
    r26 = 7;
}

loc_80081BB8:
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
    r7 = r26;
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
    r31 = (r31 + 1);
    r24 = (r24 + 4);
    r25 = (r25 + 4);
    r23 = (r23 + 1);
}

loc_80081C0C:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_34 & 15);
}

loc_80081C18:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r0))) {
        goto loc_80081B80;
    }
}

loc_80081C1C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 16), 0, 16u, true, false);
    r3 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r27 + 16));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r5 = 0;
    r0 = MemoryInline::FlatRead16((r2 + -24160));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80081C2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80081C68;
    }
}

loc_80081C30:
{
    r4 = (r2 + -24160);
    r3 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r27 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80081C40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80081C68;
    }
}

loc_80081C44:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r27 + 20));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80081C50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80081C68;
    }
}

loc_80081C54:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r27 + 22));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80081C60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80081C68;
    }
}

loc_80081C64:
{
    r5 = 1;
}

loc_80081C68:
{
}

loc_80081C6C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80081CB0;
    }
}

loc_80081C70:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r27 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = 0;
}

loc_80081C7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_80081CA8;
    }
}

loc_80081C80:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r27 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80081C88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_80081CA8;
    }
}

loc_80081C8C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r27 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80081C94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_80081CA8;
    }
}

loc_80081C98:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r27 + 30));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80081CA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_80081CA8;
    }
}

loc_80081CA4:
{
    r3 = 1;
}

loc_80081CA8:
{
}

loc_80081CAC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80081CFC;
    }
}

loc_80081CB0:
{
    r22 = (r31 & 255);
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
    r31 = (r31 + 1);
}

loc_80081CFC:
{
}

loc_80081D00:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80081D50;
    }
}

loc_80081D04:
{
    r22 = (r31 & 255);
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
    r31 = (r31 + 1);
}

loc_80081D50:
{
    r22 = (r31 & 255);
    r23 = 0;
    goto loc_80081DB4;
}

loc_80081D5C:
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

loc_80081DB4:
{
    r0 = (r23 & 255);
}

loc_80081DBC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_80081D5C;
    }
}

loc_80081DC0:
{
    r3 = r22;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801722A8u>(ctx);
}

loc_80081DC8:
{
}

loc_80081DCC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80081ECC;
    }
}

loc_80081DD0:
{
    r8 = MemoryInline::FlatRead32((r27 + 56));
    r31 = (r1 + 44);
    r10 = MemoryInline::FlatRead32((r27 + 64));
    r28 = 0;
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r3 = (r3_rot_18 & 15);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r0 = (r0_rot_39 & 15);
    r5_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(27));
    r5 = (r5_rot_17 & 4);
    r4_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(26));
    r4 = (r4_rot_15 & 4);
    r4 = (r5 + r4);
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r7 = (r7_rot_9 & 4);
    r3 = (r3 * 20);
    r6_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(20));
    r6 = (r6_rot_14 & 4);
    r5_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(14));
    r5 = (r5_rot_18 & 60);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29092));
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(19));
    r9 = (r9_rot_4 & 28);
    r0 = (r0 * 28);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r8 = (r8_rot_5 & 4);
    r5 = (r6 + r5);
    r4 = (r7 + r4);
    r3 = (r3 + r0);
    r0 = (r9 + r8);
    r4 = (r5 + r4);
    r3 = (r4 + r3);
    r0 = (r10 + r0);
    r24 = (r3 + r0);
    goto loc_80081EBC;
}

loc_80081E38:
{
    r0 = MemoryInline::FlatRead8(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80081E40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80081EB0;
    }
}

loc_80081E44:
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
    InvokeDirectCpu<0x80085180u>(ctx);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f2.d = (-(f1.d));
    r3 = (r28 + 1);
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
    ctx->lr = 0x80081EB0u;
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
    InvokeDirectCpu<0x8007F420u>(ctx);
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

loc_80081EB0:
{
    r31 = (r31 + 1);
    r24 = (r24 + 20);
    r28 = (r28 + 1);
}

loc_80081EBC:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_41 & 3);
}

loc_80081EC8:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_80081E38;
    }
}

loc_80081ECC:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r3_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_20 & 7);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171B38u>(ctx);
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_43 & 7);
}

loc_80081EE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80081F74;
    }
}

loc_80081EE4:
{
    r8 = MemoryInline::FlatRead32((r27 + 56));
    r28 = 0;
    r9 = MemoryInline::FlatRead32((r27 + 64));
    r3_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r3 = (r3_rot_21 & 15);
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r0 = (r0_rot_44 & 15);
    r5_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(27));
    r5 = (r5_rot_20 & 4);
    r4_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(26));
    r4 = (r4_rot_17 & 4);
    r4 = (r5 + r4);
    r7_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r7 = (r7_rot_11 & 4);
    r3 = (r3 * 20);
    r6_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(20));
    r6 = (r6_rot_16 & 4);
    r5_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(14));
    r5 = (r5_rot_21 & 60);
    r4 = (r7 + r4);
    r0 = (r0 * 28);
    r5 = (r6 + r5);
    r6_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r6 = (r6_rot_17 & 4);
    r0 = (r3 + r0);
    r3 = (r5 + r4);
    r3 = (r6 + r3);
    r0 = (r9 + r0);
    r24 = (r3 + r0);
    goto loc_80081F64;
}

loc_80081F3C:
{
    r4 = MemoryInline::FlatRead8(r24);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r24 + 1));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171A6Cu>(ctx);
    r4 = MemoryInline::FlatRead8((r24 + 2));
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r24 + 3));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171968u>(ctx);
    r24 = (r24 + 4);
    r28 = (r28 + 1);
}

loc_80081F64:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_46 & 7);
}

loc_80081F70:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_80081F3C;
    }
}

loc_80081F74:
{
    r4 = MemoryInline::FlatRead32((r27 + 56));
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r0 = (r0_rot_48 & 1);
}

loc_80081F7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80081FDC;
    }
}

loc_80081F80:
{
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_23 & 15);
    r0_rot_49 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_49 & 15);
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r8 = (r8_rot_7 & 4);
    r5_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r5 = (r5_rot_23 & 60);
    r7_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r7 = (r7_rot_13 & 4);
    r6_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r6 = (r6_rot_19 & 4);
    r4 = (r3 * 20);
    r5 = (r8 + r5);
    r6 = (r7 + r6);
    r7 = MemoryInline::FlatRead32((r27 + 64));
    r3 = (r0 * 28);
    r0 = (r6 + r5);
    r0 = (r7 + r0);
    r3 = (r4 + r3);
    r6 = (r3 + r0);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    r4 = MemoryInline::FlatRead8((r6 + 2));
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r3 = (r0 & 15);
    r7 = MemoryInline::FlatRead8((r6 + 3));
    r6_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r6 = (r6_rot_20 & 15);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80172088u>(ctx);
    goto loc_80081FF4;
}

loc_80081FDC:
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

loc_80081FF4:
{
    r6 = MemoryInline::FlatRead32((r27 + 56));
    r0_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r0 = (r0_rot_51 & 1);
}

loc_80081FFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008205C;
    }
}

loc_80082000:
{
    r3_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r3 = (r3_rot_25 & 15);
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_52 & 15);
    r5_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r5 = (r5_rot_25 & 4);
    r4_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r4 = (r4_rot_19 & 4);
    r5 = (r5 + r4);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r8 = (r8_rot_9 & 4);
    r7_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(20));
    r7 = (r7_rot_15 & 4);
    r6_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(14));
    r6 = (r6_rot_22 & 60);
    r4 = (r3 * 20);
    r9 = MemoryInline::FlatRead32((r27 + 64));
    r6 = (r7 + r6);
    r5 = (r8 + r5);
    r3 = (r0 * 28);
    r0 = (r6 + r5);
    r3 = (r4 + r3);
    r0 = (r9 + r0);
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
    goto loc_80082070;
}

loc_8008205C:
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

loc_80082070:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80082074:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80082088;
    }
}

loc_8008207C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80082080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80082088;
    }
}

loc_80082084:
{
    r3 = 1;
}

loc_80082088:
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
// RECOMP_REGISTRATION base 0x80081210 func_80081210 preserves=false fpr_mask=0xC0000000
