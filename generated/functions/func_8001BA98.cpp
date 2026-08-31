#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001BA98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001BA98;

loc_8001BA98:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 1072234496;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31208));
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r3 + 8699);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 & 2147483647);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8001BAC0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8001BAD0;
    }
}

loc_8001BAC4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001AED0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    goto loc_8001BB54;
}

loc_8001BAD0:
{
    r0 = 2146435072;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8001BAD8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8001BAE4;
    }
}

loc_8001BADC:
{
    f1.d = (f1.d - f1.d);
    goto loc_8001BB54;
}

loc_8001BAE4:
{
    r3 = (r1 + 16);
    ctx->lr = 0x8001BAECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001913Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001BAF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001BB08;
    }
}

loc_8001BAF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8001BAF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001BB1C;
    }
}

loc_8001BAFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8001BB00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001BB2C;
    }
}

loc_8001BB04:
{
    goto loc_8001BB44;
}

loc_8001BB08:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r3 = 1;
    f2.d = MemoryInline::FlatReadFloat64((r1 + 24));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001AED0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    goto loc_8001BB54;
}

loc_8001BB1C:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 24));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80019708u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    goto loc_8001BB54;
}

loc_8001BB2C:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r3 = 1;
    f2.d = MemoryInline::FlatReadFloat64((r1 + 24));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001AED0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = (-(f1.d));
    goto loc_8001BB54;
}

loc_8001BB44:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 24));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80019708u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = (-(f1.d));
}

loc_8001BB54:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001BA98 func_8001BA98 preserves=true fpr_mask=0x00000000
