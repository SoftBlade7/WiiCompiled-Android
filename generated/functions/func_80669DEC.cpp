#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80669DEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80669DEC;

loc_80669DEC:
{
    r26 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677228 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80677228
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80669DFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AD88;
    }
}

loc_80669E00:
{
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80669E0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80669E48;
    }
}

loc_80669E10:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = (r27 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + 8464));
    r4 = (r27 + 19729);
    r7 = MemoryInline::FlatRead16((r5 + 54));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r5 = 76;
    r6 = MemoryInline::FlatRead32((r3 + 120));
    r3 = (r7 * 80);
    r3 = (r0 + r3);
    MemoryInline::FlatWrite32((r3 + -30276), r6);
    r3 = (r3 + -30272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80669E48:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 16904), r3);
    MemoryInline::FlatWrite32((r27 + 16896), r0);
}

loc_8066AD88:
{
    r26 = MemoryInline::FlatRead32((r1 + 600));
    r27 = MemoryInline::FlatRead32((r1 + 604));
    r28 = MemoryInline::FlatRead32((r1 + 608));
    r29 = MemoryInline::FlatRead32((r1 + 612));
    r30 = MemoryInline::FlatRead32((r1 + 616));
    r31 = MemoryInline::FlatRead32((r1 + 620));
    r0 = MemoryInline::FlatRead32((r1 + 628));
    ctx->lr = r0;
    r1 = (r1 + 624);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0C0000FB gpr_write=0xFC0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80669DEC func_80669DEC preserves=true fpr_mask=0x00000000
