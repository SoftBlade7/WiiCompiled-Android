#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806ED110(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_806ED128_loc_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t ctr = ctx->ctr;

    goto loc_806ED110;

loc_806ED110:
{
    r5 = MemoryInline::FlatRead16((r3 + 8));
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r5 + -1);
    f3.d = MemoryInline::FlatReadFloat32(r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    addr_stfsx_806ED128_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806ED128_loc_0, f3.d);
    r5 = (r6 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f1.d);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEF9E gpr_write=0x00001061 gpr_return=0x00000000 fpr_read=0xFFFFFFF2 fpr_write=0x0000000D fpr_return=0x00000000 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x806ED110 func_806ED110 preserves=true fpr_mask=0x00000000
