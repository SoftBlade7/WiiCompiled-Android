#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ACF80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_800ACF80;

loc_800ACF80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27968));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800ACF94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800ACF9C;
    }
}

loc_800ACF98:
{
    goto loc_800ACFB0;
}

loc_800ACF9C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27936));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800ACFA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ACFAC;
    }
}

loc_800ACFA8:
{
    goto loc_800ACFB0;
}

loc_800ACFAC:
{
    f2.d = f1.d;
}

loc_800ACFB0:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -27904));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -27912));
    f2.d = (f2.d - f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -27920));
    f2.d = (f0.d * f2.d);
    ctx->lr = 0x800ACFC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -27928));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    f0.d = (f0.d * f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80003FFF gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0xFC003FFE fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800ACF80 func_800ACF80 preserves=true fpr_mask=0x00000000
