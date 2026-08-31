#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80658990(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r5_addic_src_3 = 0;
    uint32_t r5_addic_src_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_80658990;

loc_80658990:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 2040);
    r6 = (r3 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    }
    r29 = 0;
    r25_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r25 = (r25_rot_0 & 1020);
    r31 = r4;
    r5 = (r3 + r25);
    r30 = r3;
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 480), 0, 296u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r6 + 484), r29);
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r6 + 480), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r6 + 676), r29);
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r6 + 672), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r6 + 580), r29);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r6 + 576), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r6 + 772), r29);
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r6 + 768), r29);
    }
    r28 = MemoryInline::FlatRead32((r5 + 432));
    r3 = MemoryInline::FlatRead32(r28);
    r5 = MemoryInline::FlatRead32((r28 + 4));
    ctx->lr = 0x806589F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r28 + 8), r29);
    r26 = (r30 + r25);
    r24 = 0;
}

loc_806589FC:
{
    r25 = MemoryInline::FlatRead32((r26 + 240));
    r28 = 0;
}

loc_80658A04:
{
    r27 = MemoryInline::FlatRead32(r25);
    r4 = 0;
    r3 = MemoryInline::FlatRead32(r27);
    r5 = MemoryInline::FlatRead32((r27 + 4));
    ctx->lr = 0x80658A18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    MemoryInline::FlatWrite32((r27 + 8), r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(8));
}

loc_80658A24:
{
    r25 = (r25 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80658A04;
    }
}

loc_80658A2C:
{
    r25 = MemoryInline::FlatRead32((r26 + 336));
    r28 = 0;
}

loc_80658A34:
{
    r27 = MemoryInline::FlatRead32(r25);
    r4 = 0;
    r3 = MemoryInline::FlatRead32(r27);
    r5 = MemoryInline::FlatRead32((r27 + 4));
    ctx->lr = 0x80658A48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    MemoryInline::FlatWrite32((r27 + 8), r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(8));
}

loc_80658A54:
{
    r25 = (r25 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80658A34;
    }
}

loc_80658A5C:
{
    r24 = (r24 + 1);
    r26 = (r26 + 48);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
}

loc_80658A68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806589FC;
    }
}

loc_80658A6C:
{
    r0 = 3;
    r5 = 0;
    r3 = 1;
    ctr = r0;
}

loc_80658A7C:
{
}

loc_80658A80:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80658A98;
    }
}

loc_80658A84:
{
}

loc_80658A88:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_80658A98;
    }
}

loc_80658A8C:
{
    r4 = (r30 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 10528));
    goto loc_80658A9C;
}

loc_80658A98:
{
    r0 = 255;
}

loc_80658A9C:
{
}

loc_80658AA0:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80658AB8;
    }
}

loc_80658AA4:
{
    r0 = (r5 & 255);
    r4 = MemoryInline::FlatRead32((r30 + 10544));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r30 + 10544), r0);
}

loc_80658AB8:
{
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + 1);
}

loc_80658ABC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80658AD4;
    }
}

loc_80658AC0:
{
}

loc_80658AC4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_80658AD4;
    }
}

loc_80658AC8:
{
    r4 = (r30 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 10528));
    goto loc_80658AD8;
}

loc_80658AD4:
{
    r0 = 255;
}

loc_80658AD8:
{
}

loc_80658ADC:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80658AF4;
    }
}

loc_80658AE0:
{
    r0 = (r5 & 255);
    r4 = MemoryInline::FlatRead32((r30 + 10544));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r30 + 10544), r0);
}

loc_80658AF4:
{
    r5_addic_src_3 = r5;
    r5 = (r5_addic_src_3 + 1);
}

loc_80658AF8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80658B10;
    }
}

loc_80658AFC:
{
}

loc_80658B00:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_80658B10;
    }
}

loc_80658B04:
{
    r4 = (r30 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 10528));
    goto loc_80658B14;
}

loc_80658B10:
{
    r0 = 255;
}

loc_80658B14:
{
}

loc_80658B18:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80658B30;
    }
}

loc_80658B1C:
{
    r0 = (r5 & 255);
    r4 = MemoryInline::FlatRead32((r30 + 10544));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r30 + 10544), r0);
}

loc_80658B30:
{
    r5_addic_src_4 = r5;
    r5 = (r5_addic_src_4 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_4)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80658B34:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80658B4C;
    }
}

loc_80658B38:
{
}

loc_80658B3C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_80658B4C;
    }
}

loc_80658B40:
{
    r4 = (r30 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 10528));
    goto loc_80658B50;
}

loc_80658B4C:
{
    r0 = 255;
}

loc_80658B50:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_80658B54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80658B6C;
    }
}

loc_80658B58:
{
    r0 = (r5 & 255);
    r4 = MemoryInline::FlatRead32((r30 + 10544));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r30 + 10544), r0);
}

loc_80658B6C:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80658A7C;
    }
}

loc_80658B74:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r30 + 10540));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r30 + 10540), r0);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFF0000FB gpr_write=0xFF0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80658990 func_80658990 preserves=true fpr_mask=0x00000000
