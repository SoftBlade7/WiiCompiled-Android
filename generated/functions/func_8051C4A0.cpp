#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051C4A0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8051C4A0;

loc_8051C4A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 22;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r31));
    r3 = (r3 + 2);
    ctx->lr = 0x8051C4D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    r3 = (r30 + 24);
    r4 = 0;
    r5 = 76;
    ctx->lr = 0x8051C4E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 100), 0, 116u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 100), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r30 + 114), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r30 + 126), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r30 + 138), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r30 + 150), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r30 + 162), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 74u, (r30 + 174), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 176), r31);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 180), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r30 + 184), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r30 + 208), r31);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 212), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 100u, (r30 + 200), static_cast<uint8_t>(r31));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000CA gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051C4A0 func_8051C4A0 preserves=true fpr_mask=0x00000000
