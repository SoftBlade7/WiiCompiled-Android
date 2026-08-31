#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80549810(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_80549810;

loc_80549810:
{
    r5 = 0x80890000u;
    r4 = (r3 + 65536);
    r5 = (r5 + 3360);
    f3.d = MemoryInline::FlatReadFloat32((r4 + -27968));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 32));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80549828:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80549830;
    }
}

loc_8054982C:
{
    goto loc_80549834;
}

loc_80549830:
{
    f3.d = f0.d;
}

loc_80549834:
{
    r3 = (r3 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 32));
    f4.d = MemoryInline::FlatReadFloat32((r3 + -27964));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80549844:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8054984C;
    }
}

loc_80549848:
{
    goto loc_80549850;
}

loc_8054984C:
{
    f4.d = f0.d;
}

loc_80549850:
{
    f1.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80549858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8054985C:
{
    f2.d = MemoryInline::FlatReadFloat32((r5 + 36));
    f0.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8054986C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80549870:
{
    f1.d = f2.d;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000028 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80549810 func_80549810 preserves=true fpr_mask=0x00000000
