#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F60C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_rot_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    goto loc_806F60C4;

loc_806F60C4:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r3 = 0x808C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 30676));
    r5 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 20));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 24));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = PpcFmulsInline(f4.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_806F6120:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r3 = cr;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F60C4 func_806F60C4 preserves=true fpr_mask=0x00000000
