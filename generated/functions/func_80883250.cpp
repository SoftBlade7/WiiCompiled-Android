#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80883250(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80883250;

loc_80883250:
{
    r6 = MemoryInline::FlatRead8((r3 + 7916));
    r5 = 0;
    goto loc_80883294;
}

loc_8088325C:
{
    r0 = (r5 & 255);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 8016));
}

loc_8088326C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8088327C;
    }
}

loc_80883270:
{
    r0 = MemoryInline::FlatRead8((r4 + 17249));
}

loc_80883278:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80883290;
    }
}

loc_8088327C:
{
    r0 = MemoryInline::FlatRead8((r4 + 8028));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80883284:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80883290;
    }
}

loc_80883288:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80883290:
{
    r5 = (r5 + 1);
}

loc_80883294:
{
    r0 = (r5 & 255);
}

loc_8088329C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_8088325C;
    }
}

loc_808832A0:
{
    r5 = MemoryInline::FlatRead8(r3);
    r9 = 0;
    goto loc_80883314;
}

loc_808832AC:
{
    r0 = (r9 & 255);
    r0 = (r0 * 28);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 18));
}

loc_808832C0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80883310;
    }
}

loc_808832C4:
{
    r7 = MemoryInline::FlatRead32((r4 + 12));
    r8 = MemoryInline::FlatRead32((r7 + 360));
    r4 = MemoryInline::FlatRead32((r7 + 352));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_808832DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80883308;
    }
}

loc_808832E0:
{
    r0 = MemoryInline::FlatRead32((r7 + 356));
    r4 = 0;
}

loc_808832EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r8))) {
        goto loc_80883300;
    }
}

loc_808832F0:
{
    r0 = MemoryInline::FlatRead8((r7 + 365));
}

loc_808832F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80883300;
    }
}

loc_808832FC:
{
    r4 = 1;
}

loc_80883300:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80883304:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80883310;
    }
}

loc_80883308:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80883310:
{
    r9 = (r9 + 1);
}

loc_80883314:
{
    r0 = (r9 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_8088331C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808832AC;
    }
}

loc_80883320:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80883250 func_80883250 preserves=true fpr_mask=0x00000000
