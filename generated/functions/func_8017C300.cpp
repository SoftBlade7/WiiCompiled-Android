#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017C300(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8017C300;

loc_8017C300:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r30 = 0x80250000u;
    r26 = r3;
    r27 = r5;
    r30 = (r30 + 10112);
    ctx->lr = 0x8017C328u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8017F03Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r26 + 16));
    r31 = r3;
    r28 = 0;
}

loc_8017C338:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017D058;
    }
}

loc_8017C33C:
{
}

loc_8017C340:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_8017D058;
    }
}

loc_8017C344:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r26 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 28));
}

loc_8017C354:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8017D058;
    }
}

loc_8017C358:
{
    r5 = MemoryInline::FlatRead32(r26);
}

loc_8017C360:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8017C42C;
    }
}

loc_8017C364:
{
    r0 = MemoryInline::FlatRead32((r26 + 8));
}

loc_8017C36C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8017C42C;
    }
}

loc_8017C370:
{
    r0 = MemoryInline::FlatRead32((r26 + 12));
    r5 = (r30 + 16);
    r4 = 0;
    ctr = r0;
}

loc_8017C384:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8017C3B0;
    }
}

loc_8017C388:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_8017C390:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8017C3A4;
    }
}

loc_8017C394:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C39C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8017C3A4;
    }
}

loc_8017C3A0:
{
    goto loc_8017C3B4;
}

loc_8017C3A4:
{
    r5 = (r5 + 8);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C388;
    }
}

loc_8017C3B0:
{
    r4 = -1;
}

loc_8017C3B4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r26 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 628));
    r3 = r29;
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
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r0 = MemoryInline::FlatRead32(r26);
}

loc_8017C3D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8017D058;
    }
}

loc_8017C3DC:
{
    r0 = MemoryInline::FlatRead32((r26 + 100));
}

loc_8017C3E4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017C424;
    }
}

loc_8017C3E8:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017C3F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017C40C;
    }
}

loc_8017C3FC:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017C40Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017C40C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017C410:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017C41C;
    }
}

loc_8017C414:
{
    r3 = 4;
    ctx->lr = 0x8017C41Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017C41C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017C424:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017C42C:
{
    r0 = MemoryInline::FlatRead32((r26 + 8));
    r0 = (r3 - r0);
}

loc_8017C438:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_8017D058;
    }
}

loc_8017C43C:
{
    r3 = 0x80290000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + -18040);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8017C454u:
        goto loc_8017C454;
        break;
    case 0x8017C514u:
        goto loc_8017C514;
        break;
    case 0x8017CAACu:
        goto loc_8017CAAC;
        break;
    case 0x8017CB7Cu:
        goto loc_8017CB7C;
        break;
    case 0x8017CC4Cu:
        goto loc_8017CC4C;
        break;
    case 0x8017CD1Cu:
        goto loc_8017CD1C;
        break;
    case 0x8017CDECu:
        goto loc_8017CDEC;
        break;
    case 0x8017CEBCu:
        goto loc_8017CEBC;
        break;
    case 0x8017CF8Cu:
        goto loc_8017CF8C;
        break;
    default:
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
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8017C454:
{
}

loc_8017C458:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8017D058;
    }
}

loc_8017C45C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8017C460:
{
    r4 = 1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017C488;
    }
}

loc_8017C468:
{
    r3 = MemoryInline::FlatRead32((r26 + 1020));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017C488;
    }
}

loc_8017C478:
{
    r3 = MemoryInline::FlatRead32((r26 + 984));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C484:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8017C48C;
    }
}

loc_8017C488:
{
    r4 = 0;
}

loc_8017C48C:
{
}

loc_8017C490:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8017C508;
    }
}

loc_8017C494:
{
    r28 = MemoryInline::FlatRead32((r26 + 984));
    r3 = r28;
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
    r0 = 1;
    r4 = 3;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r26 + 100));
    MemoryInline::FlatWrite32((r26 + 112), r4);
}

loc_8017C4BC:
{
    MemoryInline::FlatWrite32((r26 + 104), r3);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017C500;
    }
}

loc_8017C4C4:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017C4D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017C4E8;
    }
}

loc_8017C4D8:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017C4E8u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017C4E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017C4EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017C4F8;
    }
}

loc_8017C4F0:
{
    r3 = 4;
    ctx->lr = 0x8017C4F8u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017C4F8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017C500:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017C508:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r26 + 104), r0);
    goto loc_8017D058;
}

loc_8017C514:
{
}

