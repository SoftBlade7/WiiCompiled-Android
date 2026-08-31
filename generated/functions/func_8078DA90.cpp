#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078DA90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r8_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8078DA90;

loc_8078DA90:
{
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & -4);
    r5 = (r3 + r8);
    r0 = MemoryInline::FlatRead32((r5 + 256));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r7));
}

loc_8078DAA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8078DB08;
    }
}

loc_8078DAA4:
{
    r7 = MemoryInline::FlatRead32((r5 + 16));
    MemoryInline::FlatWrite32((r5 + 208), r4);
    r0 = MemoryInline::FlatRead32((r7 + 700));
}

loc_8078DAB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8078DAC0;
    }
}

loc_8078DAB8:
{
}

loc_8078DABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8078DAD4;
    }
}

loc_8078DAC0:
{
    r5 = 0x808A0000u;
    r0 = 2;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 19280));
    MemoryInline::FlatWriteFloat32((r7 + 696), f0.d);
    MemoryInline::FlatWrite32((r7 + 700), r0);
}

loc_8078DAD4:
{
    r0 = MemoryInline::FlatRead32((r7 + 700));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8078DADC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078DAF8;
    }
}

loc_8078DAE0:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r7 + 680), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r7 + 684), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r7 + 688), f0.d);
}

loc_8078DAF8:
{
    r4 = (r3 + r8);
    r3 = 1;
    MemoryInline::FlatWrite32((r4 + 304), r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_8078DB08:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001B9 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8078DA90 func_8078DA90 preserves=true fpr_mask=0x00000000
