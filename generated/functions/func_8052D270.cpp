#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052D270(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052D270;

loc_8052D270:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 + r4);
}

loc_8052D27C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8052D284;
    }
}

loc_8052D280:
{
    r0 = 1;
}

loc_8052D284:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9999));
}

loc_8052D288:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052D290;
    }
}

loc_8052D28C:
{
    r0 = 9999;
}

loc_8052D290:
{
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052D270 func_8052D270 preserves=true fpr_mask=0x00000000
