#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001C47C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001C47C;

loc_8001C47C:
{
    r4 = MemoryInline::FlatRead32((r13 + -27552));
}

loc_8001C484:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r4))) {
        goto loc_8001C4A8;
    }
}

loc_8001C488:
{
    r0 = (r4 + 16384);
}

loc_8001C490:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8001C4A8;
    }
}

loc_8001C494:
{
    r4 = 0x802A0000u;
    r4 = (r4 + 25912);
    r0 = MemoryInline::FlatRead32((r4 + 568));
    r0 = (r0 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001C4A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8001C4A8:
{
    r0 = 50331648;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8001C4B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001C4C0;
    }
}

loc_8001C4B4:
{
    r0 = (r3 & 1073741823);
    r3 = (r0 | -2147483648);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8001C4C0:
{
    r0 = 268435456;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8001C4C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_8001C4CC:
{
    r0 = 469762048;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8001C4D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8001C4D8:
{
    r0 = (r3 & 1073741823);
    r3 = (r0 | -1879048192);
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

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8001C47C func_8001C47C preserves=true fpr_mask=0x00000000
