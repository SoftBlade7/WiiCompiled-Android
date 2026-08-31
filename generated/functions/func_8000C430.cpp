#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000C430(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000C430;

loc_8000C430:
{
    // inline leaf 0x80021398 (19 guest instruction(s))
}

loc_inl0_0x80021398:
{
    r4 = MemoryInline::FlatRead32((r13 + -27480));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(64));
}

loc_inl0_0x800213A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x800213AC;
    }
}

loc_inl0_0x800213A4:
{
    r3 = -1;
    goto loc_inl0_cont_80021398;
}

loc_inl0_0x800213AC:
{
    r0 = (r4 * 12);
    r6 = (r4 + 1);
    r5 = 0x802A0000u;
    r4 = MemoryInline::FlatRead32((r13 + -27476));
    MemoryInline::FlatWrite32((r13 + -27480), r6);
    r5 = (r5 + 27000);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r5 + 8), r0);
}

loc_inl0_cont_80021398:
{
    // end of inlined leaf 0x80021398
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002069 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000C430 func_8000C430 preserves=true fpr_mask=0x00000000
