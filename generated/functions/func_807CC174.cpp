#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CC174(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_addic_src_1 = 0;
    uint32_t r0_addic_src_2 = 0;
    uint32_t r0_addic_src_3 = 0;
    uint32_t r0_addic_src_4 = 0;
    uint32_t r0_addic_src_5 = 0;
    uint32_t r0_addic_src_6 = 0;
    uint32_t r0_addic_src_7 = 0;
    uint32_t r0_addic_src_8 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_12 = 0;
    uint32_t r0_mdest_13 = 0;
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
    uint32_t r0_mrot_13 = 0;
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
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
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
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807CC174;

loc_807CC174:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
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
    r4 = MemoryInline::FlatRead32(r3);
    r31 = r3;
    r29 = 0x808A0000u;
    r23 = 1;
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r29 = (r29 + 26416);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -2146435072);
}

loc_807CC1B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC1C4;
    }
}

loc_807CC1B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 2);
}

loc_807CC1BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC1C4;
    }
}

loc_807CC1C0:
{
    r23 = 0;
}

loc_807CC1C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r28 = (r28_rot_0 & 1);
}

loc_807CC1CC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807CC224;
    }
}

loc_807CC1D0:
{
    r3 = r31;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_807CC1E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC1F0;
    }
}

loc_807CC1E8:
{
    r0 = 0;
    goto loc_807CC21C;
}

loc_807CC1F0:
{
    r3 = r31;
    // inline leaf 0x80590A7C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A7C
}

loc_807CC1FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(26))) {
        goto loc_807CC210;
    }
}

loc_807CC200:
{
}

loc_807CC204:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(29))) {
        goto loc_807CC210;
    }
}

loc_807CC208:
{
}

loc_807CC20C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(35))) {
        goto loc_807CC218;
    }
}

loc_807CC210:
{
    r0 = 0;
    goto loc_807CC21C;
}

loc_807CC218:
{
    r0 = 1;
}

loc_807CC21C:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
}

loc_807CC224:
{
}

loc_807CC228:
{
    r0 = 0;
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_807CC238;
    }
}

loc_807CC230:
{
}

loc_807CC234:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807CC23C;
    }
}

loc_807CC238:
{
    r0 = 1;
}

loc_807CC23C:
{
}

loc_807CC240:
{
    r23 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC260;
    }
}

loc_807CC248:
{
    r3 = r31;
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2648));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CC258:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CC260;
    }
}

loc_807CC25C:
{
    r23 = 1;
}

loc_807CC260:
{
}

loc_807CC264:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_807CC27C;
    }
}

loc_807CC268:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1048576);
}

loc_807CC278:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC284;
    }
}

loc_807CC27C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 79), static_cast<uint8_t>(r0));
}

loc_807CC284:
{
    r4 = MemoryInline::FlatRead32((r31 + 1196));
}

loc_807CC28C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807CC2C8;
    }
}

loc_807CC290:
{
    r0 = MemoryInline::FlatRead16((r31 + 250));
}

loc_807CC298:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC2C8;
    }
}

loc_807CC29C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = 0;
}

loc_807CC2A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_807CC2BC;
    }
}

loc_807CC2AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_807CC2B4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_807CC2BC;
    }
}

loc_807CC2B8:
{
    r3 = 1;
}

loc_807CC2BC:
{
}

loc_807CC2C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807CC2C8;
    }
}

loc_807CC2C4:
{
    r23 = 0;
}

loc_807CC2C8:
{
}

loc_807CC2CC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807CC364;
    }
}

loc_807CC2D0:
{
    r3 = r31;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2652));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CC2E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CC364;
    }
}

loc_807CC2E4:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 1);
}

loc_807CC2F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC364;
    }
}

loc_807CC2F8:
{
    r0 = (r3 & 2);
}

loc_807CC2FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC364;
    }
}

loc_807CC300:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1200));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2656));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807CC314:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CC31C;
    }
}

loc_807CC318:
{
    goto loc_807CC320;
}

loc_807CC31C:
{
    f2.d = f0.d;
}

loc_807CC320:
{
    MemoryInline::FlatWriteFloat32((r31 + 1200), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    r5 = MemoryInline::FlatRead32((r31 + 1196));
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_807CC334:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_807CC340;
    }
}

loc_807CC338:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 17), static_cast<uint8_t>(r0));
}

loc_807CC340:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r3 = 7;
    r0 = 2;
    MemoryInline::FlatWrite32(r5, r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    MemoryInline::FlatWrite8((r5 + 16), static_cast<uint8_t>(r4));
    goto loc_807CC388;
}

loc_807CC364:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1200));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2660));
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807CC378:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CC380;
    }
}

loc_807CC37C:
{
    goto loc_807CC384;
}

loc_807CC380:
{
    f2.d = f0.d;
}

