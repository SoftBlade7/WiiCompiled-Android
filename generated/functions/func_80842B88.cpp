#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80842B88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_80842CB8_loc_0 = 0;
    uint32_t addr_lhax_80842D1C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80842B88;

loc_80842B88:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r5 = (r5 + -10920);
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 120), r30);
    r3 = MemoryInline::FlatRead32((r4 + -10440));
    r4 = 2;
    ctx->lr = 0x80842BBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805411FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
    r3 = 32;
    ctx->lr = 0x80842BC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 1732), r3);
    r11 = (r30 + 80);
    r10 = (r30 + 160);
    r9 = (r30 + 240);
    MemoryInline::FlatWriteRam32(r3, r30);
    r8 = (r30 + 320);
    r7 = (r30 + 400);
    r6 = (r30 + 480);
    r4 = MemoryInline::FlatRead32((r31 + 1732));
    r5 = (r30 + 560);
    r0 = 1;
    r3 = 4;
    MemoryInline::FlatWrite32((r4 + 4), r11);
    r4 = MemoryInline::FlatRead32((r31 + 1732));
    MemoryInline::FlatWrite32((r4 + 8), r10);
    r4 = MemoryInline::FlatRead32((r31 + 1732));
    MemoryInline::FlatWrite32((r4 + 12), r9);
    r4 = MemoryInline::FlatRead32((r31 + 1732));
    MemoryInline::FlatWrite32((r4 + 16), r8);
    r4 = MemoryInline::FlatRead32((r31 + 1732));
    MemoryInline::FlatWrite32((r4 + 20), r7);
    r4 = MemoryInline::FlatRead32((r31 + 1732));
    MemoryInline::FlatWrite32((r4 + 24), r6);
    r4 = MemoryInline::FlatRead32((r31 + 1732));
    MemoryInline::FlatWrite32((r4 + 28), r5);
    MemoryInline::FlatWrite8((r31 + 988), static_cast<uint8_t>(r0));
    ctx->lr = 0x80842C34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80842C38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80842C44;
    }
}

loc_80842C3C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_80842C44:
{
    MemoryInline::FlatWrite32((r31 + 3308), r3);
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl0_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl0_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl0_cont_8051BED0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 3308));
    r4 = MemoryInline::FlatRead32((r4 + 3224));
    ctx->lr = 0x80842C5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80529A84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r0 = 14;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r5 = (r1 + 4);
    r4 = (r3 + 2968);
    ctr = r0;
}

loc_80842C74:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80842C74;
    }
}

loc_80842C88:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 2108), r0);
    r8 = 0;
    r5 = 0;
    MemoryInline::FlatWrite32((r31 + 2112), r0);
    r0 = 4;
}

loc_80842CA0:
{
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r9 = 0;
    r6 = 0;
    ctr = r0;
}

loc_80842CB0:
{
    r4 = MemoryInline::FlatRead32((r31 + 1732));
    r4_addr_3 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_3);
    addr_lhax_80842CB8_loc_0 = (r4 + r6);
    r10 = MemoryInline::FlatRead16(addr_lhax_80842CB8_loc_0);
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
}

loc_80842CC0:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(0))) {
        goto loc_80842D0C;
    }
}

loc_80842CC4:
{
    r4 = MemoryInline::FlatRead32((r31 + 3308));
    r7 = MemoryInline::FlatRead32(r4);
}

loc_80842CD0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80842CDC;
    }
}

loc_80842CD4:
{
    r4 = MemoryInline::FlatRead16((r7 + 8));
    goto loc_80842CE0;
}

loc_80842CDC:
{
    r4 = 0;
}

loc_80842CE0:
{
}

loc_80842CE4:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r4))) {
        goto loc_80842D0C;
    }
}

loc_80842CE8:
{
    r4 = (r10 & 65535);
    r4 = (r4 * 112);
    r4 = (r7 + r4);
    r4 = MemoryInline::FlatRead16((r4 + 16));
}

loc_80842CFC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r3))) {
        goto loc_80842D0C;
    }
}

loc_80842D00:
{
    MemoryInline::FlatWrite32((r31 + 2108), r9);
    MemoryInline::FlatWrite32((r31 + 2112), r8);
    goto loc_80842D7C;
}

loc_80842D0C:
{
    r4 = MemoryInline::FlatRead32((r31 + 1732));
    r6 = (r6 + 10);
    r9 = (r9 + 1);
    r4_addr_4 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_4);
    addr_lhax_80842D1C_loc_0 = (r4 + r6);
    r10 = MemoryInline::FlatRead16(addr_lhax_80842D1C_loc_0);
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
}

loc_80842D24:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(0))) {
        goto loc_80842D70;
    }
}

loc_80842D28:
{
    r4 = MemoryInline::FlatRead32((r31 + 3308));
    r7 = MemoryInline::FlatRead32(r4);
}

loc_80842D34:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80842D40;
    }
}

loc_80842D38:
{
    r4 = MemoryInline::FlatRead16((r7 + 8));
    goto loc_80842D44;
}

loc_80842D40:
{
    r4 = 0;
}

loc_80842D44:
{
}

loc_80842D48:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r4))) {
        goto loc_80842D70;
    }
}

loc_80842D4C:
{
    r4 = (r10 & 65535);
    r4 = (r4 * 112);
    r4 = (r7 + r4);
    r4 = MemoryInline::FlatRead16((r4 + 16));
}

loc_80842D60:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r3))) {
        goto loc_80842D70;
    }
}

loc_80842D64:
{
    MemoryInline::FlatWrite32((r31 + 2108), r9);
    MemoryInline::FlatWrite32((r31 + 2112), r8);
    goto loc_80842D7C;
}

loc_80842D70:
{
    r6 = (r6 + 10);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80842CB0;
    }
}

loc_80842D7C:
{
    r8 = (r8 + 1);
    r5 = (r5 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(8));
}

loc_80842D88:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80842CA0;
    }
}

loc_80842D8C:
{
    r3 = r31;
    ctx->lr = 0x80842D94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80836B9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 132));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80842B88 func_80842B88 preserves=true fpr_mask=0x00000000
