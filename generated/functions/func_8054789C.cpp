#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054789C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_8054789C;

loc_8054789C:
{
    r4 = (r3 + 65536);
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -27968));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 3392));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805478B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_805478B4:
{
    f1.d = f0.d;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054789C func_8054789C preserves=true fpr_mask=0x00000000
