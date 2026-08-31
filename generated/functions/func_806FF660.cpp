#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FF660(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_806FF660;

loc_806FF660:
{
    r8 = 0x809C0000u;
    r3 = 0x808C0000u;
    r6 = 0x808C0000u;
    r4 = 0x808C0000u;
    r3 = (r3 + 31432);
    MemoryInline::FlatWriteRam32((r8 + 9068), r3);
    r4 = (r4 + 31384);
    r7 = (r8 + 9068);
    r5 = 0;
    r6 = (r6 + 31448);
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r7 + 12), r6);
    r0 = (r4 + 16);
    r3 = (r3 + 9056);
    MemoryInline::FlatWriteRam32((r7 + 4), r5);
    MemoryInline::FlatWriteRam32((r7 + 8), r5);
    MemoryInline::FlatWriteRam32((r8 + 9068), r4);
    MemoryInline::FlatWriteRam32((r7 + 12), r0);
    MemoryInline::FlatWriteRam32((r7 + 16), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806FF660 func_806FF660 preserves=true fpr_mask=0x00000000
