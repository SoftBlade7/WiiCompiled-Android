#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_805DCAB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r27_mdest_0 = 0;
    uint32_t r27_mdest_1 = 0;
    uint32_t r27_mdest_2 = 0;
    uint32_t r27_mdest_3 = 0;
    uint32_t r27_mdest_4 = 0;
    uint32_t r27_mdest_5 = 0;
    uint32_t r27_mrot_0 = 0;
    uint32_t r27_mrot_1 = 0;
    uint32_t r27_mrot_2 = 0;
    uint32_t r27_mrot_3 = 0;
    uint32_t r27_mrot_4 = 0;
    uint32_t r27_mrot_5 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
    uint32_t r29_mdest_0 = 0;
    uint32_t r29_mdest_1 = 0;
    uint32_t r29_mdest_2 = 0;
    uint32_t r29_mdest_3 = 0;
    uint32_t r29_mdest_4 = 0;
    uint32_t r29_mdest_5 = 0;
    uint32_t r29_mrot_0 = 0;
    uint32_t r29_mrot_1 = 0;
    uint32_t r29_mrot_2 = 0;
    uint32_t r29_mrot_3 = 0;
    uint32_t r29_mrot_4 = 0;
    uint32_t r29_mrot_5 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r29_rot_5 = 0;
    uint32_t r31_mdest_0 = 0;
    uint32_t r31_mdest_1 = 0;
    uint32_t r31_mdest_2 = 0;
    uint32_t r31_mdest_3 = 0;
    uint32_t r31_mdest_4 = 0;
    uint32_t r31_mrot_0 = 0;
    uint32_t r31_mrot_1 = 0;
    uint32_t r31_mrot_2 = 0;
    uint32_t r31_mrot_3 = 0;
    uint32_t r31_mrot_4 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805DCAB4;

loc_805DCAB4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -496), 0, 504u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -496), r1);
    r1 = (r1 + -496);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 500u, (r1 + 500), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 436u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 436u, (r1 + 436), r17);
        MemoryInline::WriteResolved32(guest_range_0, 440u, (r1 + 440), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 444u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 444u, (r1 + 444), r19);
        MemoryInline::WriteResolved32(guest_range_0, 448u, (r1 + 448), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 452u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 452u, (r1 + 452), r21);
        MemoryInline::WriteResolved32(guest_range_0, 456u, (r1 + 456), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 460u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 460u, (r1 + 460), r23);
        MemoryInline::WriteResolved32(guest_range_0, 464u, (r1 + 464), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 468u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 468u, (r1 + 468), r25);
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r1 + 472), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 476u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 476u, (r1 + 476), r27);
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r1 + 480), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 484u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 484u, (r1 + 484), r29);
        MemoryInline::WriteResolved32(guest_range_0, 488u, (r1 + 488), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 492u, (r1 + 492), r31);
    r19 = r3;
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r22 = 0;
    r29 = MemoryInline::FlatRead32((r1 + 24));
    r25 = 0;
    r31 = MemoryInline::FlatRead32((r1 + 20));
    r17 = 0;
    r26 = 4;
    r28 = 1;
    r30 = 2;
    r18 = -1;
    r0 = MemoryInline::FlatRead32((r3 + 9352));
    r23_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r23 = (r23_rot_0 & -4);
}

loc_805DCAF8:
{
    r0 = MemoryInline::FlatRead32((r19 + 9344));
    r24 = (r22 + r23);
}

loc_805DCB04:
{
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(r0))) {
        goto loc_805DCBF0;
    }
}

loc_805DCB08:
{
    r3 = (r1 + 228);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_19B1 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_19B1[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_19B1[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r19 + 9340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DCB18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DCB30;
    }
}

loc_805DCB1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805DCB20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DCB58;
    }
}

loc_805DCB24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805DCB28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DCB80;
    }
}

loc_805DCB2C:
{
    goto loc_805DCBBC;
}

