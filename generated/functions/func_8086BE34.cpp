#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086BE34(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t ctr = ctx->ctr;

    goto loc_8086BE34;

loc_8086BE34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 304));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 300));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 296));
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    ctx->lr = 0x8086BE70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 136u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r31 + 88));
    r3 = r31;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 320), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r31 + 320), f0.d);
    r4 = 1;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r31 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 324), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r31 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 328), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r31 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 332), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r31 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 336), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r31 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 340), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r31 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 344), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r31 + 116));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 348), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r31 + 120));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 352), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 124u, (r31 + 124));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 356), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 360), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 132u, (r31 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 364), f0.d);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x8086BEE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8086BEF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808204B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFF8 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8086BE34 func_8086BE34 preserves=true fpr_mask=0x00000000
