#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806143DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mdest_6 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_mrot_6 = 0;
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
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mdest_5 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_mrot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_10 = 0;
    uint32_t r5_addr_11 = 0;
    uint32_t r5_addr_12 = 0;
    uint32_t r5_addr_13 = 0;
    uint32_t r5_addr_14 = 0;
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
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r5_stbu_ea_4 = 0;
    uint32_t r5_stbu_ea_5 = 0;
    uint32_t r5_stbu_ea_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
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
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_806143DC;

loc_806143DC:
{
    MemoryInline::FlatWriteRam32((r1 + -640), r1);
    r1 = (r1 + -640);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 644), r0);
    r11 = (r1 + 640);
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
    r0 = MemoryInline::FlatRead32((r3 + 3132));
    r31 = r3;
    r25 = MemoryInline::FlatRead32((r3 + 3128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80614400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80614410;
    }
}

loc_80614404:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80614408:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80614418;
    }
}

loc_8061440C:
{
    goto loc_8061441C;
}

loc_80614410:
{
    r5 = 1;
    goto loc_8061441C;
}

loc_80614418:
{
    r5 = 0;
}

loc_8061441C:
{
    r8 = 0x808B0000u;
    r3 = 0x809C0000u;
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 72), 0, 23u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r1 + 82), static_cast<uint8_t>(r0));
    r8 = (r8 + 11588);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 72), r8);
    r4 = r25;
    r6 = (r1 + 64);
    r7 = (r1 + 8);
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r1 + 76), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 78), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r1 + 80), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 84), r8);
    MemoryInline::WriteResolved8(guest_range_2, 22u, (r1 + 94), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r1 + 88), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 18u, (r1 + 90), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 20u, (r1 + 92), static_cast<uint16_t>(r0));
    ctx->lr = 0x80614468u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x8066B8B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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

loc_8061446C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80614C44;
    }
}

loc_80614470:
{
    r3 = (r1 + 288);
    ctx->lr = 0x80614478u;
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
    r5 = MemoryInline::FlatRead32((r31 + 3140));
    r3 = (r1 + 288);
    r6 = MemoryInline::FlatRead32((r31 + 3144));
    r4 = 0;
    // inline leaf 0x80619A58 (4 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam32((r3 + 52), r5);
    MemoryInline::FlatWriteRam32((r3 + 56), r6);
    // end of inlined leaf 0x80619A58
    r0 = MemoryInline::FlatRead16((r1 + 76));
    r3 = (r1 + 288);
    r4 = MemoryInline::FlatRead8((r1 + 78));
    r0 = (r0 * 60);
    r5 = MemoryInline::FlatRead16((r1 + 80));
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x809C0000u;
    r0 = 5;
    r6 = MemoryInline::FlatRead32((r3 + -10424));
    r8 = -1;
    r9 = 0;
    r5 = 65536;
    r7 = MemoryInline::FlatRead16((r6 + 54));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    ctr = r0;
}

loc_806144D0:
{
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_806144D8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_806144F4;
    }
}

loc_806144DC:
{
    r3 = (r0 & 255);
    r0 = (r5 + -27664);
    r0 = (r0 * r3);
    r3 = (r6 + r0);
    r3 = (r3 + 56);
    goto loc_806144F8;
}

loc_806144F4:
{
    r3 = 0;
}

loc_806144F8:
{
    r0 = (r9 & 255);
    r3 = (r3 + 65536);
    r0 = (r0 * 20);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + -28270));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80614510:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80614544;
    }
}

loc_80614514:
{
    r0 = MemoryInline::FlatRead32((r4 + -28268));
}

loc_8061451C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r25))) {
        goto loc_80614544;
    }
}

loc_80614520:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80614544;
    }
}

loc_80614524:
{
    r0 = MemoryInline::FlatRead16((r4 + -28276));
    r3 = MemoryInline::FlatRead8((r4 + -28274));
    r0 = (r0 * 60);
    r4 = MemoryInline::FlatRead16((r4 + -28272));
    r0 = (r3 + r0);
    r0 = (r0 * 1000);
    r8 = (r4 + r0);
    goto loc_806145C4;
}

