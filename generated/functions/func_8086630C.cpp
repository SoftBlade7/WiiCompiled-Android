#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086630C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8086630C;

loc_8086630C:
{
    r6 = MemoryInline::FlatRead16((r3 + 156));
    r4 = 0x808B0000u;
    r0 = MemoryInline::FlatRead8((r3 + 1787));
    r4 = (r4 + -1192);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
}

loc_80866324:
{
    r4_addr_0 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80866338;
    }
}

loc_8086632C:
{
    r0 = MemoryInline::FlatRead32((r3 + 284));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r4 = (r4 + 392);
}

loc_80866338:
{
    r0 = MemoryInline::FlatRead8((r3 + 1786));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80866340:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866380;
    }
}

loc_80866344:
{
    r0 = (r4 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_8086634C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866380;
    }
}

loc_80866350:
{
}

loc_80866354:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(19))) {
        goto loc_80866368;
    }
}

loc_80866358:
{
}

loc_8086635C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(14))) {
        goto loc_80866368;
    }
}

loc_80866360:
{
}

loc_80866364:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(5))) {
        goto loc_80866370;
    }
}

loc_80866368:
{
    r0 = 1;
    goto loc_80866374;
}

loc_80866370:
{
    r0 = 0;
}

loc_80866374:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80866378:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866380;
    }
}

loc_8086637C:
{
    r4 = (r4 + 1);
}

loc_80866380:
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
// RECOMP_REGISTRATION base 0x8086630C func_8086630C preserves=true fpr_mask=0x00000000
