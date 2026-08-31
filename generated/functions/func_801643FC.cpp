#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801643FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801643FC;

loc_801643FC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = 1175060480;
    // inline leaf 0x801A75DC (3 guest instruction(s))
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 12568));
    // end of inlined leaf 0x801A75DC
    r0 = (r3 + -134217728);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80164420:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016442C;
    }
}

loc_80164424:
{
    r3 = 1;
    goto loc_8016466C;
}

loc_8016442C:
{
    r3 = (r1 + 24);
    // inline leaf 0x8019F2D0 (27 guest instruction(s))
    r4 = -1073741824;
    r10 = MemoryInline::FlatRead32((r4 + 12612));
    r9 = MemoryInline::FlatRead32((r4 + 12608));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r0 = (r0_rot_1 & 15);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r6 = (r6_rot_1 & 15);
    r4 = (r0 * 10);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r7 = (r7_rot_1 & 255);
    r0 = (r10 & 15);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r7));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r8 = (r8_rot_1 & 255);
    r4 = (r0 + r4);
    r0 = (r4 + 2000);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r5 = (r5_rot_1 & 15);
    r4 = (r5 * 10);
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r8));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r5 = (r5_rot_2 & 15);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r8 = (r8_rot_2 & 255);
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r9));
    r4 = (r5 + r4);
    r6 = (r6 * 10);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r7 = (r7_rot_2 & 15);
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r8));
    r6 = (r7 + r6);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8019F2D0
    r0 = MemoryInline::FlatRead8((r1 + 25));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
}

loc_8016443C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80164448;
    }
}

loc_80164440:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(254));
}

loc_80164444:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80164450;
    }
}

loc_80164448:
{
    r3 = 1;
    goto loc_8016466C;
}

loc_80164450:
{
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead8((r3 + 12700));
}

loc_8016445C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(129))) {
        goto loc_80164464;
    }
}

loc_80164460:
{
    r30 = 2127822848;
}

loc_80164464:
{
    r0 = 0;
    r3 = 0x80340000u;
    r6 = 0x80160000u;
    MemoryInline::FlatWrite32((r13 + -29472), r0);
    r5 = r30;
    r3 = (r3 + 13504);
    r6 = (r6 + 17388);
    r4 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80165708u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80164488:
{
    r0 = MemoryInline::FlatRead32((r13 + -29472));
}

loc_80164490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80164488;
    }
}

loc_80164494:
{
    r0 = MemoryInline::FlatRead32((r13 + -25840));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8016449C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801644B0;
    }
}

loc_801644A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80164664;
    }
}

loc_801644A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801644A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801645CC;
    }
}

loc_801644AC:
{
    goto loc_80164664;
}

loc_801644B0:
{
    r0 = 0;
    r3 = 0x80160000u;
    MemoryInline::FlatWrite32((r13 + -29472), r0);
    r3 = (r3 + 17388);
    ctx->lr = 0x801644C4u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80165B98u>(ctx);
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
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801644C4:
{
    r0 = MemoryInline::FlatRead32((r13 + -29472));
}

loc_801644CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801644C4;
    }
}

loc_801644D0:
{
    // inline leaf 0x80166948 (3 guest instruction(s))
    r3 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r3 + 13664));
    // end of inlined leaf 0x80166948
    r0 = MemoryInline::FlatRead32((r13 + -25840));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801644DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801644E4;
    }
}

loc_801644E0:
{
    goto loc_80164664;
}

loc_801644E4:
{
    // inline leaf 0x80166948 (3 guest instruction(s))
    r3 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r3 + 13664));
    // end of inlined leaf 0x80166948
    r0 = (r3 & -16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801644EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016465C;
    }
}

loc_801644F0:
{
    // inline leaf 0x80166948 (3 guest instruction(s))
    r3 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r3 + 13664));
    // end of inlined leaf 0x80166948
    r4 = 327680;
    r3 = (r3 & 16777215);
    r0 = (r4 + 8448);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80164504:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016450C;
    }
}

