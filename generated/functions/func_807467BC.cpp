#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807467BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_addic_src_1 = 0;
    uint32_t r0_addic_src_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807467BC;

loc_807467BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r6 = 0x808A0000u;
    r29 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 11192));
}

loc_807467E0:
{
    r31 = 0x808D0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r25 = r3;
    r26 = r4;
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r31 = (r31 + -18696);
    r30 = 0;
    r28 = 1;
    r27 = 1;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80746838;
    }
}

loc_80746808:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 104));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80746818:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80746820;
    }
}

loc_8074681C:
{
    r28 = 0;
}

loc_80746820:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 108));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80746830:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80746838;
    }
}

loc_80746834:
{
    r27 = 0;
}

loc_80746838:
{
    r3 = r29;
    r5 = (r1 + 12);
    r4 = 0;
    // inline leaf 0x8071C144 (8 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteRamFloat32(r5, f0.d);
    r3 = MemoryInline::FlatRead8((r4 + 12));
    // end of inlined leaf 0x8071C144
}

loc_8074684C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807468A8;
    }
}

loc_80746850:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
}

loc_80746858:
{
    f0.d = std::fabs(f0.d);
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80746868;
    }
}

loc_80746860:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 80));
    goto loc_8074686C;
}

loc_80746868:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 64));
}

loc_8074686C:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80746870:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807468A8;
    }
}

loc_80746874:
{
    r0 = MemoryInline::FlatRead32((r25 + 132));
}

loc_8074687C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807468A8;
    }
}

loc_80746880:
{
}

loc_80746884:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807468A8;
    }
}

loc_80746888:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80746898:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807468A4;
    }
}

loc_8074689C:
{
    r30 = 3;
    goto loc_807468A8;
}

loc_807468A4:
{
    r30 = 4;
}

loc_807468A8:
{
    r0 = MemoryInline::FlatRead32((r25 + 136));
}

loc_807468B0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807468CC;
    }
}

loc_807468B4:
{
    r0_addic_src_1 = r0;
    r0 = (r0_addic_src_1 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_1)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_807468B8:
{
    MemoryInline::FlatWrite32((r25 + 136), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807468CC;
    }
}

loc_807468C0:
{
    r30 = MemoryInline::FlatRead32((r25 + 140));
    r0 = 0;
    MemoryInline::FlatWrite32((r25 + 140), r0);
}

loc_807468CC:
{
    r3 = r29;
    r5 = (r1 + 8);
    r4 = 1;
    // inline leaf 0x8071C144 (8 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteRamFloat32(r5, f0.d);
    r3 = MemoryInline::FlatRead8((r4 + 12));
    // end of inlined leaf 0x8071C144
}

loc_807468E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8074693C;
    }
}

loc_807468E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
}

loc_807468EC:
{
    f0.d = std::fabs(f0.d);
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_807468FC;
    }
}

loc_807468F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    goto loc_80746900;
}

loc_807468FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 68));
}

loc_80746900:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80746904:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r25 + 136), r0);
    MemoryInline::FlatWrite32((r25 + 140), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8074693C;
    }
}

loc_80746914:
{
}

loc_80746918:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8074693C;
    }
}

loc_8074691C:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8074692C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80746938;
    }
}

loc_80746930:
{
    r30 = 1;
    goto loc_8074693C;
}

loc_80746938:
{
    r30 = 2;
}

loc_8074693C:
{
    r3 = MemoryInline::FlatRead32((r25 + 132));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80746944:
{
    MemoryInline::FlatWrite32((r25 + 132), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80746954;
    }
}

loc_8074694C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r25 + 132), r0);
}

loc_80746954:
{
    r11 = (r1 + 48);
    r3 = r30;
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE00003B gpr_write=0xFE00087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807467BC func_807467BC preserves=true fpr_mask=0x00000000
