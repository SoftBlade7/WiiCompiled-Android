#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806515CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_806515CC;

loc_806515CC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r0 = -1;
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
    r29 = 0x809C0000u;
    r27 = 0;
    r30 = 0x809C0000u;
    r25 = 0x809C0000u;
    r26 = 0x809C0000u;
    r31 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 7736), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r3 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r28 = MemoryInline::FlatRead32((r3 + 1028));
    MemoryInline::FlatWrite8((r4 + 728), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 729), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 730), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 731), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 732), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 733), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r4 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r4 + 734), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 735), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 736), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 737), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 738), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 739), static_cast<uint8_t>(r0));
}

loc_80651690:
{
}

loc_80651694:
{
    r5 = MemoryInline::FlatRead32((r30 + 8408));
    if ((static_cast<uint32_t>(r27) > static_cast<uint32_t>(11))) {
        goto loc_806516A8;
    }
}

loc_8065169C:
{
    r3 = (r5 + r27);
    r24 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_806516AC;
}

loc_806516A8:
{
    r24 = 255;
}

loc_806516AC:
{
}

loc_806516B0:
{
    if ((static_cast<uint32_t>(r24) >= static_cast<uint32_t>(12))) {
        goto loc_80651788;
    }
}

loc_806516B4:
{
    r4 = MemoryInline::FlatRead32((r30 + 8408));
    r3 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r24));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80651788;
    }
}

loc_806516D4:
{
    r0 = MemoryInline::FlatRead8((r4 + 89));
}

loc_806516DC:
{
    if ((static_cast<uint32_t>(r24) == static_cast<uint32_t>(r0))) {
        goto loc_80651788;
    }
}

loc_806516E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_806516E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80651710;
    }
}

loc_806516E8:
{
    r0 = (r27 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r27)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_806516EC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80651704;
    }
}

loc_806516F0:
{
}

loc_806516F4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_80651704;
    }
}

loc_806516F8:
{
    r3 = (r5 + r27);
    r0 = MemoryInline::FlatRead8((r3 + 10527));
    goto loc_80651708;
}

loc_80651704:
{
    r0 = 255;
}

loc_80651708:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(r0));
}

loc_8065170C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80651788;
    }
}

loc_80651710:
{
    r3 = r28;
    r4 = r24;
    ctx->lr = 0x8065171Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805D2D44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r24 * 192);
    r5 = MemoryInline::FlatRead32((r25 + 8456));
    r3 = r28;
    r4 = (r1 + 8);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 368));
    r5 = MemoryInline::FlatRead32((r5 + 372));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805D2778u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_80651748:
{
    r24 = r3;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80651788;
    }
}

loc_80651750:
{
    r3 = r28;
    r4 = r24;
    // inline leaf 0x805D2900 (19 guest instruction(s))
}

loc_inl0_0x805D2900:
{
}

loc_inl0_0x805D2904:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl0_0x805D2944;
    }
}

loc_inl0_0x805D2908:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x805D2944;
    }
}

loc_inl0_0x805D2920:
{
    r4 = MemoryInline::FlatRead32((r4 + 464));
    r3 = 25;
    r4 = (r4 + -1);
    r0 = (25 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(25) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = (r3 | ~r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_inl0_cont_805D2900;
}

loc_inl0_0x805D2944:
{
    r3 = 0;
}

loc_inl0_cont_805D2900:
{
    // end of inlined leaf 0x805D2900
}

loc_80651760:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80651788;
    }
}

loc_80651764:
{
    r3 = MemoryInline::FlatRead32((r26 + 8464));
    r4 = r24;
    ctx->lr = 0x80651770u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066375Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_80651774:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80651788;
    }
}

loc_80651778:
{
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r27);
    MemoryInline::FlatWrite8((r3 + 728), static_cast<uint8_t>(r24));
}

loc_80651788:
{
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(12));
}

loc_80651790:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80651690;
    }
}

loc_80651794:
{
    r3 = r28;
    ctx->lr = 0x8065179Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805D21B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
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
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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

// RECOMP_GUEST_ABI gpr_read=0xFF0037FB gpr_write=0xFF001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806515CC func_806515CC preserves=true fpr_mask=0x00000000
