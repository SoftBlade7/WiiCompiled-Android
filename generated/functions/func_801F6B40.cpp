#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F6B40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F6B40;

loc_801F6B40:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
}

loc_801F6B5C:
{
    r0 = (r31 & 65535);
    r0 = (r0 * 636);
    r4 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 3584));
    r3 = (r4 + 3592);
    r0 = (r0 & -4);
    MemoryInline::FlatWrite32((r4 + 3584), r0);
    // inline leaf 0x801FD70C (8 guest instruction(s))
}

loc_inl0_0x801FD70C:
{
}

loc_inl0_0x801FD710:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x801FD71C;
    }
}

loc_inl0_0x801FD714:
{
    r3 = 10;
    goto loc_inl0_cont_801FD70C;
}

loc_inl0_0x801FD71C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r3 = 0;
}

loc_inl0_cont_801FD70C:
{
    // end of inlined leaf 0x801FD70C
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
}

loc_801F6B84:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F6B5C;
    }
}

loc_801F6B88:
{
    r5 = MemoryInline::FlatRead32((r30 + 5492));
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r30 + 5520));
    r3 = MemoryInline::FlatRead32((r30 + 5548));
    r5 = (r5 & -2);
    r4 = (r4 & -2);
    MemoryInline::FlatWrite32((r30 + 5492), r5);
    r3 = (r3 & -2);
    MemoryInline::FlatWrite32((r30 + 5520), r4);
    MemoryInline::FlatWrite32((r30 + 5548), r3);
    MemoryInline::FlatWrite32((r30 + 5580), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F6B40 func_801F6B40 preserves=true fpr_mask=0x00000000