loc_807CC384:
{
    MemoryInline::FlatWriteFloat32((r31 + 1200), f2.d);
}

loc_807CC388:
{
    r0 = MemoryInline::FlatRead16((r31 + 250));
}

loc_807CC390:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(23))) {
        goto loc_807CC3A8;
    }
}

loc_807CC394:
{
}

loc_807CC398:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_807CC3A8;
    }
}

loc_807CC39C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 1752), r0);
    goto loc_807CC3BC;
}

loc_807CC3A8:
{
    r3 = MemoryInline::FlatRead32((r31 + 1752));
}

loc_807CC3B0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_807CC3BC;
    }
}

loc_807CC3B4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 1752), r0);
}

loc_807CC3BC:
{
    r0 = MemoryInline::FlatRead32((r31 + 1756));
}

loc_807CC3C4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807CC3DC;
    }
}

loc_807CC3C8:
{
    r0_addic_src_1 = r0;
    r0 = (r0_addic_src_1 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_1)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_807CC3CC:
{
    MemoryInline::FlatWrite32((r31 + 1756), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC3DC;
    }
}

loc_807CC3D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 1760), r0);
}

loc_807CC3DC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 16777216);
    r0_mrot_0 = (r3 & 8192);
    r0_mdest_0 = (r0 & -8193);
    r0 = (r0_mdest_0 | r0_mrot_0);
}

loc_807CC3F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC400;
    }
}

loc_807CC3F4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 736), r0);
    goto loc_807CC40C;
}

loc_807CC400:
{
    r3 = MemoryInline::FlatRead32((r31 + 736));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 736), r0);
}

loc_807CC40C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80533090 (12 guest instruction(s))
}

loc_inl5_0x80533090:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_inl5_0x805330A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(11))) {
        goto loc_inl5_0x805330B4;
    }
}

loc_inl5_0x805330A4:
{
}

loc_inl5_0x805330A8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(12))) {
        goto loc_inl5_0x805330B4;
    }
}

loc_inl5_0x805330AC:
{
    r3 = 0;
    goto loc_inl5_cont_80533090;
}

loc_inl5_0x805330B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (240 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(240) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_inl5_cont_80533090:
{
    // end of inlined leaf 0x80533090
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807CC41C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CC450;
    }
}

loc_807CC420:
{
    r3 = r31;
    // inline leaf 0x805910C0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x805910C0
    ctx->lr = 0x807CC42Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80726204u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2664));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CC43C:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_807CC444:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC450;
    }
}

loc_807CC448:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 736), r0);
}

loc_807CC450:
{
    r0 = MemoryInline::FlatRead8((r31 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CC458:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CC468;
    }
}

loc_807CC45C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r0));
    goto loc_807CCD88;
}

loc_807CC468:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 16);
}

loc_807CC478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC4E8;
    }
}

loc_807CC47C:
{
    r3 = r31;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
}

loc_807CC490:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC49C;
    }
}

loc_807CC494:
{
    r0 = 0;
    goto loc_807CC4C8;
}

loc_807CC49C:
{
    r3 = r31;
    // inline leaf 0x80590A7C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A7C
}

loc_807CC4A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(26))) {
        goto loc_807CC4BC;
    }
}

loc_807CC4AC:
{
}

loc_807CC4B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(29))) {
        goto loc_807CC4BC;
    }
}

loc_807CC4B4:
{
}

loc_807CC4B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(35))) {
        goto loc_807CC4C4;
    }
}

loc_807CC4BC:
{
    r0 = 0;
    goto loc_807CC4C8;
}

loc_807CC4C4:
{
    r0 = 1;
}

loc_807CC4C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CC4CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CC4E8;
    }
}

loc_807CC4D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 2656));
    r3 = r31;
    r4 = 40;
    r5 = 1;
    ctx->lr = 0x807CC4E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807CC018u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807CCD88;
}

loc_807CC4E8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CC4F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CC508;
    }
}

loc_807CC4FC:
{
    r0 = 4;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r0));
    goto loc_807CCD88;
}

loc_807CC508:
{
    r3 = r31;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = r31;
    r27 = 1;
    r26 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r25 = 0;
    r24 = 0;
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r30 = MemoryInline::FlatRead32((r4 + 72));
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2488));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CC548:
{
    r0 = cr;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
}

loc_807CC550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC56C;
    }
}

loc_807CC554:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 2);
}

loc_807CC564:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC56C;
    }
}

loc_807CC568:
{
    r24 = 1;
}

loc_807CC56C:
{
}

loc_807CC570:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_807CC58C;
    }
}

loc_807CC574:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 1);
}

loc_807CC584:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC58C;
    }
}

loc_807CC588:
{
    r25 = 1;
}

loc_807CC58C:
{
}

loc_807CC590:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_807CC5AC;
    }
}

