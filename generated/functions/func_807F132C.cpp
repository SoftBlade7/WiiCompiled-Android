#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F132C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r0_subfc_min_4 = 0;
    uint32_t r0_subfc_min_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r30_addr_8 = 0;
    uint32_t r30_addr_9 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_adde_right_5 = 0;
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
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807F132C;

loc_807F132C:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 144);
    // inline leaf 0x80021570 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -68), r15);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -64), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -60), r17);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -56), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -4), r31);
    // end of inlined leaf 0x80021570
    r16 = -1;
    MemoryInline::FlatWrite32((r3 + 176), r16);
    r15 = 0x809C0000u;
    r30 = r3;
    r17 = 0x808B0000u;
    r3 = MemoryInline::FlatRead32((r15 + -10448));
    r17 = (r17 + -25288);
    r4 = 2;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_807F1380:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807F13E4;
    }
}

loc_807F1384:
{
    r3 = MemoryInline::FlatRead32((r15 + -10448));
    // inline leaf 0x80533090 (12 guest instruction(s))
}

loc_inl2_0x80533090:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_inl2_0x805330A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(11))) {
        goto loc_inl2_0x805330B4;
    }
}

loc_inl2_0x805330A4:
{
}

loc_inl2_0x805330A8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(12))) {
        goto loc_inl2_0x805330B4;
    }
}

loc_inl2_0x805330AC:
{
    r3 = 0;
    goto loc_inl2_cont_80533090;
}

loc_inl2_0x805330B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (240 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(240) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_inl2_cont_80533090:
{
    // end of inlined leaf 0x80533090
}

loc_807F1390:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(180))) {
        goto loc_807F13E4;
    }
}

loc_807F1394:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r30 + 3));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r5 = (r30 + 4);
    r3 = (r30 + 1);
    r6 = 1;
    r4 = 0;
    goto loc_807F13D4;
}

loc_807F13C0:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    r6 = (r6 + 1);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r5 + 20), r16);
    r5 = (r5 + 4);
}

loc_807F13D4:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_807F13DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F13C0;
    }
}

loc_807F13E0:
{
    goto loc_807F1B5C;
}

loc_807F13E4:
{
    r15 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r15 + -10448));
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
}

loc_807F13F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807F1438;
    }
}

loc_807F13FC:
{
    r6 = r30;
    r3 = r30;
    r7 = 0;
    r5 = 0;
    r4 = -1;
    goto loc_807F1428;
}

loc_807F1414:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r6 + 20), r4);
    r6 = (r6 + 4);
}

loc_807F1428:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_807F1430:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F1414;
    }
}

loc_807F1434:
{
    goto loc_807F1B5C;
}

loc_807F1438:
{
    r3 = MemoryInline::FlatRead32((r15 + -10448));
    r4 = 2;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_2 = r0;
    r0 = (r0_subfc_min_2 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_2) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_2 = r3;
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_2);
    r3 = (r3 + r3_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_807F1448:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807F1464;
    }
}

loc_807F144C:
{
    r4 = MemoryInline::FlatRead32((r15 + -10448));
    r3 = 0x808D0000u;
    r0 = MemoryInline::FlatRead32((r3 + 15888));
    r3 = MemoryInline::FlatRead32((r4 + 32));
}

loc_807F1460:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_807F147C;
    }
}

loc_807F1464:
{
    r3 = 0x809C0000u;
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
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
}

loc_807F1478:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807F14B8;
    }
}

loc_807F147C:
{
    r6 = r30;
    r3 = r30;
    r7 = 0;
    r5 = 0;
    r4 = -1;
    goto loc_807F14A8;
}

loc_807F1494:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r6 + 20), r4);
    r6 = (r6 + 4);
}

loc_807F14A8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_807F14B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F1494;
    }
}

loc_807F14B4:
{
    goto loc_807F1B5C;
}

loc_807F14B8:
{
    r15 = MemoryInline::FlatRead8((r30 + 3));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r4 = 0;
}

loc_807F14CC:
{
    r18 = MemoryInline::FlatRead8((r3 + 36));
    if ((static_cast<int32_t>(r15) < static_cast<int32_t>(0))) {
        goto loc_807F14EC;
    }
}

