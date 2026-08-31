#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80663C88(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80663C88;

loc_80663C88:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r4 + 8408));
    ctx->lr = 0x80663CB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80656F40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r0 = 6;
    r4 = 255;
    MemoryInline::FlatWrite32((r30 + 4), r31);
    r5 = 0;
    r3 = -1;
    MemoryInline::FlatWrite32((r30 + 8), r31);
    MemoryInline::FlatWrite32((r30 + 12), r31);
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r30 + 28), r31);
    MemoryInline::FlatWrite32((r30 + 24), r31);
    ctr = r0;
}

loc_80663CE0:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r6 = (r0 * 48);
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r7 = (r30 + r6);
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 32), 0, 47u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r7 + 32), r31);
    r6 = (r0 * 48);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r7 + 52), r3);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r7 + 56), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r7 + 60), r31);
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r7 + 76), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r7 + 36), r3);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r7 + 44), r3);
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r7 + 77), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r7 + 40), r3);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r7 + 48), r3);
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r7 + 78), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r7 + 64), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r7 + 65), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r7 + 66), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r7 + 67), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r7 + 68), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r7 + 69), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r7 + 70), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r7 + 71), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r7 + 72), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r7 + 73), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r7 + 74), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r7 + 75), static_cast<uint8_t>(r4));
    r7 = (r30 + r6);
    guest_range_1 = MemoryInline::ResolveRangeHost((r7 + 32), 0, 47u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r7 + 32), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r7 + 52), r3);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r7 + 56), r31);
    }
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r7 + 60), r31);
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r7 + 76), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r7 + 36), r3);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r7 + 44), r3);
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r7 + 77), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r7 + 40), r3);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r7 + 48), r3);
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r7 + 78), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r7 + 64), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r7 + 65), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r7 + 66), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r7 + 67), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r7 + 68), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r7 + 69), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r7 + 70), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r7 + 71), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r7 + 72), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r7 + 73), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r7 + 74), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r7 + 75), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80663CE0;
    }
}

loc_80663DBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF0000FA gpr_write=0xFF0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80663C88 func_80663C88 preserves=true fpr_mask=0x00000000
