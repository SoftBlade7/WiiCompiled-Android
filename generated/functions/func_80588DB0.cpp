#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80588DB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80588E08_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80588DB0;

loc_80588DB0:
{
    r0 = (r4 & 255);
    r6 = 1;
    r8 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r6 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r8 & 65535);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & -2);
    r0 = (r6 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r9 = 0;
    r6 = (r3 + r7);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80588DE4;
    }
}

loc_80588DD8:
{
    r0 = MemoryInline::FlatRead16((r6 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80588DE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80588E10;
    }
}

loc_80588DE4:
{
    MemoryInline::FlatWrite16((r6 + 4), static_cast<uint16_t>(r5));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = 0x808B0000u;
    r6 = (r8 & 65535);
    r4 = MemoryInline::FlatRead16((r3 + 16));
    r5 = (r5 + 23696);
    r9 = 1;
    r4 = (r4 | r6);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r4));
    addr_lfsx_80588E08_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80588E08_loc_0);
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
}

loc_80588E10:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000379 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80588DB0 func_80588DB0 preserves=true fpr_mask=0x00000000
