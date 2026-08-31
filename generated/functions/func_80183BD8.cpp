#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80183BD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stbux_80184198_loc_0 = 0;
    uint32_t addr_stbux_80184244_loc_0 = 0;
    uint32_t addr_stbux_801842B0_loc_0 = 0;
    uint32_t addr_stbux_80184328_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_12 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_10 = 0;
    uint32_t r0_mrot_11 = 0;
    uint32_t r0_mrot_12 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
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
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mdest_6 = 0;
    uint32_t r3_mdest_7 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_mrot_6 = 0;
    uint32_t r3_mrot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
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
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80183BD8;

loc_80183BD8:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
    r0 = MemoryInline::FlatRead32((r3 + 76));
    r20 = r3;
    r28 = MemoryInline::FlatRead8((r1 + 107));
    r21 = r4;
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r11 = (r11_rot_0 & 15);
    r29 = MemoryInline::FlatRead8((r1 + 111));
}

loc_80183C08:
{
    r30 = MemoryInline::FlatRead8((r1 + 115));
    r31 = MemoryInline::FlatRead8((r1 + 119));
    r22 = r5;
    r23 = r6;
    r24 = r7;
    r25 = r8;
    r26 = r9;
    r27 = r10;
    if ((static_cast<uint32_t>(r11) < static_cast<uint32_t>(r4))) {
        goto loc_80183CA4;
    }
}

loc_80183C2C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & 15);
}

loc_80183C34:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r5))) {
        goto loc_80183CA4;
    }
}

loc_80183C38:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r4 = (r4_rot_2 & 15);
}

loc_80183C40:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r6))) {
        goto loc_80183CA4;
    }
}

loc_80183C44:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r4 = (r4_rot_3 & 31);
}

loc_80183C4C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r7))) {
        goto loc_80183CA4;
    }
}

loc_80183C50:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
    r4 = (r4_rot_4 & 1);
}

loc_80183C58:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r8))) {
        goto loc_80183CA4;
    }
}

loc_80183C5C:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_5 & 7);
}

loc_80183C64:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r9))) {
        goto loc_80183CA4;
    }
}

loc_80183C68:
{
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r4 = (r4_rot_6 & 3);
}

loc_80183C70:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r10))) {
        goto loc_80183CA4;
    }
}

loc_80183C74:
{
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_7 & 1);
}

loc_80183C7C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r28))) {
        goto loc_80183CA4;
    }
}

loc_80183C80:
{
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r4 = (r4_rot_8 & 1);
}

loc_80183C88:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r29))) {
        goto loc_80183CA4;
    }
}

loc_80183C8C:
{
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r4 = (r4_rot_9 & 1);
}

loc_80183C94:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r30))) {
        goto loc_80183CA4;
    }
}

loc_80183C98:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_80183CA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80184338;
    }
}

loc_80183CA4:
{
    r4 = MemoryInline::FlatRead32((r3 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80183CAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80183CDC;
    }
}

loc_80183CB0:
{
    r3 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r3 + 18848));
    ctx->lr = 0x80183CBCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80199BA8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r20 + 76));
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r20 + 80));
    r3 = (r3 & 31);
    MemoryInline::FlatWrite32((r20 + 88), r4);
    r0 = (r0 & 31);
    MemoryInline::FlatWrite32((r20 + 76), r3);
    MemoryInline::FlatWrite32((r20 + 80), r0);
}

loc_80183CDC:
{
    r5 = (r27 + r22);
    r0 = (r25 + r28);
    r6 = (r5 * 20);
    r4 = (r31 + r29);
    r3 = (r26 + r23);
    r0 = (r30 + r0);
    r3 = (r4 + r3);
    r7 = 0x80340000u;
    r0 = (r3 + r0);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(5));
    r5 = (r5_rot_1 & 8160);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(4));
    r4 = (r4_rot_11 & 4080);
    r0 = (r6 + r0);
    r3 = MemoryInline::FlatRead32((r7 + 18848));
    r0 = (r5 + r0);
    r4 = (r4 + r0);
    ctx->lr = 0x80183D20u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80199B98u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80183D24:
{
    MemoryInline::FlatWrite32((r20 + 88), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80184338;
    }
}

