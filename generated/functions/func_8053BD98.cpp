#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053BD98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8053CA2C_loc_0 = 0;
    uint32_t addr_lfsx_8053CA90_loc_0 = 0;
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
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_10 = 0;
    uint32_t r0_subfc_min_11 = 0;
    uint32_t r0_subfc_min_12 = 0;
    uint32_t r0_subfc_min_13 = 0;
    uint32_t r0_subfc_min_14 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r0_subfc_min_4 = 0;
    uint32_t r0_subfc_min_5 = 0;
    uint32_t r0_subfc_min_6 = 0;
    uint32_t r0_subfc_min_7 = 0;
    uint32_t r0_subfc_min_8 = 0;
    uint32_t r0_subfc_min_9 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r11_addr_4 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_10 = 0;
    uint32_t r3_adde_right_11 = 0;
    uint32_t r3_adde_right_12 = 0;
    uint32_t r3_adde_right_13 = 0;
    uint32_t r3_adde_right_14 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_adde_right_5 = 0;
    uint32_t r3_adde_right_6 = 0;
    uint32_t r3_adde_right_7 = 0;
    uint32_t r3_adde_right_8 = 0;
    uint32_t r3_adde_right_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_28 = 0;
    uint32_t r3_addr_29 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_30 = 0;
    uint32_t r3_addr_31 = 0;
    uint32_t r3_addr_32 = 0;
    uint32_t r3_addr_33 = 0;
    uint32_t r3_addr_34 = 0;
    uint32_t r3_addr_35 = 0;
    uint32_t r3_addr_36 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_10 = 0;
    uint32_t r3_ca_11 = 0;
    uint32_t r3_ca_12 = 0;
    uint32_t r3_ca_13 = 0;
    uint32_t r3_ca_14 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_ca_8 = 0;
    uint32_t r3_ca_9 = 0;
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
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8053BD98;

loc_8053BD98:
{
    r0 = MemoryInline::FlatRead8((r15 + 262));
    r26 = MemoryInline::FlatRead8((r5 + 6));
}

loc_8053BDA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053BE7C;
    }
}

loc_8053BDA8:
{
    r4 = 4;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053BDB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053BE7C;
    }
}

loc_8053BDB8:
{
    r4 = r26;
    r3 = 0x809C0000u;
    r0 = (r4 * 24);
    r20 = MemoryInline::FlatRead32((r3 + 18248));
    r5 = 0;
    r3 = r20;
    r8 = (r20 + r0);
    r6 = 1;
    r8 = MemoryInline::FlatRead8((r8 + 964));
    r7 = 0;
    r9 = 0;
    ctx->lr = 0x8053BDE8u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80869FD0u>(ctx);
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
    xer = ctx->xer;
    r0 = (r26 * 240);
    r4 = MemoryInline::FlatRead32((r30 + -10456));
    r3 = r20;
    r7 = r24;
    r5 = (r4 + r0);
    r4 = r26;
    r0 = MemoryInline::FlatRead32((r5 + 244));
    r9 = r25;
    r6 = 1;
    r8 = 3;
    r5 = (r0 & 255);
    ctx->lr = 0x8053BE18u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80869DF4u>(ctx);
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
    xer = ctx->xer;
}

loc_8053BE7C:
{
}

loc_8053BE80:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_8053BE94;
    }
}

loc_8053BE84:
{
    r16 = 1;
}

loc_8053BE94:
{
    r0 = MemoryInline::FlatRead32((r21 + 68));
    r6 = (r0 + r23);
    r23_addr_0 = (r23 + r0);
    r0 = MemoryInline::FlatRead32(r23_addr_0);
}

loc_8053BEA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8053BFC8;
    }
}

loc_8053BEA8:
{
    r4 = MemoryInline::FlatRead32((r27 + -10448));
    r3 = (r28 + -32767);
    r0 = (r29 + -1);
    r5 = MemoryInline::FlatRead16((r6 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 32));
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r4)) >> 32));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 131071);
    r0 = (r3 * r0);
    r0 = (r4 - r0);
    r0 = (r0 & 65535);
}

loc_8053BED4:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r0))) {
        goto loc_8053BFC8;
    }
}

loc_8053BED8:
{
    r0 = MemoryInline::FlatRead8((r6 + 6));
}

loc_8053BEE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8053BF4C;
    }
}

loc_8053BEE4:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & 1020);
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r4_addr_1 = (r4 + r5);
    r17 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = MemoryInline::FlatRead32((r17 + 56));
    r0 = (r0 & 2);
}

