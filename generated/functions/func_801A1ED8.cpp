#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A1ED8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A1ED8;

loc_801A1ED8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 448u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r13)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 52), r13);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 56), r14);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 60), r15);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 64), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 68), r17);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 72), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 76), r19);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 80), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 84), r21);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 88), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 92), r23);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 96), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 100), r25);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 104), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 108), r27);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 112), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 116), r29);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 120), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 124), r31);
    r0 = ctx->gqr[1];
    MemoryInline::WriteResolved32(guest_range_0, 420u, (r3 + 424), r0);
    r0 = ctx->gqr[2];
    MemoryInline::WriteResolved32(guest_range_0, 424u, (r3 + 428), r0);
    r0 = ctx->gqr[3];
    MemoryInline::WriteResolved32(guest_range_0, 428u, (r3 + 432), r0);
    r0 = ctx->gqr[4];
    MemoryInline::WriteResolved32(guest_range_0, 432u, (r3 + 436), r0);
    r0 = ctx->gqr[5];
    MemoryInline::WriteResolved32(guest_range_0, 436u, (r3 + 440), r0);
    r0 = ctx->gqr[6];
    MemoryInline::WriteResolved32(guest_range_0, 440u, (r3 + 444), r0);
    r0 = ctx->gqr[7];
    MemoryInline::WriteResolved32(guest_range_0, 444u, (r3 + 448), r0);
    r0 = cr;
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 128), r0);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 132), r0);
    MemoryInline::WriteResolved32(guest_range_0, 404u, (r3 + 408), r0);
    r0 = ctx->msr;
    MemoryInline::WriteResolved32(guest_range_0, 408u, (r3 + 412), r0);
    r0 = ctr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 136), r0);
    r0 = xer;
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 140), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r1)) << 32) | static_cast<uint32_t>(r2)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r1);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r2);
    }
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE00E gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A1ED8 func_801A1ED8 preserves=true fpr_mask=0x00000000
