#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E3E20(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_806E3E20;

loc_806E3E20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 2160);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite32((r3 + 176), r0);
    ctx->lr = 0x806E3E4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 88), 0, 48u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 88));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 180), 0, 72u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r30 + 180), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r30 + 184), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r30 + 188), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r30 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r30 + 192), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r30 + 196), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r30 + 200), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r30 + 204), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r30 + 116));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r30 + 208), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 120));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r30 + 212), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r30 + 124));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r30 + 216), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r30 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r30 + 220), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r30 + 224), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r30 + 240), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r30 + 244), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r30 + 248), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003E gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0xFC00001F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806E3E20 func_806E3E20 preserves=true fpr_mask=0x00000000
