#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80098DB0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80098DB0;

loc_80098DB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8008DC60u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r9 = 0x80270000u;
    r10 = 0;
    r9 = (r9 + 18512);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28304));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28300));
    r8 = (r9 + 36);
    r7 = (r9 + 56);
    r6 = 120;
    r5 = 48;
    r4 = 127;
    r3 = 64;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 376u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r31 + 208), r10);
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r31 + 212), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r31 + 220), r10);
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r31 + 224), r10);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r9);
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r31 + 216), r8);
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r31 + 228), r7);
    MemoryInline::WriteResolved8(guest_range_0, 232u, (r31 + 232), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 233u, (r31 + 233), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 234u, (r31 + 234), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 235u, (r31 + 235), static_cast<uint8_t>(r10));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 240u, (r31 + 240), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 244u, (r31 + 244), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r31 + 248), r10);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 252u, (r31 + 252), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 236u, (r31 + 236), f1.d);
    MemoryInline::WriteResolved32(guest_range_0, 372u, (r31 + 372), r10);
    MemoryInline::WriteResolved32(guest_range_0, 256u, (r31 + 256), r10);
    MemoryInline::WriteResolved16(guest_range_0, 264u, (r31 + 264), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 262u, (r31 + 262), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 260u, (r31 + 260), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 261u, (r31 + 261), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 268u, (r31 + 268), r10);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 340u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 340u, (r31 + 340), r0);
        MemoryInline::WriteResolved16(guest_range_0, 342u, (r31 + 342), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 344u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 344u, (r31 + 344), r0);
        MemoryInline::WriteResolved16(guest_range_0, 346u, (r31 + 346), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 348u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 348u, (r31 + 348), r0);
        MemoryInline::WriteResolved16(guest_range_0, 350u, (r31 + 350), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 352u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 352u, (r31 + 352), r0);
        MemoryInline::WriteResolved16(guest_range_0, 354u, (r31 + 354), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 356u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 356u, (r31 + 356), r0);
        MemoryInline::WriteResolved16(guest_range_0, 358u, (r31 + 358), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 360u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 360u, (r31 + 360), r0);
        MemoryInline::WriteResolved16(guest_range_0, 362u, (r31 + 362), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 364u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 364u, (r31 + 364), r0);
        MemoryInline::WriteResolved16(guest_range_0, 366u, (r31 + 366), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 368u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 368u, (r31 + 368), r0);
        MemoryInline::WriteResolved16(guest_range_0, 370u, (r31 + 370), r0);
    }
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r31 + 276), r0);
    r3 = r31;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 280u, (r31 + 280), r0);
        MemoryInline::WriteResolved32(guest_range_0, 284u, (r31 + 284), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r31 + 288), r0);
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r31 + 292), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 296u, (r31 + 296), r0);
        MemoryInline::WriteResolved32(guest_range_0, 300u, (r31 + 300), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 304u, (r31 + 304), r0);
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r31 + 308), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r31 + 312), r0);
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r31 + 316), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 320u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 320u, (r31 + 320), r0);
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r31 + 324), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 328u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 328u, (r31 + 328), r0);
        MemoryInline::WriteResolved32(guest_range_0, 332u, (r31 + 332), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 336u, (r31 + 336), r0);
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
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFE gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80098DB0 func_80098DB0 preserves=true fpr_mask=0x00000000