loc_807F14D4:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_807F14E4:
{
    if ((static_cast<int32_t>(r15) >= static_cast<int32_t>(r0))) {
        goto loc_807F14EC;
    }
}

loc_807F14E8:
{
    r4 = 1;
}

loc_807F14EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807F14F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F1508;
    }
}

loc_807F14F4:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x807F1508u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807F1508:
{
    r19 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r20 = (r19 + 6248);
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r20 + 8));
    r5 = 0;
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctx->lr = 0x807F1528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80566020u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f29.d = MemoryInline::FlatReadFloat32((r17 + 256));
    r31 = 0;
    f30.d = MemoryInline::FlatReadFloat32(r17);
    r22 = -1;
    f31.d = MemoryInline::FlatReadFloat32((r17 + 224));
    r24 = 0x808D0000u;
    r26 = 0;
    r25 = 0x809C0000u;
    r27 = 0x809C0000u;
    r28 = 0x809C0000u;
    r21 = 0x809C0000u;
    r23 = 0x809C0000u;
    r29 = 0x809C0000u;
    goto loc_807F1B50;
}

loc_807F1560:
{
    r3 = MemoryInline::FlatRead32((r25 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_807F1570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(106))) {
        goto loc_807F15C0;
    }
}

loc_807F1574:
{
}

loc_807F1578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(107))) {
        goto loc_807F15C0;
    }
}

loc_807F157C:
{
}

loc_807F1580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(110))) {
        goto loc_807F15C0;
    }
}

loc_807F1584:
{
}

loc_807F1588:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(111))) {
        goto loc_807F15C0;
    }
}

loc_807F158C:
{
}

loc_807F1590:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(52))) {
        goto loc_807F15C0;
    }
}

loc_807F1594:
{
}

loc_807F1598:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(50))) {
        goto loc_807F15C0;
    }
}

loc_807F159C:
{
}

loc_807F15A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(51))) {
        goto loc_807F15C0;
    }
}

loc_807F15A4:
{
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    r4 = MemoryInline::FlatRead8((r30 + 3));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r4 = (r31 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_807F15BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_807F1614;
    }
}

loc_807F15C0:
{
    r3 = MemoryInline::FlatRead32((r21 + -10448));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r3 & 2);
}

loc_807F15D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F1614;
    }
}

loc_807F15DC:
{
    r0 = (r3 & 16);
}

loc_807F15E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F1614;
    }
}

loc_807F15E4:
{
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    r4 = MemoryInline::FlatRead8((r30 + 3));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r27 + 6392));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x80590100
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16);
}

loc_807F1610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807F164C;
    }
}

loc_807F1614:
{
    r4 = r30;
    r3 = (r31 & 255);
    r5 = 0;
    goto loc_807F163C;
}

loc_807F1624:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_807F162C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_807F1634;
    }
}

loc_807F1630:
{
    MemoryInline::FlatWrite32((r4 + 20), r22);
}

loc_807F1634:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
}

loc_807F163C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_807F1644:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F1624;
    }
}

loc_807F1648:
{
    goto loc_807F1B4C;
}

loc_807F164C:
{
    r3 = MemoryInline::FlatRead32((r27 + 6392));
    r4 = (r31 & 255);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = r3;
    r3 = (r1 + 56);
    r5 = (r23 + 16556);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r5 = MemoryInline::FlatRead32((r1 + 56));
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r16 = MemoryInline::FlatRead8((r30 + 3));
}

loc_807F1690:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(0))) {
        goto loc_807F16A4;
    }
}

loc_807F1694:
{
    r0 = MemoryInline::FlatRead32((r20 + 4));
}

loc_807F169C:
{
    if ((static_cast<int32_t>(r16) >= static_cast<int32_t>(r0))) {
        goto loc_807F16A4;
    }
}

loc_807F16A0:
{
    r3 = 1;
}

loc_807F16A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F16A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F16C0;
    }
}

loc_807F16AC:
{
    r3 = (r19 + 6248);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x807F16C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807F16C0:
{
    r3 = MemoryInline::FlatRead32((r20 + 8));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = (r1 + 44);
    r5 = (r1 + 20);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    ctx->lr = 0x807F16D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80566F6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r1 + 44));
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r16 = MemoryInline::FlatRead8((r30 + 3));
}

loc_807F16FC:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(0))) {
        goto loc_807F1710;
    }
}