loc_8017C518:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8017C7E0;
    }
}

loc_8017C51C:
{
    r0 = 37;
    r3 = (r30 + 112);
    r29 = 0;
    ctr = r0;
}

loc_8017C52C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8017C534:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017C548;
    }
}

loc_8017C538:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8017C540:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8017C548;
    }
}

loc_8017C544:
{
    goto loc_8017C578;
}

loc_8017C548:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r29 = (r29 + 1);
}

loc_8017C554:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017C568;
    }
}

loc_8017C558:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8017C560:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8017C568;
    }
}

loc_8017C564:
{
    goto loc_8017C578;
}

loc_8017C568:
{
    r3 = (r3 + 16);
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C52C;
    }
}

loc_8017C574:
{
    r29 = -1;
}

loc_8017C578:
{
    r3 = 37;
    r5 = (r30 + 112);
    r0 = 1;
    r8 = 0;
    ctr = r3;
}

loc_8017C58C:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C594:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C5A8;
    }
}

loc_8017C598:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C5A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017C5A8;
    }
}

loc_8017C5A4:
{
    goto loc_8017C5D8;
}

loc_8017C5A8:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_8017C5B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C5C8;
    }
}

loc_8017C5B8:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C5C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017C5C8;
    }
}

loc_8017C5C4:
{
    goto loc_8017C5D8;
}

loc_8017C5C8:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C58C;
    }
}

loc_8017C5D4:
{
    r8 = -1;
}

loc_8017C5D8:
{
    r3 = 37;
    r5 = (r30 + 112);
    r7 = 0;
    ctr = r3;
}

loc_8017C5E8:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C5F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C604;
    }
}

loc_8017C5F4:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C5FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017C604;
    }
}

loc_8017C600:
{
    goto loc_8017C634;
}

loc_8017C604:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_8017C610:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C624;
    }
}

loc_8017C614:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C61C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017C624;
    }
}

loc_8017C620:
{
    goto loc_8017C634;
}

loc_8017C624:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C5E8;
    }
}

loc_8017C630:
{
    r7 = -1;
}

loc_8017C634:
{
    r3 = 37;
    r5 = (r30 + 112);
    r6 = 0;
    ctr = r3;
}

loc_8017C644:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C64C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C660;
    }
}

loc_8017C650:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C658:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017C660;
    }
}

loc_8017C65C:
{
    goto loc_8017C690;
}

loc_8017C660:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_8017C66C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C680;
    }
}

loc_8017C670:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C678:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017C680;
    }
}

loc_8017C67C:
{
    goto loc_8017C690;
}

loc_8017C680:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C644;
    }
}

loc_8017C68C:
{
    r6 = -1;
}

loc_8017C690:
{
    r3 = 37;
    r9 = (r30 + 112);
    r5 = 0;
    ctr = r3;
}

loc_8017C6A0:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_8017C6A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C6BC;
    }
}

loc_8017C6AC:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_8017C6B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017C6BC;
    }
}

loc_8017C6B8:
{
    goto loc_8017C6EC;
}

loc_8017C6BC:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_8017C6C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C6DC;
    }
}

loc_8017C6CC:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_8017C6D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017C6DC;
    }
}

loc_8017C6D8:
{
    goto loc_8017C6EC;
}

loc_8017C6DC:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C6A0;
    }
}

loc_8017C6E8:
{
    r5 = -1;
}

loc_8017C6EC:
{
}

loc_8017C6F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017C754;
    }
}

loc_8017C6F4:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C708:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017C754;
    }
}

loc_8017C70C:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C720:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017C754;
    }
}

loc_8017C724:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C738:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017C754;
    }
}

loc_8017C73C:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C750:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8017C758;
    }
}

loc_8017C754:
{
    r0 = 0;
}

loc_8017C758:
{
}

loc_8017C75C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017C7D8;
    }
}

loc_8017C760:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
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
    r3 = 0;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
    MemoryInline::FlatWrite32((r26 + 116), r29);
}

loc_8017C78C:
{
    MemoryInline::FlatWrite32((r26 + 108), r3);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017C7D0;
    }
}

loc_8017C794:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017C7A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017C7B8;
    }
}

loc_8017C7A8:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017C7B8u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017C7B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017C7BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017C7C8;
    }
}

loc_8017C7C0:
{
    r3 = 4;
    ctx->lr = 0x8017C7C8u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017C7C8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017C7D0:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017C7D8:
{
    MemoryInline::FlatWrite32((r26 + 108), r29);
    goto loc_8017D058;
}

loc_8017C7E0:
{
}

loc_8017C7E4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8017D058;
    }
}

