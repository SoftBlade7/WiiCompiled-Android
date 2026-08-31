#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079E9E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8079E9E8;

loc_8079E9E8:
{
    r7 = MemoryInline::FlatRead32((r3 + 168));
    r6 = 0x808A0000u;
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 20992));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8079EA00:
{
    f4.d = MemoryInline::FlatReadFloat32(r4);
    r0 = (r0 | 33554432);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20996));
    MemoryInline::FlatWriteFloat32((r3 + 188), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 192), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 196), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 200), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 204), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 208), f1.d);
    MemoryInline::FlatWrite32((r3 + 120), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8079EA34:
{
    r12 = MemoryInline::FlatRead32(r7);
    r0 = (r0 & 65536);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3 = r7;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x000010F9 gpr_return=0x00000018 fpr_read=0xFFFFFFE2 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8079E9E8 func_8079E9E8 preserves=true fpr_mask=0x00000000