loc_80614544:
{
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + 1);
}

loc_80614550:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8061456C;
    }
}

loc_80614554:
{
    r3 = (r0 & 255);
    r0 = (r5 + -27664);
    r0 = (r0 * r3);
    r3 = (r6 + r0);
    r3 = (r3 + 56);
    goto loc_80614570;
}

loc_8061456C:
{
    r3 = 0;
}

loc_80614570:
{
    r0 = (r9 & 255);
    r3 = (r3 + 65536);
    r0 = (r0 * 20);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + -28270));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80614588:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_806145BC;
    }
}

loc_8061458C:
{
    r0 = MemoryInline::FlatRead32((r4 + -28268));
}

loc_80614594:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r25))) {
        goto loc_806145BC;
    }
}

loc_80614598:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_806145BC;
    }
}

loc_8061459C:
{
    r0 = MemoryInline::FlatRead16((r4 + -28276));
    r3 = MemoryInline::FlatRead8((r4 + -28274));
    r0 = (r0 * 60);
    r4 = MemoryInline::FlatRead16((r4 + -28272));
    r0 = (r3 + r0);
    r0 = (r0 * 1000);
    r8 = (r4 + r0);
    goto loc_806145C4;
}

loc_806145BC:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806144D0;
    }
}

loc_806145C4:
{
    r3 = 6029312;
    r0 = (r3 + -29313);
}

loc_806145D0:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_806145D8;
    }
}

loc_806145D4:
{
    r0 = r8;
}

loc_806145D8:
{
    r4 = (r7 * 628);
    r3 = (r1 + 288);
    r4 = (r31 + r4);
    MemoryInline::FlatWrite32((r4 + 3544), r0);
    r4 = (r4 + 3156);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_1 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_1, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
    r24 = 0;
    r20 = 6029312;
    r28 = 65536;
    r29 = 0x809C0000u;
}

loc_80614600:
{
    r5 = MemoryInline::FlatRead32((r29 + -10424));
    r4 = (r24 & 255);
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80614610:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_806146EC;
    }
}

loc_80614614:
{
    r0 = (r28 + -29504);
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r4 * r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
}

loc_80614630:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20548))) {
        goto loc_806146EC;
    }
}

loc_80614634:
{
    r0 = (r28 + -27664);
    r0 = (r4 * r0);
    r0 = (r5 + r0);
    r23 = (r0 + 56);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(56)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80614644:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_806146EC;
    }
}

loc_80614648:
{
    r27 = (r4 * 628);
    r3 = (r31 + 372);
    r26 = (r31 + r27);
    r4 = MemoryInline::FlatRead32((r26 + 3536));
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805FA930
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_80614668:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806146EC;
    }
}

loc_8061466C:
{
    r3 = r26;
    r27 = (r23 + 65536);
    r30 = (r3 + 3156);
    r23 = 0;
}

loc_8061467C:
{
    r0 = (r23 & 255);
    r0 = (r0 * 20);
    r5 = (r27 + r0);
    r0 = MemoryInline::FlatRead8((r5 + -28270));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80614690:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_806146E0;
    }
}

loc_80614694:
{
    r0 = MemoryInline::FlatRead32((r5 + -28268));
}

loc_8061469C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r25))) {
        goto loc_806146E0;
    }
}

loc_806146A0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_806146E0;
    }
}

loc_806146A4:
{
    r3 = MemoryInline::FlatRead16((r5 + -28276));
    r0 = (r20 + -29313);
    r4 = MemoryInline::FlatRead8((r5 + -28274));
    r3 = (r3 * 60);
    r5 = MemoryInline::FlatRead16((r5 + -28272));
    r3 = (r4 + r3);
    r3 = (r3 * 1000);
    r3 = (r5 + r3);
}

loc_806146C8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_806146D0;
    }
}

