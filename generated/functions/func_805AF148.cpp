#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AF148(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;

    goto loc_805AF148;

loc_805AF148:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r6 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f6.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f5.d = PpcFmulsInline(f6.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 9552));
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_805AF1A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805AF1A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = (-(f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000040 gpr_return=0x00000000 fpr_read=0x0000000C fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805AF148 func_805AF148 preserves=true fpr_mask=0x00000000
