#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80231E20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80231E20;

loc_80231E20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = r4;
    r4 = r5;
    // inline leaf 0x801DE548 (11 guest instruction(s))
}

loc_inl0_0x801DE548:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8((r3 + 200));
    r0 = (r0 & 256);
}

loc_inl0_0x801DE554:
{
    MemoryInline::FlatWrite32(r4, r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x801DE56C;
    }
}

loc_inl0_0x801DE55C:
{
}

loc_inl0_0x801DE560:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_inl0_0x801DE56C;
    }
}

loc_inl0_0x801DE564:
{
    r3 = -14;
    goto loc_inl0_cont_801DE548;
}

loc_inl0_0x801DE56C:
{
    r3 = 0;
}

loc_inl0_cont_801DE548:
{
    // end of inlined leaf 0x801DE548
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80231E44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231E54;
    }
}

loc_80231E48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-14));
}

loc_80231E4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231E68;
    }
}

loc_80231E50:
{
    goto loc_80231E7C;
}

loc_80231E54:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80231E8C;
}

loc_80231E68:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80231E8C;
}

loc_80231E7C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 8), r3);
}

loc_80231E8C:
{
    r3 = r0;
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

// RECOMP_GUEST_ABI gpr_read=0x8000003A gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80231E20 func_80231E20 preserves=true fpr_mask=0x00000000
