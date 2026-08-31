#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B8914(CpuContext* MKW_RESTRICT ctx)
{
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    goto loc_806B8914;

loc_806B8914:
{
    r9 = 0x808A0000u;
    r8 = 0;
    r9 = (r9 + -3704);
    r5 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32(r9);
    r7 = 0x808C0000u;
    MemoryInline::FlatWrite32((r3 + 272), r8);
    r6 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r9 + 48));
    r4 = (r5 + 16688);
    MemoryInline::FlatWriteFloat32((r3 + 300), f0.d);
    r0 = 1;
    f3.d = MemoryInline::FlatReadFloat32((r9 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8708));
    f4.d = MemoryInline::FlatReadFloat32((r6 + 8712));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 256));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 252));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 292), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 284), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 288), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 276), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 280), f4.d);
    MemoryInline::FlatWrite8((r3 + 296), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteFloat32((r3 + 304), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16688));
    MemoryInline::FlatWriteFloat32((r3 + 248), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 252), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 256), f0.d);
    MemoryInline::FlatWrite8((r3 + 308), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806B8914 func_806B8914 preserves=true fpr_mask=0x00000000