loc_806146CC:
{
    r0 = r3;
}

loc_806146D0:
{
    MemoryInline::FlatWrite32((r26 + 3544), r0);
    r4 = r30;
    r3 = (r1 + 288);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5_addr_4 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_4, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
}

loc_806146E0:
{
    r23 = (r23 + 1);
}

loc_806146E8:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(10))) {
        goto loc_8061467C;
    }
}

loc_806146EC:
{
    r24 = (r24 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(4));
}

loc_806146F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80614600;
    }
}

loc_806146F8:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r0));
    r4 = (r1 + 36);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    ctx->lr = 0x80614714u;
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
    InvokeDirectCpu<0x8066C8D8u>(ctx);
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
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(r0));
}

loc_8061471C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80614764;
    }
}

loc_80614720:
{
    r4 = MemoryInline::FlatRead16((r1 + 88));
    r3 = 6029312;
    r0 = (r3 + -29313);
    r5 = MemoryInline::FlatRead8((r1 + 90));
    r3 = (r4 * 60);
    r4 = MemoryInline::FlatRead16((r1 + 92));
    r3 = (r5 + r3);
    r3 = (r3 * 1000);
    r3 = (r4 + r3);
}

loc_80614748:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80614750;
    }
}

loc_8061474C:
{
    r0 = r3;
}

loc_80614750:
{
    MemoryInline::FlatWrite32((r31 + 24896), r0);
    r3 = (r1 + 288);
    r4 = (r31 + 24508);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r5_addr_7 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_7, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
    goto loc_80614A50;
}

loc_80614764:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80614A50;
    }
}

loc_80614768:
{
    r0 = MemoryInline::FlatRead32((r31 + 3132));
}

loc_80614770:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80614780;
    }
}

loc_80614774:
{
}

loc_80614778:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80614788;
    }
}

loc_8061477C:
{
    goto loc_8061478C;
}

loc_80614780:
{
    r22 = 1;
    goto loc_8061478C;
}

loc_80614788:
{
    r22 = 0;
}

loc_8061478C:
{
    r3 = 0x809C0000u;
    r6 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r4 = 0x808B0000u;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    r3 = (r3 + 131072);
    r4 = MemoryInline::FlatRead32((r3 + 20476));
    r0 = (r22 * 84);
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r6));
    r8 = (r4 + 131072);
    r8 = (r8 + 13064);
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r6));
    r5 = (r8 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 14128));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r6));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
}

loc_806147D4:
{
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r6));
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_806147E8;
    }
}

loc_806147DC:
{
    r21 = MemoryInline::FlatRead32((r5 + 14132));
    r7 = 1;
    goto loc_806147EC;
}

loc_806147E8:
{
    r7 = 0;
}

loc_806147EC:
{
    r6 = (0 - r7);
    r5 = (r25 - r21);
    r7 = (r6 | r7);
    r4 = (r8 + r0);
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r5 = MemoryInline::FlatRead32((r4 + 14128));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r4 = (r4_rot_2 & 134217727);
    r7 = (r7 & r4);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r6 = (0 - r7);
    r6 = (r6 | r7);
}

loc_80614820:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_80614850;
    }
}

loc_80614828:
{
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(25));
    r8 = (r8_rot_1 & 1023);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(15));
    r7 = (r7_rot_2 & 127);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & 127);
    r4 = 1;
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r4));
    r9 = 1;
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r8));
    goto loc_80614854;
}

loc_80614850:
{
    r9 = 0;
}

loc_80614854:
{
    r4 = MemoryInline::FlatRead32((r3 + 20476));
    r6 = (r6 & r9);
    r5 = (0 - r6);
    r4 = (r4 + 131072);
    r4 = (r4 + r0);
    r5 = (r5 | r6);
    r4 = MemoryInline::FlatRead32((r4 + 27192));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    r5 = (r5 & r4);
    r4 = (0 - r5);
    r4 = (r4 | r5);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
}