loc_807CC594:
{
    r3 = r31;
    // inline leaf 0x805910C0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x805910C0
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 & 2);
}

loc_807CC5A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC5AC;
    }
}

loc_807CC5A8:
{
    r26 = 0;
}

loc_807CC5AC:
{
}

loc_807CC5B0:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_807CC5C4;
    }
}

loc_807CC5B4:
{
    r0 = MemoryInline::FlatRead32((r31 + 1752));
}

loc_807CC5BC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_807CC5C4;
    }
}

loc_807CC5C0:
{
    r27 = 0;
}

loc_807CC5C4:
{
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r0 = (r0 & 32);
}

loc_807CC5CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC5E0;
    }
}

loc_807CC5D0:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 20), r0);
    goto loc_807CC5E8;
}

loc_807CC5E0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 20), r0);
}

loc_807CC5E8:
{
}

loc_807CC5EC:
{
    r4 = 0;
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_807CC628;
    }
}

loc_807CC5F4:
{
    r3 = MemoryInline::FlatRead32(r31);
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -2146435072);
}

loc_807CC608:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC61C;
    }
}

loc_807CC60C:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 2);
}

loc_807CC614:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC61C;
    }
}

loc_807CC618:
{
    r5 = 0;
}

loc_807CC61C:
{
}

loc_807CC620:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_807CC628;
    }
}

loc_807CC624:
{
    r4 = 1;
}

loc_807CC628:
{
}

loc_807CC62C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807CC67C;
    }
}

loc_807CC630:
{
    r3 = MemoryInline::FlatRead16((r31 + 250));
    r0 = 0;
}

loc_807CC63C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(1))) {
        goto loc_807CC64C;
    }
}

loc_807CC640:
{
}

loc_807CC644:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(4))) {
        goto loc_807CC64C;
    }
}

loc_807CC648:
{
    r0 = 1;
}

loc_807CC64C:
{
}

loc_807CC650:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC67C;
    }
}

loc_807CC654:
{
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    // inline leaf 0x8057EFF8 (11 guest instruction(s))
}

loc_inl13_0x8057EFF8:
{
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 23324));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_inl13_0x8057F010:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl13_0x8057F01C;
    }
}

loc_inl13_0x8057F014:
{
    r3 = 0;
    goto loc_inl13_cont_8057EFF8;
}

loc_inl13_0x8057F01C:
{
    r3 = MemoryInline::FlatRead32((r3 + 204));
}

loc_inl13_cont_8057EFF8:
{
    // end of inlined leaf 0x8057EFF8
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CC66C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CC67C;
    }
}

loc_807CC670:
{
    r0 = 6;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r0));
    goto loc_807CCD88;
}

loc_807CC67C:
{
    r3 = r31;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r30 = r3;
    r3 = r31;
    // inline leaf 0x805910C0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x805910C0
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r0 = MemoryInline::FlatRead8((r4 + 14523));
    r25_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r25 = (r25_rot_1 & 1);
}

loc_807CC6A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC6E0;
    }
}

loc_807CC6A8:
{
    r3 = 0x809C0000u;
    r24 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
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
}

loc_807CC6C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807CC6FC;
    }
}

loc_807CC6C4:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 16384);
}

loc_807CC6D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC6FC;
    }
}

loc_807CC6D8:
{
    r24 = 1;
    goto loc_807CC6FC;
}

loc_807CC6E0:
{
    r3 = 0x809C0000u;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r24_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r24 = (r24_rot_1 & 1);
}

loc_807CC6FC:
{
}

loc_807CC700:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_807CC730;
    }
}

loc_807CC704:
{
    r3 = 0x809C0000u;
    r4 = 60;
    r0 = MemoryInline::FlatRead8((r3 + 14523));
}

loc_807CC714:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC71C;
    }
}

loc_807CC718:
{
    r4 = 30;
}

loc_807CC71C:
{
    r3 = MemoryInline::FlatRead32((r31 + 728));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 728), r0);
}

loc_807CC72C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r4))) {
        goto loc_807CC738;
    }
}

loc_807CC730:
{
}

loc_807CC734:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_807CC8C8;
    }
}

loc_807CC738:
{
    r3 = r31;
    // inline leaf 0x805910C0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x805910C0
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 & 16);
}

loc_807CC748:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC75C;
    }
}

loc_807CC74C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r31 + 732), r0);
    goto loc_807CC874;
}

loc_807CC75C:
{
    r0 = MemoryInline::FlatRead8((r31 + 77));
}

loc_807CC764:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC790;
    }
}

loc_807CC768:
{
    r0 = MemoryInline::FlatRead32((r31 + 732));
}

loc_807CC770:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(30))) {
        goto loc_807CC77C;
    }
}

loc_807CC774:
{
}

loc_807CC778:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC790;
    }
}

