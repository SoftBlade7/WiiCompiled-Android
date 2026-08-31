#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006F440(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006F440;

loc_8006F440:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8006F44C:
{
    r5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8006F47C;
    }
}

loc_8006F458:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_8006F45C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8006F47C;
    }
}

loc_8006F460:
{
    r0 = (r4 * 48);
    r3 = (r1 + 12);
    r4 = (r5 + r0);
    r4 = (r4 + 8824);
    // inline leaf 0x800774D0 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x800774D0
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_8006F48C;
}

loc_8006F47C:
{
    r3 = (r1 + 8);
    r4 = 0;
    // inline leaf 0x800774D0 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x800774D0
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8006F48C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006F440 func_8006F440 preserves=true fpr_mask=0x00000000
