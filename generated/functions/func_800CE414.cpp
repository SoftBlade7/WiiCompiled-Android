#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CE414(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];

    goto loc_800CE414;

loc_800CE414:
{
    MemoryInline::FlatWrite32((r13 + -26928), r3);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 28), r6);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 34), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 44), r5);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 60), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 64), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 68), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 72), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 76), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 80), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 84), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 88), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 92), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020F8 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CE414 func_800CE414 preserves=true fpr_mask=0x00000000