loc_8053BEFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053BF4C;
    }
}

loc_8053BF00:
{
    r4 = (r15 + r5);
    r5 = MemoryInline::FlatRead32((r4 + 68));
    r4 = 4;
    r20 = MemoryInline::FlatRead8((r5 + 133));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_3 = r0;
    r0 = (r0_subfc_min_3 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_3) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_3 = r3;
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_3);
    r3 = (r3 + r3_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053BF18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053BF4C;
    }
}

loc_8053BF1C:
{
    MemoryInline::FlatWrite16((r17 + 34), static_cast<uint16_t>(r20));
    r0 = 1;
    r3 = r17;
    r4 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 20), r14);
    r5 = 1;
    r6 = 5;
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r31));
    ctx->lr = 0x8053BF4Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805347F4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053BF4C:
{
    r0 = MemoryInline::FlatRead32((r21 + 68));
    r3 = (r0 + r23);
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_8053BF5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8053BFC8;
    }
}

loc_8053BF60:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & 1020);
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r4_addr_3 = (r4 + r5);
    r17 = MemoryInline::FlatRead32(r4_addr_3);
    r0 = MemoryInline::FlatRead32((r17 + 56));
    r0 = (r0 & 2);
}

loc_8053BF78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053BFC8;
    }
}

loc_8053BF7C:
{
    r4 = (r15 + r5);
    r5 = MemoryInline::FlatRead32((r4 + 68));
    r4 = 4;
    r20 = MemoryInline::FlatRead8((r5 + 133));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_5 = r0;
    r0 = (r0_subfc_min_5 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_5) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_5 = r3;
    r3_ca_5 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_5);
    r3 = (r3 + r3_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053BF94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053BFC8;
    }
}

loc_8053BF98:
{
    MemoryInline::FlatWrite16((r17 + 34), static_cast<uint16_t>(r20));
    r0 = 1;
    r3 = r17;
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r14);
    r5 = 1;
    r6 = 5;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r31));
    ctx->lr = 0x8053BFC8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805347F4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053BFC8:
{
}

loc_8053BFCC:
{
    if ((static_cast<int32_t>(r16) == static_cast<int32_t>(0))) {
        goto loc_8053BFFC;
    }
}

loc_8053BFD0:
{
    r3 = MemoryInline::FlatRead32((r21 + 68));
    r3_addr_1 = (r3 + r23);
    MemoryInline::FlatWrite32(r3_addr_1, r31);
    r0 = MemoryInline::FlatRead32((r21 + 68));
    r3 = (r0 + r23);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r31));
    r0 = MemoryInline::FlatRead32((r21 + 68));
    r3 = (r0 + r23);
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r21 + 68));
    r3 = (r0 + r23);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r31));
}

loc_8053BFFC:
{
    r0 = MemoryInline::FlatRead32((r30 + -10456));
    r3 = (r0 + r22);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_8053C00C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053C094;
    }
}

loc_8053C010:
{
    r0 = MemoryInline::FlatRead32((r21 + 68));
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(3));
    r5 = (r5_rot_5 & 2040);
    r5_addr_1 = (r5 + r0);
    r3 = MemoryInline::FlatRead32(r5_addr_1);
    r4 = (r0 + r5);
}

loc_8053C024:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053C030;
    }
}

loc_8053C028:
{
    r0 = 0;
    goto loc_8053C07C;
}

loc_8053C030:
{
    r0 = MemoryInline::FlatRead32((r21 + 116));
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_2);
    r5 = r5_addr_2;
}

loc_8053C03C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_8053C070;
    }
}

loc_8053C040:
{
    r3 = MemoryInline::FlatRead16((r5 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_8053C04C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8053C070;
    }
}

loc_8053C050:
{
    r3 = MemoryInline::FlatRead8((r5 + 6));
    r0 = MemoryInline::FlatRead8((r4 + 6));
}

loc_8053C05C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8053C070;
    }
}

loc_8053C060:
{
    r3 = MemoryInline::FlatRead8((r5 + 7));
    r0 = MemoryInline::FlatRead8((r4 + 7));
}

loc_8053C06C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8053C078;
    }
}

loc_8053C070:
{
    r0 = 1;
    goto loc_8053C07C;
}

loc_8053C078:
{
    r0 = 0;
}

loc_8053C07C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053C080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053C094;
    }
}