loc_807CC77C:
{
    r3 = 2;
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r31 + 732), r0);
    goto loc_807CC874;
}

loc_807CC790:
{
    r0 = MemoryInline::FlatRead8((r31 + 78));
}

loc_807CC798:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC7C4;
    }
}

loc_807CC79C:
{
    r0 = MemoryInline::FlatRead32((r31 + 732));
}

loc_807CC7A4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(30))) {
        goto loc_807CC7B0;
    }
}

loc_807CC7A8:
{
}

loc_807CC7AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC7C4;
    }
}

loc_807CC7B0:
{
    r3 = 3;
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r31 + 732), r0);
    goto loc_807CC874;
}

loc_807CC7C4:
{
    r3 = MemoryInline::FlatRead32((r31 + 732));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_807CC7CC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 732), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CC7EC;
    }
}

loc_807CC7D8:
{
    r3 = (r30 & 255);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    goto loc_807CC7F4;
}

loc_807CC7EC:
{
    r3 = (r30 & 255);
    ctx->lr = 0x807CC7F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8078CFA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CC7F4:
{
}

loc_807CC7F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807CC810;
    }
}

loc_807CC7FC:
{
}

loc_807CC800:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_807CC824;
    }
}

loc_807CC804:
{
}

loc_807CC808:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_807CC838;
    }
}

loc_807CC80C:
{
    goto loc_807CC84C;
}

loc_807CC810:
{
    r3 = 8;
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
    goto loc_807CC874;
}

loc_807CC824:
{
    r3 = 9;
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
    goto loc_807CC874;
}

loc_807CC838:
{
    r3 = 10;
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
    goto loc_807CC874;
}

loc_807CC84C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 17408);
}

loc_807CC860:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC868;
    }
}

loc_807CC864:
{
    r4 = 7;
}

loc_807CC868:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r31 + 732), r0);
}

loc_807CC874:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_807CC878:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CCB74;
    }
}

loc_807CC87C:
{
    r3 = (r30 & 255);
    ctx->lr = 0x807CC884u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8078CFA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_807CC888:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CC898;
    }
}

loc_807CC88C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_807CC890:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CC8B0;
    }
}

loc_807CC894:
{
    goto loc_807CCB74;
}

loc_807CC898:
{
    r3 = r31;
    r4 = 6;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x807CC8ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80591044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807CCB74;
}

loc_807CC8B0:
{
    r3 = r31;
    r4 = 7;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x807CC8C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80591044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807CCB74;
}

loc_807CC8C8:
{
    r3 = 0x809C0000u;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
}

loc_807CC8E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC8F0;
    }
}

loc_807CC8E8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
}

loc_807CC8F0:
{
    r0 = MemoryInline::FlatRead8((r31 + 324));
    r25 = 0;
    r24 = 0;
}

loc_807CC900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC920;
    }
}

loc_807CC904:
{
    r3 = r31;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_14 & 134217727);
}

loc_807CC918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC920;
    }
}

loc_807CC91C:
{
    r24 = 1;
}

loc_807CC920:
{
}

loc_807CC924:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_807CC940;
    }
}

loc_807CC928:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_807CC938:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(19))) {
        goto loc_807CC940;
    }
}

loc_807CC93C:
{
    r25 = 1;
}

loc_807CC940:
{
    r3 = r31;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f1.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2668));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CC954:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CCAF0;
    }
}

loc_807CC958:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 536870912);
    r0_mrot_1 = (r3 & 1);
    r0_mdest_1 = (r0 & -2);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_807CC96C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CCAF0;
    }
}

loc_807CC970:
{
    r3 = r31;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & 1020);
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = r31;
    r27 = 1;
    r30 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r24 = 0;
    r22 = 0;
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r26 = MemoryInline::FlatRead32((r4 + 72));
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2488));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CC9B0:
{
    r0 = cr;
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_17 & 1);
}

loc_807CC9B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC9D4;
    }
}

loc_807CC9BC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 2);
}

loc_807CC9CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC9D4;
    }
}

loc_807CC9D0:
{
    r22 = 1;
}

loc_807CC9D4:
{
}

loc_807CC9D8:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_807CC9F4;
    }
}

loc_807CC9DC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 1);
}

loc_807CC9EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CC9F4;
    }
}

loc_807CC9F0:
{
    r24 = 1;
}

loc_807CC9F4:
{
}

loc_807CC9F8:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_807CCA14;
    }
}

loc_807CC9FC:
{
    r3 = r31;
    // inline leaf 0x805910C0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x805910C0
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 & 2);
}

loc_807CCA0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CCA14;
    }
}

loc_807CCA10:
{
    r30 = 0;
}

loc_807CCA14:
{
}

loc_807CCA18:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_807CCA2C;
    }
}

