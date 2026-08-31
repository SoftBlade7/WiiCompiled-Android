#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017A2D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8017A2D8;

loc_8017A2D8:
{
    r0 = MemoryInline::FlatRead8((r28 + 145));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A2E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A2F8;
    }
}

loc_8017A2E4:
{
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x8017A2F0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80178A84u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 145), static_cast<uint8_t>(r0));
}

loc_8017A2F8:
{
    r0 = MemoryInline::FlatRead8((r28 + 146));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A510;
    }
}

loc_8017A304:
{
    r3 = r28;
    ctx->lr = 0x8017A30Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80178754u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x8017A310u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801C0FC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_8017A31C:
{
    MemoryInline::FlatWrite8((r28 + 136), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A418;
    }
}

loc_8017A324:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017A334:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017A33C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8017A350;
    }
}

loc_8017A340:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017A348:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017A350;
    }
}

loc_8017A34C:
{
    goto loc_8017A380;
}

loc_8017A350:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017A35C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8017A370;
    }
}

loc_8017A360:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017A368:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017A370;
    }
}

loc_8017A36C:
{
    goto loc_8017A380;
}

loc_8017A370:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A334;
    }
}

loc_8017A37C:
{
    r3 = -1;
}

loc_8017A380:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl0_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl0_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x80173E54;
    }
}

loc_inl0_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl0_0x80173E58;
}

loc_inl0_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl0_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 37;
    MemoryInline::FlatWrite32((r25 + 20), r3);
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017A3AC:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017A3B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_8017A3C8;
    }
}

loc_8017A3B8:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017A3C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017A3C8;
    }
}

loc_8017A3C4:
{
    goto loc_8017A3F8;
}

loc_8017A3C8:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017A3D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_8017A3E8;
    }
}

loc_8017A3D8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017A3E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017A3E8;
    }
}

loc_8017A3E4:
{
    goto loc_8017A3F8;
}

loc_8017A3E8:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A3AC;
    }
}

loc_8017A3F4:
{
    r3 = -1;
}

loc_8017A3F8:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl1_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x80173E54;
    }
}

loc_inl1_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x80173E58;
}

loc_inl1_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    goto loc_8017A508;
}

loc_8017A418:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017A428:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017A430:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8017A444;
    }
}

loc_8017A434:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017A43C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017A444;
    }
}

loc_8017A440:
{
    goto loc_8017A474;
}

loc_8017A444:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017A450:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8017A464;
    }
}

loc_8017A454:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017A45C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017A464;
    }
}

loc_8017A460:
{
    goto loc_8017A474;
}

loc_8017A464:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A428;
    }
}

loc_8017A470:
{
    r3 = -1;
}

loc_8017A474:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl2_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x80173E54;
    }
}

loc_inl2_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x80173E58;
}

loc_inl2_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 37;
    MemoryInline::FlatWrite32((r25 + 20), r3);
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017A4A0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017A4A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_8017A4BC;
    }
}

loc_8017A4AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017A4B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017A4BC;
    }
}

loc_8017A4B8:
{
    goto loc_8017A4EC;
}

loc_8017A4BC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017A4C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_8017A4DC;
    }
}

loc_8017A4CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017A4D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017A4DC;
    }
}

loc_8017A4D8:
{
    goto loc_8017A4EC;
}

loc_8017A4DC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A4A0;
    }
}

loc_8017A4E8:
{
    r3 = -1;
}

loc_8017A4EC:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl3_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl3_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl3_0x80173E54;
    }
}

loc_inl3_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl3_0x80173E58;
}

loc_inl3_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl3_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
}

loc_8017A508:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 146), static_cast<uint8_t>(r0));
}

loc_8017A510:
{
    r4 = MemoryInline::FlatRead32((r28 + 1040));
}

loc_8017A518:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8017A534;
    }
}

loc_8017A51C:
{
    r3 = MemoryInline::FlatRead32((r28 + 1032));
    r0 = MemoryInline::FlatRead32((r28 + 1036));
}

loc_8017A528:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8017A534;
    }
}

loc_8017A52C:
{
    r0 = 1;
    goto loc_8017A554;
}

loc_8017A534:
{
}

loc_8017A538:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017A550;
    }
}

loc_8017A53C:
{
    r0 = MemoryInline::FlatRead32((r28 + 1032));
}

loc_8017A544:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8017A550;
    }
}

loc_8017A548:
{
    r0 = 1;
    goto loc_8017A554;
}

loc_8017A550:
{
    r0 = 0;
}

loc_8017A554:
{
}

loc_8017A558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A678;
    }
}

loc_8017A55C:
{
    r0 = MemoryInline::FlatRead8((r28 + 148));
}

loc_8017A564:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A584;
    }
}

loc_8017A568:
{
    r0 = MemoryInline::FlatRead8((r28 + 142));
}

loc_8017A570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A6DC;
    }
}

loc_8017A574:
{
    r3 = MemoryInline::FlatRead32((r28 + 448));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801BF640u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 148), static_cast<uint8_t>(r0));
}

