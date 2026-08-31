#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A0CA8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_801A0CA8;

loc_801A0CA8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 452u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r1)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r1);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r2);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r6);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 32), r8);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 36), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 40), r10);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 44), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r13)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 48), r12);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 52), r13);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r4 + 56), r14);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r4 + 60), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r4 + 64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r4 + 68), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r4 + 72), r18);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r4 + 76), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r4 + 80), r20);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r4 + 84), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r4 + 88), r22);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r4 + 92), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r4 + 96), r24);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r4 + 100), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r4 + 104), r26);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r4 + 108), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r4 + 112), r28);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r4 + 116), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r4 + 120), r30);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r4 + 124), r31);
    }
    r0 = ctx->gqr[1];
    MemoryInline::WriteResolved32(guest_range_0, 424u, (r4 + 424), r0);
    r0 = ctx->gqr[2];
    MemoryInline::WriteResolved32(guest_range_0, 428u, (r4 + 428), r0);
    r0 = ctx->gqr[3];
    MemoryInline::WriteResolved32(guest_range_0, 432u, (r4 + 432), r0);
    r0 = ctx->gqr[4];
    MemoryInline::WriteResolved32(guest_range_0, 436u, (r4 + 436), r0);
    r0 = ctx->gqr[5];
    MemoryInline::WriteResolved32(guest_range_0, 440u, (r4 + 440), r0);
    r0 = ctx->gqr[6];
    MemoryInline::WriteResolved32(guest_range_0, 444u, (r4 + 444), r0);
    r0 = ctx->gqr[7];
    MemoryInline::WriteResolved32(guest_range_0, 448u, (r4 + 448), r0);
    MemoryInline::FlatWriteRam32((r1 + -8), r1);
    r1 = (r1 + -8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A0A7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A0CA8 func_801A0CA8 preserves=true fpr_mask=0x00000000