loc_807CCA1C:
{
    r0 = MemoryInline::FlatRead32((r31 + 1752));
}

loc_807CCA24:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_807CCA2C;
    }
}

loc_807CCA28:
{
    r27 = 0;
}

loc_807CCA2C:
{
    r0 = MemoryInline::FlatRead16((r26 + 44));
    r0 = (r0 & 32);
}

loc_807CCA34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CCA48;
    }
}

loc_807CCA38:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 20), r0);
    goto loc_807CCA50;
}

loc_807CCA48:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 20), r0);
}

loc_807CCA50:
{
}

loc_807CCA54:
{
    r4 = 0;
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_807CCA90;
    }
}

loc_807CCA5C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -2146435072);
}

loc_807CCA70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CCA84;
    }
}

loc_807CCA74:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 2);
}

loc_807CCA7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CCA84;
    }
}

loc_807CCA80:
{
    r5 = 0;
}

loc_807CCA84:
{
}

loc_807CCA88:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_807CCA90;
    }
}

loc_807CCA8C:
{
    r4 = 1;
}

loc_807CCA90:
{
}

loc_807CCA94:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_807CCAF0;
    }
}

loc_807CCA98:
{
    r0 = MemoryInline::FlatRead32((r31 + 736));
}

loc_807CCAA0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20))) {
        goto loc_807CCABC;
    }
}

loc_807CCAA4:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 16777216);
    r0_mrot_2 = (r3 & 8192);
    r0_mdest_2 = (r0 & -8193);
    r0 = (r0_mdest_2 | r0_mrot_2);
}

loc_807CCAB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CCADC;
    }
}

loc_807CCABC:
{
}

loc_807CCAC0:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_807CCAF0;
    }
}

loc_807CCAC4:
{
    r3 = r31;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f1.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CCAD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CCAF0;
    }
}

loc_807CCADC:
{
    r3 = r31;
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 & 1);
}

loc_807CCAEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CCB04;
    }
}

loc_807CCAF0:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 17408);
}

loc_807CCB00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CCB10;
    }
}

loc_807CCB04:
{
    r0 = 7;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r0));
    goto loc_807CCB74;
}

loc_807CCB10:
{
    r0 = MemoryInline::FlatRead8((r31 + 77));
}

loc_807CCB18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CCB28;
    }
}

loc_807CCB1C:
{
    r0 = 2;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r0));
    goto loc_807CCB74;
}

loc_807CCB28:
{
    r0 = MemoryInline::FlatRead8((r31 + 78));
}

loc_807CCB30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CCB40;
    }
}

loc_807CCB34:
{
    r0 = 3;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r0));
    goto loc_807CCB74;
}

loc_807CCB40:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 92));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 100));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CCB50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CCB6C;
    }
}

loc_807CCB54:
{
    r0 = MemoryInline::FlatRead32((r31 + 736));
}

loc_807CCB5C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20))) {
        goto loc_807CCB6C;
    }
}

loc_807CCB60:
{
    r0 = 5;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r0));
    goto loc_807CCB74;
}

loc_807CCB6C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r0));
}

loc_807CCB74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_807CCB78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CCD88;
    }
}

loc_807CCB7C:
{
    r0 = MemoryInline::FlatRead8((r31 + 79));
}

loc_807CCB84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CCCF4;
    }
}

loc_807CCB88:
{
    r3 = MemoryInline::FlatRead16((r31 + 246));
    r22 = 1;
    r0 = 0;
}

loc_807CCB98:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_807CCBA4;
    }
}

loc_807CCB9C:
{
}

loc_807CCBA0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(4))) {
        goto loc_807CCBC4;
    }
}

loc_807CCBA4:
{
}

loc_807CCBA8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(20))) {
        goto loc_807CCBC8;
    }
}

loc_807CCBAC:
{
}

loc_807CCBB0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(40))) {
        goto loc_807CCBC8;
    }
}

loc_807CCBB4:
{
}

loc_807CCBB8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(22))) {
        goto loc_807CCBC8;
    }
}

loc_807CCBBC:
{
}

loc_807CCBC0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(29))) {
        goto loc_807CCBC8;
    }
}

loc_807CCBC4:
{
    r0 = 1;
}

loc_807CCBC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CCBCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CCCCC;
    }
}

loc_807CCBD0:
{
    r3 = MemoryInline::FlatRead16((r31 + 250));
    r23 = 0;
    r24 = 0;
    r0 = 0;
}

loc_807CCBE4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_807CCBF0;
    }
}

loc_807CCBE8:
{
}

loc_807CCBEC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(4))) {
        goto loc_807CCC10;
    }
}

loc_807CCBF0:
{
}

loc_807CCBF4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(20))) {
        goto loc_807CCC14;
    }
}

loc_807CCBF8:
{
}

