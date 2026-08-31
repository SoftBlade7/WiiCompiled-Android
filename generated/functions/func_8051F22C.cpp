#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051F22C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_8051F22C;

loc_8051F22C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x8051F258u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r29 + 24));
    r31 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + -832));
    r30 = 0;
    r6 = 7;
    r0 = (r0 & -129);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r30));
    r3 = (r29 + 144);
    r4 = 0;
    r5 = 2112;
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r30));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 12), f0.d);
    MemoryInline::FlatWrite8((r29 + 20), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r29 + 21), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r29 + 22), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r29 + 23), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    ctx->lr = 0x8051F2A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0.d = MemoryInline::FlatReadFloat32((r31 + -832));
    r5 = 4;
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 2264), 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r29 + 2264), r5);
    r3 = MemoryInline::FlatRead32((r29 + 2332));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r29 + 2268), r0);
    r4 = MemoryInline::FlatRead8((r29 + 81));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r29 + 2296), r30);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r29 + 2298), r30);
    }
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r29 + 2308), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r29 + 2300), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved16(guest_range_0, 46u, (r29 + 2310), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r29 + 2312), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r29 + 2316), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r29 + 2324), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r29 + 2320), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r29 + 2328), f0.d);
    ctx->lr = 0x8051F2ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807459E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8051F22C func_8051F22C preserves=true fpr_mask=0x00000000
