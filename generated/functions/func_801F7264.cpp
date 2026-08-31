#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F7264(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_801F72A8_loc_0 = 0;
    uint32_t addr_801F72B0_loc_0 = 0;
    uint32_t addr_801F72C0_loc_0 = 0;
    uint32_t addr_801F72DC_loc_0 = 0;
    uint32_t addr_801F72EC_loc_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801F7264;

loc_801F7264:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r6 = (r3 + 542);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 11), 0, 21u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 11));
    r0 = (r3 + 544);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r5 = (r3 + 546);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 12));
    r9 = (r3 + 548);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 13));
    MemoryInline::FlatWrite8((r3 + 540), static_cast<uint8_t>(r8));
    r8 = (r3 + 550);
    r11 = MemoryInline::ReadResolved16(guest_range_0, 3u, (r4 + 14));
    MemoryInline::FlatWrite8((r3 + 539), static_cast<uint8_t>(r10));
    r10 = MemoryInline::ReadResolved16(guest_range_0, 5u, (r4 + 16));
    MemoryInline::FlatWrite8((r3 + 541), static_cast<uint8_t>(r7));
    r12 = MemoryInline::ReadResolved16(guest_range_0, 7u, (r4 + 18));
    addr_801F72A8_loc_0 = r6;
    PPC_StoreHalfwordByteReverse(addr_801F72A8_loc_0, r11);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 17u, (r4 + 28));
    addr_801F72B0_loc_0 = r0;
    PPC_StoreHalfwordByteReverse(addr_801F72B0_loc_0, r10);
    r31 = MemoryInline::ReadResolved16(guest_range_0, 15u, (r4 + 26));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r7 = (r7_rot_0 & 16711680);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r6 = (r6_rot_0 & 65280);
    addr_801F72C0_loc_0 = r5;
    PPC_StoreHalfwordByteReverse(addr_801F72C0_loc_0, r12);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 11u, (r4 + 22));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 65280);
    r30 = MemoryInline::ReadResolved16(guest_range_0, 9u, (r4 + 20));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r7_mrot_0 = (r7_rot_1 & -16777216);
    r7_mdest_0 = (r7 & 16777215);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 13u, (r4 + 24));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r6_mrot_0 = (r6_rot_1 & 255);
    r6_mdest_0 = (r6 & -256);
    r6 = (r6_mdest_0 | r6_mrot_0);
    addr_801F72DC_loc_0 = r9;
    PPC_StoreHalfwordByteReverse(addr_801F72DC_loc_0, r10);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(8));
    r5 = (r5_rot_0 & 65280);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(24));
    r5_mrot_0 = (r5_rot_1 & 255);
    r5_mdest_0 = (r5 & -256);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(24));
    r0_mrot_0 = (r0_rot_1 & 255);
    r0_mdest_0 = (r0 & -256);
    r0 = (r0_mdest_0 | r0_mrot_0);
    addr_801F72EC_loc_0 = r8;
    PPC_StoreHalfwordByteReverse(addr_801F72EC_loc_0, r4);
    r4 = (r7 | r6);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0_mrot_1 = (r0_rot_2 & -65536);
    r0_mdest_1 = (r0 & 65535);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r3 + 552), r4);
    MemoryInline::FlatWrite32((r3 + 564), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC0001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F7264 func_801F7264 preserves=true fpr_mask=0x00000000