loc_8017A584:
{
    r0 = MemoryInline::FlatRead8((r28 + 149));
}

loc_8017A58C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A61C;
    }
}

loc_8017A590:
{
    r3 = MemoryInline::FlatRead32((r28 + 992));
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl4_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl4_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_0x80173E54;
    }
}

loc_inl4_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl4_0x80173E58;
}

loc_inl4_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl4_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl4_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = MemoryInline::FlatRead32((r28 + 992));
    r27 = 0;
    r5 = 1;
    MemoryInline::FlatWrite32((r3 + 20), r27);
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r4 = MemoryInline::FlatRead32((r31 + 2612));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8017A5C4u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r4 = (r31 + 2612);
    r5 = 1;
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8017A5F4u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 1028));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017A60C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8017A61C;
    }
}

loc_8017A610:
{
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl5_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl5_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl5_0x80173E54;
    }
}

loc_inl5_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl5_0x80173E58;
}

loc_inl5_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl5_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl5_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = MemoryInline::FlatRead32((r28 + 1028));
    MemoryInline::FlatWrite32((r3 + 20), r27);
}

loc_8017A61C:
{
    r0 = MemoryInline::FlatRead32((r28 + 1480));
    r3 = 17;
    MemoryInline::FlatWrite32((r28 + 16), r3);
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A630:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017A640;
    }
}

loc_8017A634:
{
    r0 = MemoryInline::FlatRead8((r28 + 1044));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A63C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017A644;
    }
}

loc_8017A640:
{
    r3 = 1;
}

loc_8017A644:
{
    ctx->lr = 0x8017A648u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801BAB2Cu>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x8017A64Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801BA9A4u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 180));
}

loc_8017A654:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8017A6DC;
    }
}

loc_8017A658:
{
    r0 = MemoryInline::FlatRead8((r28 + 147));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A66C;
    }
}

loc_8017A664:
{
    r3 = 0;
    // inline leaf 0x80126620 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26396), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126620
}

loc_8017A66C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 744));
    ctx->lr = 0x8017A674u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8017728Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8017A6DC;
}

loc_8017A678:
{
    r4 = MemoryInline::FlatRead32((r28 + 1032));
    r3 = MemoryInline::FlatRead32((r28 + 1036));
    r0 = MemoryInline::FlatRead32((r28 + 180));
    r3 = (r3 - r4);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 792));
    r3 = (r3 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1868));
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8017A69C:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6DC;
    }
}

loc_8017A6AC:
{
    r0 = MemoryInline::FlatRead8((r28 + 147));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A6B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A6D4;
    }
}

loc_8017A6B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 816));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r3 = fctiwzword0;
    r3 = (r3 & 65535);
    // inline leaf 0x80126620 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26396), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126620
}

loc_8017A6D4:
{
    f1.d = f30.d;
    ctx->lr = 0x8017A6DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8017728Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8017A6DC:
{
    r5 = MemoryInline::FlatRead32((r28 + 104));
}

loc_8017A6E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8017A764;
    }
}

loc_8017A6E8:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
    r4 = 1;
}

loc_8017A6F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8017A718;
    }
}

loc_8017A6F8:
{
    r3 = MemoryInline::FlatRead32((r28 + 1020));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017A704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017A718;
    }
}

loc_8017A708:
{
    r3 = MemoryInline::FlatRead32((r28 + 984));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017A714:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8017A71C;
    }
}

loc_8017A718:
{
    r4 = 0;
}

loc_8017A71C:
{
}

loc_8017A720:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8017A764;
    }
}

loc_8017A724:
{
}

loc_8017A728:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8017A75C;
    }
}

loc_8017A72C:
{
    r0 = MemoryInline::FlatRead32((r28 + 112));
}

loc_8017A734:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_8017A75C;
    }
}

loc_8017A738:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 972));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl8_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl8_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl8_0x80173E54;
    }
}

loc_inl8_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl8_0x80173E58;
}

loc_inl8_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl8_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl8_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r0 = MemoryInline::FlatRead32((r28 + 104));
    MemoryInline::FlatWrite32((r28 + 112), r0);
}

loc_8017A75C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 104), r0);
}

loc_8017A764:
{
    r3 = MemoryInline::FlatRead32((r28 + 108));
}

loc_8017A76C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8017A99C;
    }
}

loc_8017A770:
{
    r4 = 37;
    r5 = (r30 + 112);
    r0 = 1;
    r8 = 0;
    ctr = r4;
}

loc_8017A784:
{
    r4 = MemoryInline::FlatRead32(r5);
}

loc_8017A78C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8017A7A0;
    }
}

loc_8017A790:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017A798:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017A7A0;
    }
}

loc_8017A79C:
{
    goto loc_8017A7D0;
}

loc_8017A7A0:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_8017A7AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8017A7C0;
    }
}

loc_8017A7B0:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017A7B8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017A7C0;
    }
}

