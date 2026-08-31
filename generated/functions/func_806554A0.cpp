#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806554A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r0_subfc_min_4 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r7_addic_src_0 = 0;
    uint32_t r7_addic_src_1 = 0;
    uint32_t r7_addic_src_10 = 0;
    uint32_t r7_addic_src_11 = 0;
    uint32_t r7_addic_src_12 = 0;
    uint32_t r7_addic_src_13 = 0;
    uint32_t r7_addic_src_14 = 0;
    uint32_t r7_addic_src_15 = 0;
    uint32_t r7_addic_src_16 = 0;
    uint32_t r7_addic_src_17 = 0;
    uint32_t r7_addic_src_2 = 0;
    uint32_t r7_addic_src_3 = 0;
    uint32_t r7_addic_src_4 = 0;
    uint32_t r7_addic_src_5 = 0;
    uint32_t r7_addic_src_6 = 0;
    uint32_t r7_addic_src_7 = 0;
    uint32_t r7_addic_src_8 = 0;
    uint32_t r7_addic_src_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806554A0;

loc_806554A0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r20);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    }
    r21 = r3;
    r23 = 0;
    r29 = 0x809C0000u;
    r27 = r21;
    r31 = 1;
    r30 = 0x809C0000u;
    r28 = 0x809C0000u;
    r20 = 2;
}

loc_806554D0:
{
    r4 = MemoryInline::FlatRead32((r30 + 8408));
    r0 = (r23 & 255);
    r24 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r24 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80655728;
    }
}

loc_806554F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_806554FC:
{
    if ((static_cast<uint32_t>(r23) == static_cast<uint32_t>(r0))) {
        goto loc_80655728;
    }
}

loc_80655500:
{
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(5));
    r26 = (r26_rot_2 & 8160);
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r25 = (r25_rot_2 & 1020);
    r3 = (r4 + r26);
    r0 = MemoryInline::FlatRead32((r3 + 10144));
    r0 = (r0 * 48);
    r0 = (r4 + r0);
    r3 = (r0 + r25);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8065552C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806556F0;
    }
}

loc_80655530:
{
    r22 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r22 + 4));
}

loc_8065553C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065554C;
    }
}

loc_80655540:
{
    r0 = MemoryInline::FlatRead32((r21 + 4));
    r0 = (r0 | r24);
    MemoryInline::FlatWrite32((r21 + 4), r0);
}

loc_8065554C:
{
    r8 = MemoryInline::FlatRead32((r28 + -10456));
    r0 = MemoryInline::FlatRead32((r8 + 2932));
}

loc_80655558:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80655568;
    }
}

loc_8065555C:
{
    r0 = MemoryInline::FlatRead32(r22);
    MemoryInline::FlatWrite32((r27 + 408), r0);
    goto loc_806556F0;
}

loc_80655568:
{
    r3 = MemoryInline::FlatRead32((r27 + 408));
    r0 = MemoryInline::FlatRead32(r22);
    r0 = (r0 - r3);
}

loc_80655578:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(600))) {
        goto loc_8065559C;
    }
}

loc_8065557C:
{
    r3 = MemoryInline::FlatRead32((r29 + -10448));
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

loc_8065558C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806556F0;
    }
}

loc_80655590:
{
    r0 = MemoryInline::FlatRead32(r22);
    MemoryInline::FlatWrite32((r27 + 408), r0);
    goto loc_806556F0;
}

loc_8065559C:
{
    r5 = (r23 & 255);
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    r7 = -1;
    r6 = 0;
    ctr = r20;
}

loc_806555B0:
{
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 10528));
}

loc_806555BC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_806555CC;
    }
}

loc_806555C0:
{
    r7_addic_src_3 = r7;
    r7 = (r7_addic_src_3 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addic_src_3)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_806555C4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_806555CC;
    }
}

loc_806555C8:
{
    goto loc_80655678;
}

loc_806555CC:
{
    r6 = (r6 + 1);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 10528));
}

loc_806555DC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_806555EC;
    }
}

loc_806555E0:
{
    r7_addic_src_5 = r7;
    r7 = (r7_addic_src_5 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addic_src_5)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_806555E4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_806555EC;
    }
}

loc_806555E8:
{
    goto loc_80655678;
}

loc_806555EC:
{
    r6 = (r6 + 1);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 10528));
}

loc_806555FC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8065560C;
    }
}

loc_80655600:
{
    r7_addic_src_7 = r7;
    r7 = (r7_addic_src_7 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addic_src_7)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80655604:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8065560C;
    }
}

loc_80655608:
{
    goto loc_80655678;
}

loc_8065560C:
{
    r6 = (r6 + 1);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 10528));
}

loc_8065561C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8065562C;
    }
}

loc_80655620:
{
    r7_addic_src_9 = r7;
    r7 = (r7_addic_src_9 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addic_src_9)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80655624:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8065562C;
    }
}

loc_80655628:
{
    goto loc_80655678;
}

loc_8065562C:
{
    r6 = (r6 + 1);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 10528));
}

loc_8065563C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8065564C;
    }
}

loc_80655640:
{
    r7_addic_src_11 = r7;
    r7 = (r7_addic_src_11 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addic_src_11)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80655644:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8065564C;
    }
}

loc_80655648:
{
    goto loc_80655678;
}

loc_8065564C:
{
    r6 = (r6 + 1);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 10528));
}

loc_8065565C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8065566C;
    }
}

loc_80655660:
{
    r7_addic_src_13 = r7;
    r7 = (r7_addic_src_13 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addic_src_13)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80655664:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8065566C;
    }
}

loc_80655668:
{
    goto loc_80655678;
}

loc_8065566C:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806555B0;
    }
}

loc_80655674:
{
    r6 = -1;
}

loc_80655678:
{
    r0 = MemoryInline::FlatRead8((r8 + 36));
}

loc_80655680:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_806556E0;
    }
}

loc_80655684:
{
}

loc_80655688:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_806556A0;
    }
}

loc_8065568C:
{
}

loc_80655690:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_806556A0;
    }
}

loc_80655694:
{
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 10528));
    goto loc_806556A4;
}

loc_806556A0:
{
    r0 = 255;
}

loc_806556A4:
{
    r4 = MemoryInline::FlatRead32((r30 + 8408));
    r5 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r7 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806556E4;
    }
}

loc_806556C8:
{
    r0 = MemoryInline::FlatRead32((r3 + 10544));
    r3 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r6));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806556E4;
    }
}

loc_806556D8:
{
    r7 = 1;
    goto loc_806556E4;
}

loc_806556E0:
{
    r7 = 0;
}

loc_806556E4:
{
}

loc_806556E8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_806556F0;
    }
}

loc_806556EC:
{
    MemoryInline::FlatWrite8((r21 + 1), static_cast<uint8_t>(r31));
}

loc_806556F0:
{
    r0 = MemoryInline::FlatRead32((r30 + 8408));
    r3 = (r0 + r26);
    r0 = (r25 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 10152));
    r3 = (r3 * 48);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80655718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80655728;
    }
}

loc_8065571C:
{
    r0 = MemoryInline::FlatRead32((r21 + 8));
    r0 = (r0 | r24);
    MemoryInline::FlatWrite32((r21 + 8), r0);
}

loc_80655728:
{
    r23 = (r23 + 1);
    r27 = (r27 + 4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(12));
}

loc_80655734:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806554D0;
    }
}

loc_80655738:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 16));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 24));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 40));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 48));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 56));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 60));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF001FB gpr_write=0xFFF001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806554A0 func_806554A0 preserves=true fpr_mask=0x00000000