loc_8017C7E8:
{
    r0 = 37;
    r3 = (r30 + 112);
    r29 = 0;
    ctr = r0;
}

loc_8017C7F8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8017C800:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017C814;
    }
}

loc_8017C804:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8017C80C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(19))) {
        goto loc_8017C814;
    }
}

loc_8017C810:
{
    goto loc_8017C844;
}

loc_8017C814:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r29 = (r29 + 1);
}

loc_8017C820:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017C834;
    }
}

loc_8017C824:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8017C82C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(19))) {
        goto loc_8017C834;
    }
}

loc_8017C830:
{
    goto loc_8017C844;
}

loc_8017C834:
{
    r3 = (r3 + 16);
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C7F8;
    }
}

loc_8017C840:
{
    r29 = -1;
}

loc_8017C844:
{
    r3 = 37;
    r5 = (r30 + 112);
    r0 = 1;
    r8 = 0;
    ctr = r3;
}

loc_8017C858:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C860:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C874;
    }
}

loc_8017C864:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C86C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017C874;
    }
}

loc_8017C870:
{
    goto loc_8017C8A4;
}

loc_8017C874:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_8017C880:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C894;
    }
}

loc_8017C884:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C88C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017C894;
    }
}

loc_8017C890:
{
    goto loc_8017C8A4;
}

loc_8017C894:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C858;
    }
}

loc_8017C8A0:
{
    r8 = -1;
}

loc_8017C8A4:
{
    r3 = 37;
    r5 = (r30 + 112);
    r7 = 0;
    ctr = r3;
}

loc_8017C8B4:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C8BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C8D0;
    }
}

loc_8017C8C0:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C8C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017C8D0;
    }
}

loc_8017C8CC:
{
    goto loc_8017C900;
}

loc_8017C8D0:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_8017C8DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C8F0;
    }
}

loc_8017C8E0:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C8E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017C8F0;
    }
}

loc_8017C8EC:
{
    goto loc_8017C900;
}

loc_8017C8F0:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C8B4;
    }
}

loc_8017C8FC:
{
    r7 = -1;
}

loc_8017C900:
{
    r3 = 37;
    r5 = (r30 + 112);
    r6 = 0;
    ctr = r3;
}

loc_8017C910:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C918:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C92C;
    }
}

loc_8017C91C:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C924:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017C92C;
    }
}

loc_8017C928:
{
    goto loc_8017C95C;
}

loc_8017C92C:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_8017C938:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C94C;
    }
}

loc_8017C93C:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C944:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017C94C;
    }
}

loc_8017C948:
{
    goto loc_8017C95C;
}

loc_8017C94C:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C910;
    }
}

loc_8017C958:
{
    r6 = -1;
}

loc_8017C95C:
{
    r3 = 37;
    r9 = (r30 + 112);
    r5 = 0;
    ctr = r3;
}

loc_8017C96C:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_8017C974:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C988;
    }
}

loc_8017C978:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_8017C980:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017C988;
    }
}

loc_8017C984:
{
    goto loc_8017C9B8;
}

loc_8017C988:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_8017C994:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C9A8;
    }
}

loc_8017C998:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_8017C9A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017C9A8;
    }
}

loc_8017C9A4:
{
    goto loc_8017C9B8;
}

loc_8017C9A8:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C96C;
    }
}

loc_8017C9B4:
{
    r5 = -1;
}

loc_8017C9B8:
{
}

loc_8017C9BC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017CA20;
    }
}

loc_8017C9C0:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_7 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C9D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017CA20;
    }
}

loc_8017C9D8:
{
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C9EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017CA20;
    }
}

loc_8017C9F0:
{
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_9 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017CA04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017CA20;
    }
}

loc_8017CA08:
{
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_10 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017CA1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8017CA24;
    }
}

loc_8017CA20:
{
    r0 = 0;
}

loc_8017CA24:
{
}

loc_8017CA28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017CAA4;
    }
}

loc_8017CA2C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl4_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl4_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
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
    r0 = 1;
    r3 = 0;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
    MemoryInline::FlatWrite32((r26 + 116), r29);
}

loc_8017CA58:
{
    MemoryInline::FlatWrite32((r26 + 108), r3);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017CA9C;
    }
}

loc_8017CA60:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017CA70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017CA84;
    }
}

loc_8017CA74:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017CA84u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CA84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017CA88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017CA94;
    }
}