loc_8053C084:
{
    r3 = r15;
    r4 = (r19 & 255);
    r5 = (r18 & 255);
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8053B98Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8053C094:
{
    r18 = (r18 + 1);
    r23 = (r23 + 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(16));
}

loc_8053C0A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053BCF4;
    }
}

loc_8053C0A4:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 510);
    r4 = (r15 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 188));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8053C0B4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8053C0C0;
    }
}

loc_8053C0B8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + 188), static_cast<uint16_t>(r0));
}

loc_8053C0C0:
{
    r3 = MemoryInline::FlatRead16((r4 + 164));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8053C0C8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8053C0D4;
    }
}

loc_8053C0CC:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + 164), static_cast<uint16_t>(r0));
}

loc_8053C0D4:
{
    r19 = (r19 + 1);
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = (r19 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8053C0E8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053BCC8;
    }
}

loc_8053C0EC:
{
    r17 = 0;
    r16 = 0x809C0000u;
    r14 = 0x809C0000u;
    goto loc_8053C130;
}

loc_8053C0FC:
{
    r4 = (r17 & 255);
    r0 = (r4 * 240);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_8053C110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053C12C;
    }
}

loc_8053C114:
{
    r3 = MemoryInline::FlatRead32((r16 + 8016));
    // inline leaf 0x80653CB8 (23 guest instruction(s))
}

loc_inl3_0x80653CB8:
{
    r3 = 0x809C0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl3_0x80653CC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 8408));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl3_0x80653CDC;
    }
}

loc_inl3_0x80653CC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(12));
}

loc_inl3_0x80653CCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl3_0x80653CDC;
    }
}

loc_inl3_0x80653CD0:
{
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_inl3_0x80653CE0;
}

loc_inl3_0x80653CDC:
{
    r0 = 255;
}

loc_inl3_0x80653CE0:
{
    r4 = 0x809C0000u;
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r3 = (r3_rot_9 & 8160);
    r4 = MemoryInline::FlatRead32((r4 + 8408));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3 = (r4 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 10148));
    r3 = (r3 * 48);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl3_cont_80653CB8:
{
    // end of inlined leaf 0x80653CB8
    r5 = r3;
    r3 = r15;
    r4 = (r17 & 255);
    ctx->lr = 0x8053C12Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8053AC1Cu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053C12C:
{
    r17 = (r17 + 1);
}

loc_8053C130:
{
    r5 = MemoryInline::FlatRead32((r14 + -10456));
    r3 = (r17 & 255);
    r0 = MemoryInline::FlatRead8((r5 + 36));
}

loc_8053C140:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8053C0FC;
    }
}

loc_8053C144:
{
    r21 = 0;
    r22 = 0;
    r24 = 0x809C0000u;
    r18 = 3;
    r14 = 0;
    r16 = 0x809C0000u;
    r17 = 1;
    r23 = 2;
    goto loc_8053C2DC;
}

loc_8053C168:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r19_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r19 = (r19_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_4 = (r3 + r19);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r3 & 16);
}

loc_8053C180:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C2D8;
    }
}

loc_8053C184:
{
    r20 = (r15 + r19);
    r0 = MemoryInline::FlatRead32((r20 + 212));
}

loc_8053C190:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8053C1B8;
    }
}

loc_8053C194:
{
    r0 = (r3 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053C198:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053C1B8;
    }
}

loc_8053C19C:
{
    r12 = MemoryInline::FlatRead32(r15);
    r3 = r15;
    r4 = (r22 & 255);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8053C1B4u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r20 + 212), r18);
}

loc_8053C1B8:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r4 = 4;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_8 = r0;
    r0 = (r0_subfc_min_8 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_8) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_8 = r3;
    r3_ca_8 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_8);
    r3 = (r3 + r3_ca_8);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_8)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_8)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_8053C1C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053C210;
    }
}

loc_8053C1CC:
{
    r4 = (r22 & 255);
    r3 = MemoryInline::FlatRead16((r1 + 32));
    r0 = PPC_Slw(static_cast<uint32_t>(r17), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053C210;
    }
}

loc_8053C1E0:
{
    r0 = (r4 * 240);
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053C1F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053C210;
    }
}

loc_8053C1F8:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_5 = (r3 + r19);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r14));
    r3 = MemoryInline::FlatRead32((r15 + 4));
    ctx->lr = 0x8053C210u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80533DD4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053C210:
{
    r0 = MemoryInline::FlatRead16((r15 + 260));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8053C218:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8053C258;
    }
}

