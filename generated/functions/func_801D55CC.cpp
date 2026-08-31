#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D55CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801D55CC;

loc_801D55CC:
{
    r0 = MemoryInline::FlatRead8(r3);
    r4 = (r3 + 1);
    r3 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_801D5630;
}

loc_801D55E0:
{
}

loc_801D55E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(48))) {
        goto loc_801D55F0;
    }
}

loc_801D55E8:
{
}

loc_801D55EC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(57))) {
        goto loc_801D5618;
    }
}

loc_801D55F0:
{
}

loc_801D55F4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(65))) {
        goto loc_801D5600;
    }
}

loc_801D55F8:
{
}

loc_801D55FC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(90))) {
        goto loc_801D5618;
    }
}

loc_801D5600:
{
}

loc_801D5604:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(97))) {
        goto loc_801D5610;
    }
}

loc_801D5608:
{
}

loc_801D560C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(122))) {
        goto loc_801D5618;
    }
}

loc_801D5610:
{
}

loc_801D5614:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_801D5620;
    }
}

loc_801D5618:
{
    r3 = (r3 + 1);
    goto loc_801D5624;
}

loc_801D5620:
{
    r3 = (r3 + 3);
}

loc_801D5624:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801D5630:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D5634:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D55E0;
    }
}

loc_801D5638:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D55CC func_801D55CC preserves=true fpr_mask=0x00000000
