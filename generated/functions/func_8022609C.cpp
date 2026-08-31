#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022609C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8022609C;

loc_8022609C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802260A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_802260A8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 10u, true, false);
    r12 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r11 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 9));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r3 + 28), static_cast<uint16_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 30), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 31), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 32), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 33), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 34), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 35), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 36), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 37), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00001FE1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022609C func_8022609C preserves=true fpr_mask=0x00000000
