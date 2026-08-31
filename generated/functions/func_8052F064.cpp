#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052F064(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8052F064;

loc_8052F064:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r5 = MemoryInline::FlatRead32((r3 + 2896));
}

loc_8052F07C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(7))) {
        goto loc_8052F08C;
    }
}

loc_8052F080:
{
}

loc_8052F084:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(10))) {
        goto loc_8052F08C;
    }
}

loc_8052F088:
{
    r0 = 1;
}

loc_8052F08C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052F090:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052F1D0;
    }
}

loc_8052F094:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8052F098:
{
    r5 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052F1D0;
    }
}

loc_8052F0A0:
{
}

loc_8052F0A4:
{
    r0 = (r4 + 248);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_8052F194;
    }
}

loc_8052F0AC:
{
    r6 = (r0 & 255);
    r12 = 0;
    r0 = (r6 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8052F0C4:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_8052F194;
    }
}

loc_8052F0C8:
{
    r8 = (r5 & 255);
    r6 = (r5 + 1);
    r7 = (r8 * 240);
    r0 = (r5 + 2);
    r11 = (r6 & 255);
    r10 = (r0 & 255);
    r31 = (r3 + r7);
    r0 = (r5 + 3);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 224), 0, 1690u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r31 + 224), static_cast<uint16_t>(r12));
    r9 = (r0 & 255);
    r30 = (r4 - r8);
    r0 = (r5 + 4);
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r31 + 233), static_cast<uint8_t>(r30));
    r8 = (r0 & 255);
    r7 = (r5 + 5);
    r6 = (r5 + 6);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r31 + 232), static_cast<uint8_t>(r30));
    r0 = (r5 + 7);
    r7 = (r7 & 255);
    r6 = (r6 & 255);
    MemoryInline::WriteResolved16(guest_range_0, 240u, (r31 + 464), static_cast<uint16_t>(r12));
    r11 = (r4 - r11);
    r0 = (r0 & 255);
    r10 = (r4 - r10);
    MemoryInline::WriteResolved8(guest_range_0, 249u, (r31 + 473), static_cast<uint8_t>(r11));
    r9 = (r4 - r9);
    r8 = (r4 - r8);
    r7 = (r4 - r7);
    MemoryInline::WriteResolved8(guest_range_0, 248u, (r31 + 472), static_cast<uint8_t>(r11));
    r6 = (r4 - r6);
    r0 = (r4 - r0);
    r5 = (r5 + 8);
    MemoryInline::WriteResolved16(guest_range_0, 480u, (r31 + 704), static_cast<uint16_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 489u, (r31 + 713), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 488u, (r31 + 712), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved16(guest_range_0, 720u, (r31 + 944), static_cast<uint16_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 729u, (r31 + 953), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 728u, (r31 + 952), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved16(guest_range_0, 960u, (r31 + 1184), static_cast<uint16_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 969u, (r31 + 1193), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 968u, (r31 + 1192), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved16(guest_range_0, 1200u, (r31 + 1424), static_cast<uint16_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 1209u, (r31 + 1433), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 1208u, (r31 + 1432), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_0, 1440u, (r31 + 1664), static_cast<uint16_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 1449u, (r31 + 1673), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 1448u, (r31 + 1672), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved16(guest_range_0, 1680u, (r31 + 1904), static_cast<uint16_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 1689u, (r31 + 1913), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1688u, (r31 + 1912), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052F0C8;
    }
}

loc_8052F194:
{
    r6 = (r5 & 255);
    r7 = 0;
    r0 = (r4 - r6);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_8052F1A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052F1D0;
    }
}

loc_8052F1AC:
{
    r6 = (r5 & 255);
    r5 = (r5 + 1);
    r0 = (r6 * 240);
    r8 = (r4 - r6);
    r6 = (r3 + r0);
    MemoryInline::FlatWrite16((r6 + 224), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite8((r6 + 233), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r6 + 232), static_cast<uint8_t>(r8));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052F1AC;
    }
}

loc_8052F1D0:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052F064 func_8052F064 preserves=true fpr_mask=0x00000000
