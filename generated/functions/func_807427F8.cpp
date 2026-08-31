#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807427F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807427F8;

loc_807427F8:
{
    r5 = MemoryInline::FlatRead32((r3 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80742800:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80742804:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10524));
    r4 = (r3 + 8);
    MemoryInline::FlatWriteFloat32((r5 + 36), f0.d);
    r6 = 1;
    goto loc_80742844;
}

loc_80742820:
{
    r5 = MemoryInline::FlatRead32((r4 + 236));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80742830:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80742838;
    }
}

loc_80742834:
{
    f2.d = f0.d;
}

loc_80742838:
{
    MemoryInline::FlatWriteFloat32((r5 + 36), f2.d);
    r4 = (r4 + 8);
    r6 = (r6 + 1);
}

loc_80742844:
{
    r0 = MemoryInline::FlatRead32((r3 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8074284C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80742820;
    }
}

loc_80742850:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807427F8 func_807427F8 preserves=true fpr_mask=0x00000000
