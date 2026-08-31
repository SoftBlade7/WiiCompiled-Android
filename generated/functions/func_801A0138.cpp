#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A0138(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_801A0138;

loc_801A0138:
{
    r5 = 0x801A0000u;
    r4 = (r4 + 864);
    r3 = (r22 + 96);
    r5 = (r5 + 900);
    r21 = (r5 - r4);
    r5 = r21;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r21;
    r3 = (r22 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A168Cu>(ctx);
    // sync @ 0x801A0160 (no-op)
    r4 = r21;
    r3 = (r22 + 96);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1710u>(ctx);
    r31 = 0x801A0000u;
    r3 = 0x801A0000u;
    r0 = (r31 + 900);
    r24 = (r30 + 792);
    r3 = (r3 + 904);
    r29 = 0;
    r21 = (r3 - r0);
    r23 = 1610612736;
    r22 = 0x801A0000u;
}

loc_801A0194:
{
    r3 = MemoryInline::FlatRead32((r13 + -25460));
}

loc_801A019C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A01D0;
    }
}

loc_801A01A0:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_801A01A8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_801A01D0;
    }
}

loc_801A01AC:
{
    r3 = (r29 & 255);
    // inline leaf 0x8015D394 (6 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26112));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = (r3 & r0);
    // end of inlined leaf 0x8015D394
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A01B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A01D0;
    }
}

loc_801A01BC:
{
    r3 = (r30 + 880);
    r4 = (r29 & 255);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D3ACu>(ctx);
    r1 = ctx->gpr[1];
    goto loc_801A02A4;
}

loc_801A01D0:
{
    r3 = (r29 & 255);
    r0 = (r27 | r3);
    MemoryInline::FlatWrite32(r28, r0);
    // inline leaf 0x8015D394 (6 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26112));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = (r3 & r0);
    // end of inlined leaf 0x8015D394
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A01E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A020C;
    }
}

loc_801A01E8:
{
    r3 = (r30 + 928);
    r4 = (r29 & 255);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D3ACu>(ctx);
    r1 = ctx->gpr[1];
    r5 = r21;
    r3 = (r22 + 1028);
    r4 = (r31 + 900);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801A026C;
}

loc_801A020C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(0));
}

loc_801A0210:
{
    r3 = (r21 + 3);
    r4 = (r22 + 1028);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_2 & 1073741823);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A026C;
    }
}

loc_801A0220:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A0224:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A025C;
    }
}

loc_801A022C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r23);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r23);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r23);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r23);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r23);
    }
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A022C;
    }
}

loc_801A0254:
{
    r3 = (r3 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A0258:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A026C;
    }
}

loc_801A025C:
{
    ctr = r3;
}

loc_801A0260:
{
    MemoryInline::FlatWrite32(r4, r23);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A0260;
    }
}

loc_801A026C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r4 = r26;
    r24_addr_2 = (r24 + r0);
    r3 = MemoryInline::FlatRead32(r24_addr_2);
    r5 = r25;
    r20 = (r3 + -2147483648);
    r3 = r20;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r20;
    r4 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A168Cu>(ctx);
    // sync @ 0x801A0294 (no-op)
    r3 = r20;
    r4 = r25;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1710u>(ctx);
}

loc_801A02A4:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(15));
}

loc_801A02AC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A0194;
    }
}

loc_801A02B0:
{
    r3 = 0x80000000u;
    r5 = 0x801A0000u;
    r4 = (r3 + 12288);
    MemoryInline::FlatWrite32((r13 + -25496), r4);
    r5 = (r5 + 1096);
    r3 = (r30 + 976);
    MemoryInline::FlatWriteRam32(r4, r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 8), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 16), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 20), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 24), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 28), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 32), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 36), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 40), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 44), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 48), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 52), r5);
    r4 = MemoryInline::FlatRead32((r13 + -25496));
    MemoryInline::FlatWrite32((r4 + 56), r5);
    MemoryInline::FlatWrite32(r28, r27);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D3ACu>(ctx);
    r1 = ctx->gpr[1];
    r11 = (r1 + 64);
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF027FB gpr_write=0xFFF0087B gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801A0138 func_801A0138 preserves=true fpr_mask=0x00000000
