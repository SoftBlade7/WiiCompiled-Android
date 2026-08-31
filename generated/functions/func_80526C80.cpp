#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80526C80(CpuContext* MKW_RESTRICT ctx)
{
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

    goto loc_80526C80;

loc_80526C80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 12628);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite32((r3 + 16), r4);
    ctx->lr = 0x80526CA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8021A0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = 0x808B0000u;
    r31 = 0;
    r3 = (r3 + 12652);
    r4 = 0x80520000u;
    r5 = 0x80520000u;
    MemoryInline::FlatWrite32(r30, r3);
    r3 = (r30 + 536);
    r4 = (r4 + 27964);
    MemoryInline::FlatWrite32((r30 + 20), r31);
    r5 = (r5 + 27988);
    r6 = 36;
    r7 = 2;
    MemoryInline::FlatWrite32((r30 + 24), r31);
    MemoryInline::FlatWrite32((r30 + 28), r31);
    ctx->lr = 0x80526CE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 611), static_cast<uint8_t>(r31));
    r3 = (r30 + 752);
    MemoryInline::FlatWrite8((r30 + 612), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 613), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r30 + 616), r0);
    ctx->lr = 0x80526D00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80555464u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 728), 0, 20u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r30 + 744), static_cast<uint8_t>(r31));
    r3 = r30;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 728), r31);
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r30 + 745), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 732), r31);
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r30 + 746), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 736), r31);
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r30 + 747), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 740), r31);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80526C80 func_80526C80 preserves=true fpr_mask=0x00000000
