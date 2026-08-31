#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80535864(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80535864;

loc_80535864:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 58u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 26), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 20), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 22), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 24), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 14), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 8), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 10), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 12), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 57u, (r3 + 65), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r3 + 64), static_cast<uint8_t>(r31));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = 30015488;
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 32), 0, 44u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r29 + 52), r3);
    r0 = (r4 + -15493);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r29 + 48), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r29 + 60), r3);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r29 + 56), r31);
    }
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r29 + 38), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r29 + 32), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r29 + 34), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r29 + 36), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r29 + 66), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r29 + 68), r0);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r29 + 72), r31);
    }
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000000A gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80535864 func_80535864 preserves=true fpr_mask=0x00000000
