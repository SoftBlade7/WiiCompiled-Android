#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80866404(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80866404;

loc_80866404:
{
    r6 = MemoryInline::FlatRead16((r3 + 156));
}

loc_8086640C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(19))) {
        goto loc_80866420;
    }
}

loc_80866410:
{
}

loc_80866414:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(14))) {
        goto loc_80866420;
    }
}

loc_80866418:
{
}

loc_8086641C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(5))) {
        goto loc_80866428;
    }
}

loc_80866420:
{
    r0 = 1;
    goto loc_8086642C;
}

loc_80866428:
{
    r0 = 0;
}

loc_8086642C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80866430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086643C;
    }
}

loc_80866434:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8086643C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1787));
    r4 = 0x808B0000u;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & 262140);
    r4 = (r4 + -1192);
}

loc_80866450:
{
    r4_addr_0 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80866464;
    }
}

loc_80866458:
{
    r0 = MemoryInline::FlatRead32((r3 + 284));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r4 = (r4 + 392);
}

loc_80866464:
{
    r0 = MemoryInline::FlatRead8((r3 + 1786));
}

loc_8086646C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808664AC;
    }
}

loc_80866470:
{
    r0 = (r4 + 65536);
}

loc_80866478:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_808664AC;
    }
}

loc_8086647C:
{
}

loc_80866480:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(19))) {
        goto loc_80866494;
    }
}

loc_80866484:
{
}

loc_80866488:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(14))) {
        goto loc_80866494;
    }
}

loc_8086648C:
{
}

loc_80866490:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(5))) {
        goto loc_8086649C;
    }
}

loc_80866494:
{
    r0 = 1;
    goto loc_808664A0;
}

loc_8086649C:
{
    r0 = 0;
}

loc_808664A0:
{
}

loc_808664A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808664AC;
    }
}

loc_808664A8:
{
    r4 = (r4 + 1);
}

loc_808664AC:
{
    r0 = (r4 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_808664B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808664BC;
    }
}

loc_808664B8:
{
    r4 = (r4 + 2);
}

loc_808664BC:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80866404 func_80866404 preserves=true fpr_mask=0x00000000
