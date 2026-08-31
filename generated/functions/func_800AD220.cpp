#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AD220(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800AD220;

loc_800AD220:
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
    r6 = MemoryInline::FlatRead32(r3);
    r27 = r3;
    r29 = r4;
    r28 = r5;
    r0 = MemoryInline::FlatRead8(r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800AD24C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AD264;
    }
}

loc_800AD250:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800AD254:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AD26C;
    }
}

loc_800AD258:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800AD25C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AD274;
    }
}

loc_800AD260:
{
    goto loc_800AD27C;
}

loc_800AD264:
{
    r30 = 3;
    goto loc_800AD280;
}

loc_800AD26C:
{
    r30 = 1;
    goto loc_800AD280;
}

loc_800AD274:
{
    r30 = 2;
    goto loc_800AD280;
}

loc_800AD27C:
{
    r30 = 3;
}

loc_800AD280:
{
    MemoryInline::FlatWrite32(r4, r30);
    r5 = r30;
    r6 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead8((r6 + 2));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r7 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead8((r7 + 3));
    r0 = MemoryInline::FlatRead16((r7 + 4));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_0 & -65536);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r6 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    r6 = MemoryInline::FlatRead8((r6 + 1));
    r0 = (0 - r6);
    r0 = (r0 | r6);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r27);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008A5A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r29 + 16), r3);
    r5 = r30;
    r3 = 0;
    r4 = MemoryInline::FlatRead32(r27);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008A5A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r31 = (r29 + 24);
    r29 = 0;
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r30 = (r0 + r3);
    goto loc_800AD400;
}

loc_800AD30C:
{
}

loc_800AD310:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(2))) {
        goto loc_800AD3F4;
    }
}

loc_800AD314:
{
    r0 = MemoryInline::FlatRead32(r30);
    r4 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800AD324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AD3E4;
    }
}

loc_800AD328:
{
    r3 = (r0 + r3);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 46u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 2));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 46u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, (r31 + 4), r5);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r31 + 6), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 6));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r31 + 8), r5);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r31 + 10), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 10));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r31 + 12), r5);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r31 + 14), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 14));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r31 + 16), r5);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r31 + 18), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r3 + 18));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 16));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r31 + 20), r5);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r31 + 22), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r3 + 22));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r31 + 24), r5);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r31 + 26), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r3 + 26));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r31 + 28), r5);
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r31 + 30), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r3 + 30));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r3 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r31 + 32), r5);
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r31 + 34), r0);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r31 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 34u, (r3 + 34));
    MemoryInline::WriteResolved16(guest_range_1, 34u, (r31 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 36u, (r3 + 36));
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r31 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 38u, (r3 + 38));
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r31 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r3 + 40));
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r31 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 42u, (r3 + 42));
    MemoryInline::WriteResolved16(guest_range_1, 42u, (r31 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 44u, (r3 + 44));
    MemoryInline::WriteResolved16(guest_range_1, 44u, (r31 + 48), static_cast<uint16_t>(r0));
}

loc_800AD3E4:
{
    r3 = r27;
    r5 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AD430u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    MemoryInline::FlatWrite32(r31, r3);
}

loc_800AD3F4:
{
    r31 = (r31 + 52);
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_800AD400:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_800AD40C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AD30C;
    }
}

loc_800AD410:
{
    r11 = (r1 + 32);
    r3 = 1;
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
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800007B gpr_write=0xF80008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AD220 func_800AD220 preserves=true fpr_mask=0x00000000