loc_807F1700:
{
    r0 = MemoryInline::FlatRead32((r20 + 4));
}

loc_807F1708:
{
    if ((static_cast<int32_t>(r16) >= static_cast<int32_t>(r0))) {
        goto loc_807F1710;
    }
}

loc_807F170C:
{
    r3 = 1;
}

loc_807F1710:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F1714:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F172C;
    }
}

loc_807F1718:
{
    r3 = (r19 + 6248);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x807F172Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807F172C:
{
    r3 = MemoryInline::FlatRead32((r20 + 8));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4 = (r1 + 32);
    r5 = (r1 + 8);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80566FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r31 & 255);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r0 = (r3 * 12);
    r4 = r30;
    r15 = 0;
    r16 = (r30 + r0);
    MemoryInline::FlatWriteFloat32((r16 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r16 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r16 + 40), f0.d);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    ctr = r0;
}

loc_807F177C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807F17A4;
    }
}

loc_807F1780:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_807F1788:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_807F1798;
    }
}

loc_807F178C:
{
}

loc_807F1790:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_807F1798;
    }
}

loc_807F1794:
{
    goto loc_807F17A8;
}

loc_807F1798:
{
    r4 = (r4 + 4);
    r15 = (r15 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807F1780;
    }
}

loc_807F17A4:
{
    r15 = -1;
}

loc_807F17A8:
{
}

loc_807F17AC:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(-1))) {
        goto loc_807F181C;
    }
}

loc_807F17B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 15892));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807F17C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F17EC;
    }
}

loc_807F17C4:
{
    SetCRFloatResident(cr, 0, f30.d, f1.d);
}

loc_807F17C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F17EC;
    }
}

loc_807F17CC:
{
    r3 = MemoryInline::FlatRead32((r25 + 7736));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = std::fabs(f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1008));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807F17E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F17FC;
    }
}

loc_807F17EC:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 20), r22);
    r30_addr_2 = (r30 + r15);
    MemoryInline::FlatWrite8(r30_addr_2, static_cast<uint8_t>(r26));
}

loc_807F17FC:
{
    r3 = MemoryInline::FlatRead32((r29 + 6584));
    r0 = MemoryInline::FlatRead8((r30 + 3));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F1818:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F1B4C;
    }
}

loc_807F181C:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 15892));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807F182C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F1858;
    }
}

loc_807F1830:
{
    SetCRFloatResident(cr, 0, f30.d, f1.d);
}

loc_807F1834:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F1858;
    }
}

loc_807F1838:
{
    r3 = MemoryInline::FlatRead32((r25 + 7736));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = std::fabs(f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1008));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807F1854:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F1954;
    }
}

loc_807F1858:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807F1860:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F1B4C;
    }
}

loc_807F1868:
{
    r3 = MemoryInline::FlatRead32((r29 + 6584));
    r0 = MemoryInline::FlatRead8((r30 + 3));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r3_addr_13 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_13);
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F1884:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F1B4C;
    }
}

loc_807F1888:
{
    r3 = MemoryInline::FlatRead32((r27 + 6392));
    r4 = (r31 & 255);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r3_addr_14 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_14);
    // end of inlined leaf 0x80590100
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -2147483648);
}

loc_807F18A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F18C4;
    }
}

loc_807F18A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r3 & 32768);
}

loc_807F18B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F18C4;
    }
}

loc_807F18B4:
{
    r0 = (r3 & 134217728);
}

loc_807F18B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F18C4;
    }
}

loc_807F18BC:
{
    r0 = (r3 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F18C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F1B4C;
    }
}

loc_807F18C4:
{
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 2);
}

loc_807F18D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807F191C;
    }
}

loc_807F18D4:
{
    r4 = MemoryInline::FlatRead8((r30 + 3));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r3 = (r3 & 255);
    r0 = (r31 & 255);
    r4 = MemoryInline::FlatRead32((r28 + -10456));
    r3 = (r3 * 240);
    r5 = (r4 + 40);
    r3 = (r5 + r3);
    r0 = (r0 * 240);
    r4 = MemoryInline::FlatRead32((r3 + 204));
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 204));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_22 & 134217727);
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_8 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_807F1918:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F1B4C;
    }
}

loc_807F191C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_807F1940:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F1B4C;
    }
}