loc_8053C21C:
{
    r4 = MemoryInline::FlatRead32((r15 + 64));
    r5 = (r15 + r19);
    r3 = MemoryInline::FlatRead32((r5 + 68));
    r4 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead32((r5 + 116));
    r5 = (r3 + r4);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r5 + 148));
    r3 = MemoryInline::FlatRead8((r3 + 148));
}

loc_8053C244:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8053C258;
    }
}

loc_8053C248:
{
    r0 = MemoryInline::FlatRead8((r5 + 136));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r21 + r0);
    r21 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8053C258:
{
    r0 = MemoryInline::FlatRead32((r20 + 212));
}

loc_8053C260:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8053C2D8;
    }
}

loc_8053C264:
{
    r19 = 0;
}

loc_8053C268:
{
    r0 = MemoryInline::FlatRead32((r20 + 68));
    r3 = (r0 + r19);
    r0 = MemoryInline::FlatRead8((r3 + 128));
}

loc_8053C278:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053C2D4;
    }
}

loc_8053C27C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8053C280:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053C2A8;
    }
}

loc_8053C284:
{
    r3 = MemoryInline::FlatRead32((r24 + 18248));
    r4 = (r22 & 255);
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8053C2A4u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80869DF4u>(ctx);
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
    xer = ctx->xer;
    goto loc_8053C2C8;
}

loc_8053C2A8:
{
    r3 = MemoryInline::FlatRead32((r24 + 18248));
    r4 = (r22 & 255);
    r5 = 1;
    r6 = 0;
    r7 = 0;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8053C2C8u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80869DF4u>(ctx);
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
    xer = ctx->xer;
}

loc_8053C2C8:
{
    r19 = (r19 + 1);
}

loc_8053C2D0:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(5))) {
        goto loc_8053C268;
    }
}

loc_8053C2D4:
{
    MemoryInline::FlatWrite32((r20 + 212), r23);
}

loc_8053C2D8:
{
    r22 = (r22 + 1);
}

loc_8053C2DC:
{
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = (r22 & 255);
    r3 = MemoryInline::FlatRead8((r3 + 36));
}

loc_8053C2EC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8053C168;
    }
}

loc_8053C2F0:
{
    r0 = (r21 * 10);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8053C334;
    }
}

loc_8053C300:
{
    r0 = MemoryInline::FlatRead16((r15 + 276));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16((r15 + 276), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8053C314:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-30))) {
        goto loc_8053C320;
    }
}

loc_8053C318:
{
    r0 = -30;
    MemoryInline::FlatWrite16((r15 + 276), static_cast<uint16_t>(r0));
}

loc_8053C320:
{
    r0 = MemoryInline::FlatRead16((r15 + 276));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8053C328:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(240))) {
        goto loc_8053C334;
    }
}

loc_8053C32C:
{
    r0 = 240;
    MemoryInline::FlatWrite16((r15 + 276), static_cast<uint16_t>(r0));
}

loc_8053C334:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r4 = 4;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_14 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_10 = r0;
    r0 = (r0_subfc_min_10 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_10) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_10 = r3;
    r3_ca_10 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_10);
    r3 = (r3 + r3_ca_10);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_10)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_10)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_8053C344:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053C3EC;
    }
}

loc_8053C348:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead16((r1 + 32));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r7 = 1;
    r8 = 0;
    r4 = 1;
    r6 = MemoryInline::FlatRead8((r3 + 36));
    goto loc_8053C3CC;
}

loc_8053C368:
{
    r0 = (r8 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053C39C;
    }
}

loc_8053C378:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 16);
}

loc_8053C390:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C39C;
    }
}

loc_8053C394:
{
    r7 = 0;
    goto loc_8053C3D8;
}

loc_8053C39C:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_11 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_11);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r3 & 16);
}

loc_8053C3B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C3C8;
    }
}

loc_8053C3B8:
{
    r0 = (r3 & 2);
}

loc_8053C3BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C3C8;
    }
}

loc_8053C3C0:
{
    r7 = 0;
    goto loc_8053C3D8;
}

loc_8053C3C8:
{
    r8 = (r8 + 1);
}

loc_8053C3CC:
{
    r0 = (r8 & 255);
}

loc_8053C3D4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_8053C368;
    }
}

loc_8053C3D8:
{
}

loc_8053C3DC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8053C3EC;
    }
}

loc_8053C3E0:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 40), r0);
}

loc_8053C3EC:
{
    r11 = 0;
    r4 = 1;
    r5 = 2;
    r8 = 0;
    r7 = 0x809C0000u;
    r0 = 5;
}

