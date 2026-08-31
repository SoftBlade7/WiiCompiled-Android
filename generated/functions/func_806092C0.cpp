#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806092C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806092C0;

loc_806092C0:
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
    r0 = MemoryInline::FlatRead32((r3 + 68));
    r31 = 0x80890000u;
    r30 = r3;
}

loc_806092E4:
{
    r31 = (r31 + 27968);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80609310;
    }
}

loc_806092EC:
{
}

loc_806092F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8060948C;
    }
}

loc_806092F4:
{
}

loc_806092F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80609638;
    }
}

loc_806092FC:
{
}

loc_80609300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8060987C;
    }
}

loc_80609304:
{
}

loc_80609308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80609994;
    }
}

loc_8060930C:
{
    goto loc_806099C4;
}

loc_80609310:
{
    r0 = MemoryInline::FlatRead32((r3 + 7408));
}

loc_80609318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806099C4;
    }
}

loc_8060931C:
{
    r27 = (r3 + 772);
    r28 = 1;
    r29 = 0;
}

loc_80609328:
{
    r0 = MemoryInline::FlatRead32((r30 + 7184));
}

loc_80609330:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_80609354;
    }
}

loc_80609334:
{
    r3 = (r27 + 152);
    r4 = 4;
    // inline leaf 0x8063C830 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C830
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_80609348:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80609374;
    }
}

loc_8060934C:
{
    r28 = 0;
    goto loc_80609384;
}

loc_80609354:
{
    r3 = (r27 + 152);
    r4 = 4;
    // inline leaf 0x8063C830 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C830
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_80609368:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80609374;
    }
}

loc_8060936C:
{
    r28 = 0;
    goto loc_80609384;
}

loc_80609374:
{
    r29 = (r29 + 1);
    r27 = (r27 + 440);
}

loc_80609380:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(12))) {
        goto loc_80609328;
    }
}

loc_80609384:
{
}

loc_80609388:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_806093C0;
    }
}

loc_8060938C:
{
    r27 = 0;
    goto loc_806093B4;
}

loc_80609394:
{
    r4 = r27;
    r3 = (r30 + 7200);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805FA97Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_806093A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806093B0;
    }
}

loc_806093A8:
{
    r28 = 0;
    goto loc_806093C0;
}

loc_806093B0:
{
    r27 = (r27 + 1);
}

loc_806093B4:
{
    r0 = MemoryInline::FlatRead32((r30 + 7184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_806093BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80609394;
    }
}

loc_806093C0:
{
}

loc_806093C4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_806099C4;
    }
}

loc_806093C8:
{
    r3 = 0x80890000u;
    f6.d = MemoryInline::FlatReadFloat64((r31 + 312));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32096));
    r7 = r30;
    f4.d = MemoryInline::FlatReadFloat32((r31 + 352));
    r8 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 356));
    r5 = 1127219200;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 360));
    r4 = 0x80380000u;
    r0 = 2;
    goto loc_80609464;
}

loc_806093F8:
{
    r6 = (r3 + -1);
    r3 = MemoryInline::FlatRead32((r7 + 1172));
    r6 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f5.d = PpcFmulsInline(f4.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 1188), f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 1192), f2.d);
    r3 = MemoryInline::FlatRead32((r4 + 24576));
    r3 = MemoryInline::FlatRead32((r3 + 88));
}

loc_80609448:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80609458;
    }
}

loc_8060944C:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 1188));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r7 + 1188), f0.d);
}

loc_80609458:
{
    MemoryInline::FlatWrite32((r7 + 1168), r0);
    r7 = (r7 + 440);
    r8 = (r8 + 1);
}

loc_80609464:
{
    r3 = MemoryInline::FlatRead32((r30 + 7180));
}

loc_8060946C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r3))) {
        goto loc_806093F8;
    }
}

loc_80609470:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 68), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8472));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_806099C4;
}

loc_8060948C:
{
    r0 = MemoryInline::FlatRead32((r3 + 7180));
    r4 = r30;
    r5 = 1;
    ctr = r0;
}

