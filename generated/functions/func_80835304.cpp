#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80835304(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80835304;

loc_80835304:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r29 = r4;
    r30 = r5;
    ctx->lr = 0x8083532Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80835A8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x808B0000u;
    r9 = MemoryInline::FlatRead32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -13592));
    r0 = 2;
    r10 = r9;
    goto loc_80835504;
}

loc_80835344:
{
    r3 = (r10 & r9);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r3));
}

loc_8083534C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80835500;
    }
}

loc_80835350:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r6 = 0;
    r5 = 1;
    r8 = 0;
    r31 = (r10 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r3 = (r3_rot_2 & -16);
    r7 = (r29 + r3);
    ctr = r0;
}

loc_80835370:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r3 = (r3 & r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808353C0;
    }
}

loc_8083537C:
{
    r3 = (r31 & r5);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8083539C;
    }
}

loc_80835384:
{
    f1.d = MemoryInline::FlatReadFloat32((r7 + 160));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8083538C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808353C0;
    }
}

loc_80835394:
{
    r3 = 0;
    goto loc_80835430;
}

loc_8083539C:
{
    r4 = (r31 | r5);
    r3 = (r8 + r29);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_3 & -16);
    r3 = (r4 + r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 160));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808353B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808353C0;
    }
}

loc_808353B8:
{
    r3 = 0;
    goto loc_80835430;
}

loc_808353C0:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
    r8 = (r8 + 4);
    r3 = (r3 & r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80835418;
    }
}

loc_808353D4:
{
    r3 = (r31 & r5);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808353F4;
    }
}

loc_808353DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r7 + 164));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808353E4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80835418;
    }
}

loc_808353EC:
{
    r3 = 0;
    goto loc_80835430;
}

loc_808353F4:
{
    r4 = (r31 | r5);
    r3 = (r8 + r29);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_5 & -16);
    r3 = (r4 + r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 160));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8083540C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80835418;
    }
}

loc_80835410:
{
    r3 = 0;
    goto loc_80835430;
}

loc_80835418:
{
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & -2);
    r7 = (r7 + 8);
    r8 = (r8 + 4);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80835370;
    }
}

loc_8083542C:
{
    r3 = 1;
}

loc_80835430:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80835434:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80835500;
    }
}

loc_80835438:
{
    r3 = 0x808B0000u;
    MemoryInline::FlatWrite32(r29, r31);
    f31.d = MemoryInline::FlatReadFloat32((r3 + -13592));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    MemoryInline::FlatWriteFloat32((r30 + 8), f31.d);
    r27 = (r29 + r0);
    r26 = (r29 + 16);
    r28 = 0;
    MemoryInline::FlatWriteFloat32((r30 + 4), f31.d);
    r29 = 1;
    MemoryInline::FlatWriteFloat32(r30, f31.d);
}

loc_80835464:
{
    r0 = (r31 & r29);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808354B0;
    }
}

loc_8083546C:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 160));
    r4 = r26;
    r3 = (r1 + 8);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
}

loc_808354B0:
{
    r28 = (r28 + 1);
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r29 = (r29_rot_2 & -2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_808354BC:
{
    r27 = (r27 + 4);
    r26 = (r26 + 12);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80835464;
    }
}

loc_808354C8:
{
    r3 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -13576));
    r3 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32(r30, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    goto loc_80835630;
}

loc_80835500:
{
    r10 = (r10 + -1);
}

loc_80835504:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_80835508:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80835344;
    }
}

loc_8083550C:
{
    r8 = MemoryInline::FlatRead32((r29 + 8));
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -13592));
    r0 = 2;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r3 = (r3_rot_4 & -16);
    r5 = 0;
    r6 = (r29 + r3);
    r4 = 1;
    r7 = 0;
    ctr = r0;
}

loc_80835534:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80835584;
    }
}

loc_80835540:
{
    r0 = (r8 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80835560;
    }
}

loc_80835548:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 160));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80835550:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80835584;
    }
}

loc_80835558:
{
    r0 = 0;
    goto loc_808355F4;
}

loc_80835560:
{
    r3 = (r8 | r4);
    r0 = (r7 + r29);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r3 = (r3_rot_6 & -16);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 160));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80835578:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80835584;
    }
}

loc_8083557C:
{
    r0 = 0;
    goto loc_808355F4;
}

loc_80835584:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_10 & -2);
    r7 = (r7 + 4);
    r0 = (r0 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808355DC;
    }
}

loc_80835598:
{
    r0 = (r8 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808355B8;
    }
}

loc_808355A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 164));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808355A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808355DC;
    }
}

loc_808355B0:
{
    r0 = 0;
    goto loc_808355F4;
}

loc_808355B8:
{
    r3 = (r8 | r4);
    r0 = (r7 + r29);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r3 = (r3_rot_8 & -16);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 160));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808355D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808355DC;
    }
}

loc_808355D4:
{
    r0 = 0;
    goto loc_808355F4;
}

loc_808355DC:
{
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_11 & -2);
    r6 = (r6 + 8);
    r7 = (r7 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80835534;
    }
}

loc_808355F0:
{
    r0 = 1;
}

loc_808355F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808355F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083562C;
    }
}

loc_808355FC:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    MemoryInline::FlatWrite32(r29, r8);
    r0 = (r0 * 12);
    r4 = (r29 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    goto loc_80835630;
}

loc_8083562C:
{
    r3 = 0;
}

loc_80835630:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 48));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 68));
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF017FB gpr_write=0xFFF01FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80835304 func_80835304 preserves=false fpr_mask=0x80000000
