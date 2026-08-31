#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016C94C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016C94C;

loc_8016C94C:
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
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8016C96C:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016C998;
    }
}

loc_8016C974:
{
    r4 = 0x80340000u;
    r0 = 0;
    r4 = (r4 + 15844);
    MemoryInline::FlatWrite8((r13 + -25680), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r13 + -25656), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 34), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8016CB14;
}

loc_8016C998:
{
    r28 = 0x80340000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r27, 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r27);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r27 + 4));
        }
    }
    r31 = (r28 + 15844);
    r29 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r31, r3);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 4), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r27 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r27 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r27 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r27 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r31 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r27 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r27 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 28), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r27 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r31 + 32), r0);
    MemoryInline::FlatWrite8((r13 + -25680), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r31 + 33), static_cast<uint8_t>(r29));
    ctx->lr = 0x8016C9F8u;
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
    InvokeDirectCpu<0x8016C854u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_8016C9FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016CA84;
    }
}

loc_8016CA00:
{
    r4 = MemoryInline::FlatRead32((r28 + 15844));
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -25656), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r13 + -25720));
    r4 = (r4 & 1073741823);
    MemoryInline::FlatWriteRam8((r31 + 34), static_cast<uint8_t>(r29));
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead32((r13 + -25720));
    r4 = (r4 & 1073741823);
    MemoryInline::FlatWrite32((r3 + 16), r4);
    r4 = MemoryInline::FlatRead32((r31 + 24));
    r3 = MemoryInline::FlatRead32((r13 + -25720));
    r0_mrot_1 = (r4 & 536870880);
    r0_mdest_1 = (r0 & -536870881);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r0 | 3);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 | 4);
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    goto loc_8016CB08;
}

loc_8016CA84:
{
    r0 = MemoryInline::FlatRead8((r13 + -25656));
    r4 = 0;
    MemoryInline::FlatWriteRam8((r31 + 34), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016CA94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016CAB4;
    }
}

loc_8016CA98:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r13 + -25656), static_cast<uint8_t>(r4));
}

loc_8016CAB4:
{
    r7 = MemoryInline::FlatRead32((r2 + -26840));
    r3 = 0x80340000u;
    r5 = (r3 + 15844);
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r7 + 8));
    r6 = (r4 & -13);
    MemoryInline::FlatWrite32((r7 + 8), r6);
    r4 = MemoryInline::FlatRead32((r13 + -25716));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r6));
    r4 = MemoryInline::FlatRead32((r3 + 15844));
    r3 = MemoryInline::FlatRead32((r13 + -25720));
    r4 = (r4 & 1073741823);
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r3 = MemoryInline::FlatRead32((r13 + -25720));
    r4 = (r4 & 1073741823);
    MemoryInline::FlatWrite32((r3 + 16), r4);
    r4 = MemoryInline::FlatRead32((r5 + 24));
    r3 = MemoryInline::FlatRead32((r13 + -25720));
    r0_mrot_2 = (r4 & 536870880);
    r0_mdest_2 = (r0 & -536870881);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_8016CB08:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8012E59Cu>(ctx);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8016CB14:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8016C94C func_8016C94C preserves=true fpr_mask=0x00000000
