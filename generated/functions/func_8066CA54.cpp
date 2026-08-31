#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066CA54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066CA54;

loc_8066CA54:
{
    r5 = r3;
    r3 = r4;
    r4 = MemoryInline::FlatRead32((r5 + 30088));
    // inline leaf 0x80510A90 (10 guest instruction(s))
}

loc_inl0_0x80510A90:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (r5 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(17236));
}

loc_inl0_0x80510AA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80510AA8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80510A90;
}

loc_inl0_return:
{
}

loc_inl0_cont_80510A90:
{
    // end of inlined leaf 0x80510A90
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066CA54 func_8066CA54 preserves=true fpr_mask=0x00000000