loc_80183D2C:
{
    r0 = MemoryInline::FlatRead32((r20 + 76));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(28));
    r0_mrot_1 = (r0_rot_4 & -268435456);
    r0_mdest_1 = (r0 & 268435455);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(24));
    r0_mrot_2 = (r0_rot_5 & 251658240);
    r0_mdest_2 = (r0 & -251658241);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r4 = MemoryInline::FlatRead32((r20 + 80));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(20));
    r0_mrot_3 = (r0_rot_6 & 15728640);
    r0_mdest_3 = (r0 & -15728641);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r7 = 0;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(18));
    r0_mrot_4 = (r0_rot_7 & 786432);
    r0_mdest_4 = (r0 & -786433);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(15));
    r0_mrot_5 = (r0_rot_8 & 229376);
    r0_mdest_5 = (r0 & -229377);
    r0 = (r0_mdest_5 | r0_mrot_5);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(14));
    r0_mrot_6 = (r0_rot_9 & 16384);
    r0_mdest_6 = (r0 & -16385);
    r0 = (r0_mdest_6 | r0_mrot_6);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(9));
    r0_mrot_7 = (r0_rot_10 & 15872);
    r0_mdest_7 = (r0 & -15873);
    r0 = (r0_mdest_7 | r0_mrot_7);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(8));
    r0_mrot_8 = (r0_rot_11 & 256);
    r0_mdest_8 = (r0 & -257);
    r0 = (r0_mdest_8 | r0_mrot_8);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(7));
    r0_mrot_9 = (r0_rot_12 & 128);
    r0_mdest_9 = (r0 & -129);
    r0 = (r0_mdest_9 | r0_mrot_9);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(6));
    r0_mrot_10 = (r0_rot_13 & 64);
    r0_mdest_10 = (r0 & -65);
    r0 = (r0_mdest_10 | r0_mrot_10);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(5));
    r0_mrot_11 = (r0_rot_14 & 32);
    r0_mdest_11 = (r0 & -33);
    r0 = (r0_mdest_11 | r0_mrot_11);
    r4_mrot_1 = (r0 & 251658240);
    r4_mdest_1 = (r4 & -251658241);
    r4 = (r4_mdest_1 | r4_mrot_1);
    MemoryInline::FlatWrite32((r20 + 76), r0);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r0 = (r0_rot_15 & 480);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r6 = (r6_rot_1 & 15);
}

loc_80183D74:
{
    MemoryInline::FlatWrite32((r20 + 80), r4);
    r8 = (r3 + r0);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80183F34;
    }
}

loc_80183D80:
{
}

loc_80183D84:
{
    r5 = (r6 + -8);
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(8))) {
        goto loc_80183EE0;
    }
}

loc_80183D8C:
{
    r0 = (r5 + 7);
    r4 = 0x80250000u;
    r3 = 0x80250000u;
    r9 = r8;
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_16 & 536870911);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 11072));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11076));
    ctr = r0;
}

loc_80183DB0:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_80183EE0;
    }
}

loc_80183DB4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r9, 0, 160u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r9, f1.d);
    r7 = (r7 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r9 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r9 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r9 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r9 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r9 + 20), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r9 + 24), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r9 + 28), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r9 + 32), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r9 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r9 + 40), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r9 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r9 + 48), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r9 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r9 + 56), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r9 + 60), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r9 + 64), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r9 + 68), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r9 + 72), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r9 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r9 + 80), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r9 + 84), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r9 + 88), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r9 + 92), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r9 + 96), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r9 + 100), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r9 + 104), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r9 + 108), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r9 + 112), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r9 + 116), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r9 + 120), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r9 + 124), f1.d);
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r9 + 128), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r9 + 132), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r9 + 136), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 140u, (r9 + 140), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 144u, (r9 + 144), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 148u, (r9 + 148), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 152u, (r9 + 152), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 156u, (r9 + 156), f0.d);
    }
    r9 = (r9 + 160);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80183DB4;
    }
}

loc_80183EE0:
{
    r5 = (r7 * 20);
    r4 = 0x80250000u;
    r3 = 0x80250000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 11072));
    r0 = (r6 - r7);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11076));
    r3 = (r8 + r5);
    ctr = r0;
}

loc_80183F04:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r6))) {
        goto loc_80183F34;
    }
}

loc_80183F08:
{
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    r3 = (r3 + 20);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80183F08;
    }
}

loc_80183F34:
{
    r11 = MemoryInline::FlatRead32((r20 + 76));
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r20 + 76));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r0 = (r0_rot_19 & 15);
    r3 = MemoryInline::FlatRead32((r20 + 80));
    r7 = (r0 * 20);
    r3_mrot_1 = (r5 & 786432);
    r3_mdest_1 = (r3 & -786433);
    r3 = (r3_mdest_1 | r3_mrot_1);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(28));
    r10 = (r10_rot_1 & 4);
    MemoryInline::FlatWrite32((r20 + 80), r3);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(26));
    r6 = (r6_rot_2 & 4);
    r21 = MemoryInline::FlatRead32((r20 + 88));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(20));
    r9 = (r9_rot_1 & 4);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(27));
    r8 = (r8_rot_1 & 4);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(14));
    r5 = (r5_rot_2 & 60);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(9));
    r0 = (r0_rot_20 & 480);
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(19));
    r12 = (r12_rot_1 & 28);
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r11 = (r11_rot_1 & 4);
    r5 = (r5 + r0);
    r8 = (r9 + r8);
    r6 = (r10 + r6);
    r0 = (r12 + r11);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r3 = (r3_rot_1 & 3);
}

