#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80546160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_80546160;

loc_80546160:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 3360));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8054616C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80546174;
    }
}

loc_80546170:
{
    goto loc_80546190;
}

loc_80546174:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 3392));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80546180:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80546188;
    }
}

loc_80546184:
{
    goto loc_8054618C;
}

loc_80546188:
{
    f1.d = f0.d;
}

loc_8054618C:
{
    f0.d = f1.d;
}

loc_80546190:
{
    r3 = (r3 + 65536);
    MemoryInline::FlatWriteFloat32((r3 + -27964), f0.d);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80546160 func_80546160 preserves=true fpr_mask=0x00000000
