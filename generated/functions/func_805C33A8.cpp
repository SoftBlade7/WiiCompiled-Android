#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C33A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805C33A8;

loc_805C33A8:
{
    r5 = 0x80380000u;
    r5 = MemoryInline::FlatRead32((r5 + 24576));
    r0 = MemoryInline::FlatRead32((r5 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805C33B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C33FC;
    }
}

loc_805C33BC:
{
    r5 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    r5 = MemoryInline::FlatRead32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 40));
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 44));
    r5 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    MemoryInline::FlatWriteFloat32((r5 + 12), f2.d);
    r5 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteFloat32((r5 + 16), f1.d);
    r5 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteFloat32((r5 + 20), f0.d);
    goto loc_805C3438;
}

loc_805C33FC:
{
    r5 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    r5 = MemoryInline::FlatRead32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 20));
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24));
    r5 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    MemoryInline::FlatWriteFloat32((r5 + 12), f2.d);
    r5 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteFloat32((r5 + 16), f1.d);
    r5 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteFloat32((r5 + 20), f0.d);
}

loc_805C3438:
{
    r5 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite8((r5 + 24), static_cast<uint8_t>(r0));
    r6 = MemoryInline::FlatRead16((r4 + 4));
    r5 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r6);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r0 = (r0 | r6);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r5 + 136), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteFloat32((r4 + 140), f0.d);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063D3CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000079A gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00003FE0 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805C33A8 func_805C33A8 preserves=true fpr_mask=0x00000000
