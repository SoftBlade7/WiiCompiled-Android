#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80548454(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80548454;

loc_80548454:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->lr = 0x8054847Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80548300u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 8u, true, false);
    r12 = MemoryInline::ReadResolved8(guest_range_0, 0u, r30);
    r4 = r31;
    r11 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 1));
    r3 = (r29 + 20);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 2));
    r5 = 20;
    r9 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r30 + 3));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r30 + 4));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 5));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r30 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r30 + 7));
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 40), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r29 + 40), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r29 + 41), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r29 + 42), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r29 + 43), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r29 + 44), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r29 + 45), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r29 + 46), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r29 + 47), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = 1380646912;
    r0 = (r3 + 20548);
    MemoryInline::FlatWrite32(r29, r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00001FA gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80548454 func_80548454 preserves=true fpr_mask=0x00000000
