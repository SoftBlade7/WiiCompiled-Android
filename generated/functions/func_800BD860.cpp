#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BD860(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800BD860;

loc_800BD860:
{
    // inline leaf 0x800BC440 (7 guest instruction(s))
}

loc_inl0_0x800BC440:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800BC448:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x800BC454;
    }
}

loc_inl0_0x800BC44C:
{
    r3 = 0;
    goto loc_inl0_cont_800BC440;
}

loc_inl0_0x800BC454:
{
    r3 = MemoryInline::FlatRead32((r3 + 6964));
}

loc_inl0_cont_800BC440:
{
    // end of inlined leaf 0x800BC440
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800BD860 func_800BD860 preserves=true fpr_mask=0x00000000
