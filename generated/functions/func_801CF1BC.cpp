#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CF1BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_801CF1BC;

loc_801CF1BC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
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
    r29 = 0x80350000u;
    r25 = r3;
    r29 = (r29 + 16608);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r27 = r3;
    r31 = r29;
    r30 = (r29 + 108);
    r28 = 0;
}

loc_801CF1F0:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    r4 = (r25 + 64);
    r5 = 6;
    r23 = (r3 + 64);
    r3 = r23;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801CF20C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801CF2E0;
    }
}

loc_801CF210:
{
    r22 = MemoryInline::FlatRead32((r29 + 100));
    r26 = r22;
    goto loc_801CF2D8;
}

loc_801CF21C:
{
    r24 = MemoryInline::FlatRead32(r26);
    r4 = (r25 + 64);
    r5 = 6;
    r3 = (r24 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801CF234:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801CF2D4;
    }
}

loc_801CF238:
{
    r0 = MemoryInline::FlatRead8((r24 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801CF240:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801CF2D4;
    }
}

loc_801CF244:
{
    r3 = MemoryInline::FlatRead32(r22);
    r4 = r23;
    r5 = 6;
    r3 = (r3 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801CF25C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801CF278;
    }
}

loc_801CF260:
{
    r0 = MemoryInline::FlatRead32((r22 + 8));
}

loc_801CF268:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r0))) {
        goto loc_801CF2E0;
    }
}

loc_801CF26C:
{
    r0 = MemoryInline::FlatRead32((r31 + 116));
    MemoryInline::FlatWriteRam32((r29 + 100), r0);
    goto loc_801CF284;
}

loc_801CF278:
{
    r0 = MemoryInline::FlatRead32((r31 + 116));
    r3 = MemoryInline::FlatRead32((r31 + 112));
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_801CF284:
{
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r3 = MemoryInline::FlatRead32((r31 + 116));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r29 + 100));
}

loc_801CF298:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r0))) {
        goto loc_801CF2B8;
    }
}

loc_801CF29C:
{
    r0 = MemoryInline::FlatRead32((r26 + 4));
    MemoryInline::FlatWrite32((r31 + 112), r0);
    MemoryInline::FlatWrite32((r31 + 116), r26);
    r3 = MemoryInline::FlatRead32((r26 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r30);
    MemoryInline::FlatWrite32((r26 + 4), r30);
    goto loc_801CF2E0;
}

loc_801CF2B8:
{
    MemoryInline::FlatWrite32((r31 + 112), r26);
    r0 = MemoryInline::FlatRead32((r26 + 8));
    MemoryInline::FlatWrite32((r31 + 116), r0);
    r3 = MemoryInline::FlatRead32((r26 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r30);
    MemoryInline::FlatWrite32((r26 + 8), r30);
    goto loc_801CF2E0;
}

loc_801CF2D4:
{
    r26 = MemoryInline::FlatRead32((r26 + 8));
}

loc_801CF2D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_801CF2DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CF21C;
    }
}

loc_801CF2E0:
{
    r28 = (r28 + 1);
    r30 = (r30 + 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(10));
}

loc_801CF2EC:
{
    r31 = (r31 + 12);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801CF1F0;
    }
}

loc_801CF2F4:
{
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 48);
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
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFFC000FB gpr_write=0xFFC008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801CF1BC func_801CF1BC preserves=true fpr_mask=0x00000000