loc_8017A7BC:
{
    goto loc_8017A7D0;
}

loc_8017A7C0:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A784;
    }
}

loc_8017A7CC:
{
    r8 = -1;
}

loc_8017A7D0:
{
    r4 = 37;
    r5 = (r30 + 112);
    r7 = 0;
    ctr = r4;
}

loc_8017A7E0:
{
    r4 = MemoryInline::FlatRead32(r5);
}

loc_8017A7E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_8017A7FC;
    }
}

loc_8017A7EC:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017A7F4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_8017A7FC;
    }
}

loc_8017A7F8:
{
    goto loc_8017A82C;
}

loc_8017A7FC:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_8017A808:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_8017A81C;
    }
}

loc_8017A80C:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017A814:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_8017A81C;
    }
}

loc_8017A818:
{
    goto loc_8017A82C;
}

loc_8017A81C:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A7E0;
    }
}

loc_8017A828:
{
    r7 = -1;
}

loc_8017A82C:
{
    r4 = 37;
    r5 = (r30 + 112);
    r6 = 0;
    ctr = r4;
}

loc_8017A83C:
{
    r4 = MemoryInline::FlatRead32(r5);
}

loc_8017A844:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8017A858;
    }
}

loc_8017A848:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017A850:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(19))) {
        goto loc_8017A858;
    }
}

loc_8017A854:
{
    goto loc_8017A888;
}

loc_8017A858:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_8017A864:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8017A878;
    }
}

loc_8017A868:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017A870:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(19))) {
        goto loc_8017A878;
    }
}

loc_8017A874:
{
    goto loc_8017A888;
}

loc_8017A878:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A83C;
    }
}

loc_8017A884:
{
    r6 = -1;
}

loc_8017A888:
{
    r4 = 37;
    r9 = (r30 + 112);
    r5 = 0;
    ctr = r4;
}

loc_8017A898:
{
    r4 = MemoryInline::FlatRead32(r9);
}

loc_8017A8A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_8017A8B4;
    }
}

loc_8017A8A4:
{
    r4 = MemoryInline::FlatRead32((r9 + 4));
}

loc_8017A8AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(20))) {
        goto loc_8017A8B4;
    }
}

loc_8017A8B0:
{
    goto loc_8017A8E4;
}

loc_8017A8B4:
{
    r4 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_8017A8C0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_8017A8D4;
    }
}

loc_8017A8C4:
{
    r4 = MemoryInline::FlatRead32((r9 + 12));
}

loc_8017A8CC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(20))) {
        goto loc_8017A8D4;
    }
}

loc_8017A8D0:
{
    goto loc_8017A8E4;
}

loc_8017A8D4:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017A898;
    }
}

loc_8017A8E0:
{
    r5 = -1;
}

loc_8017A8E4:
{
    r4 = MemoryInline::FlatRead32((r28 + 16));
}

loc_8017A8EC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017A950;
    }
}

loc_8017A8F0:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 676));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8017A904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8017A950;
    }
}

loc_8017A908:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 676));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8017A91C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8017A950;
    }
}

loc_8017A920:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 676));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8017A934:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8017A950;
    }
}

loc_8017A938:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 676));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8017A94C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8017A954;
    }
}

loc_8017A950:
{
    r0 = 0;
}

loc_8017A954:
{
}

loc_8017A958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017A99C;
    }
}

loc_8017A95C:
{
}

loc_8017A960:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8017A994;
    }
}

loc_8017A964:
{
    r0 = MemoryInline::FlatRead32((r28 + 116));
}

loc_8017A96C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8017A994;
    }
}

loc_8017A970:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r25;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl9_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl9_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl9_0x80173E54;
    }
}

loc_inl9_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl9_0x80173E58;
}

loc_inl9_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl9_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl9_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r0 = MemoryInline::FlatRead32((r28 + 108));
    MemoryInline::FlatWrite32((r28 + 116), r0);
}

loc_8017A994:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 108), r0);
}

loc_8017A99C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8017A9A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017A9B0;
    }
}

loc_8017A9A4:
{
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x8017A9B0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8017AE68u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017A9B0:
{
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r4 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 44));
    ctr = r12;
    ctx->lr = 0x8017A9C8u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 492));
    r4 = (r28 + 524);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8017A9E0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017A9EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017AA20;
    }
}

loc_8017A9F0:
{
    r25 = r28;
    r26 = 0;
}

loc_8017A9F8:
{
    r3 = MemoryInline::FlatRead32((r25 + 496));
    r4 = (r28 + 524);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8017AA10u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
    r25 = (r25 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(4));
}

loc_8017AA1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8017A9F8;
    }
}

loc_8017AA20:
{
    r3 = MemoryInline::FlatRead32((r28 + 100));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8017AA28:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8017AA34;
    }
}

loc_8017AA2C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 100), r0);
}

loc_8017AA34:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 52), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 28u, (r1 + 80));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8017A2D8 func_8017A2D8 preserves=false fpr_mask=0x40000000
