#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E22D4(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
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
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_805E22D4;

loc_805E22D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    }
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r0 = MemoryInline::FlatRead32((r3 + 608));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(38));
}

loc_805E2300:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805E2408;
    }
}

loc_805E2304:
{
    r25 = r7;
    r31 = 0;
    goto loc_805E23FC;
}

loc_805E2310:
{
    r3 = r28;
    r4 = (r31 & 65535);
    // inline leaf 0x8051D084 (14 guest instruction(s))
}

loc_inl0_0x8051D084:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl0_0x8051D08C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8051D098;
    }
}

loc_inl0_0x8051D090:
{
    r3 = 0;
    goto loc_inl0_cont_8051D084;
}

loc_inl0_0x8051D098:
{
    r4 = (r4 * 216);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_inl0_0x8051D0A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8051D0B4;
    }
}

loc_inl0_0x8051D0AC:
{
    r3 = (r3 + r4);
    goto loc_inl0_cont_8051D084;
}

loc_inl0_0x8051D0B4:
{
    r3 = 0;
}

loc_inl0_cont_8051D084:
{
    // end of inlined leaf 0x8051D084
}

loc_805E2320:
{
    r24 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805E23F4;
    }
}

loc_805E2328:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_805E2330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E23F4;
    }
}

loc_805E2334:
{
    r0 = MemoryInline::FlatRead32((r3 + 196));
}

loc_805E233C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E23F4;
    }
}

loc_805E2340:
{
}

loc_805E2344:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(-1))) {
        goto loc_805E2354;
    }
}

loc_805E2348:
{
    r0 = MemoryInline::FlatRead32((r3 + 184));
}

loc_805E2350:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(r0))) {
        goto loc_805E23F4;
    }
}

loc_805E2354:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(5));
}

loc_805E2358:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E2370;
    }
}

loc_805E235C:
{
    r3 = MemoryInline::FlatRead32((r3 + 184));
    ctx->lr = 0x805E2364u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80550468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_805E2368:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_805E23F4;
    }
}

loc_805E236C:
{
    goto loc_805E2388;
}

loc_805E2370:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(6));
}

loc_805E2374:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E2388;
    }
}

loc_805E2378:
{
    r3 = MemoryInline::FlatRead32((r3 + 184));
    ctx->lr = 0x805E2380u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80550468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_805E2384:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_805E23F4;
    }
}

loc_805E2388:
{
    r0 = MemoryInline::FlatRead32((r26 + 608));
}

loc_805E2390:
{
    r4 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r26_addr_2 = (r26 + r0);
    MemoryInline::FlatWrite32(r26_addr_2, r24);
    r0 = MemoryInline::FlatRead32((r26 + 608));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r26 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r27);
    r0 = MemoryInline::FlatRead32((r26 + 608));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r26 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r31);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_805E23D0;
    }
}

loc_805E23C0:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_805E23C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_805E23D0;
    }
}

loc_805E23CC:
{
    r4 = 1;
}

loc_805E23D0:
{
    r0 = MemoryInline::FlatRead32((r26 + 608));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r3 = (r26 + r0);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r26 + 608));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 608), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(38));
}

loc_805E23F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805E2408;
    }
}

loc_805E23F4:
{
    r31 = (r31 + 1);
    r25 = (r25 + 1);
}

loc_805E23FC:
{
    r0 = MemoryInline::FlatRead16((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_805E2404:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805E2310;
    }
}

loc_805E2408:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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

// RECOMP_GUEST_ABI gpr_read=0xFF0000FB gpr_write=0xFF0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E22D4 func_805E22D4 preserves=true fpr_mask=0x00000000
