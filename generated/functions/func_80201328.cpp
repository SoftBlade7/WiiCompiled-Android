#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80201328(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80201328;

loc_80201328:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0;
}

loc_80201344:
{
    r0 = (r30 & 65535);
    r0 = (r0 * 652);
    r4 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 64));
    r3 = (r4 + 68);
    r0 = (r0 & -8);
    MemoryInline::FlatWrite32((r4 + 64), r0);
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
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(5));
}

loc_8020136C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80201344;
    }
}

loc_80201370:
{
    r4 = MemoryInline::FlatRead32((r31 + 3324));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 3376));
    r7 = (r4 & -2);
    r5 = MemoryInline::FlatRead32((r31 + 3428));
    r6 = (r3 & -2);
    r4 = MemoryInline::FlatRead32((r31 + 3480));
    r3 = MemoryInline::FlatRead32((r31 + 3532));
    r5 = (r5 & -2);
    r4 = (r4 & -2);
    MemoryInline::FlatWrite32((r31 + 3324), r7);
    r3 = (r3 & -2);
    MemoryInline::FlatWrite32((r31 + 3376), r6);
    MemoryInline::FlatWrite32((r31 + 3428), r5);
    MemoryInline::FlatWrite32((r31 + 3480), r4);
    MemoryInline::FlatWrite32((r31 + 3532), r3);
    MemoryInline::FlatWrite32((r31 + 5576), r0);
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80201328 func_80201328 preserves=true fpr_mask=0x00000000
