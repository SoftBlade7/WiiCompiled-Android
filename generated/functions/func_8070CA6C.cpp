#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070CA6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8070CA6C;

loc_8070CA6C:
{
    r3 = (r3 + -148);
    // inline leaf 0x807074D0 (17 guest instruction(s))
}

loc_inl0_0x807074D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r4 + 9892));
    r4 = 0x809C0000u;
    r0 = (r0 & -16);
    r0 = (r0 | r5);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(7));
}

loc_inl0_0x807074F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x807074FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(12));
}

loc_inl0_0x80707500:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80707504:
{
    r0 = (r0 & -16);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    goto loc_inl0_cont_807074D0;
}

loc_inl0_return:
{
}

loc_inl0_cont_807074D0:
{
    // end of inlined leaf 0x807074D0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8070CA6C func_8070CA6C preserves=true fpr_mask=0x00000000
