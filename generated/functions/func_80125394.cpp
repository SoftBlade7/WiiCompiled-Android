#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80125394(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_80125394;

loc_80125394:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x802F0000u;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (r6 + 16832);
    r4 = 1;
    r3 = 2;
    r0 = 32;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -26472), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r13 + -26416), r5);
    r7 = (r6 + 0);
    r8 = (r6 + 4608);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r13 + -26420), r5);
    r6 = (r6 + 9216);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r13 + -26424), r5);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r13 + -26428), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r13 + -26432), r5);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r13 + -26436), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r13 + -26464), r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r13 + -26468), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r13 + -26472), r3);
    ctr = r0;
}

loc_801253EC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r7, r5);
    guest_range_2 = MemoryInline::ResolveRangeHost(r8, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r8, r5);
    guest_range_3 = MemoryInline::ResolveRangeHost(r6, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r6, r5);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r7 + 4), r5);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r8 + 4), r5);
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r6 + 4), r5);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r7 + 8), r5);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r8 + 8), r5);
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r6 + 8), r5);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r7 + 12), r5);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r8 + 12), r5);
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r6 + 12), r5);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r7 + 16), r5);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r8 + 16), r5);
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r6 + 16), r5);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r7 + 20), r5);
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r8 + 20), r5);
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r6 + 20), r5);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r7 + 24), r5);
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r8 + 24), r5);
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r6 + 24), r5);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r7 + 28), r5);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r8 + 28), r5);
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r6 + 28), r5);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r7 + 32), r5);
    r7 = (r7 + 36);
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r8 + 32), r5);
    r8 = (r8 + 36);
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r6 + 32), r5);
    r6 = (r6 + 36);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801253EC;
    }
}

loc_80125468:
{
    r3 = (r13 + -26404);
    r4 = 0;
    r5 = 3;
    ctx->lr = 0x80125478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r13 + -26408);
    r4 = 0;
    r5 = 3;
    ctx->lr = 0x80125488u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r13 + -26412);
    r4 = 0;
    r5 = 3;
    ctx->lr = 0x80125498u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80002022 gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80125394 func_80125394 preserves=true fpr_mask=0x00000000