loc_8017CA8C:
{
    r3 = 4;
    ctx->lr = 0x8017CA94u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CA94:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017CA9C:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017CAA4:
{
    MemoryInline::FlatWrite32((r26 + 108), r29);
    goto loc_8017D058;
}

loc_8017CAAC:
{
}

loc_8017CAB0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8017D058;
    }
}

loc_8017CAB4:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017CAC4:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017CACC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017CAE0;
    }
}

loc_8017CAD0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017CAD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CAE0;
    }
}

loc_8017CADC:
{
    goto loc_8017CB10;
}

loc_8017CAE0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017CAEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8017CB00;
    }
}

loc_8017CAF0:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017CAF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CB00;
    }
}

loc_8017CAFC:
{
    goto loc_8017CB10;
}

loc_8017CB00:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017CAC4;
    }
}

loc_8017CB0C:
{
    r3 = -1;
}

loc_8017CB10:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
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
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
}

loc_8017CB34:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017CB74;
    }
}

loc_8017CB38:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017CB48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017CB5C;
    }
}

loc_8017CB4C:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017CB5Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CB5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017CB60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017CB6C;
    }
}

loc_8017CB64:
{
    r3 = 4;
    ctx->lr = 0x8017CB6Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CB6C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017CB74:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017CB7C:
{
}

loc_8017CB80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8017D058;
    }
}

loc_8017CB84:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017CB94:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017CB9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017CBB0;
    }
}

loc_8017CBA0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017CBA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CBB0;
    }
}

loc_8017CBAC:
{
    goto loc_8017CBE0;
}

loc_8017CBB0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017CBBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8017CBD0;
    }
}

loc_8017CBC0:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017CBC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CBD0;
    }
}

loc_8017CBCC:
{
    goto loc_8017CBE0;
}

loc_8017CBD0:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017CB94;
    }
}

loc_8017CBDC:
{
    r3 = -1;
}

loc_8017CBE0:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl6_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl6_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl6_0x80173E54;
    }
}

loc_inl6_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl6_0x80173E58;
}

loc_inl6_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl6_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl6_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
}

loc_8017CC04:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017CC44;
    }
}

loc_8017CC08:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017CC18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017CC2C;
    }
}

loc_8017CC1C:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017CC2Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CC2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017CC30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017CC3C;
    }
}

loc_8017CC34:
{
    r3 = 4;
    ctx->lr = 0x8017CC3Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CC3C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017CC44:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017CC4C:
{
}

loc_8017CC50:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8017D058;
    }
}

loc_8017CC54:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017CC64:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017CC6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017CC80;
    }
}

loc_8017CC70:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017CC78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CC80;
    }
}

loc_8017CC7C:
{
    goto loc_8017CCB0;
}

loc_8017CC80:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017CC8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8017CCA0;
    }
}

loc_8017CC90:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017CC98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CCA0;
    }
}

loc_8017CC9C:
{
    goto loc_8017CCB0;
}

loc_8017CCA0:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017CC64;
    }
}

loc_8017CCAC:
{
    r3 = -1;
}

loc_8017CCB0:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl7_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl7_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl7_0x80173E54;
    }
}

loc_inl7_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl7_0x80173E58;
}

loc_inl7_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl7_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl7_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
}

loc_8017CCD4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017CD14;
    }
}

loc_8017CCD8:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017CCE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017CCFC;
    }
}

loc_8017CCEC:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017CCFCu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CCFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017CD00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017CD0C;
    }
}

loc_8017CD04:
{
    r3 = 4;
    ctx->lr = 0x8017CD0Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CD0C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017CD14:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017CD1C:
{
}

loc_8017CD20:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8017D058;
    }
}

loc_8017CD24:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017CD34:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017CD3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8017CD50;
    }
}

loc_8017CD40:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017CD48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CD50;
    }
}

loc_8017CD4C:
{
    goto loc_8017CD80;
}

loc_8017CD50:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017CD5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8017CD70;
    }
}

loc_8017CD60:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017CD68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CD70;
    }
}

loc_8017CD6C:
{
    goto loc_8017CD80;
}

loc_8017CD70:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017CD34;
    }
}

loc_8017CD7C:
{
    r3 = -1;
}

loc_8017CD80:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
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
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
}

loc_8017CDA4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017CDE4;
    }
}

loc_8017CDA8:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017CDB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017CDCC;
    }
}

loc_8017CDBC:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017CDCCu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CDCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017CDD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017CDDC;
    }
}