loc_807CCBFC:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(40))) {
        goto loc_807CCC14;
    }
}

loc_807CCC00:
{
}

loc_807CCC04:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(22))) {
        goto loc_807CCC14;
    }
}

loc_807CCC08:
{
}

loc_807CCC0C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(29))) {
        goto loc_807CCC14;
    }
}

loc_807CCC10:
{
    r0 = 1;
}

loc_807CCC14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CCC18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CCCA0;
    }
}

loc_807CCC1C:
{
}

loc_807CCC20:
{
    r25 = 0;
    r0 = 0;
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(27))) {
        goto loc_807CCC34;
    }
}

loc_807CCC2C:
{
}

loc_807CCC30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(28))) {
        goto loc_807CCC38;
    }
}

loc_807CCC34:
{
    r0 = 1;
}

loc_807CCC38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CCC3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CCC94;
    }
}

loc_807CCC40:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r26 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x807CCC64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r26);
    f31.d = f1.d;
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807CCC7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_807CCC80:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_23 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CCC8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CCC94;
    }
}

loc_807CCC90:
{
    r25 = 1;
}

loc_807CCC94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_807CCC98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CCCA0;
    }
}

loc_807CCC9C:
{
    r24 = 1;
}

loc_807CCCA0:
{
}

loc_807CCCA4:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_807CCCC0;
    }
}

loc_807CCCA8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1048576);
}

loc_807CCCB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CCCC0;
    }
}

loc_807CCCBC:
{
    r23 = 1;
}

loc_807CCCC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_807CCCC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CCCCC;
    }
}

loc_807CCCC8:
{
    r22 = 0;
}

loc_807CCCCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_807CCCD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CCCE8;
    }
}

loc_807CCCD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807CCCD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CCCE8;
    }
}

loc_807CCCDC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 79), static_cast<uint8_t>(r0));
    goto loc_807CCD88;
}

loc_807CCCE8:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r0));
    goto loc_807CCD88;
}

loc_807CCCF4:
{
    r3 = MemoryInline::FlatRead16((r31 + 250));
    r22 = 0;
    r0 = 0;
}

loc_807CCD04:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(27))) {
        goto loc_807CCD10;
    }
}

loc_807CCD08:
{
}

loc_807CCD0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(28))) {
        goto loc_807CCD14;
    }
}

loc_807CCD10:
{
    r0 = 1;
}

loc_807CCD14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CCD18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CCD70;
    }
}

loc_807CCD1C:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r23 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x807CCD40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r23);
    f31.d = f1.d;
    r3 = r23;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807CCD58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_807CCD5C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_28 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CCD68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CCD70;
    }
}

loc_807CCD6C:
{
    r22 = 1;
}

loc_807CCD70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_807CCD74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CCD88;
    }
}

loc_807CCD78:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 79), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r31 + 246), static_cast<uint16_t>(r0));
}

loc_807CCD88:
{
    r0 = MemoryInline::FlatRead16((r31 + 250));
}

loc_807CCD90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_807CCDFC;
    }
}

loc_807CCD94:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 24576);
}

loc_807CCDA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CCDC4;
    }
}

loc_807CCDAC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
}

loc_807CCDBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(27))) {
        goto loc_807CCDC4;
    }
}

loc_807CCDC0:
{
    r4 = 1;
}

loc_807CCDC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807CCDC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CCDD4;
    }
}

loc_807CCDCC:
{
    f31.d = MemoryInline::FlatReadFloat32(r29);
    goto loc_807CCDD8;
}

loc_807CCDD4:
{
    f31.d = MemoryInline::FlatReadFloat32((r29 + 4));
}

loc_807CCDD8:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r3_addr_12 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_12);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = f31.d;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x807CCDFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CCDFC:
{
    r4 = MemoryInline::FlatRead16((r31 + 250));
}

loc_807CCE04:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_807CD2D8;
    }
}

loc_807CCE08:
{
    r0 = (r4 * 24);
    r5 = MemoryInline::FlatRead8((r31 + 16));
    r3 = (r29 + 440);
}

loc_807CCE18:
{
    r3 = (r3 + r0);
    r23 = MemoryInline::FlatRead32((r3 + 16));
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_807CCE38;
    }
}

loc_807CCE24:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 262144);
}

loc_807CCE34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CCE4C;
    }
}

loc_807CCE38:
{
}

loc_807CCE3C:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_807CCE4C;
    }
}

loc_807CCE40:
{
}

loc_807CCE44:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(4))) {
        goto loc_807CCE4C;
    }
}

loc_807CCE48:
{
    r23 = 5;
}

loc_807CCE4C:
{
    r0 = MemoryInline::FlatRead32((r31 + 256));
}

loc_807CCE54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CCF38;
    }
}

loc_807CCE58:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(11));
}

loc_807CCE5C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807CD2D8;
    }
}

