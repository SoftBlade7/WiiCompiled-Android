#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F09A8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805F09A8;

loc_805F09A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -26136);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r31);
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r3 + 12), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r3 + 13), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r3 + 14), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
    r3 = (r3 + 16);
    // inline leaf 0x8022F760 (7 guest instruction(s))
    r4 = 0x802A0000u;
    r0 = 0;
    r4 = (r4 + 12732);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, r3, r4);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 4), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 8), r0);
    // end of inlined leaf 0x8022F760
    r4 = 0x805F0000u;
    r5 = 0x805F0000u;
    r3 = (r30 + 84);
    r6 = 92;
    r4 = (r4 + 2712);
    r5 = (r5 + 2964);
    r7 = 5;
    ctx->lr = 0x805F0A08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 14), 0, 68u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 14), static_cast<uint8_t>(r0));
    r3 = r30;
    MemoryInline::WriteResolved32(guest_range_0, 14u, (r30 + 28), r31);
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r30 + 64), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 59u, (r30 + 73), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 18u, (r30 + 32), r31);
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r30 + 65), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r30 + 74), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 22u, (r30 + 36), r31);
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r30 + 66), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 61u, (r30 + 75), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 26u, (r30 + 40), r31);
    MemoryInline::WriteResolved8(guest_range_0, 53u, (r30 + 67), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r30 + 76), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 30u, (r30 + 44), r31);
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r30 + 68), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 63u, (r30 + 77), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 34u, (r30 + 48), r31);
    MemoryInline::WriteResolved8(guest_range_0, 55u, (r30 + 69), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r30 + 78), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 38u, (r30 + 52), r31);
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r30 + 70), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 65u, (r30 + 79), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 42u, (r30 + 56), r31);
    MemoryInline::WriteResolved8(guest_range_0, 57u, (r30 + 71), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r30 + 80), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 46u, (r30 + 60), r31);
    MemoryInline::WriteResolved8(guest_range_0, 58u, (r30 + 72), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 67u, (r30 + 81), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF0E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805F09A8 func_805F09A8 preserves=true fpr_mask=0x00000000