loc_8017CDD4:
{
    r3 = 4;
    ctx->lr = 0x8017CDDCu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CDDC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017CDE4:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017CDEC:
{
}

loc_8017CDF0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8017D058;
    }
}

loc_8017CDF4:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017CE04:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017CE0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8017CE20;
    }
}

loc_8017CE10:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017CE18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CE20;
    }
}

loc_8017CE1C:
{
    goto loc_8017CE50;
}

loc_8017CE20:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017CE2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8017CE40;
    }
}

loc_8017CE30:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017CE38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017CE40;
    }
}

loc_8017CE3C:
{
    goto loc_8017CE50;
}

loc_8017CE40:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017CE04;
    }
}

loc_8017CE4C:
{
    r3 = -1;
}

loc_8017CE50:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
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
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
}

loc_8017CE74:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017CEB4;
    }
}

loc_8017CE78:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017CE88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017CE9C;
    }
}

loc_8017CE8C:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017CE9Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CE9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017CEA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017CEAC;
    }
}

loc_8017CEA4:
{
    r3 = 4;
    ctx->lr = 0x8017CEACu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CEAC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017CEB4:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017CEBC:
{
}

loc_8017CEC0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_8017D058;
    }
}

loc_8017CEC4:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017CED4:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017CEDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8017CEF0;
    }
}

loc_8017CEE0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017CEE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8017CEF0;
    }
}

loc_8017CEEC:
{
    goto loc_8017CF20;
}

loc_8017CEF0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017CEFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8017CF10;
    }
}

loc_8017CF00:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017CF08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8017CF10;
    }
}

loc_8017CF0C:
{
    goto loc_8017CF20;
}

loc_8017CF10:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017CED4;
    }
}

loc_8017CF1C:
{
    r3 = -1;
}

loc_8017CF20:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl10_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl10_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl10_0x80173E54;
    }
}

loc_inl10_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl10_0x80173E58;
}

loc_inl10_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl10_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl10_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
}

loc_8017CF44:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017CF84;
    }
}

loc_8017CF48:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017CF58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017CF6C;
    }
}

loc_8017CF5C:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017CF6Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CF6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017CF70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017CF7C;
    }
}

loc_8017CF74:
{
    r3 = 4;
    ctx->lr = 0x8017CF7Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CF7C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017CF84:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017CF8C:
{
}

loc_8017CF90:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_8017D058;
    }
}

loc_8017CF94:
{
    r0 = 37;
    r4 = (r30 + 112);
    r3 = 0;
    ctr = r0;
}

loc_8017CFA4:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8017CFAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_8017CFC0;
    }
}

loc_8017CFB0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8017CFB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8017CFC0;
    }
}

loc_8017CFBC:
{
    goto loc_8017CFF0;
}

loc_8017CFC0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_8017CFCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_8017CFE0;
    }
}

loc_8017CFD0:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8017CFD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8017CFE0;
    }
}

loc_8017CFDC:
{
    goto loc_8017CFF0;
}

loc_8017CFE0:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017CFA4;
    }
}

loc_8017CFEC:
{
    r3 = -1;
}

loc_8017CFF0:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl11_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl11_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl11_0x80173E54;
    }
}

loc_inl11_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl11_0x80173E58;
}

loc_inl11_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl11_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl11_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
}

loc_8017D014:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017D054;
    }
}

loc_8017D018:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017D028:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D03C;
    }
}

loc_8017D02C:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017D03Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017D03C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017D040:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017D04C;
    }
}

loc_8017D044:
{
    r3 = 4;
    ctx->lr = 0x8017D04Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017D04C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017D054:
{
    r28 = 1;
}

loc_8017D058:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r4 = (r3 + 1);
}

loc_8017D064:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(r4))) {
        goto loc_8017D074;
    }
}

loc_8017D068:
{
    r0 = (r3 + 9);
}

loc_8017D070:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(r0))) {
        goto loc_8017D0A8;
    }
}

loc_8017D074:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r0 = (r3 + 9);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    goto loc_8017D0BC;
}

loc_8017D0A8:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 28), r0);
}

loc_8017D0BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8017D0C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8017D0C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0CC:
{
    r0 = MemoryInline::FlatRead32(r27);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 608));
    r0 = MemoryInline::FlatRead8((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017D0E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 468));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 744));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8017D0F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 848));
    MemoryInline::FlatWriteFloat32((r4 + 452), f0.d);
    r0 = MemoryInline::FlatRead32(r27);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 608));
    ctx->lr = 0x8017D118u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80175ED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8017D118:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8017C300 func_8017C300 preserves=true fpr_mask=0x00000000
