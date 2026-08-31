#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80657AB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_not_5 = 0;
    uint32_t r0_not_6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
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
    uint32_t r3_ca_6 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_not_6 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r3_subfe_rb_3 = 0;
    uint32_t r3_subfe_rb_4 = 0;
    uint32_t r3_subfe_rb_5 = 0;
    uint32_t r3_subfe_rb_6 = 0;
    uint32_t r4_addic_src_0 = 0;
    uint32_t r4_addic_src_1 = 0;
    uint32_t r4_addic_src_2 = 0;
    uint32_t r4_addic_src_3 = 0;
    uint32_t r4_addic_src_4 = 0;
    uint32_t r4_addic_src_5 = 0;
    uint32_t r4_addic_src_6 = 0;
    uint32_t r4_addic_src_7 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r4_subfc_min_1 = 0;
    uint32_t r4_subfc_min_2 = 0;
    uint32_t r4_subfc_min_3 = 0;
    uint32_t r4_subfc_min_4 = 0;
    uint32_t r4_subfc_min_5 = 0;
    uint32_t r4_subfc_min_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
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
    uint32_t r10 = ctx->gpr[10];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80657AB0;

loc_80657AB0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 1;
    r6 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r18);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r20);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r24);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r26);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r28);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r30);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r31);
    }
    r21 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80657AFC;
    }
}

loc_80657AEC:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_80657AF4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80657AFC;
    }
}

loc_80657AF8:
{
    r6 = 1;
}

loc_80657AFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80657B00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80657E1C;
    }
}

loc_80657B04:
{
    r23 = 0;
    r19 = 0;
    r31 = 16;
    r28 = 0x80000000u;
    r29 = 274857984;
    r30 = 1000;
    r27 = 1;
    r20 = 2;
}

loc_80657B24:
{
    r4 = MemoryInline::FlatRead32((r21 + 10524));
    r0 = (r23 & 255);
    r3 = PPC_Slw(static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
    r0 = (r4 * 88);
    r4 = (r21 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80657E10;
    }
}

loc_80657B44:
{
    r0 = MemoryInline::FlatRead8((r4 + 89));
}

loc_80657B4C:
{
    if ((static_cast<uint32_t>(r23) == static_cast<uint32_t>(r0))) {
        goto loc_80657E10;
    }
}

loc_80657B50:
{
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r25 = (r25_rot_2 & 1020);
    r24 = (r21 + r25);
    r0 = MemoryInline::FlatRead32((r24 + 10092));
    r0 = (r0 * 48);
    r3 = (r0 + r24);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 32u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.second;
            r10 = resolved_pair.first;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 8));
            r10 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
        }
    }
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r4 = MemoryInline::FlatRead32((r10 + 8));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 16));
    r5 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 24));
    r4 = (r0 + r4);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 12));
    r9 = MemoryInline::FlatRead32((r9 + 8));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 20));
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r4 = (r4 + r9);
    r7 = MemoryInline::FlatRead32((r7 + 8));
    r4 = (r4 + r0);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 28));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r4 = (r4 + r7);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r4 + r5);
    r4 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80657C28;
    }
}

loc_80657BC8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 2040);
    r3 = (r21 + r0);
    r18 = MemoryInline::FlatRead32((r3 + 480));
    r22 = MemoryInline::FlatRead32((r3 + 484));
    r0 = (r22 | r18);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80657BEC;
    }
}

loc_80657BE0:
{
    r4 = -1;
    r3 = r4;
    goto loc_80657C14;
}

loc_80657BEC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = MemoryInline::FlatRead32((r28 + 248));
    r4_subfc_min_2 = r4;
    r4 = (r4_subfc_min_2 - r22);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_2) >= static_cast<uint32_t>(r22) ? 1u : 0u) << 29);
    r6 = (r29 + 19923);
    r3_subfe_rb_2 = r3;
    r3_not_2 = ~(r18);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r3_subfe_rb_2);
    r3 = (r3 + r3_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 1073741823);
    r5 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_2 & 67108863);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800216F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80657C14:
{
    r0 = (r30 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0_not_2 = ~(r3);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r19);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r19)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_3 = ~(r30);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r30);
    r0 = (r0 + r0_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r30)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (0 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80657E10;
    }
}

loc_80657C28:
{
    r0 = MemoryInline::FlatRead32((r24 + 10092));
    r26 = (r21 + r25);
    r4 = 0;
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r24 + 10092), r0);
    r18 = MemoryInline::FlatRead32((r26 + 432));
    r3 = MemoryInline::FlatRead32(r18);
    r5 = MemoryInline::FlatRead32((r18 + 4));
    ctx->lr = 0x80657C4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r18 + 8), r19);
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 16;
    ctx->lr = 0x80657C60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = (r1 + 8);
    r4 = 0;
    r6 = 0;
    ctr = r20;
}