loc_80183F8C:
{
    r5 = (r7 + r5);
    r6 = (r8 + r6);
    r0 = (r21 + r0);
    r5 = (r6 + r5);
    r8 = (r5 + r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80184158;
    }
}

loc_80183FA4:
{
}

loc_80183FA8:
{
    r7 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_80184104;
    }
}

loc_80183FB0:
{
    r0 = (r7 + 7);
    r6 = 0x80250000u;
    r5 = 0x80250000u;
    r9 = r8;
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_21 & 536870911);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 11072));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 11076));
    ctr = r0;
}

loc_80183FD4:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_80184104;
    }
}

loc_80183FD8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r9, 0, 160u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r9, f1.d);
    r4 = (r4 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r9 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r9 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r9 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r9 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r9 + 20), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r9 + 24), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r9 + 28), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r9 + 32), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r9 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r9 + 40), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r9 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r9 + 48), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r9 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 56u, (r9 + 56), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r9 + 60), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r9 + 64), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r9 + 68), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r9 + 72), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r9 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r9 + 80), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r9 + 84), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r9 + 88), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 92u, (r9 + 92), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 96u, (r9 + 96), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 100u, (r9 + 100), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 104u, (r9 + 104), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 108u, (r9 + 108), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 112u, (r9 + 112), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r9 + 116), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 120u, (r9 + 120), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 124u, (r9 + 124), f1.d);
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 128u, (r9 + 128), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 132u, (r9 + 132), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r9 + 136), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r9 + 140), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 144u, (r9 + 144), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 148u, (r9 + 148), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 152u, (r9 + 152), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 156u, (r9 + 156), f0.d);
    }
    r9 = (r9 + 160);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80183FD8;
    }
}

loc_80184104:
{
    r7 = (r4 * 20);
    r6 = 0x80250000u;
    r5 = 0x80250000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 11072));
    r0 = (r3 - r4);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 11076));
    r5 = (r8 + r7);
    ctr = r0;
}

loc_80184128:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_80184158;
    }
}

loc_8018412C:
{
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 16), f0.d);
    r5 = (r5 + 20);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8018412C;
    }
}

loc_80184158:
{
    r0 = MemoryInline::FlatRead32((r20 + 76));
    r3 = MemoryInline::FlatRead32((r20 + 80));
    r3_mrot_2 = (r0 & 256);
    r3_mdest_2 = (r3 & -257);
    r3 = (r3_mdest_2 | r3_mrot_2);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_24 & 1);
}

loc_80184168:
{
    MemoryInline::FlatWrite32((r20 + 80), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801841A8;
    }
}

loc_80184170:
{
    r5 = MemoryInline::FlatRead32((r20 + 76));
    r3 = 1;
    r7 = MemoryInline::FlatRead32((r20 + 88));
    r0 = 0;
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4 = (r4_rot_12 & 15);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r6 = (r6_rot_3 & 60);
    r4 = (r4 * 20);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(9));
    r5 = (r5_rot_3 & 480);
    r5 = (r6 + r5);
    r4 = (r7 + r4);
    addr_stbux_80184198_loc_0 = (r4 + r5);
    MemoryInline::FlatWrite8(addr_stbux_80184198_loc_0, static_cast<uint8_t>(r3));
    r4 = addr_stbux_80184198_loc_0;
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
}

loc_801841A8:
{
    r0 = MemoryInline::FlatRead32((r20 + 76));
    r3 = MemoryInline::FlatRead32((r20 + 80));
    r3_mrot_3 = (r0 & 128);
    r3_mdest_3 = (r3 & -129);
    r3 = (r3_mdest_3 | r3_mrot_3);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r0 = (r0_rot_25 & 1);
}

loc_801841B8:
{
    MemoryInline::FlatWrite32((r20 + 80), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801841F0;
    }
}

loc_801841C0:
{
    r5 = MemoryInline::FlatRead32((r20 + 76));
    r7 = -1;
    r6 = MemoryInline::FlatRead32((r20 + 88));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_26 & 15);
    r4_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r4 = (r4_rot_14 & 60);
    r3 = (r0 * 20);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(9));
    r0 = (r0_rot_27 & 480);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(26));
    r5 = (r5_rot_5 & 4);
    r0 = (r4 + r0);
    r3 = (r5 + r3);
    r0 = (r6 + r0);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r7);
}