loc_806094A0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_806094C0;
    }
}

loc_806094A4:
{
    r0 = MemoryInline::FlatRead32((r4 + 1168));
}

loc_806094AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_806094B8;
    }
}

loc_806094B0:
{
    r5 = 0;
    goto loc_806094C0;
}

loc_806094B8:
{
    r4 = (r4 + 440);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806094A4;
    }
}

loc_806094C0:
{
}

loc_806094C4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806099C4;
    }
}

loc_806094C8:
{
    r4 = 0;
    r5 = 3;
    r0 = (r4 * 440);
    MemoryInline::FlatWrite32((r3 + 68), r5);
    MemoryInline::FlatWrite32((r3 + 7188), r4);
    r31 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r31 + 872));
    r28 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_806094EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806094F8;
    }
}

loc_806094F0:
{
    r28 = 0;
    goto loc_8060954C;
}

loc_806094F8:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7488);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609548;
    }
}

loc_80609504:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80609518u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80609530;
}

loc_8060951C:
{
}

loc_80609520:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_8060952C;
    }
}

loc_80609524:
{
    r0 = 1;
    goto loc_8060953C;
}

loc_8060952C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80609530:
{
}

loc_80609534:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8060951C;
    }
}

loc_80609538:
{
    r0 = 0;
}

loc_8060953C:
{
}

loc_80609540:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80609548;
    }
}

loc_80609544:
{
    goto loc_8060954C;
}

loc_80609548:
{
    r28 = 0;
}

loc_8060954C:
{
    r0 = MemoryInline::FlatRead32((r28 + 7412));
    r28 = 0;
}

loc_80609558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80609578;
    }
}

loc_8060955C:
{
}

loc_80609560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80609578;
    }
}

loc_80609564:
{
}

loc_80609568:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80609580;
    }
}

loc_8060956C:
{
}

loc_80609570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80609580;
    }
}

loc_80609574:
{
    goto loc_80609584;
}

loc_80609578:
{
    r28 = 0;
    goto loc_80609584;
}

loc_80609580:
{
    r28 = 1;
}

loc_80609584:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r27 = MemoryInline::FlatRead32((r3 + 604));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80609598:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806095A4;
    }
}

loc_8060959C:
{
    r27 = 0;
    goto loc_806095F8;
}

loc_806095A4:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7264);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806095F4;
    }
}

loc_806095B0:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x806095C4u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806095DC;
}

loc_806095C8:
{
}

loc_806095CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_806095D8;
    }
}

loc_806095D0:
{
    r0 = 1;
    goto loc_806095E8;
}

loc_806095D8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806095DC:
{
}

loc_806095E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806095C8;
    }
}

loc_806095E4:
{
    r0 = 0;
}

loc_806095E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806095EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806095F4;
    }
}

loc_806095F0:
{
    goto loc_806095F8;
}

loc_806095F4:
{
    r27 = 0;
}

loc_806095F8:
{
    r3 = MemoryInline::FlatRead32((r31 + 1196));
    r4 = MemoryInline::FlatRead32((r31 + 1200));
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x805FA930
    r5 = MemoryInline::FlatRead16((r31 + 1204));
    r4 = r3;
    r6 = MemoryInline::FlatRead16((r31 + 1206));
    r3 = r27;
    r7 = MemoryInline::FlatRead32((r31 + 1208));
    r8 = r28;
    r9 = (r31 + 1144);
    ctx->lr = 0x80609624u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E5254u>(ctx);
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
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 7192), r3);
    MemoryInline::FlatWrite8((r30 + 7196), static_cast<uint8_t>(r0));
    goto loc_806099C4;
}

loc_80609638:
{
    r4 = MemoryInline::FlatRead32((r3 + 7192));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 - r4);
}

loc_80609648:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(120))) {
        goto loc_80609660;
    }
}

loc_8060964C:
{
}

loc_80609650:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(60))) {
        goto loc_806099C4;
    }
}

loc_80609654:
{
    r0 = MemoryInline::FlatRead8((r3 + 7196));
}

