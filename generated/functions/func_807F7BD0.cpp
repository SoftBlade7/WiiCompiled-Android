#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F7BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_807F7BD0;

loc_807F7BD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->lr = 0x807F7BF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8063D798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r6 = 0;
    r3 = (r0 - r30);
    r7 = 0x808D0000u;
    r4 = (r3 + 1);
    r5 = 0x808B0000u;
    r0 = 1;
    r7 = (r7 + 16400);
    r5 = (r5 + 11588);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 444u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r29, r7);
    r3 = r29;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 408u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 408u, (r29 + 408), r6);
        MemoryInline::WriteResolved32(guest_range_0, 412u, (r29 + 412), r5);
    }
    MemoryInline::WriteResolved8(guest_range_0, 422u, (r29 + 422), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved16(guest_range_0, 416u, (r29 + 416), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 418u, (r29 + 418), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved16(guest_range_0, 420u, (r29 + 420), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 428u, (r29 + 428), r4);
    MemoryInline::WriteResolved8(guest_range_0, 436u, (r29 + 436), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 437u, (r29 + 437), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 438u, (r29 + 438), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 440u, (r29 + 440), r31);
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003E gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807F7BD0 func_807F7BD0 preserves=true fpr_mask=0x00000000