loc_80657C70:
{
}

loc_80657C74:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80657C80;
    }
}

loc_80657C78:
{
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r31));
    goto loc_80657CA0;
}

loc_80657C80:
{
    r0 = MemoryInline::FlatRead32((r26 + 10092));
    r0 = (r0 ^ 1);
    r0 = (r0 * 48);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3_addr_3 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
}

loc_80657CA0:
{
    r4_addic_src_3 = r4;
    r4 = (r4_addic_src_3 + 1);
}

loc_80657CA4:
{
    r6 = (r6 + 4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80657CB4;
    }
}

loc_80657CAC:
{
    MemoryInline::FlatWrite8((r5 + 9), static_cast<uint8_t>(r31));
    goto loc_80657CD4;
}

loc_80657CB4:
{
    r0 = MemoryInline::FlatRead32((r26 + 10092));
    r0 = (r0 ^ 1);
    r0 = (r0 * 48);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3_addr_5 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r5 + 9), static_cast<uint8_t>(r0));
}

loc_80657CD4:
{
    r4_addic_src_4 = r4;
    r4 = (r4_addic_src_4 + 1);
}

loc_80657CD8:
{
    r6 = (r6 + 4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80657CE8;
    }
}

loc_80657CE0:
{
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r31));
    goto loc_80657D08;
}

loc_80657CE8:
{
    r0 = MemoryInline::FlatRead32((r26 + 10092));
    r0 = (r0 ^ 1);
    r0 = (r0 * 48);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3_addr_7 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r0));
}

loc_80657D08:
{
    r4_addic_src_5 = r4;
    r4 = (r4_addic_src_5 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addic_src_5)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80657D0C:
{
    r6 = (r6 + 4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80657D1C;
    }
}

loc_80657D14:
{
    MemoryInline::FlatWrite8((r5 + 11), static_cast<uint8_t>(r31));
    goto loc_80657D3C;
}

loc_80657D1C:
{
    r0 = MemoryInline::FlatRead32((r26 + 10092));
    r0 = (r0 ^ 1);
    r0 = (r0 * 48);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3_addr_9 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r5 + 11), static_cast<uint8_t>(r0));
}

loc_80657D3C:
{
    r5 = (r5 + 4);
    r6 = (r6 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80657C70;
    }
}

loc_80657D4C:
{
    r3 = MemoryInline::FlatRead32((r24 + 10092));
    r0 = (r25 + r21);
    r4 = (r1 + 8);
    r5 = 16;
    r3 = (r3 ^ 1);
    r3 = (r3 * 48);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r18 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r18);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r18 + 8), r31);
    r24 = (r21 + r25);
    r22 = 0;
    r25 = 0;
}

loc_80657D88:
{
    r0 = MemoryInline::FlatRead32((r24 + 10092));
    r0 = (r0 ^ 1);
    r0 = (r0 * 48);
    r3 = (r24 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3_addr_12 = (r3 + r25);
    r3 = MemoryInline::FlatRead32(r3_addr_12);
    r18 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_80657DA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80657E00;
    }
}

loc_80657DAC:
{
    r26 = MemoryInline::FlatRead32((r24 + 432));
    r5 = r18;
    r4 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead32((r26 + 8));
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r26 + 8));
    r4 = 0;
    r0 = (r0 + r18);
    MemoryInline::FlatWrite32((r26 + 8), r0);
    r0 = MemoryInline::FlatRead32((r24 + 10092));
    r0 = (r0 ^ 1);
    r0 = (r0 * 48);
    r3 = (r24 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3_addr_13 = (r3 + r25);
    r18 = MemoryInline::FlatRead32(r3_addr_13);
    r3 = MemoryInline::FlatRead32(r18);
    r5 = MemoryInline::FlatRead32((r18 + 4));
    ctx->lr = 0x80657DFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r18 + 8), r19);
}

loc_80657E00:
{
    r22 = (r22 + 1);
    r25 = (r25 + 4);
}

loc_80657E0C:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(8))) {
        goto loc_80657D88;
    }
}

loc_80657E10:
{
    r23 = (r23 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(12));
}

loc_80657E18:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80657B24;
    }
}

loc_80657E1C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 24));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 32));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 48));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 56));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 64));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r1 + 72));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r1 + 76));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC07FB gpr_write=0xFFFC07FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80657AB0 func_80657AB0 preserves=true fpr_mask=0x00000000
