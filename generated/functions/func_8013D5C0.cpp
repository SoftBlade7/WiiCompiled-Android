#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013D5C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8013D5C0;

loc_8013D5C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 10180;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80330000u;
    r3 = (r31 + 25208);
    ctx->lr = 0x8013D5E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    r3 = (r31 + 25208);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + 10176), static_cast<uint8_t>(r0));
    // inline leaf 0x8013CA74 (1 guest instruction(s))
    // end of inlined leaf 0x8013CA74
    // inline leaf 0x80137C5C (7 guest instruction(s))
    r3 = 0x80330000u;
    r4 = 32000;
    r3 = (r3 + 25208);
    r0 = 255;
    MemoryInline::FlatWriteRam16((r3 + 1222), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 10175), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80137C5C
    r3 = 2;
    ctx->lr = 0x8013D600u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80140374u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    // inline leaf 0x8013E2B0 (17 guest instruction(s))
    r3 = 0x80250000u;
    r3 = (r3 + -13824);
    r6 = MemoryInline::FlatRead32(r3);
    r4 = 65536;
    r7 = 0x80330000u;
    r8 = (r4 + -1);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r7 = (r7 + 25208);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = 2;
    MemoryInline::FlatWriteRam16((r7 + 6390), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteRam32((r7 + 6392), r6);
    MemoryInline::FlatWriteRam32((r7 + 6396), r5);
    MemoryInline::FlatWriteRam32((r7 + 6400), r4);
    MemoryInline::FlatWriteRam32((r7 + 6404), r3);
    MemoryInline::FlatWriteRam8((r7 + 6409), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8013E2B0
    ctx->lr = 0x8013D608u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8013A06Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE0C6 gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013D5C0 func_8013D5C0 preserves=true fpr_mask=0x00000000
