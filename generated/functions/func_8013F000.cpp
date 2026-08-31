#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013F000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013F000;

loc_8013F000:
{
    r4 = 0x80330000u;
    r3 = 0;
    r4 = (r4 + 25208);
    r0 = MemoryInline::FlatRead16((r4 + 6236));
}

loc_8013F014:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_8013F028;
    }
}

loc_8013F018:
{
}

loc_8013F01C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_8013F024;
    }
}

loc_8013F020:
{
    goto loc_8013F028;
}

loc_8013F024:
{
    r3 = 1;
}

loc_8013F028:
{
    r0 = MemoryInline::FlatRead16((r4 + 6288));
}

loc_8013F030:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_8013F044;
    }
}

loc_8013F034:
{
}

loc_8013F038:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_8013F040;
    }
}

loc_8013F03C:
{
    goto loc_8013F044;
}

loc_8013F040:
{
    r3 = (r3 + 1);
}

loc_8013F044:
{
    r0 = MemoryInline::FlatRead16((r4 + 6340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_8013F04C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8013F050:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8013F054:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_8013F058:
{
    r3 = (r3 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013F000 func_8013F000 preserves=true fpr_mask=0x00000000
