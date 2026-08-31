#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FF90C(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807FF90C;

loc_807FF90C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = MemoryInline::FlatRead32((r3 + 396));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_807FF918:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FF924;
    }
}

loc_807FF91C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 268));
    goto loc_807FF978;
}

loc_807FF924:
{
    r7 = MemoryInline::FlatRead32((r3 + 264));
    r0 = 1127219200;
    r6 = 0x808B0000u;
    r5 = 0x808D0000u;
    r4 = (r4 - r7);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r4 * r4);
    f4.d = MemoryInline::FlatReadFloat64((r6 + -21152));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 19256));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 272));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 268));
    r0 = (r0 * r4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807FF970:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FF978;
    }
}

loc_807FF974:
{
    f1.d = f0.d;
}

loc_807FF978:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FF90C func_807FF90C preserves=true fpr_mask=0x00000000