loc_8053C404:
{
    r3 = MemoryInline::FlatRead32((r15 + 64));
    r3_addr_15 = (r3 + r11);
    r3 = MemoryInline::FlatRead8(r3_addr_15);
}

loc_8053C410:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(12))) {
        goto loc_8053C48C;
    }
}

loc_8053C414:
{
    r12 = 0;
    r9 = 0;
    ctr = r0;
}

loc_8053C420:
{
    r6 = MemoryInline::FlatRead32((r15 + 64));
    r3 = (r9 + r11);
    r3 = (r6 + r3);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r8));
    r3 = MemoryInline::FlatRead32((r15 + 64));
    r6 = MemoryInline::FlatRead32((r7 + 18248));
    r10 = (r11 + r3);
    r11_addr_3 = (r11 + r3);
    r3 = MemoryInline::FlatRead8(r11_addr_3);
    r3 = (r3 * 24);
    r6 = (r6 + r3);
    r3 = MemoryInline::FlatRead8((r6 + 964));
}

loc_8053C450:
{
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(r3))) {
        goto loc_8053C480;
    }
}

loc_8053C454:
{
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r3 = (r3_rot_17 & 1020);
    r3 = (r6 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 968));
    r3 = MemoryInline::FlatRead8((r3 + 177));
}

loc_8053C468:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8053C478;
    }
}

loc_8053C46C:
{
    r3 = (r10 + r9);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r5));
    goto loc_8053C480;
}

loc_8053C478:
{
    r3 = (r10 + r9);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
}

loc_8053C480:
{
    r9 = (r9 + 2);
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053C420;
    }
}

loc_8053C48C:
{
    r11 = (r11 + 1);
}

loc_8053C494:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(2))) {
        goto loc_8053C404;
    }
}

loc_8053C498:
{
    r0 = 7;
    r11 = 0;
    r9 = 0x809C0000u;
    r6 = 0x80010000u;
    r5 = 65536;
    r4 = 0;
    ctr = r0;
}

loc_8053C4B4:
{
    r0 = MemoryInline::FlatRead32((r15 + 64));
    r12 = (r0 + r11);
    r0 = MemoryInline::FlatRead32((r12 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053C4C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053C544;
    }
}

loc_8053C4C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_8053C4CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053C544;
    }
}

loc_8053C4D0:
{
    r3 = MemoryInline::FlatRead32((r9 + -10448));
    r7 = (r6 + -32767);
    r0 = (r5 + -1);
    r10 = MemoryInline::FlatRead16((r12 + 44));
    r8 = MemoryInline::FlatRead32((r3 + 32));
    r3 = 0;
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r8)) >> 32));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(17));
    r7 = (r7_rot_2 & 131071);
    r0 = (r7 * r0);
    r0 = (r8 - r0);
    r0 = (r0 & 65535);
}

loc_8053C500:
{
    if ((static_cast<uint32_t>(r10) < static_cast<uint32_t>(r0))) {
        goto loc_8053C510;
    }
}

loc_8053C504:
{
    r0 = (r10 - r0);
}

loc_8053C50C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(32767))) {
        goto loc_8053C514;
    }
}

loc_8053C510:
{
    r3 = 1;
}

loc_8053C514:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053C518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053C544;
    }
}

loc_8053C51C:
{
    MemoryInline::FlatWrite32((r12 + 40), r4);
    r0 = MemoryInline::FlatRead32((r15 + 64));
    r3 = (r0 + r11);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead32((r15 + 64));
    r3 = (r0 + r11);
    MemoryInline::FlatWrite8((r3 + 46), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r15 + 64));
    r3 = (r0 + r11);
    MemoryInline::FlatWrite8((r3 + 47), static_cast<uint8_t>(r4));
}

loc_8053C544:
{
    r11 = (r11 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053C4B4;
    }
}

loc_8053C54C:
{
    r4 = MemoryInline::FlatRead32((r15 + 56));
    r3 = r15;
    ctx->lr = 0x8053C558u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8053A3C0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r15 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    r5 = MemoryInline::FlatRead16((r15 + 60));
    ctx->lr = 0x8053C56Cu;
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
    InvokeDirectCpu<0x80653C08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r15 + 260));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053C574:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053C798;
    }
}

loc_8053C578:
{
    r12 = MemoryInline::FlatRead32(r15);
    r3 = r15;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053C58Cu;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8053C5A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053C5B8;
    }
}

