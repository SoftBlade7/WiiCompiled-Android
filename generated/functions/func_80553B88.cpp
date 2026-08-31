#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80553B88(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80553B88;

loc_80553B88:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 4776);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x80553BA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8051A1E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    r4 = 0x808B0000u;
    r3 = (r31 + 9548);
    r4 = (r4 + 16928);
    MemoryInline::FlatWrite32(r31, r4);
    // inline leaf 0x800B1A20 (21 guest instruction(s))
    r4 = 0x80270000u;
    r5 = 0x80270000u;
    r4 = (r4 + 19976);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 26u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    r7 = 0x80270000u;
    r5 = (r5 + 19884);
    r7 = (r7 + 19872);
    r6 = MemoryInline::FlatRead32(r7);
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
    r0 = 63;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
    r6 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r6);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r4);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 20), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 21), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 22), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x800B1A20
    r3 = r31;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80553B88 func_80553B88 preserves=true fpr_mask=0x00000000
