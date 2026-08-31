#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A6D3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A6D3C;

loc_801A6D3C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
}

loc_801A6D54:
{
    r26 = r3;
    r27 = r4;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A6D68;
    }
}

loc_801A6D60:
{
    r31 = MemoryInline::FlatRead32(r3);
    goto loc_801A6D6C;
}

loc_801A6D68:
{
    r31 = 0;
}

loc_801A6D6C:
{
    r24 = MemoryInline::FlatRead32((r4 + 40));
    r0 = MemoryInline::FlatRead32((r4 + 44));
    r3 = (r24 + r0);
    r0 = (r3 + 7);
    r0 = (r0 - r24);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_0 & 536870911);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(r3));
}

loc_801A6D8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A6DA4;
    }
}

loc_801A6D90:
{
    r0 = MemoryInline::FlatRead32(r24);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801A6D98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6DAC;
    }
}

loc_801A6D9C:
{
    r24 = (r24 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A6D90;
    }
}

loc_801A6DA4:
{
    r3 = 0;
    goto loc_801A6FE4;
}

loc_801A6DAC:
{
    r3 = r26;
    r4 = r27;
    // inline leaf 0x801A6D34 (1 guest instruction(s))
    // end of inlined leaf 0x801A6D34
    r30 = MemoryInline::FlatRead32((r24 + 4));
    r29 = 0;
    r25 = 0x80290000u;
    goto loc_801A6FA0;
}

loc_801A6DC8:
{
    r0 = MemoryInline::FlatRead16(r30);
}

loc_801A6DD0:
{
    r28 = (r28 + r0);
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801A6DF0;
    }
}

loc_801A6DD8:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
    r3 = MemoryInline::FlatRead32((r26 + 16));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = (r0 & -2);
    goto loc_801A6DF4;
}

loc_801A6DF0:
{
    r3 = 0;
}

loc_801A6DF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_801A6DF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6EBC;
    }
}

loc_801A6DFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A6E2C;
    }
}

loc_801A6E00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_801A6E04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6E6C;
    }
}

loc_801A6E08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A6E1C;
    }
}

loc_801A6E0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801A6E10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6F9C;
    }
}

loc_801A6E14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A6E5C;
    }
}

loc_801A6E18:
{
    goto loc_801A6F90;
}

loc_801A6E1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_801A6E20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6E98;
    }
}

loc_801A6E24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A6EA8;
    }
}

loc_801A6E28:
{
    goto loc_801A6E88;
}

loc_801A6E2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(201));
}

loc_801A6E30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6F9C;
    }
}

loc_801A6E34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A6E50;
    }
}

loc_801A6E38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(10));
}

loc_801A6E3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6EF4;
    }
}

loc_801A6E40:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A6ED8;
    }
}

loc_801A6E44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(14));
}

loc_801A6E48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A6F90;
    }
}

loc_801A6E4C:
{
    goto loc_801A6F14;
}

loc_801A6E50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(203));
}

loc_801A6E54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A6F90;
    }
}

loc_801A6E58:
{
    goto loc_801A6F34;
}

loc_801A6E5C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_801A6F9C;
}

loc_801A6E6C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = MemoryInline::FlatRead32(r28);
    r3 = (r3 + r0);
    r0 = (r4 & -67108861);
    r0_mrot_2 = (r3 & 67108860);
    r0_mdest_2 = (r0 & -67108861);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_801A6F9C;
}

loc_801A6E88:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_801A6F9C;
}

loc_801A6E98:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_801A6F9C;
}

loc_801A6EA8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r3 + r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_801A6F9C;
}

loc_801A6EBC:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r3 + r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_2 & 65535);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_6 & 1);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_801A6F9C;
}

loc_801A6ED8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = MemoryInline::FlatRead32(r28);
    r3 = (r3 + r0);
    r0 = (r4 & -65533);
    r0_mrot_4 = (r3 & 65532);
    r0_mdest_4 = (r0 & -65533);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_801A6F9C;
}

loc_801A6EF4:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + r0);
    r3 = (r0 - r28);
    r0 = (r4 & -67108861);
    r0_mrot_5 = (r3 & 67108860);
    r0_mdest_5 = (r0 & -67108861);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_801A6F9C;
}

loc_801A6F14:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + r0);
    r3 = (r0 - r28);
    r0 = (r4 & -65533);
    r0_mrot_3 = (r3 & 65532);
    r0_mdest_3 = (r0 & -65533);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_801A6F9C;
}

loc_801A6F34:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
}

loc_801A6F3C:
{
    r3 = MemoryInline::FlatRead32((r27 + 16));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r23 = (r3 + r0);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_4);
    r28 = (r0 & -2);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801A6F74;
    }
}

loc_801A6F54:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r24 = (r0 & -2);
    r3 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = r24;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1710u>(ctx);
}

loc_801A6F74:
{
    r0 = MemoryInline::FlatRead32(r23);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A6F7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6F88;
    }
}

loc_801A6F80:
{
    r29 = r23;
    goto loc_801A6F9C;
}

loc_801A6F88:
{
    r29 = 0;
    goto loc_801A6F9C;
}

loc_801A6F90:
{
    r3 = (r25 + 1584);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801A6F9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801A6F9C:
{
    r30 = (r30 + 8);
}

loc_801A6FA0:
{
    r4 = MemoryInline::FlatRead8((r30 + 2));
}

loc_801A6FA8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(203))) {
        goto loc_801A6DC8;
    }
}

loc_801A6FAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801A6FB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6FD4;
    }
}

loc_801A6FB4:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r25 = (r0 & -2);
    r3 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = r25;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1710u>(ctx);
}

loc_801A6FD4:
{
    r3 = r26;
    r4 = r27;
    // inline leaf 0x801A6D38 (1 guest instruction(s))
    // end of inlined leaf 0x801A6D38
    r3 = 1;
}

loc_801A6FE4:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A6D3C func_801A6D3C preserves=true fpr_mask=0x00000000
