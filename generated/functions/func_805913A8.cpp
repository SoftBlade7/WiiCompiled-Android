#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805913A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_805913A8;

loc_805913A8:
{
    r5 = MemoryInline::FlatRead32(r3);
    r3 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 7288));
    r4 = MemoryInline::FlatRead32((r5 + 40));
    r3 = MemoryInline::FlatRead32((r5 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 176));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    f1.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 160));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 192));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000003A gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805913A8 func_805913A8 preserves=true fpr_mask=0x00000000