loc_8053C5A4:
{
    r3 = r15;
    r4 = 8;
    r5 = 12;
    r6 = 12;
    ctx->lr = 0x8053C5B8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8053B3CCu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8053C5B8:
{
    r0 = MemoryInline::FlatRead8((r15 + 262));
}

loc_8053C5C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C8E8;
    }
}

loc_8053C5C4:
{
    r4 = MemoryInline::FlatRead32((r15 + 4));
    r5 = MemoryInline::FlatRead32((r4 + 20));
    r0 = MemoryInline::FlatRead8((r5 + 64));
}

loc_8053C5D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053C5E0;
    }
}

loc_8053C5D8:
{
    r0 = 1;
    goto loc_8053C65C;
}

loc_8053C5E0:
{
    r0 = MemoryInline::FlatRead8((r15 + 274));
}

loc_8053C5E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C5F4;
    }
}

loc_8053C5EC:
{
    r0 = 0;
    goto loc_8053C65C;
}

loc_8053C5F4:
{
    r0 = MemoryInline::FlatRead8((r5 + 14));
}

loc_8053C5FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C608;
    }
}

loc_8053C600:
{
    r0 = 1;
    goto loc_8053C65C;
}

loc_8053C608:
{
    r0 = MemoryInline::FlatRead16((r5 + 8));
    r3 = MemoryInline::FlatRead16((r15 + 268));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8053C614:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053C620;
    }
}

loc_8053C618:
{
    r0 = 1;
    goto loc_8053C65C;
}

loc_8053C620:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053C658;
    }
}

loc_8053C624:
{
    r0 = MemoryInline::FlatRead8((r5 + 10));
    r3 = MemoryInline::FlatRead8((r15 + 270));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8053C630:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053C63C;
    }
}

loc_8053C634:
{
    r0 = 1;
    goto loc_8053C65C;
}

loc_8053C63C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053C658;
    }
}

loc_8053C640:
{
    r3 = MemoryInline::FlatRead16((r15 + 272));
    r0 = MemoryInline::FlatRead16((r5 + 12));
}

loc_8053C64C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_8053C658;
    }
}

loc_8053C650:
{
    r0 = 1;
    goto loc_8053C65C;
}

loc_8053C658:
{
    r0 = 0;
}

loc_8053C65C:
{
}

loc_8053C660:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C754;
    }
}

loc_8053C664:
{
    r14 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r4 + 29));
    r3 = MemoryInline::FlatRead32((r14 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 36));
    r0 = (r0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8053C67C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053C754;
    }
}

loc_8053C680:
{
    r3 = r15;
    ctx->lr = 0x8053C688u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80539404u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053C68C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053C754;
    }
}

loc_8053C690:
{
    r8 = MemoryInline::FlatRead32((r14 + -10456));
    r6 = 2;
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r8 + 36));
    r7 = (r8 + 40);
    goto loc_8053C704;
}

loc_8053C6A8:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_17 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_17);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 16);
}

loc_8053C6C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C700;
    }
}

loc_8053C6C4:
{
}

loc_8053C6C8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(2))) {
        goto loc_8053C6E0;
    }
}

loc_8053C6CC:
{
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r3 = (r7 + r0);
    r6 = MemoryInline::FlatRead32((r3 + 204));
    goto loc_8053C700;
}

loc_8053C6E0:
{
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r3 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 204));
}

loc_8053C6F4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_8053C700;
    }
}

loc_8053C6F8:
{
    r0 = 0;
    goto loc_8053C714;
}

loc_8053C700:
{
    r5 = (r5 + 1);
}

loc_8053C704:
{
    r0 = (r5 & 255);
}

loc_8053C70C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8053C6A8;
    }
}

loc_8053C710:
{
    r0 = 1;
}

loc_8053C714:
{
}

loc_8053C718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C754;
    }
}

loc_8053C71C:
{
    r0 = MemoryInline::FlatRead32((r8 + 2928));
    r3 = 0;
}

loc_8053C728:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_8053C738;
    }
}

loc_8053C72C:
{
}

loc_8053C730:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_8053C738;
    }
}

loc_8053C734:
{
    r3 = 1;
}

loc_8053C738:
{
}

loc_8053C73C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053C8E8;
    }
}

loc_8053C740:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl6_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x80656F38;
    }
}

loc_inl6_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl6_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl6_0x80656F38;
    }
}

loc_inl6_0x80656F34:
{
    r6 = 1;
}

