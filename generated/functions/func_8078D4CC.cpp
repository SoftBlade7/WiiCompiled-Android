#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078D4CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;

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

    goto loc_8078D4CC;

loc_8078D4CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r8 = MemoryInline::FlatRead32((r4 + 12088));
    r0 = MemoryInline::FlatRead32((r8 + 368));
}

loc_8078D4E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8078D5AC;
    }
}

loc_8078D4E8:
{
    r5 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r9 = 0;
    r6 = MemoryInline::FlatRead32((r4 + -10448));
    r10 = 0;
    r0 = MemoryInline::FlatRead8((r5 + 36));
    r7 = (r5 + 40);
    r11 = 0;
    r12 = 0;
    r31 = 0;
    ctr = r0;
}

loc_8078D51C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8078D578;
    }
}

loc_8078D520:
{
    r0 = (r31 & 255);
    r5 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r0 * 240);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & 1020);
    r5_addr_2 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_2);
    r5 = (r7 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 34));
    r0 = MemoryInline::FlatRead32((r5 + 204));
}

loc_8078D544:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8078D558;
    }
}

loc_8078D548:
{
}

loc_8078D54C:
{
    r9 = (r9 + r4);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r11))) {
        goto loc_8078D558;
    }
}

loc_8078D554:
{
    r11 = r4;
}

loc_8078D558:
{
}

loc_8078D55C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8078D570;
    }
}

loc_8078D560:
{
}

loc_8078D564:
{
    r10 = (r10 + r4);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r12))) {
        goto loc_8078D570;
    }
}

loc_8078D56C:
{
    r12 = r4;
}

loc_8078D570:
{
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8078D520;
    }
}

loc_8078D578:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r10));
}

loc_8078D57C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8078D590;
    }
}

loc_8078D580:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r8 + 368), r0);
    MemoryInline::FlatWrite16((r8 + 372), static_cast<uint16_t>(r11));
    goto loc_8078D5AC;
}

loc_8078D590:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8078D5A4;
    }
}

loc_8078D594:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r8 + 368), r0);
    MemoryInline::FlatWrite16((r8 + 372), static_cast<uint16_t>(r12));
    goto loc_8078D5AC;
}

loc_8078D5A4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r8 + 368), r0);
}

loc_8078D5AC:
{
    r5 = MemoryInline::FlatRead32((r8 + 368));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
}

loc_8078D5B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078D5C0;
    }
}

loc_8078D5B8:
{
    r3 = 3;
    goto loc_8078D608;
}

loc_8078D5C0:
{
    r4 = 0x809C0000u;
    r0 = (r3 * 240);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 244));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8078D5D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078D604;
    }
}

loc_8078D5DC:
{
    r4 = 0x809C0000u;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & 1020);
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r0 = MemoryInline::FlatRead16((r8 + 372));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_1 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    r3 = MemoryInline::FlatRead16((r3 + 34));
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_8078D608;
}

loc_8078D604:
{
    r3 = 2;
}

loc_8078D608:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8078D4CC func_8078D4CC preserves=true fpr_mask=0x00000000
