#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80836628(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsux_80836680_loc_0 = 0;
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80836628;

loc_80836628:
{
    r7 = MemoryInline::FlatRead32((r3 + 40));
    r8 = 0;
    f3.d = MemoryInline::FlatReadFloat32(r4);
    r9 = 1;
    f2.d = MemoryInline::FlatReadFloat32(r7);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 8));
    r6 = MemoryInline::FlatRead8((r3 + 33));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_808366B4;
}

loc_80836668:
{
    r0 = (r9 & 255);
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r0 * 12);
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    addr_lfsux_80836680_loc_0 = (r5 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsux_80836680_loc_0);
    r5 = addr_lfsux_80836680_loc_0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_808366A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808366B0;
    }
}

loc_808366A8:
{
    f5.d = f0.d;
    r8 = r9;
}

loc_808366B0:
{
    r9 = (r9 + 1);
}

loc_808366B4:
{
    r0 = (r9 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_808366BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80836668;
    }
}

loc_808366C0:
{
    r0 = (r8 & 255);
    r0 = (r0 * 12);
    r3 = (r7 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

// RECOMP_GUEST_ABI gpr_read=0x000003B9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000031 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80836628 func_80836628 preserves=true fpr_mask=0x00000000