loc_80614888:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80614910;
    }
}

loc_8061488C:
{
    r4 = MemoryInline::FlatRead8((r1 + 94));
}

loc_80614894:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_806148A0;
    }
}

loc_80614898:
{
    r4 = 0;
    goto loc_80614908;
}

loc_806148A0:
{
    r4 = MemoryInline::FlatRead8((r1 + 34));
}

loc_806148A8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_806148B4;
    }
}

loc_806148AC:
{
    r4 = 1;
    goto loc_80614908;
}

loc_806148B4:
{
    r4 = MemoryInline::FlatRead16((r1 + 28));
    r5 = MemoryInline::FlatRead16((r1 + 88));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_806148C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806148CC;
    }
}

loc_806148C4:
{
    r4 = 1;
    goto loc_80614908;
}

loc_806148CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80614904;
    }
}

loc_806148D0:
{
    r4 = MemoryInline::FlatRead8((r1 + 30));
    r5 = MemoryInline::FlatRead8((r1 + 90));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_806148DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806148E8;
    }
}

loc_806148E0:
{
    r4 = 1;
    goto loc_80614908;
}

loc_806148E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80614904;
    }
}

loc_806148EC:
{
    r5 = MemoryInline::FlatRead16((r1 + 92));
    r4 = MemoryInline::FlatRead16((r1 + 32));
}

loc_806148F8:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_80614904;
    }
}

loc_806148FC:
{
    r4 = 1;
    goto loc_80614908;
}

loc_80614904:
{
    r4 = 0;
}

loc_80614908:
{
}

loc_8061490C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80614A10;
    }
}

loc_80614910:
{
    r4 = MemoryInline::FlatRead8((r1 + 94));
    r3 = MemoryInline::FlatRead32((r3 + 20476));
}

loc_8061491C:
{
    r7 = (r3 + 131072);
    r7 = (r7 + 13064);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8061493C;
    }
}

loc_80614928:
{
    r3 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 14128));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r3 + 14128), r0);
    goto loc_806149E0;
}

loc_8061493C:
{
    r6 = (r7 + r0);
    r4 = 99;
    r3 = MemoryInline::FlatRead32((r6 + 14128));
    r3 = (r3 | -2147483648);
    MemoryInline::FlatWrite32((r6 + 14128), r3);
    MemoryInline::FlatWrite32((r6 + 14132), r25);
    r3 = MemoryInline::FlatRead16((r1 + 88));
}

loc_8061495C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(99))) {
        goto loc_80614964;
    }
}

loc_80614960:
{
    r4 = r3;
}

loc_80614964:
{
    r3 = MemoryInline::FlatRead32((r6 + 14128));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_1 = (r3_rot_1 & 2130706432);
    r3_mdest_1 = (r3 & -2130706433);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r6 + 14128), r3);
    r3 = MemoryInline::FlatRead16((r1 + 88));
}

loc_80614978:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(99))) {
        goto loc_80614984;
    }
}

loc_8061497C:
{
    r4 = 59;
    goto loc_80614988;
}

loc_80614984:
{
    r4 = MemoryInline::FlatRead8((r1 + 90));
}

loc_80614988:
{
    r3 = MemoryInline::FlatRead32((r6 + 14128));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3_mrot_2 = (r3_rot_2 & 16646144);
    r3_mdest_2 = (r3 & -16646145);
    r3 = (r3_mdest_2 | r3_mrot_2);
    MemoryInline::FlatWrite32((r6 + 14128), r3);
    r3 = MemoryInline::FlatRead16((r1 + 88));
}

loc_8061499C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(99))) {
        goto loc_806149A8;
    }
}

loc_806149A0:
{
    r5 = 999;
    goto loc_806149AC;
}

loc_806149A8:
{
    r5 = MemoryInline::FlatRead16((r1 + 92));
}

