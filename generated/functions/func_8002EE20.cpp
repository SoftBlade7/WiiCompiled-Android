#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002EE20(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8002EE20;

loc_8002EE20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r5 = 0;
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31032));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8002EE44:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002EE5C;
    }
}

loc_8002EE50:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31028));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8002EE58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002EE64;
    }
}

loc_8002EE5C:
{
    r3 = 3;
    goto loc_8002EEF8;
}

loc_8002EE64:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002EE68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002EE74;
    }
}

loc_8002EE6C:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8002EE70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002EE78;
    }
}

loc_8002EE74:
{
    r5 = 1;
}

loc_8002EE78:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31032));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8002EE84:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002EE94;
    }
}

loc_8002EE88:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31028));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8002EE90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002EE9C;
    }
}

loc_8002EE94:
{
    r3 = 3;
    goto loc_8002EEF8;
}

loc_8002EE9C:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002EEA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002EEAC;
    }
}

loc_8002EEA4:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8002EEA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002EEB0;
    }
}

loc_8002EEAC:
{
    r5 = 1;
}

loc_8002EEB0:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31032));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8002EEBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002EECC;
    }
}

loc_8002EEC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31028));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8002EEC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002EED4;
    }
}

loc_8002EECC:
{
    r3 = 3;
    goto loc_8002EEF8;
}

loc_8002EED4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8002EED8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002EEEC;
    }
}

loc_8002EEDC:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002EEE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002EEEC;
    }
}

loc_8002EEE4:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8002EEE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002EEF4;
    }
}

loc_8002EEEC:
{
    r3 = 1;
    goto loc_8002EEF8;
}

loc_8002EEF4:
{
    r3 = 2;
}

loc_8002EEF8:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8002EE20 func_8002EE20 preserves=true fpr_mask=0x00000000
