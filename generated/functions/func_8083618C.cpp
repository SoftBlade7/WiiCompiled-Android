#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083618C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;

    goto loc_8083618C;

loc_8083618C:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 84));
    f4.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f3.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f6.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 92));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f5.d = PpcFmulsInline(f5.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f2.d, f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_808361DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808361E8;
    }
}

loc_808361E0:
{
    r3 = (r3 + 84);
    ctx->gpr[3] = r3;
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

loc_808361E8:
{
    r3 = (r3 + 96);
    ctx->gpr[3] = r3;
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

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8083618C func_8083618C preserves=true fpr_mask=0x00000000