loc_801841F0:
{
    r0 = MemoryInline::FlatRead32((r20 + 76));
    r3 = MemoryInline::FlatRead32((r20 + 80));
    r3_mrot_4 = (r0 & 16384);
    r3_mdest_4 = (r3 & -16385);
    r3 = (r3_mdest_4 | r3_mrot_4);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(18));
    r0 = (r0_rot_29 & 1);
}

loc_80184200:
{
    MemoryInline::FlatWrite32((r20 + 80), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80184258;
    }
}

loc_80184208:
{
    r9 = MemoryInline::FlatRead32((r20 + 76));
    r5 = 228;
    r10 = MemoryInline::FlatRead32((r20 + 88));
    r4 = 192;
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r0 = (r0_rot_30 & 15);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r3 = (r3_rot_2 & 60);
    r6 = (r0 * 20);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r8 = (r8_rot_2 & 4);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r0 = (r0_rot_31 & 480);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r7 = (r7_rot_1 & 4);
    r3 = (r3 + r0);
    r0 = (r8 + r7);
    r7 = (r6 + r3);
    r3 = 213;
    r6 = (r10 + r0);
    addr_stbux_80184244_loc_0 = (r6 + r7);
    MemoryInline::FlatWrite8(addr_stbux_80184244_loc_0, static_cast<uint8_t>(r5));
    r6 = addr_stbux_80184244_loc_0;
    r0 = 234;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
}

loc_80184258:
{
    r0 = MemoryInline::FlatRead32((r20 + 76));
    r3 = MemoryInline::FlatRead32((r20 + 80));
    r3_mrot_5 = (r0 & 64);
    r3_mdest_5 = (r3 & -65);
    r3 = (r3_mdest_5 | r3_mrot_5);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r0 = (r0_rot_33 & 1);
}

loc_80184268:
{
    MemoryInline::FlatWrite32((r20 + 80), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801842C0;
    }
}

loc_80184270:
{
    r9 = MemoryInline::FlatRead32((r20 + 76));
    r3 = 119;
    r10 = MemoryInline::FlatRead32((r20 + 88));
    r0 = 0;
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r7 = (r7_rot_3 & 4);
    r4_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r4 = (r4_rot_16 & 4);
    r4 = (r7 + r4);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r6 = (r6_rot_5 & 4);
    r4 = (r6 + r4);
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r5 = (r5_rot_7 & 15);
    r6 = (r5 * 20);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r8 = (r8_rot_4 & 60);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r7 = (r7_rot_4 & 480);
    r4 = (r10 + r4);
    r5 = (r8 + r7);
    r5 = (r6 + r5);
    addr_stbux_801842B0_loc_0 = (r4 + r5);
    MemoryInline::FlatWrite8(addr_stbux_801842B0_loc_0, static_cast<uint8_t>(r3));
    r4 = addr_stbux_801842B0_loc_0;
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
}

loc_801842C0:
{
    r0 = MemoryInline::FlatRead32((r20 + 76));
    r3 = MemoryInline::FlatRead32((r20 + 80));
    r3_mrot_6 = (r0 & 32);
    r3_mdest_6 = (r3 & -33);
    r3 = (r3_mdest_6 | r3_mrot_6);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_34 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801842D0:
{
    MemoryInline::FlatWrite32((r20 + 80), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80184338;
    }
}

loc_801842D8:
{
    r7 = MemoryInline::FlatRead32((r20 + 76));
    r5 = 1;
    r11 = MemoryInline::FlatRead32((r20 + 88));
    r4 = 4;
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_35 & 15);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(28));
    r6 = (r6_rot_7 & 4);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r3 = (r3_rot_4 & 4);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(20));
    r10 = (r10_rot_2 & 4);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r9 = (r9_rot_2 & 4);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(14));
    r8 = (r8_rot_6 & 60);
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r7 = (r7_rot_6 & 480);
    r6 = (r6 + r3);
    r7 = (r8 + r7);
    r9 = (r10 + r9);
    r8 = (r0 * 20);
    r3 = 5;
    r6 = (r9 + r6);
    r0 = 15;
    r7 = (r8 + r7);
    r6 = (r11 + r6);
    addr_stbux_80184328_loc_0 = (r6 + r7);
    MemoryInline::FlatWrite8(addr_stbux_80184328_loc_0, static_cast<uint8_t>(r5));
    r6 = addr_stbux_80184328_loc_0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
}

loc_80184338:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFF01FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80183BD8 func_80183BD8 preserves=true fpr_mask=0x00000000