loc_807CCE60:
{
    r3 = 0x808D0000u;
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_33 & -4);
    r3 = (r3 + 10688);
    r3_addr_14 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_14);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x807CCE78u:
        goto loc_807CCE78;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_807CCE78:
{
    r3 = MemoryInline::FlatRead32((r31 + 256));
    r4 = 1;
    ctx->lr = 0x807CCE84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807DC3E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_807CD2D8;
}

loc_807CCF38:
{
    r3 = (r31 + r4);
    r24 = 0;
    r4 = MemoryInline::FlatRead8((r3 + 373));
}

loc_807CCF48:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_807CCFC4;
    }
}

loc_807CCF4C:
{
}

loc_807CCF50:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_807CCFC4;
    }
}

loc_807CCF54:
{
    r0 = MemoryInline::FlatRead16((r31 + 456));
    r24 = 1;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807CCF60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CCFC4;
    }
}

loc_807CCF64:
{
    MemoryInline::FlatWrite16((r31 + 456), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32((r31 + 108));
    f1.d = MemoryInline::FlatReadFloat32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    ctx->lr = 0x807CCF7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 708));
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead16((r31 + 250));
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 414));
}

loc_807CCF98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_807CCFC4;
    }
}

loc_807CCF9C:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557360 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_34 & -4);
    r3_addr_15 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_15);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x80557360
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807CCFB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CCFC4;
    }
}

loc_807CCFB4:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->lr = 0x807CCFC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80557830u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CCFC4:
{
    r0 = MemoryInline::FlatRead16((r31 + 250));
    r3 = (r31 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 414));
}

loc_807CCFD4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_807CD018;
    }
}

loc_807CCFD8:
{
    r0 = MemoryInline::FlatRead8((r31 + 16));
}

loc_807CCFE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD018;
    }
}

loc_807CCFE4:
{
    r0 = MemoryInline::FlatRead16((r31 + 458));
    r24 = 1;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807CCFF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD018;
    }
}

loc_807CCFF4:
{
    MemoryInline::FlatWrite16((r31 + 458), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32((r31 + 108));
    f1.d = MemoryInline::FlatReadFloat32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    ctx->lr = 0x807CD00Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 708));
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_807CD018:
{
}

loc_807CD01C:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_807CD2D8;
    }
}

loc_807CD020:
{
    r0 = MemoryInline::FlatRead32((r31 + 704));
}

loc_807CD028:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_807CD030;
    }
}

loc_807CD02C:
{
    r23 = r0;
}

loc_807CD030:
{
    r0 = MemoryInline::FlatRead32((r31 + 256));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CD038:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CD2C0;
    }
}

loc_807CD03C:
{
}

loc_807CD040:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(3))) {
        goto loc_807CD04C;
    }
}

loc_807CD044:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(7));
}

loc_807CD048:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CD2C0;
    }
}

loc_807CD04C:
{
    r0 = MemoryInline::FlatRead8((r31 + 692));
    r24 = 0;
}

loc_807CD058:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD064;
    }
}

loc_807CD05C:
{
    r24 = 1;
    goto loc_807CD2B0;
}

loc_807CD064:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 33554432);
}

loc_807CD078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD090;
    }
}

loc_807CD07C:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 16777216);
    r0_mrot_9 = (r3 & 8192);
    r0_mdest_9 = (r0 & -8193);
    r0 = (r0_mdest_9 | r0_mrot_9);
}

loc_807CD088:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD090;
    }
}

loc_807CD08C:
{
    r4 = 1;
}

loc_807CD090:
{
}

loc_807CD094:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807CD0CC;
    }
}

loc_807CD098:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2672));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CD0A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD0B4;
    }
}

loc_807CD0A8:
{
    r23 = 8;
    r24 = 1;
    goto loc_807CD2B0;
}

loc_807CD0B4:
{
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CD0BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CD2B0;
    }
}

loc_807CD0C0:
{
    r23 = 9;
    r24 = 1;
    goto loc_807CD2B0;
}

loc_807CD0CC:
{
}

loc_807CD0D0:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(7))) {
        goto loc_807CD218;
    }
}

loc_807CD0D4:
{
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r0 = MemoryInline::FlatRead32((r3 + 204));
}

loc_807CD0E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_807CD150;
    }
}

loc_807CD0E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2492));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CD0F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD13C;
    }
}

loc_807CD0F8:
{
    r3 = r31;
    // inline leaf 0x805910C0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x805910C0
    ctx->lr = 0x807CD104u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80726204u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2676));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CD110:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD13C;
    }
}

loc_807CD114:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
}

loc_807CD11C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD12C;
    }
}

loc_807CD120:
{
    r0 = 30;
    MemoryInline::FlatWrite32((r31 + 24), r0);
    goto loc_807CD13C;
}

