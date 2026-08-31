#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80529C4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80529C4C;

loc_80529C4C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 172));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80529C68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80529C8C;
    }
}

loc_80529C6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 168));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80529C74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80529C8C;
    }
}

loc_80529C78:
{
    // inline leaf 0x80551E14 (4 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = (r3 + -5376);
    r3 = MemoryInline::FlatRead8((r3 + 164));
    // end of inlined leaf 0x80551E14
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_80529C80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80529C8C;
    }
}

loc_80529C84:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 172), r0);
}

loc_80529C8C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000B gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80529C4C func_80529C4C preserves=true fpr_mask=0x00000000
