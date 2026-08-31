#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802152D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802152D4;

loc_802152D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_802152E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802152F0;
    }
}

loc_802152E4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    goto loc_802153B0;
}

loc_802152F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802152F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80215304;
    }
}

loc_802152F8:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    goto loc_802153B0;
}

loc_80215304:
{
}

loc_80215308:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80215358;
    }
}

loc_8021530C:
{
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_80215320:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80215338;
    }
}

loc_80215324:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r4 = 1;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r4 = r5;
    r6 = (r0 & 1);
}

loc_80215338:
{
    r5 = (r4 & 65535);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & 16776960);
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4 = (r4 - r5);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r0));
    r0_subfic_ra_1 = r0;
    r0 = (255 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(255) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    goto loc_802153B0;
}

loc_80215358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8021535C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802153B0;
    }
}

loc_80215360:
{
    r7 = MemoryInline::FlatRead16((r3 + 12));
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r5));
}

loc_80215374:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021539C;
    }
}

loc_80215378:
{
    r0 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_80215380:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80215394;
    }
}

loc_80215384:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r6 = (r6_rot_1 & 1);
}

loc_80215394:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r7 = r5;
}

loc_8021539C:
{
    r4 = (r7 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 16776960);
    r0 = (r0 - r4);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r5));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
}

loc_802153B0:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802152D4 func_802152D4 preserves=true fpr_mask=0x00000000