loc_807CD12C:
{
}

loc_807CD130:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_807CD13C;
    }
}

loc_807CD134:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 24), r0);
}

loc_807CD13C:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
}

loc_807CD144:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_807CD150;
    }
}

loc_807CD148:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 24), r0);
}

loc_807CD150:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
}

loc_807CD158:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807CD174;
    }
}

loc_807CD15C:
{
    r0_addic_src_3 = r0;
    r0 = (r0_addic_src_3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_807CD160:
{
    r23 = 8;
    MemoryInline::FlatWrite32((r31 + 24), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD174;
    }
}

loc_807CD16C:
{
    r0 = -120;
    MemoryInline::FlatWrite32((r31 + 24), r0);
}

loc_807CD174:
{
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r0 = MemoryInline::FlatRead32((r3 + 204));
}

loc_807CD184:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_807CD1F0;
    }
}

loc_807CD188:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2680));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CD194:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CD1DC;
    }
}

loc_807CD198:
{
    r3 = r31;
    // inline leaf 0x805910C0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x805910C0
    ctx->lr = 0x807CD1A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80726204u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2684));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CD1B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CD1DC;
    }
}

loc_807CD1B4:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
}

loc_807CD1BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD1CC;
    }
}

loc_807CD1C0:
{
    r0 = 30;
    MemoryInline::FlatWrite32((r31 + 28), r0);
    goto loc_807CD1DC;
}

loc_807CD1CC:
{
}

loc_807CD1D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_807CD1DC;
    }
}

loc_807CD1D4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 28), r0);
}

loc_807CD1DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 28));
}

loc_807CD1E4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_807CD1F0;
    }
}

loc_807CD1E8:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 28), r0);
}

loc_807CD1F0:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
}

loc_807CD1F8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807CD2B0;
    }
}

loc_807CD1FC:
{
    r0_addic_src_5 = r0;
    r0 = (r0_addic_src_5 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_5)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_807CD200:
{
    r23 = 9;
    MemoryInline::FlatWrite32((r31 + 28), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD2B0;
    }
}

loc_807CD20C:
{
    r0 = -120;
    MemoryInline::FlatWrite32((r31 + 28), r0);
    goto loc_807CD2B0;
}

loc_807CD218:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
}

loc_807CD220:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807CD234;
    }
}

loc_807CD224:
{
}

loc_807CD228:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(60))) {
        goto loc_807CD234;
    }
}

loc_807CD22C:
{
    r23 = 8;
    goto loc_807CD2B0;
}

loc_807CD234:
{
}

loc_807CD238:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(60))) {
        goto loc_807CD2B0;
    }
}

loc_807CD23C:
{
    r25 = MemoryInline::FlatRead32((r31 + 708));
    r4 = 2;
    r3 = MemoryInline::FlatRead32(r25);
    r22 = MemoryInline::FlatRead32((r3 + 108));
    r3 = MemoryInline::FlatRead32((r22 + 40));
    // inline leaf 0x80557360 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r3_addr_17 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_17);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x80557360
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807CD258:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD268;
    }
}

loc_807CD25C:
{
    r3 = MemoryInline::FlatRead32((r22 + 40));
    r4 = 2;
    ctx->lr = 0x807CD268u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80557830u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CD268:
{
    r26 = MemoryInline::FlatRead32(r25);
    r4 = 11;
    r3 = MemoryInline::FlatRead32((r26 + 108));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CD284:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD2A0;
    }
}

loc_807CD288:
{
    r3 = MemoryInline::FlatRead32((r26 + 108));
    r4 = 11;
    f1.d = MemoryInline::FlatReadFloat32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    ctx->lr = 0x807CD2A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CD2A0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r25 + 8), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r25 + 4), r0);
}

loc_807CD2B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_807CD2B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD2C0;
    }
}

loc_807CD2B8:
{
    r0 = 999;
    MemoryInline::FlatWrite32((r31 + 20), r0);
}

loc_807CD2C0:
{
    r3 = MemoryInline::FlatRead32((r31 + 708));
    r4 = r23;
    ctx->lr = 0x807CD2CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807C6A44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 255;
    MemoryInline::FlatWrite16((r31 + 458), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 456), static_cast<uint16_t>(r0));
}

loc_807CD2D8:
{
    r3 = MemoryInline::FlatRead16((r31 + 244));
    r0 = MemoryInline::FlatRead16((r31 + 246));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_807CD2E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD30C;
    }
}

loc_807CD2E8:
{
    r12 = MemoryInline::FlatRead32((r31 + 32));
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x807CD2FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807CD300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD30C;
    }
}

loc_807CD304:
{
    r3 = r31;
    ctx->lr = 0x807CD30Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807D1A60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CD30C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807CC174 func_807CC174 preserves=false fpr_mask=0x80000000
