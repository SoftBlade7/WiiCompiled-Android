#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805672CC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_805672CC;

loc_805672CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x805672E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8059018Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    r3 = 0x808B0000u;
    r6 = 0;
    r3 = (r3 + 20488);
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 12), 0, 237u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 12), r3);
    r5 = 0x802A0000u;
    r4 = (r5 + 16712);
    r3 = r31;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 28), r0);
    MemoryInline::WriteResolved16(guest_range_0, 192u, (r31 + 204), static_cast<uint16_t>(r6));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16712));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16712));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r31 + 80), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 192u, (r31 + 204), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r31 + 228), r6);
    MemoryInline::WriteResolved8(guest_range_0, 236u, (r31 + 248), static_cast<uint8_t>(r6));
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805672CC func_805672CC preserves=true fpr_mask=0x00000000
