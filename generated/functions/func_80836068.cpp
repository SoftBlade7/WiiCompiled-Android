#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80836068(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80836068;

loc_80836068:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 0x808E0000u;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r5 = (r5 + -29424);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f31.d);
    f31.d = f2.d;
    MemoryInline::FlatWriteRam32((r1 + 68), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 64), r30);
    r30 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 60), r29);
    r29 = r4;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 84u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f2.d);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 52), f1.d);
    }
    f1.d = f31.d;
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 56), f2.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r0);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r0);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r4 = (r30 + 16688);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r0);
    r3 = (r1 + 44);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r4 = r29;
    r3 = (r1 + 32);
    r5 = (r1 + 44);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r5 = MemoryInline::FlatRead32((r1 + 32));
    f1.d = f31.d;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r3 = (r1 + 20);
    MemoryInline::FlatWrite32((r31 + 88), r0);
    r4 = (r30 + 16688);
    MemoryInline::FlatWrite32((r31 + 84), r5);
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWrite32((r31 + 92), r0);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r4 = r29;
    r3 = (r1 + 8);
    r5 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8051486Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 80u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 8));
    r3 = r31;
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 12));
    MemoryInline::FlatWrite32((r31 + 100), r0);
    MemoryInline::FlatWrite32((r31 + 96), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 16));
    MemoryInline::FlatWrite32((r31 + 104), r0);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 64u, (r1 + 72));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r1 + 68));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r1 + 64));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 76u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001A gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x80000006 fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80836068 func_80836068 preserves=false fpr_mask=0x80000000
