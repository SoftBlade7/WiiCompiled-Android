#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022AEE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lbzux_8022AF68_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8022AEE4;

loc_8022AEE4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    }
    r30 = r3;
    r28 = MemoryInline::FlatRead16((r3 + 8));
    r31 = r4;
    r29 = MemoryInline::FlatRead16((r3 + 10));
    r27 = (r4 + 40);
    r26 = 0;
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r4 + 18), static_cast<uint16_t>(r29));
    goto loc_8022AF38;
}

loc_8022AF18:
{
    r0 = (r26 & 65535);
    r4 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r0 * 80);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 262140);
    r4_addr_2 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
    r4 = (r27 + r0);
    ctx->lr = 0x8022AF34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022B434u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r26 = (r26 + 1);
}

loc_8022AF38:
{
    r0 = (r26 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
}

loc_8022AF40:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022AF18;
    }
}

loc_8022AF44:
{
    r0 = (r28 * 80);
    r7 = 0;
    r3 = 0;
    r6 = (r27 + r0);
    goto loc_8022AF98;
}

loc_8022AF58:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & 524280);
    r5 = (r6 + r4);
    r7 = (r7 + 1);
    addr_lbzux_8022AF68_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(addr_lbzux_8022AF68_loc_0);
    r4 = addr_lbzux_8022AF68_loc_0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r5 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r5 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r5 + 7), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r5 + 4), static_cast<uint8_t>(r3));
}

loc_8022AF98:
{
    r0 = (r7 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
}

loc_8022AFA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022AF58;
    }
}

loc_8022AFA4:
{
    r5 = MemoryInline::FlatRead8((r30 + 20));
    r4 = MemoryInline::FlatRead8((r30 + 21));
    r3 = MemoryInline::FlatRead8((r30 + 22));
    r0 = MemoryInline::FlatRead8((r30 + 23));
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
    r26 = MemoryInline::FlatRead32((r1 + 8));
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8022AEE4 func_8022AEE4 preserves=true fpr_mask=0x00000000
