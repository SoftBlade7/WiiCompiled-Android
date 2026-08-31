#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002ED00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8002ED00;

loc_8002ED00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31032));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002ED20:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002ED38;
    }
}

loc_8002ED2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31028));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002ED34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002ED40;
    }
}

loc_8002ED38:
{
    r3 = 3;
    goto loc_8002EE14;
}

loc_8002ED40:
{
    r0 = (r4 & 1);
}

loc_8002ED44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002ED5C;
    }
}

loc_8002ED48:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002ED50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002ED5C;
    }
}

loc_8002ED54:
{
    r3 = 3;
    goto loc_8002EE14;
}

loc_8002ED5C:
{
    r0 = (r4 & 2);
}

loc_8002ED60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002ED7C;
    }
}

loc_8002ED64:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002ED70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002ED7C;
    }
}

loc_8002ED74:
{
    r3 = 3;
    goto loc_8002EE14;
}

loc_8002ED7C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31032));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002ED88:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002ED98;
    }
}

loc_8002ED8C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31028));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8002ED94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002EDA0;
    }
}

loc_8002ED98:
{
    r3 = 3;
    goto loc_8002EE14;
}

loc_8002EDA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002EDA8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002EDB4;
    }
}

loc_8002EDAC:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8002EDB0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002EDBC;
    }
}

loc_8002EDB4:
{
    r3 = 3;
    goto loc_8002EE14;
}

loc_8002EDBC:
{
    r3 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f2.d));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f0.d), f2.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f0.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f1.d);
}

loc_8002EDD4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002EDE0;
    }
}

loc_8002EDD8:
{
    r3 = 3;
    goto loc_8002EE14;
}

loc_8002EDE0:
{
    SetCRFloatResident(cr, 0, f1.d, PPC_PsToScalarInline(f0.d));
}

loc_8002EDE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002EDF0;
    }
}

loc_8002EDE8:
{
    r3 = 1;
    goto loc_8002EE14;
}

loc_8002EDF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8002EDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002EE10;
    }
}

loc_8002EDF8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31024));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002EE04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002EE10;
    }
}

loc_8002EE08:
{
    r3 = 1;
    goto loc_8002EE14;
}

loc_8002EE10:
{
    r3 = 2;
}

loc_8002EE14:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000002B gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8002ED00 func_8002ED00 preserves=true fpr_mask=0x00000000
