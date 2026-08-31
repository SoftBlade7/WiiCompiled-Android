#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FBECC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FBECC;

loc_801FBECC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r29 = r4;
    r9 = MemoryInline::FlatRead32((r3 + 48));
    r27 = r3;
    r0 = MemoryInline::FlatRead32(r8);
    r30 = r6;
    r4 = MemoryInline::FlatRead32((r9 + 28));
    r28 = r7;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801FBF04:
{
    r31 = MemoryInline::FlatRead32((r3 + 44));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FBF2C;
    }
}

loc_801FBF0C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_801FBF10:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801FBF24;
    }
}

loc_801FBF14:
{
    r0 = -1;
    r3 = 0;
    MemoryInline::FlatWrite32(r6, r0);
    goto loc_801FBFCC;
}

loc_801FBF24:
{
    r0 = MemoryInline::FlatRead32((r9 + 16));
    MemoryInline::FlatWrite32(r8, r0);
}

loc_801FBF2C:
{
    r0 = -1;
    r3 = r27;
    MemoryInline::FlatWrite32(r6, r0);
    r6 = r5;
    r4 = r29;
    r7 = (r1 + 8);
    r8 = (r1 + 12);
    r5 = 2;
    ctx->lr = 0x801FBF50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FB7A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801FBF54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801FBF5C;
    }
}

loc_801FBF58:
{
    goto loc_801FBF98;
}

loc_801FBF5C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r0 - r3);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r0);
    r4 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801FBF78:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(2))) {
        goto loc_801FBF94;
    }
}

loc_801FBF7C:
{
    r3 = MemoryInline::FlatRead32((r27 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r0 = (r3 + 2);
}

loc_801FBF8C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_801FBF94;
    }
}

loc_801FBF90:
{
    MemoryInline::FlatWrite32(r30, r4);
}

loc_801FBF94:
{
    r3 = 0;
}

loc_801FBF98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FBF9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FBFA4;
    }
}

loc_801FBFA0:
{
    goto loc_801FBFCC;
}

loc_801FBFA4:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FBFB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FBFBC;
    }
}

loc_801FBFB4:
{
    r3 = 0;
    goto loc_801FBFCC;
}

loc_801FBFBC:
{
    MemoryInline::FlatWrite32(r31, r29);
    r3 = 0;
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_801FBFCC:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FBECC func_801FBECC preserves=true fpr_mask=0x00000000
