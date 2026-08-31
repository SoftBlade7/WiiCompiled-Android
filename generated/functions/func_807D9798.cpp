#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D9798(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D9798;

loc_807D9798:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r26 = r5;
    r30 = r3;
    r5 = 0;
    // inline leaf 0x8055F8D0 (3 guest instruction(s))
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    // end of inlined leaf 0x8055F8D0
    r3 = 0x808D0000u;
    r0 = 0;
    r3 = (r3 + 11512);
    MemoryInline::FlatWrite32((r30 + 12), r3);
    r3 = (r3 + 8);
    r31 = 0;
    MemoryInline::FlatWrite32((r30 + 8), r3);
    r25 = 0;
    r28 = 0x808B0000u;
    r29 = 0x808B0000u;
    MemoryInline::FlatWrite32((r30 + 16), r26);
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_807D97EC:
{
    r0 = MemoryInline::FlatRead32(r30);
    r4 = 1;
    r3 = (r0 + r25);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_807D9804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D9814;
    }
}

loc_807D9808:
{
}

loc_807D980C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_807D9814;
    }
}

loc_807D9810:
{
    r4 = 0;
}

loc_807D9814:
{
}

loc_807D9818:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807D9824;
    }
}

loc_807D981C:
{
    r26 = MemoryInline::FlatRead32(r3);
    goto loc_807D9828;
}

loc_807D9824:
{
    r26 = 0;
}

loc_807D9828:
{
}

loc_807D982C:
{
    r0 = r30;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_807D9838;
    }
}

loc_807D9834:
{
    r0 = (r30 + 8);
}

loc_807D9838:
{
    MemoryInline::FlatWrite32((r26 + 284), r0);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 327));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D9848:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D9898;
    }
}

loc_807D984C:
{
    r27 = MemoryInline::FlatRead32((r3 + 260));
    r0 = MemoryInline::FlatRead32((r27 + 1368));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D9858:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D9870;
    }
}

loc_807D985C:
{
    r3 = (r28 + 18248);
    r5 = (r29 + 18216);
    r4 = 56;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807D9870u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807D9870:
{
    r3 = MemoryInline::FlatRead32((r27 + 1368));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D9878:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D9884;
    }
}

loc_807D987C:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_807D9888;
}

loc_807D9884:
{
    r0 = 0;
}

loc_807D9888:
{
    MemoryInline::FlatWrite16((r26 + 290), static_cast<uint16_t>(r0));
    r3 = r26;
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800728F0u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_807D9898:
{
    r3 = r26;
    r4 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800728F0u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    r31 = (r31 + 1);
    r25 = (r25 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_807D98B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D97EC;
    }
}

loc_807D98B4:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r0 = MemoryInline::FlatRead32((r3 + 1272));
}

loc_807D98C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D98D0;
    }
}

loc_807D98C8:
{
    r0 = MemoryInline::FlatRead32((r3 + 1276));
    goto loc_807D98D4;
}

loc_807D98D0:
{
    r0 = -1;
}

loc_807D98D4:
{
    MemoryInline::FlatWrite32((r30 + 124), r0);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D98E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D98F4;
    }
}

loc_807D98EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_807D98F8;
}

loc_807D98F4:
{
    r0 = -1;
}

loc_807D98F8:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 24), 0, 108u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 104u, (r30 + 128), r0);
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r11 = (r1 + 48);
    r3 = r30;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 276), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r4 + 276));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r30 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 280));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r30 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 284));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r30 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 288));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r30 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 292));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r30 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 296));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r30 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 300));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r30 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 304));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r30 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 308));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r30 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 312));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r30 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 316));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r30 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 320));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r30 + 68), f0.d);
    r4 = MemoryInline::FlatRead32((r30 + 16));
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 276), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r4 + 276));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, (r30 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 280));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r30 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 284));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r30 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 288));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r30 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 292));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 64u, (r30 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 296));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 68u, (r30 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r4 + 300));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, (r30 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r4 + 304));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r30 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r4 + 308));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, (r30 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r4 + 312));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 84u, (r30 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r4 + 316));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r30 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r4 + 320));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, (r30 + 116), f0.d);
    MemoryInline::WriteResolved8(guest_range_3, 96u, (r30 + 120), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 97u, (r30 + 121), static_cast<uint8_t>(r0));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D9798 func_807D9798 preserves=true fpr_mask=0x00000000
