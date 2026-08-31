#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017EDDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8017EDDC;

loc_8017EDDC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r31 = r3;
    r25 = 0;
    r26 = r31;
    r28 = 0x80250000u;
    r29 = 1;
    r30 = 0;
    goto loc_8017EE80;
}

loc_8017EE0C:
{
    r0 = MemoryInline::FlatRead32((r26 + 28));
}

loc_8017EE14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017EE78;
    }
}

loc_8017EE18:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    r4 = (r28 + 10128);
    r3 = 0;
    ctr = r0;
}

loc_8017EE2C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8017EE58;
    }
}

loc_8017EE30:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017EE38:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(r0))) {
        goto loc_8017EE4C;
    }
}

loc_8017EE3C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017EE44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8017EE4C;
    }
}

loc_8017EE48:
{
    goto loc_8017EE5C;
}

loc_8017EE4C:
{
    r4 = (r4 + 8);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017EE30;
    }
}

loc_8017EE58:
{
    r3 = -1;
}

loc_8017EE5C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r31 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 628));
    r3 = r27;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl1_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x80173E54;
    }
}

loc_inl1_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x80173E58;
}

loc_inl1_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    MemoryInline::FlatWrite32((r27 + 20), r29);
    MemoryInline::FlatWrite32((r26 + 28), r30);
}

loc_8017EE78:
{
    r26 = (r26 + 4);
    r25 = (r25 + 1);
}

loc_8017EE80:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 1024u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
}

loc_8017EE88:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_8017EE0C;
    }
}

loc_8017EE8C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_8017EE9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017EECC;
    }
}

loc_8017EEA0:
{
    r27 = MemoryInline::ReadResolved32(guest_range_0, 1020u, (r31 + 1020));
    r3 = r27;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl2_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x80173E54;
    }
}

loc_inl2_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x80173E58;
}

loc_inl2_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    r4 = 0;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
    r0 = (r3 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 28), r4);
}

loc_8017EECC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
    r0 = (r3 + 1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017EEE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017F024;
    }
}

loc_8017EEE8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
}

loc_8017EEF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8017EF94;
    }
}

loc_8017EEF4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017EEFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F024;
    }
}

loc_8017EF00:
{
    r4 = 0x80250000u;
    r0 = 37;
    r4 = (r4 + 10224);
    r3 = 0;
    ctr = r0;
}

loc_8017EF14:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017EF1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017EF30;
    }
}

loc_8017EF20:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017EF28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_8017EF30;
    }
}

loc_8017EF2C:
{
    goto loc_8017EF60;
}

loc_8017EF30:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017EF3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017EF50;
    }
}

loc_8017EF40:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017EF48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_8017EF50;
    }
}

loc_8017EF4C:
{
    goto loc_8017EF60;
}

loc_8017EF50:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017EF14;
    }
}

loc_8017EF5C:
{
    r3 = -1;
}

loc_8017EF60:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r31 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r27;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl3_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl3_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_0x80173E54;
    }
}

loc_inl3_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl3_0x80173E58;
}

loc_inl3_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl3_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    r4 = 0;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 28), r4);
    goto loc_8017F024;
}

loc_8017EF94:
{
    r4 = 0x80250000u;
    r0 = 37;
    r4 = (r4 + 10224);
    r3 = 0;
    ctr = r0;
}

loc_8017EFA8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017EFB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017EFC4;
    }
}

loc_8017EFB4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017EFBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8017EFC4;
    }
}

loc_8017EFC0:
{
    goto loc_8017EFF4;
}

loc_8017EFC4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017EFD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017EFE4;
    }
}

loc_8017EFD4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017EFDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8017EFE4;
    }
}

loc_8017EFE0:
{
    goto loc_8017EFF4;
}

loc_8017EFE4:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017EFA8;
    }
}

loc_8017EFF0:
{
    r3 = -1;
}

loc_8017EFF4:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r31 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r27;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl4_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl4_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_0x80173E54;
    }
}

loc_inl4_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl4_0x80173E58;
}

loc_inl4_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl4_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl4_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    r4 = 0;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 28), r4);
}

loc_8017F024:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE00001B gpr_write=0xFE00081B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8017EDDC func_8017EDDC preserves=true fpr_mask=0x00000000