loc_806149AC:
{
    r3 = (r7 + r0);
    r4 = MemoryInline::FlatRead32((r6 + 14128));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r4_mrot_1 = (r4_rot_6 & 130944);
    r4_mdest_1 = (r4 & -130945);
    r4 = (r4_mdest_1 | r4_mrot_1);
    MemoryInline::FlatWrite32((r6 + 14128), r4);
    r0 = 38;
    r5 = (r3 + 14135);
    r4 = (r1 + 95);
    ctr = r0;
}

loc_806149CC:
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
        goto loc_806149CC;
    }
}

loc_806149E0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl6_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl6_0x80621418:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl6_0x80621424:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl6_cont_80621410;
}

loc_inl6_return:
{
}

loc_inl6_cont_80621410:
{
    // end of inlined leaf 0x80621410
    r5 = MemoryInline::FlatRead16((r1 + 88));
    r4 = MemoryInline::FlatRead8((r1 + 90));
    r3 = MemoryInline::FlatRead16((r1 + 92));
    r0 = MemoryInline::FlatRead8((r1 + 94));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r0));
}

loc_80614A10:
{
    r4 = MemoryInline::FlatRead16((r1 + 28));
    r3 = 6029312;
    r0 = (r3 + -29313);
    r5 = MemoryInline::FlatRead8((r1 + 30));
    r3 = (r4 * 60);
    r4 = MemoryInline::FlatRead16((r1 + 32));
    r3 = (r5 + r3);
    r3 = (r3 * 1000);
    r3 = (r4 + r3);
}

loc_80614A38:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80614A40;
    }
}

loc_80614A3C:
{
    r0 = r3;
}

loc_80614A40:
{
    MemoryInline::FlatWrite32((r31 + 24896), r0);
    r3 = (r1 + 288);
    r4 = (r31 + 24508);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r5_addr_8 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_8, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
}

loc_80614A50:
{
    r28 = 0x808B0000u;
    r21 = 0;
    r28 = (r28 + 11588);
    r30 = 1;
    r29 = 0;
    r27 = 0x809C0000u;
    r23 = 6029312;
    r22 = 10;
}

loc_80614A70:
{
    r3 = MemoryInline::FlatRead32((r27 + 7736));
    r4 = (r21 & 255);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2900 (19 guest instruction(s))
}

loc_inl8_0x805D2900:
{
}

loc_inl8_0x805D2904:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl8_0x805D2944;
    }
}

loc_inl8_0x805D2908:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl8_0x805D2944;
    }
}

loc_inl8_0x805D2920:
{
    r4 = MemoryInline::FlatRead32((r4 + 464));
    r3 = 25;
    r4 = (r4 + -1);
    r0 = (25 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(25) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = (r3 | ~r4);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_13 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    goto loc_inl8_cont_805D2900;
}

loc_inl8_0x805D2944:
{
    r3 = 0;
}

loc_inl8_cont_805D2900:
{
    // end of inlined leaf 0x805D2900
}

loc_80614A88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80614B64;
    }
}

loc_80614A8C:
{
    r3 = MemoryInline::FlatRead32((r27 + 7736));
    r4 = (r21 & 255);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2890 (14 guest instruction(s))
}

loc_inl9_0x805D2890:
{
}

loc_inl9_0x805D2894:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl9_0x805D28C0;
    }
}

loc_inl9_0x805D2898:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_8);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x805D28B8;
    }
}

loc_inl9_0x805D28B0:
{
    r3 = (r4 + 8);
    goto loc_inl9_cont_805D2890;
}

loc_inl9_0x805D28B8:
{
    r3 = 0;
    goto loc_inl9_cont_805D2890;
}

loc_inl9_0x805D28C0:
{
    r3 = 0;
}

loc_inl9_cont_805D2890:
{
    // end of inlined leaf 0x805D2890
    r7 = 0;
    ctr = r22;
}

loc_80614AA8:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & 2040);
    MemoryInline::FlatWriteRam32((r1 + 12), r28);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 120));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r29));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80614AC0:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r29));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r29));
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80614B5C;
    }
}

loc_80614AD0:
{
}

