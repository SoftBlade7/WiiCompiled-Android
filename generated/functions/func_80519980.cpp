#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80519980(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r11_stbu_ea_0 = 0;
    uint32_t r11_stbu_ea_1 = 0;
    uint32_t r11_stbu_ea_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;

    goto loc_80519980;

loc_80519980:
{
    r0 = 38;
    r11 = (r3 + 33);
    r8 = (r4 + -1);
    r12 = MemoryInline::FlatRead8((r1 + 11));
    ctr = r0;
}

loc_80519994:
{
    r4 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = MemoryInline::FlatRead8(r8);
    MemoryInline::FlatWrite8((r11 + 1), static_cast<uint8_t>(r4));
    r11_stbu_ea_2 = (r11 + 2);
    MemoryInline::FlatWrite8(r11_stbu_ea_2, static_cast<uint8_t>(r0));
    r11 = r11_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80519994;
    }
}

loc_805199A8:
{
    r0 = MemoryInline::FlatRead16((r3 + 24));
    MemoryInline::FlatWrite32((r3 + 112), r5);
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 116), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 118), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r3 + 20), r10);
    MemoryInline::FlatWrite32((r3 + 16), r9);
    MemoryInline::FlatWrite8((r3 + 111), static_cast<uint8_t>(r12));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000016FA gpr_write=0x00001911 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80519980 func_80519980 preserves=true fpr_mask=0x00000000
