#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80670248(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80670248;

loc_80670248:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -1216), 0, 1224u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -1216), r1);
    r1 = (r1 + -1216);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 1220u, (r1 + 1220), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1168u, (r1 + 1168), r20);
        MemoryInline::WriteResolved32(guest_range_0, 1172u, (r1 + 1172), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1176u, (r1 + 1176), r22);
        MemoryInline::WriteResolved32(guest_range_0, 1180u, (r1 + 1180), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1184u, (r1 + 1184), r24);
        MemoryInline::WriteResolved32(guest_range_0, 1188u, (r1 + 1188), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1192u, (r1 + 1192), r26);
        MemoryInline::WriteResolved32(guest_range_0, 1196u, (r1 + 1196), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1200u, (r1 + 1200), r28);
        MemoryInline::WriteResolved32(guest_range_0, 1204u, (r1 + 1204), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1208u, (r1 + 1208), r30);
        MemoryInline::WriteResolved32(guest_range_0, 1212u, (r1 + 1212), r31);
    }
    r21 = r4;
    r22 = r5;
    r5 = (r1 + 12);
    r3 = r21;
    r4 = 0;
    // inline leaf 0x801DE43C (13 guest instruction(s))
}

loc_inl0_0x801DE43C:
{
}

loc_inl0_0x801DE440:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(2))) {
        goto loc_inl0_0x801DE450;
    }
}

loc_inl0_0x801DE444:
{
    r0 = MemoryInline::FlatRead8((r3 + 201));
}

loc_inl0_0x801DE44C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x801DE458;
    }
}

loc_inl0_0x801DE450:
{
    r3 = -3;
    goto loc_inl0_cont_801DE43C;
}

loc_inl0_0x801DE458:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 120));
    MemoryInline::FlatWriteRam32(r5, r0);
}

loc_inl0_cont_801DE43C:
{
    // end of inlined leaf 0x801DE43C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670274:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670280;
    }
}

loc_80670278:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_80670418;
}

loc_80670280:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_80670288:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80670294;
    }
}

loc_8067028C:
{
    r3 = 1;
    goto loc_80670418;
}

loc_80670294:
{
    r3 = r21;
    r5 = (r22 + 8);
    r4 = 0;
    r6 = 1092;
    ctx->lr = 0x806702A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801E4DECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806702AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806702B8;
    }
}

loc_806702B0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_80670418;
}

loc_806702B8:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r23 = (r3 + -20);
    // inline leaf 0x801D2724 (3 guest instruction(s))
    r3 = 0x80250000u;
    r3 = (r3 + 12176);
    // end of inlined leaf 0x801D2724
    r5 = 0x808A0000u;
    r4 = r3;
    r3 = (r1 + 56);
    r6 = 20;
    r5 = (r5 + -22136);
    ctx->lr = 0x806702DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2ACCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = r23;
    r3 = (r1 + 56);
    r4 = (r22 + 28);
    ctx->lr = 0x806702ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2D08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 56);
    r4 = (r1 + 32);
    ctx->lr = 0x806702F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2D18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 2;
    r5 = (r22 + 8);
    r6 = (r1 + 32);
    r4 = 0;
    ctr = r0;
}

loc_8067030C:
{
    r3 = MemoryInline::FlatRead8(r6);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80670318:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670324;
    }
}

loc_8067031C:
{
    r0 = 0;
    goto loc_80670410;
}

loc_80670324:
{
    r3 = MemoryInline::FlatRead8((r6 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_80670330:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8067033C;
    }
}

loc_80670334:
{
    r0 = 0;
    goto loc_80670410;
}

loc_8067033C:
{
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 2));
}

loc_80670348:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670354;
    }
}

loc_8067034C:
{
    r0 = 0;
    goto loc_80670410;
}

loc_80670354:
{
    r3 = MemoryInline::FlatRead8((r6 + 3));
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_80670360:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8067036C;
    }
}

loc_80670364:
{
    r0 = 0;
    goto loc_80670410;
}

