#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002EF00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_8002EF00;

loc_8002EF00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = MemoryInline::FlatRead32(r3);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -31032));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_8002EF20:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002EF38;
    }
}

loc_8002EF2C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31028));
    SetCRFloatResident(cr, 0, f4.d, f2.d);
}

loc_8002EF34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002EF40;
    }
}

loc_8002EF38:
{
    r3 = 3;
    goto loc_8002EFC0;
}

loc_8002EF40:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_8002EF48:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002EF54;
    }
}

loc_8002EF4C:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8002EF50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002EF5C;
    }
}

loc_8002EF54:
{
    r3 = 3;
    goto loc_8002EFC0;
}

loc_8002EF5C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8002EF64:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002EF70;
    }
}

loc_8002EF68:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002EF6C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002EF78;
    }
}

loc_8002EF70:
{
    r3 = 3;
    goto loc_8002EFC0;
}

loc_8002EF78:
{
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002EF88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002EF94;
    }
}

loc_8002EF8C:
{
    r3 = 3;
    goto loc_8002EFC0;
}

loc_8002EF94:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8002EF98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002EFA4;
    }
}

loc_8002EF9C:
{
    r3 = 1;
    goto loc_8002EFC0;
}

loc_8002EFA4:
{
    SetCRFloatResident(cr, 0, f3.d, f4.d);
}

loc_8002EFA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002EFB4;
    }
}

loc_8002EFAC:
{
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_8002EFB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002EFBC;
    }
}

loc_8002EFB4:
{
    r3 = 1;
    goto loc_8002EFC0;
}

loc_8002EFBC:
{
    r3 = 2;
}

loc_8002EFC0:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8002EF00 func_8002EF00 preserves=true fpr_mask=0x00000000
