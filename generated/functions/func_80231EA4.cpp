#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80231EA4(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80231EA4;

loc_80231EA4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = r4;
    r4 = r5;
    // inline leaf 0x801DE420 (7 guest instruction(s))
}

loc_inl0_0x801DE420:
{
    r0 = MemoryInline::FlatRead8((r3 + 201));
    r3 = 0;
}

loc_inl0_0x801DE42C:
{
    MemoryInline::FlatWrite32(r4, r0);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801DE434:
{
    r3 = -14;
    goto loc_inl0_cont_801DE420;
}

loc_inl0_return:
{
}

loc_inl0_cont_801DE420:
{
    // end of inlined leaf 0x801DE420
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80231EC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231ED8;
    }
}

loc_80231ECC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-14));
}

loc_80231ED0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231EEC;
    }
}

loc_80231ED4:
{
    goto loc_80231F00;
}

loc_80231ED8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80231F10;
}

loc_80231EEC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80231F10;
}

loc_80231F00:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 8), r3);
}

loc_80231F10:
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
// RECOMP_REGISTRATION base 0x80231EA4 func_80231EA4 preserves=true fpr_mask=0x00000000