loc_8067036C:
{
    r3 = MemoryInline::FlatRead8((r6 + 4));
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_80670378:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670384;
    }
}

loc_8067037C:
{
    r0 = 0;
    goto loc_80670410;
}

loc_80670384:
{
    r3 = MemoryInline::FlatRead8((r6 + 5));
    r0 = MemoryInline::FlatRead8((r5 + 5));
}

loc_80670390:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8067039C;
    }
}

loc_80670394:
{
    r0 = 0;
    goto loc_80670410;
}

loc_8067039C:
{
    r3 = MemoryInline::FlatRead8((r6 + 6));
    r0 = MemoryInline::FlatRead8((r5 + 6));
}

loc_806703A8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806703B4;
    }
}

loc_806703AC:
{
    r0 = 0;
    goto loc_80670410;
}

loc_806703B4:
{
    r3 = MemoryInline::FlatRead8((r6 + 7));
    r0 = MemoryInline::FlatRead8((r5 + 7));
}

loc_806703C0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806703CC;
    }
}

loc_806703C4:
{
    r0 = 0;
    goto loc_80670410;
}

loc_806703CC:
{
    r3 = MemoryInline::FlatRead8((r6 + 8));
    r0 = MemoryInline::FlatRead8((r5 + 8));
}

loc_806703D8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806703E4;
    }
}

loc_806703DC:
{
    r0 = 0;
    goto loc_80670410;
}

loc_806703E4:
{
    r3 = MemoryInline::FlatRead8((r6 + 9));
    r0 = MemoryInline::FlatRead8((r5 + 9));
}

loc_806703F0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806703FC;
    }
}

loc_806703F4:
{
    r0 = 0;
    goto loc_80670410;
}

loc_806703FC:
{
    r5 = (r5 + 10);
    r6 = (r6 + 10);
    r4 = (r4 + 9);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8067030C;
    }
}

loc_8067040C:
{
    r0 = 1;
}

loc_80670410:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_80670418:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8067041C:
{
    r25 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067064C;
    }
}

loc_80670424:
{
    r30 = 65536;
    r3 = 0x808B0000u;
    r24 = (r22 + 28);
    r23 = 0;
    r31 = (r3 + 11400);
    r29 = (r30 + -29504);
    r28 = 0x809C0000u;
}

loc_80670440:
{
    r4 = (r23 & 255);
    r5 = MemoryInline::FlatRead32((r28 + -10424));
    r0 = (r29 * r4);
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
}

loc_80670460:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20548))) {
        goto loc_8067063C;
    }
}

loc_80670464:
{
    r0 = (r30 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r26 = (r3 + 56);
    r3 = (r26 + 65536);
    r3 = (r3 + -28744);
    // inline leaf 0x800EC150 (13 guest instruction(s))
}

loc_inl2_0x800EC150:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r4 = 0;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_4 & 3);
}

loc_inl2_0x800EC160:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl2_0x800EC174;
    }
}

loc_inl2_0x800EC164:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_inl2_0x800EC16C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl2_0x800EC174;
    }
}

loc_inl2_0x800EC170:
{
    r4 = 1;
}

loc_inl2_0x800EC174:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
}

loc_inl2_cont_800EC150:
{
    // end of inlined leaf 0x800EC150
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670484:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067063C;
    }
}

loc_80670488:
{
    r3 = (r26 + 65536);
    r3 = (r3 + -28744);
    ctx->lr = 0x80670494u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800EC6BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r24 + 8));
    r5 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r0 ^ r3);
    r3 = (r5 ^ r4);
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8067063C;
    }
}

loc_806704AC:
{
    MemoryInline::FlatWriteRam32((r1 + 256), r31);
    r3 = (r1 + 264);
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x806704C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r20 = 0;
}

loc_806704C4:
{
    r0 = (r20 & 65535);
    r3 = (r1 + 256);
    r0 = (r0 * 448);
    r4 = (r26 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x806704DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806704E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670514;
    }
}

