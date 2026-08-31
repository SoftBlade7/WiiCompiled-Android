#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805322C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805322C8;

loc_805322C8:
{
    r3 = 372;
    ctx->lr = 0x805322D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805322D4:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532468;
    }
}

loc_805322DC:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    r5 = 0x808B0000u;
    r5 = (r5 + 14632);
    r4 = 0x80530000u;
    MemoryInline::FlatWriteRam32(r3, r5);
    r5 = 0x80530000u;
    r4 = (r4 + 9352);
    r6 = 20;
    r5 = (r5 + 9388);
    r7 = 12;
    r3 = (r3 + 8);
    ctx->lr = 0x8053230Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r9 = 0x808B0000u;
    r3 = 0x808B0000u;
    r9 = (r9 + 13320);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 300), 0, 70u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 300), r9);
    r8 = 0x808B0000u;
    r7 = 0x808B0000u;
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 9u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r31);
    r6 = 0x808B0000u;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 304), static_cast<uint8_t>(r0));
    r3 = (r3 + 13248);
    r5 = 0x808B0000u;
    r4 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 300), r3);
    r3 = 0x808B0000u;
    r8 = (r8 + 13224);
    r7 = (r7 + 13200);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 308), r9);
    r6 = (r6 + 13272);
    r5 = (r5 + 13176);
    r4 = (r4 + 13152);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r31 + 1));
    r3 = (r3 + 13296);
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r30 + 312), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 308), r8);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 316), r9);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r31 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r30 + 320), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 316), r7);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 324), r6);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r31 + 4));
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r30 + 328), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 324), r5);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 332), r6);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r31 + 6));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r30 + 336), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 332), r4);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 340), r6);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r31 + 6));
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r30 + 344), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 340), r4);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 348), r6);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r31 + 6));
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r30 + 352), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 348), r4);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 356), r9);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r30 + 360), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 356), r3);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 364), r6);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r31 + 6));
    MemoryInline::WriteResolved16(guest_range_0, 68u, (r30 + 368), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 364), r4);
}

loc_80532468:
{
    r3 = r30;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805322C8 func_805322C8 preserves=true fpr_mask=0x00000000
