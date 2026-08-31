#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BAD74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801BAD74;

loc_801BAD74:
{
    r7 = MemoryInline::FlatRead32((r13 + -24660));
    r9 = (r4 + -1);
    r8 = 0x80350000u;
    r4 = (r3 + -1);
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r7 + 26));
    r8 = (r8 + 2144);
    r10 = MemoryInline::FlatRead32((r8 + 36));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801BAD9C:
{
    r0 = (r8 + r0);
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_801BAE68;
    }
}

loc_801BADA4:
{
    r9 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r7 + 24));
}

loc_801BADAC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r9))) {
        goto loc_801BAE08;
    }
}

loc_801BADB0:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, r7);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r7 + 4));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r8 = (r4 - r8);
    r4 = (r10 + r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801BADC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BADD8;
    }
}

loc_801BADCC:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BADD8:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r7 + 8));
    r4 = (r9 - r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801BADE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801BADF4;
    }
}

loc_801BADE8:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BADF4:
{
    r0 = (r0 - r8);
    r0 = (r0 - r10);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAE08:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, r7);
    r0 = (r0 - r9);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r7 + 6));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r8 = (r4 - r8);
    r4 = (r10 + r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801BAE24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BAE34;
    }
}

loc_801BAE28:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAE34:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r7 + 10));
    r4 = (r9 - r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801BAE40:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801BAE50;
    }
}

loc_801BAE44:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAE50:
{
    r0 = (r0 - r8);
    r0 = (r0 - r10);
    r4 = (r0 & -2);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAE68:
{
}

loc_801BAE6C:
{
    if ((static_cast<uint32_t>(r10) != static_cast<uint32_t>(1))) {
        goto loc_801BAEDC;
    }
}

loc_801BAE70:
{
    r9 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r7 + 24));
}

loc_801BAE78:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r9))) {
        goto loc_801BAE80;
    }
}

loc_801BAE7C:
{
    r0 = (r0 - r9);
}

loc_801BAE80:
{
    r4 = MemoryInline::FlatRead32((r13 + -24660));
    r8 = MemoryInline::FlatRead8(r4);
    r10 = MemoryInline::FlatRead16((r4 + 4));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r8 = (r4 - r8);
    r4 = (r10 + r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801BAE9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BAEAC;
    }
}

loc_801BAEA0:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAEAC:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r7 + 8));
    r4 = (r9 - r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801BAEB8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801BAEC8;
    }
}

loc_801BAEBC:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAEC8:
{
    r0 = (r0 - r8);
    r0 = (r0 - r10);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAEDC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
}

loc_801BAEE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BAF9C;
    }
}

loc_801BAEE4:
{
    r9 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r7 + 24));
}

loc_801BAEEC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r9))) {
        goto loc_801BAF44;
    }
}

loc_801BAEF0:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, r7);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r7 + 4));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r8 = (r4 - r8);
    r4 = (r10 + r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801BAF08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BAF18;
    }
}

loc_801BAF0C:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAF18:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r7 + 8));
    r4 = (r9 - r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801BAF24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801BAF34;
    }
}

loc_801BAF28:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAF34:
{
    r0 = (r0 - r8);
    r0 = (r0 - r10);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAF44:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, r7);
    r0 = (r0 - r9);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r7 + 6));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_5 & -4);
    r8 = (r4 - r8);
    r4 = (r10 + r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801BAF60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BAF70;
    }
}

loc_801BAF64:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAF70:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r7 + 10));
    r4 = (r9 - r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801BAF7C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801BAF8C;
    }
}

loc_801BAF80:
{
    r0 = -1;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    goto loc_801BAF9C;
}

loc_801BAF8C:
{
    r0 = (r0 - r8);
    r0 = (r0 - r10);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
}

loc_801BAF9C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027F9 gpr_write=0x00000791 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801BAD74 func_801BAD74 preserves=true fpr_mask=0x00000000
