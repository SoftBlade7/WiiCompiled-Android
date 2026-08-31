#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80113388(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80113388;

loc_80113388:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x80112034 (1 guest instruction(s))
    // end of inlined leaf 0x80112034
    r3 = MemoryInline::FlatRead32((r13 + -26744));
    r0 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801133A4:
{
    MemoryInline::FlatWrite32((r13 + -26744), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801133C4;
    }
}

loc_801133AC:
{
    // inline leaf 0x8011202C (1 guest instruction(s))
    // end of inlined leaf 0x8011202C
    r3 = 125;
    r0 = 250;
    MemoryInline::FlatWrite32((r13 + -30248), r3);
    MemoryInline::FlatWrite32((r13 + -30244), r0);
    goto loc_801133C8;
}

loc_801133C4:
{
    // inline leaf 0x80112038 (1 guest instruction(s))
    // end of inlined leaf 0x80112038
}

loc_801133C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002003 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80113388 func_80113388 preserves=true fpr_mask=0x00000000
