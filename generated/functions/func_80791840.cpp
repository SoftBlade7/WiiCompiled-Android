#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80791840(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80791840;

loc_80791840:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r4 = MemoryInline::FlatRead8((r4 + 24));
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    ctx->lr = 0x8079186Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805901D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    r3 = r30;
    // inline leaf 0x805908F4 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + 368);
    // end of inlined leaf 0x805908F4
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 212), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r30 + 208), f0.d);
    r0 = MemoryInline::FlatRead8((r31 + 27));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079188C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079189C;
    }
}

loc_80791890:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 19676));
    goto loc_807918A4;
}

loc_8079189C:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 19680));
}

loc_807918A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 208));
    r7 = 16;
    r6 = 20;
    r5 = 4;
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r4 = 0;
    r0 = 8;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 20), 0, 364u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 196u, (r30 + 216), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 200u, (r30 + 220), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 204u, (r30 + 224), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 20), r7);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 24), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 28), r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 32), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 40), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r30 + 80), r4);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 84), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 360u, (r30 + 380), r0);
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80791840 func_80791840 preserves=true fpr_mask=0x00000000
