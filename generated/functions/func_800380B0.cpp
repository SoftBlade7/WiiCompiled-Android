#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800380B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];

    goto loc_800380B0;

loc_800380B0:
{
    r9 = 0x80270000u;
    r8 = 0x80270000u;
    r7 = 0x80270000u;
    r6 = 0x80270000u;
    r5 = 0x80270000u;
    r4 = 0x80270000u;
    r3 = 0x80270000u;
    r9 = (r9 + 9552);
    r8 = (r8 + 9536);
    r7 = (r7 + 9584);
    r6 = (r6 + 9568);
    r5 = (r5 + 9600);
    r4 = (r4 + 9616);
    r3 = (r3 + 9520);
    MemoryInline::FlatWrite32((r13 + -27392), r9);
    MemoryInline::FlatWrite32((r13 + -27388), r8);
    MemoryInline::FlatWrite32((r13 + -27384), r7);
    MemoryInline::FlatWrite32((r13 + -27380), r6);
    MemoryInline::FlatWrite32((r13 + -27376), r5);
    MemoryInline::FlatWrite32((r13 + -27372), r4);
    MemoryInline::FlatWrite32((r13 + -27368), r3);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x000003F8 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800380B0 func_800380B0 preserves=true fpr_mask=0x00000000
