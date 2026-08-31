#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80021BB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80021BB0;

loc_80021BB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r13 + -27472));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80021BC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80021C50;
    }
}

loc_80021BCC:
{
    r31 = 640;
    r11 = 480;
    r0 = (r31 * r11);
    r30 = 0x802A0000u;
    r8 = 0x802A0000u;
    r12 = (r30 + 27768);
    r6 = 65536;
    MemoryInline::FlatWriteRam16((r12 + 8), static_cast<uint16_t>(r31));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & -2);
    r29 = 0;
    r9 = 255;
    r7 = (r8 + 27784);
    r5 = 127;
    r4 = 63;
    r3 = 31;
    r6 = (r6 + -5376);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r30 + 27768), r29);
    MemoryInline::FlatWriteRam16((r12 + 10), static_cast<uint16_t>(r11));
    MemoryInline::FlatWriteRam16((r12 + 12), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam32((r12 + 4), r10);
    MemoryInline::FlatWriteRam8((r8 + 27784), static_cast<uint8_t>(r9));
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 1), 0, 17u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r7 + 1), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r7 + 2), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r7 + 3), static_cast<uint8_t>(r9));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 3u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 3u, (r7 + 4), r6);
        MemoryInline::WriteResolved16(guest_range_0, 5u, (r7 + 6), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 7u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 7u, (r7 + 8), r4);
        MemoryInline::WriteResolved16(guest_range_0, 9u, (r7 + 10), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 11u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 11u, (r7 + 12), r5);
        MemoryInline::WriteResolved16(guest_range_0, 13u, (r7 + 14), r4);
    }
    MemoryInline::WriteResolved16(guest_range_0, 15u, (r7 + 16), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r13 + -27472), r0);
}

loc_80021C50:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0003FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80021BB0 func_80021BB0 preserves=true fpr_mask=0x00000000
