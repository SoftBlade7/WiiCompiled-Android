#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D96E0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_806D96E0;

loc_806D96E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->lr = 0x806D96FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 88), 0, 124u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r30 + 208));
    r31 = 0;
    r3 = r30;
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r4 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r4 + 84), static_cast<uint8_t>(r31));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 88));
    MemoryInline::FlatWriteFloat32((r4 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 92));
    MemoryInline::FlatWriteFloat32((r4 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 96));
    MemoryInline::FlatWriteFloat32((r4 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r30 + 100));
    MemoryInline::FlatWriteFloat32((r4 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 104));
    MemoryInline::FlatWriteFloat32((r4 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 108));
    MemoryInline::FlatWriteFloat32((r4 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 112));
    MemoryInline::FlatWriteFloat32((r4 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r30 + 116));
    MemoryInline::FlatWriteFloat32((r4 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 120));
    MemoryInline::FlatWriteFloat32((r4 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r30 + 124));
    MemoryInline::FlatWriteFloat32((r4 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r30 + 128));
    MemoryInline::FlatWriteFloat32((r4 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 132));
    MemoryInline::FlatWriteFloat32((r4 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r30 + 100));
    MemoryInline::FlatWriteFloat32((r4 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r30 + 116));
    MemoryInline::FlatWriteFloat32((r4 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 132));
    MemoryInline::FlatWriteFloat32((r4 + 56), f0.d);
    ctx->lr = 0x806D9794u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 88), 0, 128u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 124u, (r30 + 212));
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r31));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r30 + 88));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r30 + 92));
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r30 + 96));
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r30 + 100));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r30 + 104));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r30 + 108));
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r30 + 112));
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r30 + 116));
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r30 + 120));
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r30 + 124));
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r30 + 128));
    MemoryInline::FlatWriteFloat32((r3 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r30 + 132));
    MemoryInline::FlatWriteFloat32((r3 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r30 + 100));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r30 + 116));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r30 + 132));
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003E gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0xFC00001F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806D96E0 func_806D96E0 preserves=true fpr_mask=0x00000000
