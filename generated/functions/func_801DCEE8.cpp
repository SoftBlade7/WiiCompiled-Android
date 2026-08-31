#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DCEE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DCEE8;

loc_801DCEE8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r13 + -24380));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801DCEFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DCF08;
    }
}

loc_801DCF00:
{
    r3 = -9;
    goto loc_801DCF44;
}

loc_801DCF08:
{
    ctx->lr = 0x801DCF0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DC5C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DCF10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DCF18;
    }
}

loc_801DCF14:
{
    goto loc_801DCF44;
}

loc_801DCF18:
{
    // inline leaf 0x801EAA68 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x801EAA68
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DCF20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DCF28;
    }
}

loc_801DCF24:
{
    goto loc_801DCF44;
}

loc_801DCF28:
{
    ctx->lr = 0x801DCF2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E6318u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DCF30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DCF38;
    }
}

loc_801DCF34:
{
    goto loc_801DCF44;
}

loc_801DCF38:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24384), r0);
    MemoryInline::FlatWrite32((r13 + -24380), r0);
}

loc_801DCF44:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DCEE8 func_801DCEE8 preserves=true fpr_mask=0x00000000