loc_80164508:
{
    goto loc_801645CC;
}

loc_8016450C:
{
    r0 = 0;
    r3 = 0x80340000u;
    r6 = 0x80160000u;
    MemoryInline::FlatWrite32((r13 + -29472), r0);
    r3 = (r3 + 13504);
    r4 = 262144;
    r6 = (r6 + 17388);
    r5 = 0;
    ctx->lr = 0x80164530u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016601Cu>(ctx);
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
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80164530:
{
    r0 = MemoryInline::FlatRead32((r13 + -29472));
}

loc_80164538:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80164530;
    }
}

loc_8016453C:
{
    r0 = MemoryInline::FlatRead32((r13 + -25840));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80164544:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80164558;
    }
}

loc_80164548:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80164664;
    }
}

loc_8016454C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80164550:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801645CC;
    }
}

loc_80164554:
{
    goto loc_80164664;
}

loc_80164558:
{
    r0 = 0;
    r3 = 0x80160000u;
    MemoryInline::FlatWrite32((r13 + -29472), r0);
    r3 = (r3 + 17388);
    ctx->lr = 0x8016456Cu;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80165B98u>(ctx);
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
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8016456C:
{
    r0 = MemoryInline::FlatRead32((r13 + -29472));
}

loc_80164574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016456C;
    }
}

loc_80164578:
{
    // inline leaf 0x80166948 (3 guest instruction(s))
    r3 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r3 + 13664));
    // end of inlined leaf 0x80166948
    r0 = MemoryInline::FlatRead32((r13 + -25840));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80164584:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016458C;
    }
}

loc_80164588:
{
    goto loc_80164664;
}

loc_8016458C:
{
    // inline leaf 0x80166948 (3 guest instruction(s))
    r3 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r3 + 13664));
    // end of inlined leaf 0x80166948
    r0 = (r3 & -16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80164594:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016465C;
    }
}

loc_80164598:
{
    // inline leaf 0x80166948 (3 guest instruction(s))
    r3 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r3 + 13664));
    // end of inlined leaf 0x80166948
    r4 = 327680;
    r3 = (r3 & 16777215);
    r0 = (r4 + 12544);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801645AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801645C4;
    }
}

loc_801645B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801645CC;
    }
}

loc_801645B4:
{
    r0 = (r4 + 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801645BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801645C4;
    }
}

loc_801645C0:
{
    goto loc_801645CC;
}

loc_801645C4:
{
    r3 = 1;
    goto loc_8016466C;
}

loc_801645CC:
{
    r5 = MemoryInline::FlatRead8((r13 + -29468));
    r31 = 0;
    r4 = MemoryInline::FlatRead8((r13 + -29467));
    r3 = MemoryInline::FlatRead8((r13 + -29466));
    r0 = MemoryInline::FlatRead8((r13 + -29465));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    ctx->lr = 0x801645F4u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B1D0Cu>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801645F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80164608;
    }
}

loc_801645FC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A59B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    goto loc_80164610;
}

loc_80164608:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A59B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80164610:
{
    r30 = 0x80250000u;
    r30 = (r30 + -12792);
    ctx->lr = 0x8016461Cu;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B1D0Cu>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_80164624:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80164630;
    }
}

loc_80164628:
{
    r5 = MemoryInline::FlatRead32((r30 + 4));
    goto loc_8016463C;
}

loc_80164630:
{
    ctx->lr = 0x80164634u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B1D0Cu>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r30_addr_1 = (r30 + r0);
    r5 = MemoryInline::FlatRead32(r30_addr_1);
}

loc_8016463C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    r3 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x80164654u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A4EC4u>(ctx);
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
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8016466C;
}

loc_8016465C:
{
    r3 = 0;
    goto loc_8016466C;
}

loc_80164664:
{
    ctx->lr = 0x80164668u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80164294u>(ctx);
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
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
}

loc_8016466C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
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
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801643FC func_801643FC preserves=true fpr_mask=0x00000000