loc_inl6_0x80656F38:
{
    r3 = r6;
}

loc_inl6_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
}

loc_8053C750:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053C8E8;
    }
}

loc_8053C754:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0 = MemoryInline::FlatRead16((r15 + 260));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & 1020);
    r3_addr_20 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_20);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053C770:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053C78C;
    }
}

loc_8053C774:
{
    r6 = MemoryInline::FlatRead32((r15 + 64));
    r3 = r15;
    r4 = 7;
    r5 = MemoryInline::FlatRead8(r6);
    r6 = MemoryInline::FlatRead8((r6 + 1));
    ctx->lr = 0x8053C78Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8053B3CCu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8053C78C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r15 + 262), static_cast<uint8_t>(r0));
    goto loc_8053C8E8;
}

loc_8053C798:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r4 = 4;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_20 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_11 = r0;
    r0 = (r0_subfc_min_11 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_11) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_11 = r3;
    r3_ca_11 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_11);
    r3 = (r3 + r3_ca_11);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_11)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_11)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_8053C7A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053C8E8;
    }
}

loc_8053C7AC:
{
    r3 = 0x809C0000u;
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r6 = 0;
    r4 = MemoryInline::FlatRead8((r3 + 36));
    goto loc_8053C7EC;
}

loc_8053C7C4:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_22 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_22);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 32);
}

loc_8053C7DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C7E8;
    }
}

loc_8053C7E0:
{
    r5 = 0;
    goto loc_8053C7F8;
}

loc_8053C7E8:
{
    r6 = (r6 + 1);
}

loc_8053C7EC:
{
    r0 = (r6 & 255);
}

loc_8053C7F4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8053C7C4;
    }
}

loc_8053C7F8:
{
}

loc_8053C7FC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8053C818;
    }
}

loc_8053C800:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_8053C810:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(11700))) {
        goto loc_8053C818;
    }
}

loc_8053C814:
{
    r5 = 1;
}

loc_8053C818:
{
}

loc_8053C81C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8053C878;
    }
}

loc_8053C820:
{
    r16 = 0;
    r14 = 0x809C0000u;
    goto loc_8053C860;
}

loc_8053C82C:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_25 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_25);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r3 & 16);
}

loc_8053C844:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C85C;
    }
}

loc_8053C848:
{
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053C84C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053C85C;
    }
}

loc_8053C850:
{
    r3 = r15;
    r4 = (r16 & 255);
    ctx->lr = 0x8053C85Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8053BAA0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053C85C:
{
    r16 = (r16 + 1);
}

loc_8053C860:
{
    r3 = MemoryInline::FlatRead32((r14 + -10456));
    r4 = (r16 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
}

loc_8053C870:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8053C82C;
    }
}

loc_8053C874:
{
    goto loc_8053C8E8;
}

loc_8053C878:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r4 = 4;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_21 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_12 = r0;
    r0 = (r0_subfc_min_12 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_12) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_12 = r3;
    r3_ca_12 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_12);
    r3 = (r3 + r3_ca_12);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_12)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_12)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_8053C888:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053C8E8;
    }
}

loc_8053C88C:
{
    r17 = 0;
    r16 = 0;
    r14 = 0x809C0000u;
    goto loc_8053C8D4;
}

loc_8053C89C:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_27 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_27);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r4 & 32);
}

loc_8053C8B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053C8D0;
    }
}

loc_8053C8B8:
{
    r0 = (r4 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053C8BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053C8D0;
    }
}

loc_8053C8C0:
{
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r16));
    r4 = (r17 & 255);
    r3 = MemoryInline::FlatRead32((r15 + 4));
    ctx->lr = 0x8053C8D0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80533DD4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053C8D0:
{
    r17 = (r17 + 1);
}

loc_8053C8D4:
{
    r3 = MemoryInline::FlatRead32((r14 + -10456));
    r4 = (r17 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
}

loc_8053C8E4:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8053C89C;
    }
}

loc_8053C8E8:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r4 = 4;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_23 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_14 = r0;
    r0 = (r0_subfc_min_14 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_14) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_14 = r3;
    r3_ca_14 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_14);
    r3 = (r3 + r3_ca_14);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_14)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_14)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_8053C8F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053C970;
    }
}

loc_8053C8FC:
{
    r8 = 0;
    r5 = 0;
    r4 = 0x809C0000u;
    goto loc_8053C95C;
}

loc_8053C90C:
{
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_8053C920:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053C958;
    }
}

