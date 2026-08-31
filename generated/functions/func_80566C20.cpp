#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80566C20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6_addr_0 = 0;

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

    goto loc_80566C20;

loc_80566C20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
    r6 = 0x802A0000u;
    r4 = 0x80890000u;
    r5 = MemoryInline::FlatRead16((r3 + 52));
    r8 = 0x80380000u;
    r6 = (r6 + 16104);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = (r5 & -33);
    f1.d = MemoryInline::FlatReadFloat64((r4 + 5424));
    MemoryInline::FlatWrite16((r3 + 52), static_cast<uint16_t>(r5));
    r5 = (r5 | 1);
    r7 = MemoryInline::FlatRead32((r8 + 28432));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r7 = (r7 * 12);
    r6_addr_0 = (r6 + r7);
    r0 = MemoryInline::FlatRead16(r6_addr_0);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWrite16((r3 + 52), static_cast<uint16_t>(r5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r8 + 28432));
    r0 = (r0 * 12);
    r4 = (r6 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWrite16((r3 + 52), static_cast<uint16_t>(r5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80566C20 func_80566C20 preserves=true fpr_mask=0x00000000
