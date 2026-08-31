#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013DA28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013DA28;

loc_8013DA28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8013DA2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013DA60;
    }
}

loc_8013DA30:
{
    r6 = MemoryInline::FlatRead16(r4);
    r3 = r4;
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r6 = MemoryInline::FlatRead16((r4 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 6));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8013DA60:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 10u, true, false);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_8013DA68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DA78;
    }
}

loc_8013DA6C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 10u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8013DA74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013DA80;
    }
}

loc_8013DA78:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8013DA80:
{
    r0 = (r8 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013DA84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DAC4;
    }
}

loc_8013DA88:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 0u, r3);
            r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r3 + 2));
        }
    }
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 4));
            r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 6));
        }
    }
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r3 + 8));
    r3 = r5;
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8013DAC4:
{
    r0 = (r9 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013DAC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DB08;
    }
}

loc_8013DACC:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r3 = r5;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
        }
    }
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8013DB08:
{
    r7 = (r8 + -1);
    r6 = 0x80250000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 - r7);
    r6 = (r6 + -13840);
    r7 = (r9 + r0);
    r0 = (r7 + -1);
    r0 = (r0 & 255);
    r6_addr_0 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8013DB30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013DB7C;
    }
}

loc_8013DB34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013DB44;
    }
}

loc_8013DB38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8013DB3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013DB50;
    }
}

loc_8013DB40:
{
    goto loc_8013DC3C;
}

loc_8013DB44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8013DB48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013DC3C;
    }
}

loc_8013DB4C:
{
    goto loc_8013DBAC;
}

loc_8013DB50:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 0u, r3);
            r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r3 + 2));
        }
    }
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 4));
            r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 6));
        }
    }
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r3 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8013DB7C:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r3 = r4;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
        }
    }
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8013DBAC:
{
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r8));
    r6 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, r3);
}

loc_8013DBBC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_8013DBC4;
    }
}

loc_8013DBC0:
{
    r6 = r0;
}

loc_8013DBC4:
{
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    r7 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r3 + 2));
}

loc_8013DBD4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r7))) {
        goto loc_8013DBDC;
    }
}

loc_8013DBD8:
{
    r7 = r0;
}

loc_8013DBDC:
{
    r6 = MemoryInline::FlatRead16(r5);
    r0 = (r7 & 65535);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r7));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_8013DBEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013DBF8;
    }
}

loc_8013DBF0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8013DBF8:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8013DC00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013DC34;
    }
}

loc_8013DC04:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 4));
}

loc_8013DC10:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8013DC18;
    }
}

loc_8013DC14:
{
    r6 = r0;
}

loc_8013DC18:
{
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    r4 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8013DC28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8013DC30;
    }
}

loc_8013DC2C:
{
    r4 = r0;
}

loc_8013DC30:
{
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_8013DC34:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_8013DC3C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013DA28 func_8013DA28 preserves=true fpr_mask=0x00000000
