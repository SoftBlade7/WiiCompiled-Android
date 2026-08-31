#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C87CC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_806C87CC;

loc_806C87CC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r4 = (r1 + 24);
    r5 = (r1 + 12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + -1560);
    r6 = (r29 + 128);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 128), 0, 27u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 128));
            r10 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r6 + 4));
        }
    }
    r9 = (r29 + 140);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r6 + 8));
    r8 = (r29 + 152);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r7);
    r7 = (r1 + 8);
    r31 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r29 + 140));
    r6 = 3;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r10);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r9 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r0);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r9 + 8));
    r30 = MemoryInline::FlatRead32((r3 + 228));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r29 + 152));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r8 + 1));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r8 + 2));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r31);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r12);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r11);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 8), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r1 + 9), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 10), static_cast<uint8_t>(r0));
    ctx->lr = 0x806C885Cu;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80820EB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE00E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806C87CC func_806C87CC preserves=true fpr_mask=0x00000000
