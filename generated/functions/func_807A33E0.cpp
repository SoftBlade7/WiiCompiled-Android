#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A33E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A33E0;

loc_807A33E0:
{
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r5 + 14525));
}

loc_807A33EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A3400;
    }
}

loc_807A33F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 32768);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_807A3400:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A3404:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A346C;
    }
}

loc_807A3408:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = (r0 & 32768);
}

loc_807A3418:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A3424;
    }
}

loc_807A341C:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
    goto loc_807A3428;
}

loc_807A3424:
{
    r0 = 12;
}

loc_807A3428:
{
    r0 = (r0 * 240);
    r3 = (r5 + r0);
    r6 = MemoryInline::FlatRead32((r3 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(2));
}

loc_807A3438:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A3444;
    }
}

loc_807A343C:
{
    r0 = 0;
    goto loc_807A346C;
}

loc_807A3444:
{
    r0 = (r4 * 240);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807A3454:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A3460;
    }
}

loc_807A3458:
{
    r0 = 0;
    goto loc_807A346C;
}

loc_807A3460:
{
    r0 = (r0 - r6);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
}

loc_807A346C:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A33E0 func_807A33E0 preserves=true fpr_mask=0x00000000
