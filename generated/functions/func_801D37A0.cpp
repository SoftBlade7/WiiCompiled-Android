#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D37A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801D37A0;

loc_801D37A0:
{
    // inline leaf 0x801D3360 (18 guest instruction(s))
}

loc_inl0_0x801D3360:
{
    r5 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_inl0_0x801D3368:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x801D33A0;
    }
}

loc_inl0_0x801D336C:
{
    r4 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_inl0_0x801D3374:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x801D3398;
    }
}

loc_inl0_0x801D3378:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_inl0_0x801D33A0;
}

loc_inl0_0x801D3398:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
}

loc_inl0_0x801D33A0:
{
    r3 = r5;
}

loc_inl0_cont_801D3360:
{
    // end of inlined leaf 0x801D3360
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D37A0 func_801D37A0 preserves=true fpr_mask=0x00000000
