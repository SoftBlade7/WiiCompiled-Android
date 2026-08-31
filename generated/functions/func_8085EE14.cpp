#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085EE14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085EE14;

loc_8085EE14:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8085EE34:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(114))) {
        goto loc_8085EE58;
    }
}

loc_8085EE38:
{
}

loc_8085EE3C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(110))) {
        goto loc_8085EE4C;
    }
}

loc_8085EE40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(108));
}

loc_8085EE44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085EE84;
    }
}

loc_8085EE48:
{
    goto loc_8085EE8C;
}

loc_8085EE4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(112));
}

loc_8085EE50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085EE8C;
    }
}

loc_8085EE54:
{
    goto loc_8085EE7C;
}

loc_8085EE58:
{
}

loc_8085EE5C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(118))) {
        goto loc_8085EE6C;
    }
}

loc_8085EE60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(116));
}

loc_8085EE64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085EE8C;
    }
}

loc_8085EE68:
{
    goto loc_8085EE74;
}

loc_8085EE6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(120));
}

loc_8085EE70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085EE8C;
    }
}

loc_8085EE74:
{
    r3 = 68;
    goto loc_8085EEA0;
}

loc_8085EE7C:
{
    r3 = 72;
    goto loc_8085EEA0;
}

loc_8085EE84:
{
    r3 = 69;
    goto loc_8085EEA0;
}

loc_8085EE8C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8085BC10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8085EE94:
{
    r3 = 35;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085EEA0;
    }
}

loc_8085EE9C:
{
    r3 = 36;
}

loc_8085EEA0:
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

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8085EE14 func_8085EE14 preserves=true fpr_mask=0x00000000
