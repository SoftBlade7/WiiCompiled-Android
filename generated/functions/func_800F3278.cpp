#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F3278(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800F3278;

loc_800F3278:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(2));
}

loc_800F3280:
{
    r0 = r4;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F32A8;
    }
}

loc_800F3290:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F32B0;
    }
}

loc_800F3294:
{
}

loc_800F3298:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(1))) {
        goto loc_800F32A0;
    }
}

loc_800F329C:
{
    goto loc_800F32B0;
}

loc_800F32A0:
{
    r6 = (r2 + -27452);
    goto loc_800F32B4;
}

loc_800F32A8:
{
    r6 = (r2 + -27448);
    goto loc_800F32B4;
}

loc_800F32B0:
{
    r6 = (r2 + -27456);
}

loc_800F32B4:
{
    r12 = 0;
    goto loc_800F3398;
}

loc_800F32BC:
{
    r7 = r3;
    r10 = (r1 + 8);
    r9 = 0;
    goto loc_800F32E0;
}

loc_800F32CC:
{
    r8 = MemoryInline::FlatRead8(r7);
    r9 = (r9 + 1);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r8));
    r10 = (r10 + 1);
}

loc_800F32E0:
{
}

loc_800F32E4:
{
    r8 = 3;
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(3))) {
        goto loc_800F32F0;
    }
}

loc_800F32EC:
{
    r8 = r31;
}

loc_800F32F0:
{
}

loc_800F32F4:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r8))) {
        goto loc_800F32CC;
    }
}

loc_800F32F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(3));
}

loc_800F32FC:
{
    r10 = (r1 + 8);
    r10 = (r10 + r9);
    r8 = (3 - r9);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F3358;
    }
}

loc_800F330C:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r7 = (r7_rot_2 & 536870911);
}

loc_800F3310:
{
    ctr = r7;
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800F3348;
    }
}

loc_800F3318:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r10, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r10, static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r10 + 1), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r10 + 2), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r10 + 3), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r10 + 4), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r10 + 5), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r10 + 6), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r10 + 7), static_cast<uint8_t>(r12));
    r10 = (r10 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F3318;
    }
}

loc_800F3340:
{
    r8 = (r8 & 7);
}

loc_800F3344:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_800F3358;
    }
}

loc_800F3348:
{
    ctr = r8;
}

loc_800F334C:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r12));
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F334C;
    }
}

loc_800F3358:
{
    r11 = MemoryInline::FlatRead8((r1 + 8));
    r3 = (r3 + 3);
    r10 = MemoryInline::FlatRead8((r1 + 9));
    r31 = (r31 + -3);
    r7 = (static_cast<int32_t>(r11) >> 2);
    r8 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r7));
    r9 = (static_cast<int32_t>(r10) >> 4);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r9_mrot_2 = (r9_rot_2 & 48);
    r9_mdest_2 = (r9 & -49);
    r9 = (r9_mdest_2 | r9_mrot_2);
    r7 = (r8 & 63);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r9));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r8) >> 6);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r8_mrot_2 = (r8_rot_2 & 60);
    r8_mdest_2 = (r8 & -61);
    r8 = (r8_mdest_2 | r8_mrot_2);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r7));
    r4 = (r4 + 4);
}

loc_800F3398:
{
}

loc_800F339C:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(0))) {
        goto loc_800F32BC;
    }
}

loc_800F33A0:
{
    r3 = 1431633920;
    r8 = r4;
    r3 = (r3 + 21846);
    r7 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r3 = (r7 + r3);
    r3 = (r3 * 3);
    r3 = (r5 - r3);
}

loc_800F33C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_800F33D0;
    }
}

loc_800F33C8:
{
    r8 = (r4 + -2);
    goto loc_800F33DC;
}

loc_800F33D0:
{
}

loc_800F33D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_800F33DC;
    }
}

loc_800F33D8:
{
    r8 = (r4 + -1);
}

loc_800F33DC:
{
    r5 = 0;
    r3 = (r4 - r0);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    ctr = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_800F33F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F3478;
    }
}

loc_800F33F4:
{
    r4 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
}

loc_800F33FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F340C;
    }
}

loc_800F3400:
{
    r0 = MemoryInline::FlatRead8((r6 + 2));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_800F3474;
}

loc_800F340C:
{
    r3 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(25));
}

loc_800F3418:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800F3428;
    }
}

loc_800F341C:
{
    r0 = (r3 + 65);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_800F3474;
}

loc_800F3428:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(51));
}

loc_800F342C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800F343C;
    }
}

loc_800F3430:
{
    r0 = (r3 + 71);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_800F3474;
}

loc_800F343C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(61));
}

loc_800F3440:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800F3450;
    }
}

loc_800F3444:
{
    r0 = (r3 + -4);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_800F3474;
}

loc_800F3450:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(62));
}

loc_800F3454:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F3464;
    }
}

loc_800F3458:
{
    r0 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_800F3474;
}

loc_800F3464:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(63));
}

loc_800F3468:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F3474;
    }
}

loc_800F346C:
{
    r0 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_800F3474:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F33F4;
    }
}

loc_800F3478:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFF gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F3278 func_800F3278 preserves=true fpr_mask=0x00000000
