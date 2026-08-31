#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061A504(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8061A504;

loc_8061A504:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r3 = MemoryInline::FlatRead32(r3);
    r7 = MemoryInline::FlatRead32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 400));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 400));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8061A51C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8061A528;
    }
}

loc_8061A520:
{
    r3 = -1;
    goto loc_8061A59C;
}

loc_8061A528:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A534;
    }
}

loc_8061A52C:
{
    r3 = 1;
    goto loc_8061A59C;
}

loc_8061A534:
{
    r6 = MemoryInline::FlatRead32((r3 + 388));
    r0 = 1127219200;
    r5 = 0x80890000u;
    r3 = 0x80890000u;
    r4 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = MemoryInline::FlatReadFloat64((r5 + 31496));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 31488));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8061A564:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A570;
    }
}

loc_8061A568:
{
    r3 = 1;
    goto loc_8061A59C;
}

loc_8061A570:
{
    r3 = MemoryInline::FlatRead32((r7 + 388));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8061A58C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A598;
    }
}

loc_8061A590:
{
    r3 = -1;
    goto loc_8061A59C;
}

loc_8061A598:
{
    r3 = (r3 - r6);
}

loc_8061A59C:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8061A504 func_8061A504 preserves=true fpr_mask=0x00000000
