#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EF240(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805EF240;

loc_805EF240:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r8 = 0x808C0000u;
    r4 = 0x805F0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = 0x805F0000u;
    r8 = (r8 + -26040);
    r4 = (r4 + -4572);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    r5 = (r5 + -4400);
    r6 = 52;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r7 = 5;
    MemoryInline::FlatWrite32((r3 + 4), r31);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32(r3, r8);
    r3 = (r3 + 64);
    ctx->lr = 0x805EF298u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 16), 0, 45u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 16), r31);
    r3 = r30;
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r30 + 52), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 20), r31);
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r30 + 53), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 24), r31);
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r30 + 54), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 28), r31);
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r30 + 55), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 32), r31);
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r30 + 56), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 36), r31);
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r30 + 57), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 40), r31);
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r30 + 58), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 44), r31);
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r30 + 59), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 48), r31);
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r30 + 60), static_cast<uint8_t>(r31));
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
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFE0E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805EF240 func_805EF240 preserves=true fpr_mask=0x00000000