loc_8053C924:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r7 = (r7_rot_5 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_30 = (r3 + r7);
    r6 = MemoryInline::FlatRead32(r3_addr_30);
    r0 = MemoryInline::FlatRead32((r6 + 56));
    r0 = (r0 & 16);
}

loc_8053C93C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C954;
    }
}

loc_8053C940:
{
    r3 = (r15 + r7);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r0 = MemoryInline::FlatRead8((r3 + 133));
    MemoryInline::FlatWrite16((r6 + 34), static_cast<uint16_t>(r0));
    goto loc_8053C958;
}

loc_8053C954:
{
    MemoryInline::FlatWrite16((r6 + 34), static_cast<uint16_t>(r5));
}

loc_8053C958:
{
    r8 = (r8 + 1);
}

loc_8053C95C:
{
    r6 = MemoryInline::FlatRead32((r4 + -10456));
    r3 = (r8 & 255);
    r0 = MemoryInline::FlatRead8((r6 + 36));
}

loc_8053C96C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8053C90C;
    }
}

loc_8053C970:
{
    r4 = MemoryInline::FlatRead32((r15 + 64));
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8053C97C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8053C9B4;
    }
}

loc_8053C980:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_33 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_33);
    r0 = MemoryInline::FlatRead16((r3 + 34));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r15 + 64));
    r0 = MemoryInline::FlatRead8(r3);
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    r3 = (r15 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    MemoryInline::FlatWrite8((r3 + 133), static_cast<uint8_t>(r4));
}

loc_8053C9B4:
{
    r4 = MemoryInline::FlatRead32((r15 + 64));
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_8053C9C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8053C9F8;
    }
}

loc_8053C9C4:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_35 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_35);
    r0 = MemoryInline::FlatRead16((r3 + 34));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r15 + 64));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r3 = (r15 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    MemoryInline::FlatWrite8((r3 + 133), static_cast<uint8_t>(r4));
}

loc_8053C9F8:
{
    r4 = MemoryInline::FlatRead32((r15 + 4));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 536));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 68));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8053CA0C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CB14;
    }
}

loc_8053CA14:
{
    r4 = MemoryInline::FlatRead8((r15 + 16));
    r0 = MemoryInline::FlatRead16((r15 + 14));
}

loc_8053CA20:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_8053CAEC;
    }
}

loc_8053CA24:
{
    r3 = MemoryInline::FlatRead32((r15 + 24));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & 1020);
    addr_lfsx_8053CA2C_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8053CA2C_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8053CA34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053CA8C;
    }
}

loc_8053CA38:
{
}

loc_8053CA3C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_8053CA60;
    }
}

loc_8053CA40:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r15 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_30 & 1);
    goto loc_8053CA64;
}

loc_8053CA60:
{
    r0 = 0;
}

loc_8053CA64:
{
}

loc_8053CA68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053CAEC;
    }
}

loc_8053CA6C:
{
}

loc_8053CA70:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_8053CAEC;
    }
}

loc_8053CA74:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r15 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r15 + 8), r0);
    goto loc_8053CAEC;
}

loc_8053CA8C:
{
    r3 = MemoryInline::FlatRead32((r15 + 20));
    addr_lfsx_8053CA90_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8053CA90_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8053CA98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053CAEC;
    }
}

loc_8053CA9C:
{
}

loc_8053CAA0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_8053CAC4;
    }
}

loc_8053CAA4:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r15 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_32 & 1);
    goto loc_8053CAC8;
}

loc_8053CAC4:
{
    r0 = 0;
}

loc_8053CAC8:
{
}

loc_8053CACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053CAEC;
    }
}

loc_8053CAD0:
{
}

loc_8053CAD4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_8053CAEC;
    }
}

loc_8053CAD8:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r15 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r3 & ~r0);
    MemoryInline::FlatWrite32((r15 + 8), r0);
}

loc_8053CAEC:
{
    r4 = MemoryInline::FlatRead8((r15 + 16));
    r3 = MemoryInline::FlatRead16((r15 + 14));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r15 + 16), static_cast<uint8_t>(r0));
    r4 = (r0 & 255);
    r0 = (r3 + 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8053CB08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053CB14;
    }
}

loc_8053CB0C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r15 + 16), static_cast<uint8_t>(r0));
}

loc_8053CB14:
{
    r11 = (r1 + 112);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8053BCF4:
{
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8053BCF4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8053BCC8:
{
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8053BCC8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8053BD98 func_8053BD98 preserves=true fpr_mask=0x00000000
