#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806ED34C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_806ED34C;

loc_806ED34C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r6 = 1127219200;
    r7 = 0x808A0000u;
    r0 = MemoryInline::FlatRead16((r3 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = MemoryInline::FlatRead32((r3 + 8));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_0 & -16);
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r8 + r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r5 = MemoryInline::FlatRead16((r5 + 12));
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    f2.d = MemoryInline::FlatReadFloat64((r7 + 2824));
    r5 = (r8 + r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 2800));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_806ED3A0:
{
    r0 = MemoryInline::FlatRead16((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED3C0;
    }
}

loc_806ED3B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
}

loc_806ED3C0:
{
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 2800));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806ED3D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED3DC;
    }
}

loc_806ED3D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
}

loc_806ED3DC:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000002A gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x00000005 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806ED34C func_806ED34C preserves=true fpr_mask=0x00000000