loc_805DCB30:
{
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r27_mrot_2 = (r27_rot_2 & -16777216);
    r27_mdest_2 = (r27 & 16777215);
    r27 = (r27_mdest_2 | r27_mrot_2);
    r21 = r24;
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(8));
    r27_mrot_3 = (r27_rot_3 & 16776960);
    r27_mdest_3 = (r27 & -16776961);
    r27 = (r27_mdest_3 | r27_mrot_3);
    MemoryInline::FlatWriteRam32((r1 + 28), r27);
    r3 = (r1 + 16);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r27);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805DACB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r20 = r3;
    goto loc_805DCBBC;
}

loc_805DCB58:
{
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(24));
    r29_mrot_2 = (r29_rot_2 & -16777216);
    r29_mdest_2 = (r29 & 16777215);
    r29 = (r29_mdest_2 | r29_mrot_2);
    r21 = r24;
    r29_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(8));
    r29_mrot_3 = (r29_rot_3 & 16776960);
    r29_mdest_3 = (r29 & -16776961);
    r29 = (r29_mdest_3 | r29_mrot_3);
    MemoryInline::FlatWriteRam32((r1 + 24), r29);
    r3 = (r1 + 12);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805DACB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r20 = r3;
    goto loc_805DCBBC;
}

loc_805DCB80:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(24));
    r31_mrot_2 = (r31_rot_2 & -16777216);
    r31_mdest_2 = (r31 & 16777215);
    r31 = (r31_mdest_2 | r31_mrot_2);
    r3 = (r19 + r0);
    r21 = r24;
    r4 = MemoryInline::FlatRead8((r3 + 9546));
    r31 = (r31 & -16776961);
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805DACB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r20 = r3;
    r4 = r24;
    r3 = (r19 + 9364);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805FA930
    MemoryInline::FlatWriteRam32((r1 + 300), r3);
}

loc_805DCBBC:
{
    r0 = MemoryInline::FlatRead32((r19 + 9332));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_805DCBC4:
{
    r3 = (r0 + r25);
    MemoryInline::FlatWrite32((r3 + 948), r21);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DCBE8;
    }
}

loc_805DCBD0:
{
    MemoryInline::FlatWrite8((r3 + 500), static_cast<uint8_t>(r17));
    r4 = r20;
    r3 = (r3 + 372);
    r5 = (r1 + 228);
    ctx->lr = 0x805DCBE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805DCC00;
}

loc_805DCBE8:
{
    MemoryInline::FlatWrite8((r3 + 500), static_cast<uint8_t>(r28));
    goto loc_805DCC00;
}

loc_805DCBF0:
{
    r0 = MemoryInline::FlatRead32((r19 + 9332));
    r3 = (r0 + r25);
    MemoryInline::FlatWrite32((r3 + 948), r18);
    MemoryInline::FlatWrite8((r3 + 500), static_cast<uint8_t>(r28));
}

loc_805DCC00:
{
    r22 = (r22 + 1);
    r25 = (r25 + 596);
}

loc_805DCC0C:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(4))) {
        goto loc_805DCAF8;
    }
}

loc_805DCC10:
{
    r0 = MemoryInline::FlatRead32((r19 + 9340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DCC18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DCC4C;
    }
}

loc_805DCC1C:
{
    r3 = (r1 + 32);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_3A1A = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_3A1A[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_3A1A[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r6 = MemoryInline::FlatRead32((r19 + 9352));
    r3 = (r19 + 7976);
    r5 = (r1 + 32);
    r4 = 2009;
    r0 = (r6 + 1);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0 = MemoryInline::FlatRead32((r19 + 9348));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    ctx->lr = 0x805DCC48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805DCC5C;
}

loc_805DCC4C:
{
    r3 = (r19 + 7976);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x805DCC5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805DCC5C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 436), 0, 68u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 436));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 440));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 444));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 448));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 452));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 456));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 460));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 464));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 468));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 472));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 476));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 480));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 484));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 488));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 492));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 500));
    ctx->lr = r0;
    r1 = (r1 + 496);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805DCAB4 func_805DCAB4 preserves=true fpr_mask=0x00000000
