#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805219AC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_805219AC;

loc_805219AC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 17u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 148), 0, 17u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r5 + 148), static_cast<uint16_t>(r0));
    r3 = r5;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r5 + 150), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r5 + 152), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r5 + 156), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r5 + 160), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r4 + 17));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r5 + 161), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r5 + 162), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r5 + 163), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r4 + 20));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r5 + 164), static_cast<uint8_t>(r0));
    ctx->lr = 0x80521A14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8051ED14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80521A20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80521198u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805219AC func_805219AC preserves=true fpr_mask=0x00000000
