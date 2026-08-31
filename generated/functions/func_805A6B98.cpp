#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A6B98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_805A6B98;

loc_805A6B98:
{
    r4 = 0x80890000u;
    r4 = (r4 + 8944);
    f3.d = MemoryInline::FlatReadFloat32(r4);
    r5 = MemoryInline::FlatRead32((r3 + 824));
    f2.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWrite32((r5 + 20), r4);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805A6BBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A6BC4;
    }
}

loc_805A6BC0:
{
    MemoryInline::FlatWriteFloat32((r5 + 8), f3.d);
}

loc_805A6BC4:
{
    r3 = 0x80890000u;
    r0 = 1;
    r3 = (r3 + 8944);
    r3 = (r3 + 12);
    f2.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWrite32((r5 + 48), r3);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r5 + 36), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805A6BF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A6BF8;
    }
}

loc_805A6BF4:
{
    MemoryInline::FlatWriteFloat32((r5 + 36), f2.d);
}

loc_805A6BF8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r5 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000028 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A6B98 func_805A6B98 preserves=true fpr_mask=0x00000000
