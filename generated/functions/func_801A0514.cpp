#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A0514(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A0514;

loc_801A0514:
{
    r0 = MemoryInline::FlatRead32((r13 + -25512));
    r3 = 0x80000000u;
    r6 = (r3 + 12692);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A0524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A0530;
    }
}

loc_801A0528:
{
    r6 = MemoryInline::FlatRead32((r13 + -29040));
    goto loc_801A0564;
}

loc_801A0530:
{
    r3 = MemoryInline::FlatRead8((r3 + 12692));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(48));
}

loc_801A053C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A055C;
    }
}

loc_801A0540:
{
}

loc_801A0544:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(57))) {
        goto loc_801A0550;
    }
}

loc_801A0548:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(65));
}

loc_801A054C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A055C;
    }
}

loc_801A0550:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_801A0558:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A0564;
    }
}

loc_801A055C:
{
    r3 = 0x80000000u;
    r6 = (r3 + 12672);
}

loc_801A0564:
{
    r4 = MemoryInline::FlatRead8(r6);
    r5 = (r13 + -25472);
    r0 = 0;
    r3 = (r13 + -25472);
    MemoryInline::FlatWrite8((r13 + -25472), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 2));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002049 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A0514 func_801A0514 preserves=true fpr_mask=0x00000000
