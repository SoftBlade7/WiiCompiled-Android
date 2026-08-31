#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FAFFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_807FAFFC;

loc_807FAFFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r3 = (r4 ^ -2147483648);
    r4 = 0x808B0000u;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r4 = (r4 + -21672);
    f1.d = MemoryInline::FlatReadFloat64((r4 + 64));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807FB04C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FB054;
    }
}

loc_807FB050:
{
    goto loc_807FB058;
}

loc_807FB054:
{
    f1.d = f0.d;
}

loc_807FB058:
{
    r1 = (r1 + 16);
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

// RECOMP_GUEST_ABI gpr_read=0x00000012 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FAFFC func_807FAFFC preserves=true fpr_mask=0x00000000
