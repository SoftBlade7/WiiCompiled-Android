#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078D9E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r9_rot_0 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8078D9E8;

loc_8078D9E8:
{
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r9 = (r9_rot_0 & -4);
    r8 = (r3 + r9);
    r0 = MemoryInline::FlatRead32((r8 + 256));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r7));
}

loc_8078D9F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8078DA88;
    }
}

loc_8078D9FC:
{
    r7 = (r5 * 12);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r4 = (r3 + r7);
    MemoryInline::FlatWriteFloat32((r4 + 64), f2.d);
    r0 = (r4 + 64);
    MemoryInline::FlatWriteFloat32((r4 + 68), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f0.d);
    r5 = MemoryInline::FlatRead32((r8 + 16));
    MemoryInline::FlatWrite32((r8 + 208), r0);
    r0 = MemoryInline::FlatRead32((r5 + 700));
}

loc_8078DA30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8078DA3C;
    }
}

loc_8078DA34:
{
}

loc_8078DA38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8078DA50;
    }
}

loc_8078DA3C:
{
    r4 = 0x808A0000u;
    r0 = 2;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 19280));
    MemoryInline::FlatWriteFloat32((r5 + 696), f0.d);
    MemoryInline::FlatWrite32((r5 + 700), r0);
}

loc_8078DA50:
{
    r0 = MemoryInline::FlatRead32((r5 + 700));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8078DA58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078DA78;
    }
}

loc_8078DA5C:
{
    r4 = (r3 + r7);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 64));
    MemoryInline::FlatWriteFloat32((r5 + 680), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 68));
    MemoryInline::FlatWriteFloat32((r5 + 684), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 72));
    MemoryInline::FlatWriteFloat32((r5 + 688), f0.d);
}

loc_8078DA78:
{
    r4 = (r3 + r9);
    r3 = 1;
    MemoryInline::FlatWrite32((r4 + 304), r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_8078DA88:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003B9 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8078D9E8 func_8078D9E8 preserves=true fpr_mask=0x00000000
