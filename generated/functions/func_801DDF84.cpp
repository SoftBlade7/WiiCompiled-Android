#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DDF84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DDF84;

loc_801DDF84:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r5 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDF98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDFA4;
    }
}

loc_801DDF9C:
{
    r0 = (r5 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDFA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDFAC;
    }
}

loc_801DDFA4:
{
    r3 = -7;
    goto loc_801DDFD0;
}

loc_801DDFAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 220));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDFB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDFC0;
    }
}

loc_801DDFB8:
{
    r3 = -6;
    goto loc_801DDFD0;
}

loc_801DDFC0:
{
    r5 = 74;
    r3 = (r3 + 216);
    // inline leaf 0x801DC9BC (3 guest instruction(s))
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    // end of inlined leaf 0x801DC9BC
    r3 = 0;
}

loc_801DDFD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000002B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DDF84 func_801DDF84 preserves=true fpr_mask=0x00000000
