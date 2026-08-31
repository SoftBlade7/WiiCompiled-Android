#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807040DC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];

    goto loc_807040DC;

loc_807040DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r4 + 10392));
    r4 = MemoryInline::FlatRead32((r5 + 1468));
    r5 = (r5 + 1724);
    ctx->lr = 0x80704104u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x802104ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    r3 = 0x808D0000u;
    r4 = 0x80700000u;
    r3 = (r3 + -31032);
    r5 = 0x806F0000u;
    r0 = (r3 + 28);
    MemoryInline::FlatWrite32(r31, r3);
    r3 = (r31 + 128);
    r4 = (r4 + -30488);
    MemoryInline::FlatWrite32((r31 + 84), r0);
    r5 = (r5 + 30592);
    r6 = 4;
    r7 = 2;
    ctx->lr = 0x80704138u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 136), r0);
    r3 = (r31 + 140);
    // inline leaf 0x80702678 (21 guest instruction(s))
    r5 = 0x808D0000u;
    r4 = 65536;
    r6 = 0;
    r0 = 8;
    r5 = (r5 + -32736);
    r4 = (r4 + -1);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 30u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 10), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 11), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 28), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r3 + 29), static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead16((r5 + 9888));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r5 + 9888));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam16((r5 + 9888), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80702678
    r4 = 0x808D0000u;
    r0 = 3;
    r4 = (r4 + -31612);
    MemoryInline::FlatWrite32(r31, r4);
    r3 = (r4 + 28);
    r4 = (r4 + 124);
    MemoryInline::FlatWrite32((r31 + 84), r3);
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 140), r4);
    MemoryInline::FlatWrite32((r31 + 152), r0);
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
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFCE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807040DC func_807040DC preserves=true fpr_mask=0x00000000
