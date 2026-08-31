#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001D4C0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001D4C0;

loc_8001D4C0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r0 = MemoryInline::FlatRead32((r13 + -27512));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
}

loc_8001D4E8:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001D4F8;
    }
}

loc_8001D4F0:
{
    r4 = (r1 + 8);
    goto loc_8001D53C;
}

loc_8001D4F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 8u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r1 + 15));
    r4 = (r1 + 16);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r1 + 14));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r1 + 13));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r1 + 12));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r1 + 11));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r1 + 10));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r1 + 9));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r1 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 16), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r1 + 17), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r1 + 18), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r1 + 19), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r1 + 20), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 22), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r1 + 23), static_cast<uint8_t>(r0));
}

loc_8001D53C:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r30 = 8;
    r29 = 0;
    r0 = (2176 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(2176) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
}

loc_8001D550:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_8001D55C;
    }
}

loc_8001D554:
{
    r29 = 769;
    r30 = r0;
}

loc_8001D55C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_8001D560:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001D574;
    }
}

loc_8001D564:
{
    r3 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    goto loc_8001D584;
}

loc_8001D574:
{
    r3 = (r3 + r5);
    r5 = r30;
    r3 = (r3 + 12);
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001CB6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001D584:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r3 = r29;
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0003FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001D4C0 func_8001D4C0 preserves=true fpr_mask=0x00000000
