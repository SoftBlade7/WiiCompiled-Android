#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F0F50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F0F50;

loc_801F0F50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F0F54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F0F60;
    }
}

loc_801F0F58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F0F5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F0F68;
    }
}

loc_801F0F60:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

loc_801F0F68:
{
    r10 = 82;
    r9 = 97;
    r8 = 65;
    r7 = 114;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 512u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r10));
    r6 = 0;
    r5 = 85;
    r0 = 170;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 3), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 484u, (r4 + 484), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 485u, (r4 + 485), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 486u, (r4 + 486), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 487u, (r4 + 487), static_cast<uint8_t>(r9));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 8u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    MemoryInline::WriteResolved8(guest_range_0, 488u, (r4 + 488), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r7 = (r7_rot_0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 489u, (r4 + 489), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 490u, (r4 + 490), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 491u, (r4 + 491), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 492u, (r4 + 492), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r7 = (r7_rot_3 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 493u, (r4 + 493), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r7 = (r7_rot_4 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 494u, (r4 + 494), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
    r3 = 0;
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_5 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 508u, (r4 + 508), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 495u, (r4 + 495), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 509u, (r4 + 509), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 510u, (r4 + 510), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 511u, (r4 + 511), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000007E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F0F50 func_801F0F50 preserves=true fpr_mask=0x00000000
