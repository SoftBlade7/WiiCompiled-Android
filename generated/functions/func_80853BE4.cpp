#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80853BE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];

    goto loc_80853BE4;

loc_80853BE4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r12 = (r7 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x80853C00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    // nop
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEF7E gpr_write=0x0000188B gpr_return=0x00000008 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80853BE4 func_80853BE4 preserves=true fpr_mask=0x00000000
