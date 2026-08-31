#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80239688(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80239688;

loc_80239688:
{
    r3 = (r3 + -72);
    // inline leaf 0x80238F14 (10 guest instruction(s))
}

loc_inl0_0x80238F14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x80238F18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80238F2C;
    }
}

loc_inl0_0x80238F1C:
{
    r0 = MemoryInline::FlatRead8((r3 + 338));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 338), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80238F14;
}

loc_inl0_0x80238F2C:
{
    r0 = MemoryInline::FlatRead8((r3 + 338));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 338), static_cast<uint8_t>(r0));
}

loc_inl0_cont_80238F14:
{
    // end of inlined leaf 0x80238F14
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80239688 func_80239688 preserves=true fpr_mask=0x00000000