loc_807F1944:
{
    f29.d = f0.d;
    r0 = (r31 & 255);
    MemoryInline::FlatWrite32((r30 + 176), r0);
    goto loc_807F1B4C;
}

loc_807F1954:
{
    r3 = MemoryInline::FlatRead32((r29 + 6584));
    r0 = MemoryInline::FlatRead8((r30 + 3));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 & 32);
}

loc_807F1970:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807F1A3C;
    }
}

loc_807F1974:
{
    r3 = MemoryInline::FlatRead32((r27 + 6392));
    r4 = (r31 & 255);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3_addr_11 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_11);
    // end of inlined leaf 0x80590100
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -2147483648);
}

loc_807F1990:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F19B0;
    }
}

loc_807F1994:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r3 & 32768);
}

loc_807F199C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F19B0;
    }
}

loc_807F19A0:
{
    r0 = (r3 & 134217728);
}

loc_807F19A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F19B0;
    }
}

loc_807F19A8:
{
    r0 = (r3 & 536870912);
}

loc_807F19AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807F1A3C;
    }
}

loc_807F19B0:
{
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 2);
}

loc_807F19BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807F1A08;
    }
}

loc_807F19C0:
{
    r4 = MemoryInline::FlatRead8((r30 + 3));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r3 = (r3 & 255);
    r0 = (r31 & 255);
    r4 = MemoryInline::FlatRead32((r28 + -10456));
    r3 = (r3 * 240);
    r5 = (r4 + 40);
    r3 = (r5 + r3);
    r0 = (r0 * 240);
    r4 = MemoryInline::FlatRead32((r3 + 204));
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 204));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_14 & 134217727);
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
}

loc_807F1A04:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_807F1A3C;
    }
}

loc_807F1A08:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_807F1A2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F1A3C;
    }
}

loc_807F1A30:
{
    f29.d = f0.d;
    r0 = (r31 & 255);
    MemoryInline::FlatWrite32((r30 + 176), r0);
}

loc_807F1A3C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = r30;
    r4 = 0;
    ctr = r0;
}

loc_807F1A50:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807F1AA0;
    }
}

loc_807F1A54:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_807F1A5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_807F1A94;
    }
}

loc_807F1A60:
{
    r30_addr_5 = (r30 + r4);
    MemoryInline::FlatWrite8(r30_addr_5, static_cast<uint8_t>(r26));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3 = (r30 + r0);
    r15 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r0 = (r31 & 255);
    MemoryInline::FlatWriteFloat32((r16 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r16 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r16 + 40), f0.d);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_807F1AA0;
}

loc_807F1A94:
{
    r3 = (r3 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807F1A54;
    }
}

loc_807F1AA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(-1));
}

loc_807F1AA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F1B4C;
    }
}

loc_807F1AA8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32(r17);
    r5 = -1;
    r6 = 0;
    ctr = r0;
}

loc_807F1AC4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807F1AFC;
    }
}

loc_807F1AC8:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_807F1AD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_807F1AF0;
    }
}

loc_807F1AD4:
{
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807F1AE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F1AF0;
    }
}

loc_807F1AE8:
{
    f1.d = f0.d;
    r5 = r6;
}

loc_807F1AF0:
{
    r3 = (r3 + 4);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807F1AC8;
    }
}

loc_807F1AFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807F1B00:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F1B4C;
    }
}

loc_807F1B04:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807F1B0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F1B4C;
    }
}

loc_807F1B10:
{
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807F1B14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F1B4C;
    }
}

loc_807F1B18:
{
    r3 = MemoryInline::FlatRead32((r25 + 7736));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = std::fabs(f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1008));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807F1B34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F1B4C;
    }
}

loc_807F1B38:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r30_addr_7 = (r30 + r5);
    MemoryInline::FlatWrite8(r30_addr_7, static_cast<uint8_t>(r26));
    r3 = (r30 + r0);
    r0 = (r31 & 255);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_807F1B4C:
{
    r31 = (r31 + 1);
}

loc_807F1B50:
{
    r0 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r18));
}

loc_807F1B58:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F1560;
    }
}

loc_807F1B5C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 144);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // inline leaf 0x800215BC (18 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -68));
            r16 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -4));
    // end of inlined leaf 0x800215BC
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807F132C func_807F132C preserves=false fpr_mask=0xE0000000
