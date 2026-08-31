#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805230B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_805230B0;

loc_805230B0:
{
    r5 = 0x80890000u;
    r4 = 0x809C0000u;
    r5 = (r5 + -848);
    r3 = 0x809C0000u;
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 84));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    MemoryInline::FlatWriteRamFloat32((r4 + -10496), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + -10492), f0.d);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805230B0 func_805230B0 preserves=true fpr_mask=0x00000000
