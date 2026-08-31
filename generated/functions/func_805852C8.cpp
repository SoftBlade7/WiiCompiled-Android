#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805852C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805852C8;

loc_805852C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 512u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805852EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80585388;
    }
}

loc_805852F0:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 32));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 500u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 500u, (r3 + 500));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 504u, (r3 + 504));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 508u, (r3 + 508));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 332), f0.d);
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r6 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 336), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 340), f0.d);
    r3 = r31;
    ctx->lr = 0x80585380u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80591050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    // inline leaf 0x80590ED8 (8 guest instruction(s))
}

loc_inl1_0x80590ED8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x80590EE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80590EE8:
{
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 & -65);
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_80590ED8;
}

loc_inl1_return:
{
}

loc_inl1_cont_80590ED8:
{
    // end of inlined leaf 0x80590ED8
}

loc_80585388:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF7F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805852C8 func_805852C8 preserves=true fpr_mask=0x00000000