loc_80614AD4:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(r0))) {
        goto loc_80614B5C;
    }
}

loc_80614AD8:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80614B04;
    }
}

loc_80614ADC:
{
    r0 = MemoryInline::FlatRead32((r4 + 124));
    r4 = 1;
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r30));
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r5 = (r5_rot_7 & 1023);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r6 = (r6_rot_5 & 127);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_17 & 127);
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r5));
    goto loc_80614B08;
}

loc_80614B04:
{
    r4 = 0;
}

loc_80614B08:
{
}

loc_80614B0C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80614B5C;
    }
}

loc_80614B10:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
    r5 = (r23 + -29313);
    r3 = MemoryInline::FlatRead8((r1 + 18));
    r0 = (r0 * 60);
    r4 = MemoryInline::FlatRead16((r1 + 20));
    r0 = (r3 + r0);
    r0 = (r0 * 1000);
    r0 = (r4 + r0);
}

loc_80614B34:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_80614B3C;
    }
}

loc_80614B38:
{
    r5 = r0;
}

loc_80614B3C:
{
    r0 = (r21 & 255);
    r3 = (r1 + 288);
    r0 = (r0 * 628);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 6056), r5);
    r4 = (r4 + 5668);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r5_addr_11 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_11, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
    goto loc_80614B64;
}

loc_80614B5C:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80614AA8;
    }
}

loc_80614B64:
{
    r21 = (r21 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(30));
}

loc_80614B6C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80614A70;
    }
}

loc_80614B70:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 29440));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead16((r1 + 88));
    r4 = 6029312;
    r0 = (r4 + -29313);
    r6 = MemoryInline::FlatRead16((r1 + 92));
    r4 = (r5 * 60);
    r5 = MemoryInline::FlatRead8((r1 + 90));
    r3 = (r3 + r6);
    r4 = (r5 + r4);
    r4 = (r4 * 1000);
    r3 = (r4 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80614BB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80614BB8;
    }
}

loc_80614BB4:
{
    r0 = r3;
}

loc_80614BB8:
{
    MemoryInline::FlatWrite32((r31 + 25524), r0);
    r3 = (r1 + 288);
    r4 = (r31 + 25136);
    // inline leaf 0x80619C50 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r5_addr_13 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_13, r4);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 60), r0);
    // end of inlined leaf 0x80619C50
    r3 = (r1 + 288);
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
    r5 = MemoryInline::FlatRead32((r31 + 3132));
    r3 = (r1 + 288);
    r4 = (r1 + 64);
    r0 = (r5 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_11 & 134217727);
    ctx->lr = 0x80614BECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r11 = ctx->gpr[11];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 288);
    ctx->lr = 0x80614BF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    r11 = ctx->gpr[11];
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
    r3 = (r1 + 288);
    r4 = (r31 + 25764);
    ctx->lr = 0x80614C00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    r11 = ctx->gpr[11];
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
    r3 = (r1 + 288);
    ctx->lr = 0x80614C08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    r11 = ctx->gpr[11];
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
    r20 = (r31 + 896);
    r21 = 0;
}

loc_80614C10:
{
    r4 = r20;
    r5 = r21;
    r3 = (r1 + 288);
    ctx->lr = 0x80614C20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    r11 = ctx->gpr[11];
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
    r21 = (r21 + 1);
    r20 = (r20 + 372);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(6));
}

loc_80614C2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80614C10;
    }
}

loc_80614C30:
{
    r3 = (r1 + 288);
    ctx->lr = 0x80614C38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    r11 = ctx->gpr[11];
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
    r3 = (r1 + 288);
    r4 = -1;
    ctx->lr = 0x80614C44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    r11 = ctx->gpr[11];
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

loc_80614C44:
{
    r11 = (r1 + 640);
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 644));
    ctx->lr = r0;
    r1 = (r1 + 640);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
// RECOMP_REGISTRATION base 0x806143DC func_806143DC preserves=true fpr_mask=0x00000000
