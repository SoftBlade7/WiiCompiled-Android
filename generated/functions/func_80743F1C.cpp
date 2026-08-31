#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80743F1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80743F4C_loc_0 = 0;
    uint32_t addr_lfsx_80743F50_loc_0 = 0;
    uint32_t addr_lfsx_80743F54_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_80743F1C;

loc_80743F1C:
{
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r5 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 11072));
    r0 = (r4 + 1);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 28));
    r6 = 0x808D0000u;
    r7 = (r4 + -1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r6 = (r6 + -19176);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80743F4C:
{
    addr_lfsx_80743F4C_loc_0 = (r6 + r5);
    f4.d = MemoryInline::FlatReadFloat32(addr_lfsx_80743F4C_loc_0);
    addr_lfsx_80743F50_loc_0 = (r6 + r4);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80743F50_loc_0);
    addr_lfsx_80743F54_loc_0 = (r6 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80743F54_loc_0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80743F90;
    }
}

loc_80743F5C:
{
    r4 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 11128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    r3 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + -19196));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

loc_80743F90:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + -19196));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000004 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80743F1C func_80743F1C preserves=true fpr_mask=0x00000000
