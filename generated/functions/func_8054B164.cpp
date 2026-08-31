#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054B164(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_8054B164;

loc_8054B164:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f1.d = PPC_Fctiwz(f1.d);
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword0;
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = (r5 + -1);
    r6 = fctiwzword1;
    r4 = (r0 & 65532);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r5));
    r0 = (r6 + -1);
    r0 = (r0 & 65532);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x00000006 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054B164 func_8054B164 preserves=true fpr_mask=0x00000000
