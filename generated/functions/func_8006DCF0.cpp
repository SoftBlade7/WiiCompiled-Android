#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006DCF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006DCF0;

loc_8006DCF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8006DCF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8006DD00;
    }
}

loc_8006DCF8:
{
    r4 = 0;
    goto loc_8006DD0C;
}

loc_8006DD00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(255));
}

loc_8006DD04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8006DD0C;
    }
}

loc_8006DD08:
{
    r4 = 255;
}

loc_8006DD0C:
{
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r4));
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006DCF0 func_8006DCF0 preserves=true fpr_mask=0x00000000
