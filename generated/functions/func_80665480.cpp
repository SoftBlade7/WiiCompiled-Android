#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80665480(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r9_rot_0 = 0;
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

    goto loc_80665480;

loc_80665480:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 65536;
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r9 = (r9_rot_0 & 1020);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r6 = 255;
    r3 = 0x809C0000u;
    r8 = 0;
    r10 = MemoryInline::FlatRead32((r3 + 8408));
    r7 = (r5 + -1);
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r8);
    r3 = (r10 + r9);
    r4 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r8);
    r5 = 40;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r1 + 20), r8);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r1 + 22), r7);
    }
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r1 + 24), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r8);
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r1 + 30), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r1 + 31), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r1 + 44), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r1 + 32), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r1 + 33), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r1 + 34), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r1 + 35), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r1 + 36), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r1 + 37), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r1 + 38), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r1 + 39), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r1 + 40), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r1 + 41), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r1 + 42), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r1 + 43), static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead32((r3 + 10092));
    r0 = (r0 * 48);
    r0 = (r10 + r0);
    r3 = (r0 + r9);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x80665528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8065A34Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0000012 gpr_write=0xC00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80665480 func_80665480 preserves=true fpr_mask=0x00000000
