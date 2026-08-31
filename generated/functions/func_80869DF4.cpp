#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80869DF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_subfic_ra_0 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_80869DF4;

loc_80869DF4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
}

loc_80869E00:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 24), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 28), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 36), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 40), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 44), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 48), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 52), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 56), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 60), r31);
    }
    r24 = r3;
    r25 = r4;
    r26 = r6;
    r27 = r9;
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(2))) {
        goto loc_80869E20;
    }
}

loc_80869E1C:
{
    r5 = 0;
}

loc_80869E20:
{
    r0 = (r4 * 24);
    r4 = MemoryInline::FlatRead32((r3 + 1252));
    r28 = (r4 + r7);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 964));
    r4_subfic_ra_0 = r4;
    r4 = (5 - r4_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(5) >= static_cast<uint32_t>(r4_subfic_ra_0) ? 1u : 0u) << 29);
}

loc_80869E3C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r8))) {
        goto loc_80869E44;
    }
}

loc_80869E40:
{
    r8 = (r4 & 255);
}

loc_80869E44:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r10 = (r1 + 8);
    r6 = 0;
    r7 = 0;
    goto loc_80869ED0;
}

loc_80869E58:
{
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r11 = (r11_rot_2 & 2040);
    r9 = MemoryInline::FlatRead8(r3);
    r12 = (r3 + r11);
    r11 = MemoryInline::FlatRead8((r12 + 9));
}

loc_80869E6C:
{
    if ((static_cast<uint32_t>(r11) < static_cast<uint32_t>(r9))) {
        goto loc_80869ECC;
    }
}

loc_80869E70:
{
    r9 = MemoryInline::FlatRead8((r12 + 8));
}

loc_80869E78:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r9))) {
        goto loc_80869ECC;
    }
}

loc_80869E7C:
{
    r12 = MemoryInline::FlatRead32((r12 + 4));
    r22 = MemoryInline::FlatRead32((r12 + 384));
    r11 = MemoryInline::FlatRead32((r12 + 376));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(4));
    r9 = (r9_rot_2 & -16);
    r11_addr_2 = (r11 + r9);
    r9 = MemoryInline::FlatRead32(r11_addr_2);
}

loc_80869E94:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80869ECC;
    }
}

loc_80869E98:
{
    r9 = MemoryInline::FlatRead32((r12 + 380));
    r11 = 0;
}

loc_80869EA4:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r22))) {
        goto loc_80869EB8;
    }
}

loc_80869EA8:
{
    r9 = MemoryInline::FlatRead8((r12 + 389));
}

loc_80869EB0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80869EB8;
    }
}

loc_80869EB4:
{
    r11 = 1;
}

loc_80869EB8:
{
}

loc_80869EBC:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80869ECC;
    }
}

loc_80869EC0:
{
    r9 = (r6 & 255);
    r6 = (r6 + 1);
    r10_addr_2 = (r10 + r9);
    MemoryInline::FlatWrite8(r10_addr_2, static_cast<uint8_t>(r7));
}

loc_80869ECC:
{
    r7 = (r7 + 1);
}

loc_80869ED0:
{
    r9 = (r7 & 255);
}

loc_80869ED8:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r4))) {
        goto loc_80869EE8;
    }
}

loc_80869EDC:
{
    r9 = (r6 & 255);
}

loc_80869EE4:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r8))) {
        goto loc_80869E58;
    }
}

loc_80869EE8:
{
    r9 = (r1 + 8);
    r12 = 0;
    goto loc_80869F28;
}

loc_80869EF4:
{
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r10 = (r10_rot_2 & 2040);
    r7 = MemoryInline::FlatRead8(r3);
    r11 = (r3 + r10);
    r10 = MemoryInline::FlatRead8((r11 + 9));
}

loc_80869F08:
{
    if ((static_cast<uint32_t>(r10) < static_cast<uint32_t>(r7))) {
        goto loc_80869F24;
    }
}

loc_80869F0C:
{
    r7 = MemoryInline::FlatRead8((r11 + 8));
}

loc_80869F14:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r7))) {
        goto loc_80869F24;
    }
}

loc_80869F18:
{
    r7 = (r6 & 255);
    r6 = (r6 + 1);
    r9_addr_2 = (r9 + r7);
    MemoryInline::FlatWrite8(r9_addr_2, static_cast<uint8_t>(r12));
}

loc_80869F24:
{
    r12 = (r12 + 1);
}

loc_80869F28:
{
    r7 = (r12 & 255);
}

loc_80869F30:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r4))) {
        goto loc_80869F40;
    }
}

loc_80869F34:
{
    r7 = (r6 & 255);
}

loc_80869F3C:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r8))) {
        goto loc_80869EF4;
    }
}

loc_80869F40:
{
    r30 = (r3 + r0);
    r31 = (r1 + 8);
    r23 = (r6 & 255);
    r29 = 0;
    goto loc_80869FB0;
}

loc_80869F54:
{
    r3 = (r29 & 255);
    r6 = MemoryInline::FlatRead8((r30 + 964));
    r0 = (r3 * r27);
    r31_addr_2 = (r31 + r3);
    r3 = MemoryInline::FlatRead8(r31_addr_2);
    r5 = r25;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r7 = r26;
    r22 = (r24 + r3);
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r4 = (r28 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8086EC5Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r22 + 9), static_cast<uint8_t>(r25));
    r29 = (r29 + 1);
    r0 = MemoryInline::FlatRead8((r30 + 964));
    MemoryInline::FlatWrite8((r22 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 964));
    r4 = MemoryInline::FlatRead32((r22 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 968), r4);
    r3 = MemoryInline::FlatRead8((r30 + 964));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 964), static_cast<uint8_t>(r0));
}

loc_80869FB0:
{
    r0 = (r29 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r23));
}

loc_80869FB8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80869F54;
    }
}

loc_80869FBC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 24));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 40));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 48));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 56));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 60));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC01FFB gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80869DF4 func_80869DF4 preserves=true fpr_mask=0x00000000
