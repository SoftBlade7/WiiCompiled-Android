#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80208F04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80208F04;

loc_80208F04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80208F08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80208F5C;
    }
}

loc_80208F0C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_80208F14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80208F28;
    }
}

loc_80208F18:
{
    r4 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_80208F20:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80208F28;
    }
}

loc_80208F24:
{
    goto loc_80208F2C;
}

loc_80208F28:
{
    r4 = 0;
}

loc_80208F2C:
{
    r0 = (r0 * 320);
    r5 = 0;
    r0 = (r4 + r0);
    goto loc_80208F54;
}

loc_80208F3C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_80208F40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80208F4C;
    }
}

loc_80208F44:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80208F4C:
{
    r4 = (r4 + 320);
    r5 = (r5 + 1);
}

loc_80208F54:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80208F58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80208F3C;
    }
}

loc_80208F5C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80208F04 func_80208F04 preserves=true fpr_mask=0x00000000
