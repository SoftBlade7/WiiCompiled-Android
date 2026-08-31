#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80566DBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r7_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_80566DBC;

loc_80566DBC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r6 = 1127219200;
    r4 = 0x80380000u;
    r7 = 0x802A0000u;
    r4 = MemoryInline::FlatRead32((r4 + 28432));
    r5 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r7 = (r7 + 16104);
    r8 = (r4 * 12);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 5424));
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 5416));
    r0 = (r0 | 1);
    r5 = (r7 + r8);
    r7_addr_0 = (r7 + r8);
    r7 = MemoryInline::FlatRead16(r7_addr_0);
    r5 = MemoryInline::FlatRead16((r5 + 2));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 64), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 68), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWrite16((r3 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80566DBC func_80566DBC preserves=true fpr_mask=0x00000000
