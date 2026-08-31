#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A5860(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A5860;

loc_800A5860:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008DC60u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = 0;
    r6 = 0x80270000u;
    r6 = (r6 + 19080);
    r8 = 0x80270000u;
    r0 = (r6 + 36);
    r4 = 0x800B0000u;
    r8 = (r8 + 19176);
    r5 = 0x800A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 416u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r6);
    r9 = (r30 + 404);
    r3 = (r30 + 416);
    r4 = (r4 + -32384);
    MemoryInline::WriteResolved32(guest_range_0, 404u, (r30 + 404), r31);
    r5 = (r5 + 22976);
    r6 = 52;
    r7 = 32;
    MemoryInline::WriteResolved32(guest_range_0, 408u, (r30 + 408), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r30 + 208), r31);
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r30 + 212), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r30 + 216), r0);
    MemoryInline::WriteResolved8(guest_range_0, 284u, (r30 + 284), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 285u, (r30 + 285), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 372u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 372u, (r30 + 372), r31);
        MemoryInline::WriteResolved32(guest_range_0, 376u, (r30 + 376), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 380u, (r30 + 380), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 368u, (r30 + 368), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 384u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 384u, (r30 + 384), r31);
        MemoryInline::WriteResolved32(guest_range_0, 388u, (r30 + 388), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 396u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 396u, (r30 + 396), r31);
        MemoryInline::WriteResolved32(guest_range_0, 400u, (r30 + 400), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 404u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 404u, (r30 + 404), r9);
        MemoryInline::WriteResolved32(guest_range_0, 408u, (r30 + 408), r9);
    }
    MemoryInline::WriteResolved32(guest_range_0, 412u, (r30 + 412), r31);
    ctx->lr = 0x800A5904u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 2084), r31);
    r0 = MemoryInline::FlatRead8((r13 + -27112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A5910:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A5928;
    }
}

loc_800A5914:
{
    r3 = 0x802F0000u;
    r3 = (r3 + 4704);
    ctx->lr = 0x800A5920u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x801A7EACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27112), static_cast<uint8_t>(r0));
}

loc_800A5928:
{
    r3 = (r30 + 412);
    r4 = (r30 + 416);
    r5 = 1664;
    r6 = 52;
    ctx->lr = 0x800A593Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80095850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r30;
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800A5860 func_800A5860 preserves=true fpr_mask=0x00000000
