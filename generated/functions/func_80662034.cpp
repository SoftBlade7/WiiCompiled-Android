#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80662034(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80662034;

loc_80662034:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = 6;
    r4 = 0;
    r12 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r7 = 0x809C0000u;
    r9 = 1;
    ctr = r0;
}

loc_80662054:
{
    r5 = MemoryInline::FlatRead32((r7 + 8408));
    r8 = (r12 & 255);
    r6 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r8));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 72));
    r0 = (r6 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806620CC;
    }
}

loc_80662078:
{
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r10 = (r10_rot_2 & 1020);
    r31 = 0;
    goto loc_80662094;
}

loc_80662084:
{
    r5 = (r3 + r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 48), static_cast<uint8_t>(r12));
    r31 = (r31 + 1);
}

loc_80662094:
{
    r11 = MemoryInline::FlatRead32((r7 + 8408));
    r0 = MemoryInline::FlatRead32((r11 + 10524));
    r6 = (r0 * 88);
    r5 = (r11 + r6);
    r0 = MemoryInline::FlatRead8((r5 + 89));
}

loc_806620AC:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r0))) {
        goto loc_806620C0;
    }
}

loc_806620B0:
{
    r0 = (r10 + r11);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 91));
    goto loc_806620C4;
}

loc_806620C0:
{
    r0 = MemoryInline::FlatRead8((r5 + 88));
}

loc_806620C4:
{
}

loc_806620C8:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r0))) {
        goto loc_80662084;
    }
}

loc_806620CC:
{
    r5 = MemoryInline::FlatRead32((r7 + 8408));
    r12 = (r12 + 1);
    r8 = (r12 & 255);
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r6 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r8));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 72));
    r0 = (r6 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80662148;
    }
}

loc_806620F4:
{
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r10 = (r10_rot_4 & 1020);
    r31 = 0;
    goto loc_80662110;
}

loc_80662100:
{
    r5 = (r3 + r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 48), static_cast<uint8_t>(r12));
    r31 = (r31 + 1);
}

loc_80662110:
{
    r11 = MemoryInline::FlatRead32((r7 + 8408));
    r0 = MemoryInline::FlatRead32((r11 + 10524));
    r6 = (r0 * 88);
    r5 = (r11 + r6);
    r0 = MemoryInline::FlatRead8((r5 + 89));
}

loc_80662128:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r0))) {
        goto loc_8066213C;
    }
}

loc_8066212C:
{
    r0 = (r10 + r11);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 91));
    goto loc_80662140;
}

loc_8066213C:
{
    r0 = MemoryInline::FlatRead8((r5 + 88));
}

loc_80662140:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_80662144:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80662100;
    }
}

loc_80662148:
{
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80662054;
    }
}

loc_80662150:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
}

loc_80662154:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_806621D0;
    }
}

loc_80662158:
{
    r0 = (12 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
}

loc_80662160:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_806621AC;
    }
}

loc_80662164:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_806621AC;
    }
}

loc_80662168:
{
    r0 = (11 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(11) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r5 = 255;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8066217C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(4))) {
        goto loc_806621AC;
    }
}

loc_80662180:
{
    r6 = (r3 + r4);
    r4 = (r4 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 48), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r6 + 48), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r6 + 49), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r6 + 50), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r6 + 51), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r6 + 52), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r6 + 53), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r6 + 54), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r6 + 55), static_cast<uint8_t>(r5));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80662180;
    }
}

loc_806621AC:
{
    r0 = (12 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r6 = 255;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
}

loc_806621BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806621D0;
    }
}

loc_806621C0:
{
    r5 = (r3 + r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 48), static_cast<uint8_t>(r6));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806621C0;
    }
}

loc_806621D0:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80662034 func_80662034 preserves=true fpr_mask=0x00000000
