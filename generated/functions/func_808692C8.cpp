#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808692C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808692C8;

loc_808692C8:
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
    r31 = (r3 + 16704);
    r30 = (r3 + 16416);
    r27 = 0;
}

loc_808692E4:
{
    r29 = r31;
    r28 = r30;
    r26 = 0;
}

loc_808692F0:
{
    r3 = r29;
    // inline leaf 0x80867540 (4 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 16u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 32), r0);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 36), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80867540
    r3 = r29;
    r4 = r28;
    // inline leaf 0x808676A4 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r4 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 24), r0);
    r0 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 28), r0);
    r0 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 32), r0);
    r0 = MemoryInline::FlatRead16((r4 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 38));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r3 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 39));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r3 + 39), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x808676A4
    r26 = (r26 + 1);
    r28 = (r28 + 48);
}

loc_80869310:
{
    r29 = (r29 + 48);
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(2))) {
        goto loc_808692F0;
    }
}

loc_80869318:
{
    r27 = (r27 + 1);
    r30 = (r30 + 96);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(3));
}

loc_80869324:
{
    r31 = (r31 + 96);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808692E4;
    }
}

loc_8086932C:
{
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

// RECOMP_GUEST_ABI gpr_read=0xFC00001B gpr_write=0xFC00001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808692C8 func_808692C8 preserves=true fpr_mask=0x00000000
