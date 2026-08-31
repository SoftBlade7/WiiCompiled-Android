#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80869D20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];

    goto loc_80869D20;

loc_80869D20:
{
    r4 = MemoryInline::FlatRead16((r3 + 44));
    r0 = 0;
    f9.d = MemoryInline::FlatReadFloat32((r3 + 180));
    f10.d = MemoryInline::FlatReadFloat32((r3 + 244));
    r4 = (r4 | 13);
    f11.d = MemoryInline::FlatReadFloat32((r3 + 240));
    f12.d = MemoryInline::FlatReadFloat32((r3 + 236));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f10.d));
    f8.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f11.d));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 252));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f12.d));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 256));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 272));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 276));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 280));
    MemoryInline::FlatWriteFloat32((r3 + 184), f9.d);
    MemoryInline::FlatWriteFloat32((r3 + 260), f8.d);
    MemoryInline::FlatWriteFloat32((r3 + 264), f7.d);
    MemoryInline::FlatWriteFloat32((r3 + 268), f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 284), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 288), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 292), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f9.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f9.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f9.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f12.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f11.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f10.d);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 296));
    MemoryInline::FlatWriteFloat32((r3 + 88), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 300));
    MemoryInline::FlatWriteFloat32((r3 + 92), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 96), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 312));
    MemoryInline::FlatWriteFloat32((r3 + 104), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 316));
    MemoryInline::FlatWriteFloat32((r3 + 108), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 320));
    MemoryInline::FlatWriteFloat32((r3 + 112), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 328));
    MemoryInline::FlatWriteFloat32((r3 + 120), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 332));
    MemoryInline::FlatWriteFloat32((r3 + 124), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 336));
    MemoryInline::FlatWriteFloat32((r3 + 128), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 100), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 132), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    InvokeDirectCpu<0x808217B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFE000 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80869D20 func_80869D20 preserves=true fpr_mask=0x00000000