loc_8060965C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806099C4;
    }
}

loc_80609660:
{
    r4 = MemoryInline::FlatRead32((r3 + 7188));
    r0 = MemoryInline::FlatRead32((r3 + 7180));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 7188), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80609674:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806097D8;
    }
}

loc_80609678:
{
    r0 = (r4 * 440);
    r31 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r31 + 872));
    r27 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8060968C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80609698;
    }
}

loc_80609690:
{
    r27 = 0;
    goto loc_806096EC;
}

loc_80609698:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 7488);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806096E8;
    }
}

loc_806096A4:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x806096B8u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806096D0;
}

loc_806096BC:
{
}

loc_806096C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_806096CC;
    }
}

loc_806096C4:
{
    r0 = 1;
    goto loc_806096DC;
}

loc_806096CC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806096D0:
{
}

loc_806096D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806096BC;
    }
}

loc_806096D8:
{
    r0 = 0;
}

loc_806096DC:
{
}

loc_806096E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806096E8;
    }
}

loc_806096E4:
{
    goto loc_806096EC;
}

loc_806096E8:
{
    r27 = 0;
}

loc_806096EC:
{
    r0 = MemoryInline::FlatRead32((r27 + 7412));
    r29 = 0;
}

loc_806096F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80609718;
    }
}

loc_806096FC:
{
}

loc_80609700:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80609718;
    }
}

loc_80609704:
{
}

loc_80609708:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80609720;
    }
}

loc_8060970C:
{
}

loc_80609710:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80609720;
    }
}

loc_80609714:
{
    goto loc_80609724;
}

loc_80609718:
{
    r29 = 0;
    goto loc_80609724;
}

loc_80609720:
{
    r29 = 1;
}

loc_80609724:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r27 = MemoryInline::FlatRead32((r3 + 604));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80609738:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80609744;
    }
}

loc_8060973C:
{
    r27 = 0;
    goto loc_80609798;
}

loc_80609744:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 7264);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609794;
    }
}

loc_80609750:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80609764u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8060977C;
}

loc_80609768:
{
}

loc_8060976C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_80609778;
    }
}

loc_80609770:
{
    r0 = 1;
    goto loc_80609788;
}

loc_80609778:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8060977C:
{
}

loc_80609780:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80609768;
    }
}

loc_80609784:
{
    r0 = 0;
}

loc_80609788:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060978C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609794;
    }
}

loc_80609790:
{
    goto loc_80609798;
}

loc_80609794:
{
    r27 = 0;
}

loc_80609798:
{
    r3 = MemoryInline::FlatRead32((r31 + 1196));
    r4 = MemoryInline::FlatRead32((r31 + 1200));
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x805FA930
    r5 = MemoryInline::FlatRead16((r31 + 1204));
    r4 = r3;
    r6 = MemoryInline::FlatRead16((r31 + 1206));
    r3 = r27;
    r7 = MemoryInline::FlatRead32((r31 + 1208));
    r8 = r29;
    r9 = (r31 + 1144);
    ctx->lr = 0x806097C4u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E5254u>(ctx);
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
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 7192), r3);
    MemoryInline::FlatWrite8((r30 + 7196), static_cast<uint8_t>(r0));
    goto loc_806099C4;
}

loc_806097D8:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 68), r0);
    r4 = 4107;
    r5 = 0;
    r3 = (r3 + 6052);
    ctx->lr = 0x806097F0u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
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
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r30 + 6204);
    r4 = 1;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r28 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80609808:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609818;
    }
}

loc_8060980C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80609810:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609828;
    }
}

loc_80609814:
{
    goto loc_80609870;
}

loc_80609818:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 320));
    r4 = 1;
    ctx->lr = 0x80609824u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
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
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80609870;
}

loc_80609828:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // inline leaf 0x800829D0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800829D0
    r3 = (r3 & 65535);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = r28;
    f3.d = MemoryInline::FlatReadFloat64((r31 + 344));
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 60));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 340));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->lr = 0x80609870u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063CA98u>(ctx);
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
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80609870:
{
    r0 = MemoryInline::FlatRead32((r30 + 28));
    MemoryInline::FlatWrite32((r30 + 7352), r0);
    goto loc_806099C4;
}

