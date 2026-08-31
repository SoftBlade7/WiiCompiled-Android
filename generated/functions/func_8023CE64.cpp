#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023CE64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023CE64;

loc_8023CE64:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8023CE80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023CE8C;
    }
}

loc_8023CE84:
{
    r3 = r0;
    // inline leaf 0x8022A780 (11 guest instruction(s))
}

loc_inl0_0x8022A780:
{
    r4 = MemoryInline::FlatRead16((r3 + 26));
    r0 = (r4 & 8);
}

loc_inl0_0x8022A788:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8022A79C;
    }
}

loc_inl0_0x8022A78C:
{
    r0 = (r4 & 4);
}

loc_inl0_0x8022A790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8022A79C;
    }
}

loc_inl0_0x8022A794:
{
    r0 = (r4 & -17);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
}

loc_inl0_0x8022A79C:
{
    r0 = MemoryInline::FlatRead16((r3 + 26));
    r0 = (r0 & -13);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
}

loc_inl0_cont_8022A780:
{
    // end of inlined leaf 0x8022A780
}

loc_8023CE8C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023CE94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023CEA4;
    }
}

loc_8023CE98:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_8023CEA4:
{
    r0 = MemoryInline::FlatRead16((r31 + 18));
    r0 = (r0 | 1);
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023CE64 func_8023CE64 preserves=true fpr_mask=0x00000000
