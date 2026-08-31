#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807ADC08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807ADC08;

loc_807ADC08:
{
    r3 = 0x809C0000u;
    r4 = 0x808A0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14523));
    r4 = (r4 + 23288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807ADC1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807ADC28;
    }
}

loc_807ADC20:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 360));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_807ADC28:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2924));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807ADC38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807ADC54;
    }
}

loc_807ADC3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807ADC40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807ADC4C;
    }
}

loc_807ADC44:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 364));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_807ADC4C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 344));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_807ADC54:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 368));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000011 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807ADC08 func_807ADC08 preserves=true fpr_mask=0x00000000
