#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016CB2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016CB2C;

loc_8016CB2C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = MemoryInline::FlatRead32((r2 + -26840));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8016CB50:
{
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -25716), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 & -13);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016CBB8;
    }
}

loc_8016CB80:
{
    r6 = 0;
    r4 = 0x80340000u;
    MemoryInline::FlatWrite8((r13 + -25679), static_cast<uint8_t>(r6));
    r4 = (r4 + 15808);
    MemoryInline::FlatWrite8((r13 + -25656), static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r4 + 34), static_cast<uint8_t>(r6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8016CDA4;
}

loc_8016CBB8:
{
    r3 = 0x80340000u;
    guest_range_1 = MemoryInline::ResolveRangeHost(r27, 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r27);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r27 + 4));
        }
    }
    r30 = (r3 + 15808);
    r31 = 1;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWriteRam32(r30, r6);
    MemoryInline::FlatWriteRam32((r30 + 4), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r27 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r27 + 12));
        }
    }
    MemoryInline::FlatWriteRam32((r30 + 8), r5);
    MemoryInline::FlatWriteRam32((r30 + 12), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r27 + 20));
        }
    }
    MemoryInline::FlatWriteRam32((r30 + 16), r5);
    MemoryInline::FlatWriteRam32((r30 + 20), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r27 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r27 + 28));
        }
    }
    MemoryInline::FlatWriteRam32((r30 + 24), r5);
    MemoryInline::FlatWriteRam32((r30 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r27 + 32));
    MemoryInline::FlatWriteRam32((r30 + 32), r0);
    MemoryInline::FlatWrite8((r13 + -25679), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r30 + 34), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite16((r4 + 32), static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 24));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 15808));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 16383);
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 16383);
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 24));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 16383);
    MemoryInline::FlatWrite16((r3 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 16383);
    MemoryInline::FlatWrite16((r3 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25716));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & 65535);
    MemoryInline::FlatWrite16((r3 + 46), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    InvokeDirectCpu<0x8012E59Cu>(ctx);
    ctx->lr = 0x8016CCDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016C854u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016CCE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016CD1C;
    }
}

loc_8016CCE4:
{
    MemoryInline::FlatWrite8((r13 + -25656), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r30 + 33), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 | 4);
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    goto loc_8016CD50;
}

loc_8016CD1C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -25656), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 & -13);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
}

loc_8016CD50:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = r28;
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    r0 = (r0 & -3);
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r0 | 3);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8016CDA4:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE78E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8016CB2C func_8016CB2C preserves=true fpr_mask=0x00000000