loc_8060987C:
{
    r4 = MemoryInline::FlatRead32((r3 + 7352));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 - r4);
}

loc_8060988C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(120))) {
        goto loc_806099C4;
    }
}

loc_80609890:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 8408));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_806098AC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_806098BC;
    }
}

loc_806098B0:
{
    r0 = MemoryInline::FlatRead8((r4 + 139));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806098B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80609970;
    }
}

loc_806098BC:
{
    r5 = 0x809C0000u;
    r4 = -1;
    r6 = MemoryInline::FlatRead32((r5 + 7736));
    r5 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead32(r5);
}

loc_806098D4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(85))) {
        goto loc_806098E0;
    }
}

loc_806098D8:
{
}

loc_806098DC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(87))) {
        goto loc_80609900;
    }
}

loc_806098E0:
{
}

loc_806098E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(91))) {
        goto loc_806098F0;
    }
}

loc_806098E8:
{
}

loc_806098EC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(93))) {
        goto loc_80609928;
    }
}

loc_806098F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(131));
}

loc_806098F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8060994C;
    }
}

loc_806098F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(132));
}

loc_806098FC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8060994C;
    }
}

loc_80609900:
{
    r0 = MemoryInline::FlatRead32((r3 + 7416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80609908:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609918;
    }
}

loc_8060990C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80609910:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609920;
    }
}

loc_80609914:
{
    goto loc_8060994C;
}

loc_80609918:
{
    r4 = 88;
    goto loc_8060994C;
}

loc_80609920:
{
    r4 = 89;
    goto loc_8060994C;
}

loc_80609928:
{
    r0 = MemoryInline::FlatRead32((r3 + 7416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80609930:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609940;
    }
}

loc_80609934:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80609938:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609948;
    }
}

loc_8060993C:
{
    goto loc_8060994C;
}

loc_80609940:
{
    r4 = 94;
    goto loc_8060994C;
}

loc_80609948:
{
    r4 = 95;
}

loc_8060994C:
{
    r3 = r6;
    r5 = 0;
    ctx->lr = 0x80609958u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635AC8u>(ctx);
    r0 = ctx->gpr[0];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    goto loc_80609988;
}

loc_80609970:
{
    ctx->lr = 0x80609974u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80609E84u>(ctx);
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
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635AC8u>(ctx);
    r0 = ctx->gpr[0];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_80609988:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 68), r0);
    goto loc_806099C4;
}

loc_80609994:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8060999C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806099C4;
    }
}

loc_806099A0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    ctx->lr = 0x806099ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80656E70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806099B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_806099C4;
    }
}

loc_806099B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 320));
    r3 = r30;
    r4 = 1;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl7_0x80602488:
{
}

loc_inl7_0x8060248C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_inl7_0x80602494;
    }
}

loc_inl7_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl7_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl7_cont_80602488:
{
    // end of inlined leaf 0x80602488
}

loc_806099C4:
{
    r0 = MemoryInline::FlatRead32((r30 + 68));
    r3 = 0;
}

loc_806099D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_806099E4;
    }
}

loc_806099D4:
{
    r0 = MemoryInline::FlatRead32((r30 + 7408));
}

loc_806099DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806099E4;
    }
}

loc_806099E0:
{
    r3 = 1;
}

loc_806099E4:
{
    r4 = MemoryInline::FlatRead32((r30 + 68));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
    MemoryInline::FlatWrite8((r30 + 6932), static_cast<uint8_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806099F8:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609A0C;
    }
}

loc_80609A00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_80609A04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609A0C;
    }
}

loc_80609A08:
{
    r0 = 1;
}

loc_80609A0C:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r11 = (r1 + 48);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_7 & 134217727);
    MemoryInline::FlatWrite8((r30 + 528), static_cast<uint8_t>(r0));
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806092C0 func_806092C0 preserves=true fpr_mask=0x00000000
