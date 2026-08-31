#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005AF90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8005AF90;

loc_8005AF90:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = r4;
    r9 = MemoryInline::FlatRead32(r4);
    r10 = 15;
    r8 = MemoryInline::FlatRead32(r5);
    r7 = r5;
    goto loc_8005B01C;
}

loc_8005AFB0:
{
    r0 = (r8 & 1);
}

loc_8005AFB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005B008;
    }
}

loc_8005AFB8:
{
    r0 = (r9 & 1);
}

loc_8005AFBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005B008;
    }
}

loc_8005AFC0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 12));
    MemoryInline::FlatWriteFloat32((r7 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 16));
    MemoryInline::FlatWriteFloat32((r7 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 20));
    MemoryInline::FlatWriteFloat32((r7 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 24));
    MemoryInline::FlatWriteFloat32((r7 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 28));
    MemoryInline::FlatWriteFloat32((r7 + 24), f0.d);
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32(r5);
    r0 = (r0 & r10);
    r3 = (r3 & ~r10);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_8005B008:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r8 = (r8_rot_2 & 268435455);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r9 = (r9_rot_2 & 268435455);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r10 = (r10_rot_2 & -16);
    r6 = (r6 + 20);
    r7 = (r7 + 20);
}

loc_8005B01C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8005B020:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8005B024:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_8005B028:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005AFB0;
    }
}

loc_8005B02C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007E9 gpr_return=0x00000008 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005AF90 func_8005AF90 preserves=true fpr_mask=0x00000000
