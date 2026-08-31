#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806ECF88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_806ECFE4_loc_0 = 0;
    uint32_t addr_lfsx_806ED05C_loc_0 = 0;
    uint32_t addr_stfsx_806ED0B8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806ECF88;

loc_806ECF88:
{
}

loc_806ECF8C:
{
    r10 = 0;
    r6 = r5;
    r7 = 0;
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_806ED094;
    }
}

loc_806ECF9C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
}

loc_806ECFA0:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806ED044;
    }
}

loc_806ECFA8:
{
    r0 = (r10 & 65535);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r9 = (r9_rot_2 & 1048560);
    r0 = (r0 * 12);
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r10 = (r10 + 1);
    r8 = (r4 + r0);
    f3.d = MemoryInline::FlatReadFloat32(r8);
    r0 = (r10 & 65535);
    r6 = (r6 + r9);
    MemoryInline::FlatWriteFloat32(r6, f3.d);
    r0 = (r0 * 12);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 4));
    MemoryInline::FlatWriteFloat32((r6 + 4), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    r8 = (r4 + r0);
    MemoryInline::FlatWriteFloat32((r6 + 8), f0.d);
    addr_lfsx_806ECFE4_loc_0 = (r4 + r0);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_806ECFE4_loc_0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r8 + 4));
    r6 = (r0 + r9);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    MemoryInline::FlatWrite16((r6 + 12), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r6 = (r0 + r9);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r9 = (r9_rot_3 & 1048560);
    MemoryInline::FlatWrite16((r6 + 14), static_cast<uint16_t>(r7));
    r10 = (r10 + 1);
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r6 = (r6 + r9);
    MemoryInline::FlatWriteFloat32(r6, f3.d);
    MemoryInline::FlatWriteFloat32((r6 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r6 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r6 = (r0 + r9);
    MemoryInline::FlatWrite16((r6 + 12), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r6 = (r0 + r9);
    MemoryInline::FlatWrite16((r6 + 14), static_cast<uint16_t>(r7));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806ECFA8;
    }
}

loc_806ED03C:
{
    r6 = (r5 & 1);
}

loc_806ED040:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_806ED094;
    }
}

loc_806ED044:
{
    ctr = r6;
}

loc_806ED048:
{
    r0 = (r10 & 65535);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r9 = (r9_rot_6 & 1048560);
    r0 = (r0 * 12);
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r10 = (r10 + 1);
    addr_lfsx_806ED05C_loc_0 = (r4 + r0);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_806ED05C_loc_0);
    r8 = (r4 + r0);
    r6 = (r6 + r9);
    MemoryInline::FlatWriteFloat32(r6, f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 4));
    MemoryInline::FlatWriteFloat32((r6 + 4), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    MemoryInline::FlatWriteFloat32((r6 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r6 = (r0 + r9);
    MemoryInline::FlatWrite16((r6 + 12), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r6 = (r0 + r9);
    MemoryInline::FlatWrite16((r6 + 14), static_cast<uint16_t>(r7));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806ED048;
    }
}

loc_806ED094:
{
    r8 = 0x802A0000u;
    r10 = r5;
    r7 = (r8 + 16640);
    r6 = 0;
    goto loc_806ED0E8;
}

loc_806ED0A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r9_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r9 = (r9_rot_9 & 1048560);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 16640));
    r10 = (r10 + 1);
    addr_stfsx_806ED0B8_loc_0 = (r9 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806ED0B8_loc_0, f0.d);
    r4 = (r0 + r9);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r0 + r9);
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r0 + r9);
    MemoryInline::FlatWrite16((r4 + 14), static_cast<uint16_t>(r6));
}

loc_806ED0E8:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r4 = (r10 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806ED0F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806ED0A8;
    }
}

loc_806ED0F8:
{
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteFloat32((r3 + 32), f1.d);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x000017D1 gpr_return=0x00000010 fpr_read=0xFFFFFFFF fpr_write=0x0000000D fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x806ECF88 func_806ECF88 preserves=true fpr_mask=0x00000000
