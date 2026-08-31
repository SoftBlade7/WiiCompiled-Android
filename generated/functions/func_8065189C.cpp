#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065189C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r15 = ctx->gpr[15];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065189C;

loc_8065189C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8448));
    // inline leaf 0x8066048C (7 guest instruction(s))
}

loc_inl0_0x8066048C:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80660494:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x806604A0;
    }
}

loc_inl0_0x80660498:
{
    r3 = MemoryInline::FlatRead8((r3 + 63));
    goto loc_inl0_cont_8066048C;
}

loc_inl0_0x806604A0:
{
    r3 = 0;
}

loc_inl0_cont_8066048C:
{
    // end of inlined leaf 0x8066048C
    MemoryInline::FlatWrite32((r15 + 648), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80651914u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFF6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8065189C func_8065189C preserves=true fpr_mask=0x00000000
