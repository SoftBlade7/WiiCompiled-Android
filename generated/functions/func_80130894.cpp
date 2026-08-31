#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130894(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80130894;

loc_80130894:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80330000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    r5 = (r5 + 9376);
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    r4 = MemoryInline::FlatRead8((r5 + 31));
    r6 = MemoryInline::FlatRead16(r3);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r6));
    r6 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r5 + 30), static_cast<uint8_t>(r0));
    ctx->lr = 0x801308D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80130F84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r4 = 0x80130000u;
    r3 = (r1 + 8);
    r4 = (r4 + 768);
    ctx->lr = 0x801308E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8013118Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r3 = 1;
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF8E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80130894 func_80130894 preserves=true fpr_mask=0x00000000
