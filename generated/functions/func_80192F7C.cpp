#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80192F7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80192F7C;

loc_80192F7C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r13 + -25624));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80192F90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80192FB8;
    }
}

loc_80192F94:
{
    // inline leaf 0x801AB648 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25304));
    // end of inlined leaf 0x801AB648
    MemoryInline::FlatWrite32((r13 + -25608), r3);
    // inline leaf 0x801AB650 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -28952));
    // end of inlined leaf 0x801AB650
    r4 = MemoryInline::FlatRead32((r13 + -25608));
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25612), r3);
    MemoryInline::FlatWrite32((r13 + -25616), r4);
    MemoryInline::FlatWrite32((r13 + -25620), r3);
    MemoryInline::FlatWrite8((r13 + -25624), static_cast<uint8_t>(r0));
}

loc_80192FB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80192F7C func_80192F7C preserves=true fpr_mask=0x00000000
