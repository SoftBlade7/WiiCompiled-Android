#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80856664(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_rot_0 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80856664;

loc_80856664:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x808E0000u;
    r31 = (r31 + -22960);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = 1;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = MemoryInline::FlatRead8((r4 + 38));
    r4 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_808566A0:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80856774;
    }
}

loc_808566A4:
{
}

loc_808566A8:
{
    r7 = (r5 + -8);
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_80856750;
    }
}

loc_808566B0:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_808566CC;
    }
}

loc_808566B8:
{
    r6 = 0x80000000u;
    r0 = (r6 + -2);
}

loc_808566C4:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_808566CC;
    }
}

loc_808566C8:
{
    r8 = 1;
}

loc_808566CC:
{
}

loc_808566D0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80856750;
    }
}

loc_808566D4:
{
    r0 = (r7 + 7);
    r11 = 1;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_808566E8:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_80856750;
    }
}

loc_808566EC:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r4));
    r7 = (r4 + 1);
    r6 = (r4 + 2);
    r0 = (r4 + 3);
    r9 = (r30 | r8);
    r7 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r7));
    r12 = (r9 | r7);
    r10 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r6));
    r8 = (r4 + 4);
    r9 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r0));
    r10 = (r12 | r10);
    r7 = (r4 + 5);
    r6 = (r4 + 6);
    r0 = (r4 + 7);
    r9 = (r10 | r9);
    r8 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r8));
    r8 = (r9 | r8);
    r7 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r7));
    r7 = (r8 | r7);
    r6 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r6));
    r6 = (r7 | r6);
    r0 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r0));
    r30 = (r6 | r0);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808566EC;
    }
}

loc_80856750:
{
    r0 = (r5 - r4);
    r6 = 1;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_80856760:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80856774;
    }
}

loc_80856764:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
    r4 = (r4 + 1);
    r30 = (r30 | r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80856764;
    }
}

loc_80856774:
{
    r3 = (r3 + 128);
    r12 = MemoryInline::FlatRead32(r3);
    r0 = (r5 + -2);
    r6 = 2;
    r4 = r30;
    r5 = (r5 | ~r6);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r5 - r0);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    ctr = r12;
    ctx->lr = 0x808567A0u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r30;
    r3 = (r29 + 128);
    // inline leaf 0x805EEC50 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 8), r4);
    // end of inlined leaf 0x805EEC50
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_808567C0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_808567D0;
    }
}

loc_808567C4:
{
}

loc_808567C8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_808567D0;
    }
}

loc_808567CC:
{
    r3 = 1;
}

loc_808567D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808567D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80856894;
    }
}

loc_808567D8:
{
    r3 = 20;
    ctx->lr = 0x808567E0u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808567E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80856820;
    }
}

loc_808567E8:
{
    r5 = (r31 + 0);
    r7 = MemoryInline::FlatRead32(r31);
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 0x808E0000u;
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + -22924);
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    MemoryInline::FlatWriteRam32((r3 + 8), r7);
    MemoryInline::FlatWriteRam32((r3 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 36), r6);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
}

loc_80856820:
{
    MemoryInline::FlatWrite32((r29 + 452), r3);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80856838:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(50))) {
        goto loc_80856844;
    }
}

loc_8085683C:
{
}

loc_80856840:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(52))) {
        goto loc_80856854;
    }
}

loc_80856844:
{
}

loc_80856848:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(46))) {
        goto loc_80856880;
    }
}

loc_8085684C:
{
}

loc_80856850:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(47))) {
        goto loc_80856880;
    }
}

loc_80856854:
{
    r5 = MemoryInline::FlatRead32((r29 + 452));
    r3 = (r29 + 128);
    r4 = 2;
    r6 = 0;
    // inline leaf 0x805EF768 (6 guest instruction(s))
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = (r3 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite8((r4 + 52), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x805EF768
    r5 = MemoryInline::FlatRead32((r29 + 452));
    r3 = (r29 + 128);
    r4 = 0;
    r6 = 0;
    // inline leaf 0x805EF768 (6 guest instruction(s))
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4 = (r3 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite8((r4 + 52), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x805EF768
    goto loc_80856894;
}

loc_80856880:
{
    r5 = MemoryInline::FlatRead32((r29 + 452));
    r3 = (r29 + 128);
    r4 = 2;
    r6 = 0;
    // inline leaf 0x805EF768 (6 guest instruction(s))
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r3 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite8((r4 + 52), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x805EF768
}

loc_80856894:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_808568A8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(106))) {
        goto loc_808568B4;
    }
}

loc_808568AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(107));
}

loc_808568B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808568C4;
    }
}

loc_808568B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(110));
}

loc_808568B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80856984;
    }
}

loc_808568BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(111));
}

loc_808568C0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80856984;
    }
}

loc_808568C4:
{
    r3 = 20;
    ctx->lr = 0x808568CCu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808568D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085690C;
    }
}

loc_808568D4:
{
    r5 = (r31 + 12);
    r7 = MemoryInline::FlatRead32((r31 + 12));
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 0x808E0000u;
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + -22924);
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    MemoryInline::FlatWriteRam32((r3 + 8), r7);
    MemoryInline::FlatWriteRam32((r3 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
}

loc_8085690C:
{
    MemoryInline::FlatWrite32((r29 + 456), r3);
    r3 = 20;
    ctx->lr = 0x80856918u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8085691C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80856958;
    }
}

loc_80856920:
{
    r5 = (r31 + 24);
    r7 = MemoryInline::FlatRead32((r31 + 24));
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 0x808E0000u;
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + -22924);
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    MemoryInline::FlatWriteRam32((r3 + 8), r7);
    MemoryInline::FlatWriteRam32((r3 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
}

loc_80856958:
{
    MemoryInline::FlatWrite32((r29 + 460), r3);
    r3 = (r29 + 128);
    r5 = MemoryInline::FlatRead32((r29 + 456));
    r4 = 0;
    r6 = 0;
    // inline leaf 0x805EF768 (6 guest instruction(s))
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4 = (r3 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite8((r4 + 52), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x805EF768
    r5 = MemoryInline::FlatRead32((r29 + 460));
    r3 = (r29 + 128);
    r4 = 1;
    r6 = 0;
    // inline leaf 0x805EF768 (6 guest instruction(s))
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r4 = (r3 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite8((r4 + 52), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x805EF768
}

loc_80856984:
{
    r3 = r29;
    r4 = (r29 + 128);
    // inline leaf 0x80602474 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x80602474
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80856664 func_80856664 preserves=true fpr_mask=0x00000000
