#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C6A8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_806C6A8C;

loc_806C6A8C:
{
    r5 = 0x808A0000u;
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r5 = (r5 + -1656);
    r4 = 0x808C0000u;
    f3.d = MemoryInline::FlatReadFloat32(r5);
    r0 = (r0 | 8);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 176), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 92));
    MemoryInline::FlatWriteFloat32((r3 + 180), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 188), f2.d);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f1.d);
    MemoryInline::FlatWriteRamFloat32((r4 + 16000), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806C6A8C func_806C6A8C preserves=true fpr_mask=0x00000000
