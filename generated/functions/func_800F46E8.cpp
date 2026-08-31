#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F46E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F46E8;

loc_800F46E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F46EC:
{
    r5 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F4760;
    }
}

loc_800F46F4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800F4700:
{
    r0 = (r4 & 224);
}

loc_800F4708:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(192))) {
        goto loc_800F4724;
    }
}

loc_800F470C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (r0 & 192);
}

loc_800F4718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(128))) {
        goto loc_800F4724;
    }
}

loc_800F471C:
{
    r3 = (r3 + 2);
    goto loc_800F475C;
}

loc_800F4724:
{
    r0 = (r4 & 240);
}

loc_800F472C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(224))) {
        goto loc_800F4758;
    }
}

loc_800F4730:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (r0 & 192);
}

loc_800F473C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(128))) {
        goto loc_800F4758;
    }
}

loc_800F4740:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 & 192);
}

loc_800F474C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(128))) {
        goto loc_800F4758;
    }
}

loc_800F4750:
{
    r3 = (r3 + 3);
    goto loc_800F475C;
}

loc_800F4758:
{
    r3 = (r3 + 1);
}

loc_800F475C:
{
    r5 = (r5 + 1);
}

loc_800F4760:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F4700;
    }
}

loc_800F476C:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F46E8 func_800F46E8 preserves=true fpr_mask=0x00000000