loc_806704E4:
{
    r3 = (r1 + 24);
    r4 = (r1 + 264);
    r5 = 8;
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
    r3 = r24;
    r4 = (r1 + 24);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80670508:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80670514;
    }
}

loc_8067050C:
{
    r0 = 1;
    goto loc_80670524;
}

loc_80670514:
{
    r20 = (r20 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(30));
}

loc_8067051C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806704C4;
    }
}

loc_80670520:
{
    r0 = 0;
}

loc_80670524:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80670528:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670534;
    }
}

loc_8067052C:
{
    r0 = 0;
    goto loc_806705C0;
}

loc_80670534:
{
    MemoryInline::FlatWriteRam32((r1 + 712), r31);
    r3 = (r1 + 720);
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x80670548u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r20 = 0;
}

loc_8067054C:
{
    r0 = (r20 & 65535);
    r3 = (r1 + 712);
    r0 = (r0 * 448);
    r4 = (r26 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x80670564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80670568:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80670578;
    }
}

loc_8067056C:
{
    r27 = (r20 & 65535);
    r0 = 1;
    goto loc_80670588;
}

loc_80670578:
{
    r20 = (r20 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(30));
}

loc_80670580:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067054C;
    }
}

loc_80670584:
{
    r0 = 0;
}

loc_80670588:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8067058C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806705BC;
    }
}

loc_80670590:
{
    r5 = r24;
    r3 = (r1 + 256);
    r4 = (r27 & 255);
    ctx->lr = 0x806705A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80519704u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r27 * 448);
    r3 = (r1 + 256);
    r4 = (r26 + r0);
    r4 = (r4 + 22992);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    goto loc_806705C0;
}

loc_806705BC:
{
    r0 = 2;
}

loc_806705C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806705C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067064C;
    }
}

loc_806705C8:
{
}

loc_806705CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_806705DC;
    }
}

loc_806705D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806705D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670634;
    }
}

loc_806705D8:
{
    goto loc_8067063C;
}

loc_806705DC:
{
    r3 = r21;
    r4 = (r1 + 16);
    // inline leaf 0x801DE4EC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x801DE4EC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806705EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806705FC;
    }
}

loc_806705F0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r25 = r3;
    goto loc_8067064C;
}

loc_806705FC:
{
    r3 = MemoryInline::FlatRead32(r22);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(100));
}

loc_80670608:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8067062C;
    }
}

loc_8067060C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r4 = MemoryInline::FlatRead32(r22);
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8067062C:
{
    r3 = 0;
    goto loc_80670698;
}

loc_80670634:
{
    r3 = 0;
    goto loc_80670698;
}

loc_8067063C:
{
    r23 = (r23 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(4));
}

loc_80670644:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80670440;
    }
}

loc_80670648:
{
    r25 = 0;
}

loc_8067064C:
{
    r3 = r21;
    r4 = (r1 + 8);
    // inline leaf 0x801DE4EC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x801DE4EC
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = 1;
    ctx->lr = 0x80670664u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801DEA58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670668:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670678;
    }
}

loc_8067066C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r20 = r3;
    goto loc_8067067C;
}

loc_80670678:
{
    r20 = 0;
}

loc_8067067C:
{
    r3 = r20;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl5_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl5_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl5_0x8023320C;
    }
}

loc_inl5_0x80233204:
{
}

loc_inl5_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl5_0x80233214;
    }
}

loc_inl5_0x8023320C:
{
    r3 = 1;
    goto loc_inl5_cont_802331F8;
}

loc_inl5_0x80233214:
{
    r3 = 0;
}

loc_inl5_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670688:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670694;
    }
}

loc_8067068C:
{
    r3 = r20;
    goto loc_80670698;
}

loc_80670694:
{
    r3 = r25;
}

loc_80670698:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 1168), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 1168));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 1172));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 1176));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 1180));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 1184));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 1188));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 1192));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 1196));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 1200));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 1204));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 1208));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 1212));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 1220));
    ctx->lr = r0;
    r1 = (r1 + 1216);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80670248 func_80670248 preserves=true fpr_mask=0x00000000
