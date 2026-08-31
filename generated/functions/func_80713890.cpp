#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80713890(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_80713890;

loc_80713890:
{
    r7 = 0x809C0000u;
    r8 = 0x808B0000u;
    r3 = (r7 + 10248);
    r6 = 1;
    r0 = 0;
    r8 = (r8 + 11588);
    r4 = 0x80520000u;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r7 + 10248), r8);
    r4 = (r4 + -15564);
    r5 = (r5 + 10236);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
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
// RECOMP_REGISTRATION base 0x80713890 func_80713890 preserves=true fpr_mask=0x00000000
