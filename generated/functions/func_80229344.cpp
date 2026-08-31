#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80229344(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80229344;

loc_80229344:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 12452);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWrite32((r3 + 24), r4);
    r3 = MemoryInline::FlatRead32((r13 + -23712));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x80229378u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -23712));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x80229398u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 6));
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -23712));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x802293B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 20));
    r8 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 4), static_cast<uint8_t>(r0));
    r7 = 32;
    r6 = 512;
    r5 = 3;
    r0 = MemoryInline::FlatRead8((r3 + 21));
    r4 = 608;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 5), static_cast<uint8_t>(r0));
    r0 = 832;
    r9 = MemoryInline::FlatRead8((r3 + 22));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + 6), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead8((r3 + 23));
    r3 = r31;
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r31 + 7), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 8), r8);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r31 + 12), r7);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r31 + 14), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r31 + 16), r5);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r31 + 18), r4);
    }
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r31 + 20), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80229344 func_80229344 preserves=true fpr_mask=0x00000000
