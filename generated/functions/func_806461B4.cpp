#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806461B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806461B4;

loc_806461B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 5623));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806461BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806461C0:
{
    // inline leaf 0x806024A4 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806024A4
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806461B4 func_806461B4 preserves=true fpr_mask=0x00000000
