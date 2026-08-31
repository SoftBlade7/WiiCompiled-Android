#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059AE3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8059AE3C;

loc_8059AE3C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 8088);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    // inline leaf 0x8059069C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8059069C
    r4 = MemoryInline::FlatRead32((r30 + 152));
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 556));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8059AE74:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8059AE7C;
    }
}

loc_8059AE78:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
}

loc_8059AE7C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 156));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f2.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8059AE90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8059AEA0;
    }
}

loc_8059AE94:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
    goto loc_8059AEB4;
}

loc_8059AEA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8059AEA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059AEB4;
    }
}

loc_8059AEAC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
}

loc_8059AEB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000A gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059AE3C func_8059AE3C preserves=true fpr_mask=0x00000000
