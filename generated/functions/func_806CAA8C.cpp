#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CAA8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_806CAA8C;

loc_806CAA8C:
{
    r10 = 0x808C0000u;
    r9 = 0x809C0000u;
    r8 = 0x809C0000u;
    r7 = 0x808C0000u;
    r6 = 0x808C0000u;
    r5 = 0x809C0000u;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRamFloat32((r10 + 30640), f1.d);
    f1.d = f8.d;
    MemoryInline::FlatWriteRamFloat32((r9 + 8892), f2.d);
    MemoryInline::FlatWriteRamFloat32((r8 + 8896), f3.d);
    MemoryInline::FlatWriteRamFloat32((r7 + 30648), f4.d);
    MemoryInline::FlatWriteRamFloat32((r6 + 30676), f5.d);
    MemoryInline::FlatWriteRamFloat32((r5 + 8900), f6.d);
    MemoryInline::FlatWriteRamFloat32((r4 + 8904), f7.d);
    r3 = MemoryInline::FlatRead32((r3 + 228));
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x806F471Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000B gpr_write=0xC00007FB gpr_return=0x00000018 fpr_read=0x800001FE fpr_write=0x80000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806CAA8C func_806CAA8C preserves=true fpr_mask=0x00000000
