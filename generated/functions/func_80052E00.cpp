#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052E00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80052E00;

loc_80052E00:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80052E08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80052E0C:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80052E10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052E54;
    }
}

loc_80052E14:
{
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_80052E18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052E54;
    }
}

loc_80052E1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29856));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80052E28:
{
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052E44;
    }
}

loc_80052E34:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_80052E60;
}

loc_80052E44:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_80052E60;
}

loc_80052E54:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -25);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80052E60:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052E68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052E88;
    }
}

loc_80052E6C:
{
    r0 = (r4 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052E70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052E88;
    }
}

loc_80052E74:
{
    r0 = (r4 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052E78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052E88;
    }
}

loc_80052E7C:
{
    r0 = (r4 | 1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_80052E94;
}

loc_80052E88:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80052E94:
{
    MemoryInline::FlatWriteFloat32((r3 + 32), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f3.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001D gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80052E00 func_80052E00 preserves=true fpr_mask=0x00000000
