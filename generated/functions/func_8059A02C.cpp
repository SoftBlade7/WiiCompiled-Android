#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059A02C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059A02C;

loc_8059A02C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    r5 = 0x80890000u;
    r4 = 0x80890000u;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8040));
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r1 + 108), r31);
    r31 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8076));
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r30);
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r0 = MemoryInline::FlatRead32((r6 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r5);
    }
    r0 = MemoryInline::FlatRead32((r6 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r1 + 68), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r1 + 72), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r1 + 76), f1.d);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8059A084:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059A094;
    }
}

loc_8059A088:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
}

loc_8059A094:
{
    r3 = r31;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r3 = (r3 + 256);
    r4 = (r1 + 80);
    r5 = (r1 + 56);
    ctx->lr = 0x8059A0ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    r3 = r31;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 112));
    r3 = r31;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r3 = (r3 + 256);
    r4 = (r1 + 68);
    r5 = (r1 + 44);
    ctx->lr = 0x8059A0FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 24u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r31 + 16));
    r3 = r31;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f6.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f5.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f6.d));
    f4.d = PpcFmulsInline(f4.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r31 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    MemoryInline::FlatWriteFloat32((r4 + 32), f3.d);
    MemoryInline::FlatWriteFloat32((r4 + 36), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 40), f1.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r31 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f5.d);
    MemoryInline::FlatWriteFloat32((r4 + 44), f3.d);
    MemoryInline::FlatWriteFloat32((r4 + 48), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 52), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r31 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f4.d);
    MemoryInline::FlatWriteFloat32((r4 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 64), f0.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r31 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 368));
    r3 = r31;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f4.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 104), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r31 + 20));
    r4 = MemoryInline::FlatRead32((r4 + 28));
    r30 = MemoryInline::FlatRead32((r4 + 140));
    MemoryInline::FlatWriteFloat32((r30 + 12), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f1.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r0 = MemoryInline::FlatRead32((r3 + 108));
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r3 + 104));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 112));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 26256));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteFloat32((r30 + 28), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000A gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0xC0000001 fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059A02C func_8059A02C preserves=true fpr_mask=0x00000000
