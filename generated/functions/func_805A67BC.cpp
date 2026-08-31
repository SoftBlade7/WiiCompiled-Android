#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A67BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A67BC;

loc_805A67BC:
{
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A67C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A683C;
    }
}

loc_805A67C8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 196));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 116));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 200));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 120));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 204));
    f9.d = MemoryInline::FlatReadFloat32((r3 + 776));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 312));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 316));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 320));
    f2.d = PpcFmulsInline(f9.d, f2.d);
    f1.d = PpcFmulsInline(f9.d, f1.d);
    f0.d = PpcFmulsInline(f9.d, f0.d);
    f8.d = MemoryInline::FlatReadFloat32((r3 + 616));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 620));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 624));
    MemoryInline::FlatWriteFloat32((r3 + 100), f8.d);
    MemoryInline::FlatWriteFloat32((r3 + 104), f7.d);
    MemoryInline::FlatWriteFloat32((r3 + 108), f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 112), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    return;
}

loc_805A683C:
{
    f6.d = MemoryInline::FlatReadFloat32((r3 + 572));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 312));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 316));
    f5.d = PpcFmulsInline(f6.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 320));
    f3.d = PpcFmulsInline(f6.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 116));
    f1.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 120));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 112), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 116), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A67BC func_805A67BC preserves=true fpr_mask=0x00000000
