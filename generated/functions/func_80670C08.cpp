#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80670C08(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_80670C08;

loc_80670C08:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -960), 0, 968u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -960), r1);
    r1 = (r1 + -960);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 964u, (r1 + 964), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 924u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 924u, (r1 + 924), r23);
        MemoryInline::WriteResolved32(guest_range_0, 928u, (r1 + 928), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 932u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 932u, (r1 + 932), r25);
        MemoryInline::WriteResolved32(guest_range_0, 936u, (r1 + 936), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 940u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 940u, (r1 + 940), r27);
        MemoryInline::WriteResolved32(guest_range_0, 944u, (r1 + 944), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 948u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 948u, (r1 + 948), r29);
        MemoryInline::WriteResolved32(guest_range_0, 952u, (r1 + 952), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 956u, (r1 + 956), r31);
    r24 = r4;
    r25 = r5;
    r4 = (r1 + 16);
    r3 = r24;
    // inline leaf 0x801DE574 (11 guest instruction(s))
}

loc_inl0_0x801DE574:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 8192);
}

loc_inl0_0x801DE57C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x801DE590;
    }
}

loc_inl0_0x801DE580:
{
    r0 = 0;
    r3 = -13;
    MemoryInline::FlatWriteRam32(r4, r0);
    goto loc_inl0_cont_801DE574;
}

loc_inl0_0x801DE590:
{
    r0 = MemoryInline::FlatRead32((r3 + 236));
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
}

loc_inl0_cont_801DE574:
{
    // end of inlined leaf 0x801DE574
    r3 = r24;
    r5 = (r1 + 12);
    r4 = 1;
    // inline leaf 0x801DE43C (13 guest instruction(s))
}

loc_inl1_0x801DE43C:
{
}

loc_inl1_0x801DE440:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(2))) {
        goto loc_inl1_0x801DE450;
    }
}

loc_inl1_0x801DE444:
{
    r0 = MemoryInline::FlatRead8((r3 + 201));
}

loc_inl1_0x801DE44C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x801DE458;
    }
}

loc_inl1_0x801DE450:
{
    r3 = -3;
    goto loc_inl1_cont_801DE43C;
}

loc_inl1_0x801DE458:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 120));
    MemoryInline::FlatWriteRam32(r5, r0);
}

loc_inl1_cont_801DE43C:
{
    // end of inlined leaf 0x801DE43C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670C40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670C4C;
    }
}

loc_80670C44:
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
    goto loc_80670DE4;
}

loc_80670C4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_80670C54:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80670C60;
    }
}

loc_80670C58:
{
    r3 = 1;
    goto loc_80670DE4;
}

loc_80670C60:
{
    r3 = r24;
    r5 = (r25 + 12);
    r4 = 1;
    r6 = 10260;
    ctx->lr = 0x80670C74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

loc_80670C78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670C84;
    }
}

loc_80670C7C:
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
    goto loc_80670DE4;
}

loc_80670C84:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r23 = (r3 + -20);
    // inline leaf 0x801D2724 (3 guest instruction(s))
    r3 = 0x80250000u;
    r3 = (r3 + 12176);
    // end of inlined leaf 0x801D2724
    r5 = 0x808A0000u;
    r4 = r3;
    r3 = (r1 + 40);
    r6 = 20;
    r5 = (r5 + -22136);
    ctx->lr = 0x80670CA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r3 = (r1 + 40);
    r4 = (r25 + 32);
    ctx->lr = 0x80670CB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r3 = (r1 + 40);
    r4 = (r1 + 20);
    ctx->lr = 0x80670CC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r5 = (r25 + 12);
    r6 = (r1 + 20);
    r4 = 0;
    ctr = r0;
}

loc_80670CD8:
{
    r3 = MemoryInline::FlatRead8(r6);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80670CE4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670CF0;
    }
}

loc_80670CE8:
{
    r0 = 0;
    goto loc_80670DDC;
}

loc_80670CF0:
{
    r3 = MemoryInline::FlatRead8((r6 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_80670CFC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670D08;
    }
}

loc_80670D00:
{
    r0 = 0;
    goto loc_80670DDC;
}

loc_80670D08:
{
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 2));
}

loc_80670D14:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670D20;
    }
}

loc_80670D18:
{
    r0 = 0;
    goto loc_80670DDC;
}

loc_80670D20:
{
    r3 = MemoryInline::FlatRead8((r6 + 3));
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_80670D2C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670D38;
    }
}

loc_80670D30:
{
    r0 = 0;
    goto loc_80670DDC;
}

loc_80670D38:
{
    r3 = MemoryInline::FlatRead8((r6 + 4));
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_80670D44:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670D50;
    }
}

loc_80670D48:
{
    r0 = 0;
    goto loc_80670DDC;
}

loc_80670D50:
{
    r3 = MemoryInline::FlatRead8((r6 + 5));
    r0 = MemoryInline::FlatRead8((r5 + 5));
}

loc_80670D5C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670D68;
    }
}

loc_80670D60:
{
    r0 = 0;
    goto loc_80670DDC;
}

loc_80670D68:
{
    r3 = MemoryInline::FlatRead8((r6 + 6));
    r0 = MemoryInline::FlatRead8((r5 + 6));
}

loc_80670D74:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670D80;
    }
}

loc_80670D78:
{
    r0 = 0;
    goto loc_80670DDC;
}

loc_80670D80:
{
    r3 = MemoryInline::FlatRead8((r6 + 7));
    r0 = MemoryInline::FlatRead8((r5 + 7));
}

loc_80670D8C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670D98;
    }
}

loc_80670D90:
{
    r0 = 0;
    goto loc_80670DDC;
}

loc_80670D98:
{
    r3 = MemoryInline::FlatRead8((r6 + 8));
    r0 = MemoryInline::FlatRead8((r5 + 8));
}

loc_80670DA4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670DB0;
    }
}

loc_80670DA8:
{
    r0 = 0;
    goto loc_80670DDC;
}

loc_80670DB0:
{
    r3 = MemoryInline::FlatRead8((r6 + 9));
    r0 = MemoryInline::FlatRead8((r5 + 9));
}

loc_80670DBC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670DC8;
    }
}

loc_80670DC0:
{
    r0 = 0;
    goto loc_80670DDC;
}

loc_80670DC8:
{
    r5 = (r5 + 10);
    r6 = (r6 + 10);
    r4 = (r4 + 9);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80670CD8;
    }
}

loc_80670DD8:
{
    r0 = 1;
}

loc_80670DDC:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_80670DE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670DE8:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80670FA0;
    }
}

loc_80670DF0:
{
    r4 = MemoryInline::FlatRead32((r25 + 8));
    r3 = (r25 + 32);
    ctx->lr = 0x80670DFCu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051D1B4u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670E00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80670E0C;
    }
}

loc_80670E04:
{
    r27 = 1;
    goto loc_80670FA0;
}

loc_80670E0C:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80670E1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80670E3C;
    }
}

loc_80670E20:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r31 = (r3 + 56);
    goto loc_80670E40;
}

loc_80670E3C:
{
    r31 = 0;
}

loc_80670E40:
{
    r3 = 0x808B0000u;
    r30 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r3 + 11400);
    MemoryInline::FlatWriteRam32((r1 + 456), r3);
    r3 = (r1 + 464);
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x80670E60u;
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
    r28 = (r31 + 65536);
    r27 = (r31 + 22984);
    r29 = 0;
    r28 = (r28 + -29104);
}

loc_80670E70:
{
    r0 = (r29 & 65535);
    r3 = (r1 + 456);
    r0 = (r0 * 448);
    r4 = (r31 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x80670E88u;
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

loc_80670E8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80670F0C;
    }
}

loc_80670E90:
{
    r4 = MemoryInline::FlatRead16((r1 + 480));
    r3 = (r27 + 13448);
    r0 = (r4 & 1);
}

loc_80670E9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80670EA8;
    }
}

loc_80670EA0:
{
    r0 = 0;
    goto loc_80670EB8;
}

loc_80670EA8:
{
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80670EAC:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670EB8;
    }
}

loc_80670EB4:
{
    r0 = 1;
}

loc_80670EB8:
{
}

loc_80670EBC:
{
    r23 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80670EE0;
    }
}

loc_80670EC4:
{
    r0 = MemoryInline::FlatRead8((r1 + 566));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    // inline leaf 0x800EB870 (9 guest instruction(s))
}

loc_inl3_0x800EB870:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r0 = (r0_rot_4 & 3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r3 = (r3_rot_4 & 2097151);
}

loc_inl3_0x800EB880:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_inl3_0x800EB88C;
    }
}

loc_inl3_0x800EB884:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_5 & 1);
    goto loc_inl3_cont_800EB870;
}

loc_inl3_0x800EB88C:
{
    r3 = 0;
}

loc_inl3_cont_800EB870:
{
    // end of inlined leaf 0x800EB870
}

loc_80670ED8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80670EE0;
    }
}

loc_80670EDC:
{
    r23 = 1;
}

loc_80670EE0:
{
}

loc_80670EE4:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80670F0C;
    }
}

loc_80670EE8:
{
    r0 = MemoryInline::FlatRead8((r1 + 566));
    r0 = (r0 * 12);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80670EFC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(r0))) {
        goto loc_80670F0C;
    }
}

loc_80670F00:
{
    r26 = r29;
    r0 = 1;
    goto loc_80670F1C;
}

loc_80670F0C:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(30));
}

loc_80670F14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80670E70;
    }
}

loc_80670F18:
{
    r0 = 0;
}

loc_80670F1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80670F20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670F88;
    }
}

loc_80670F24:
{
    r4 = MemoryInline::FlatRead32((r25 + 8));
    r3 = (r1 + 240);
    ctx->lr = 0x80670F30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x8051C398u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r0 = MemoryInline::FlatRead8((r1 + 240));
    r4 = (r26 + 7);
    r3 = 0;
}

loc_80670F40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80670F54;
    }
}

loc_80670F44:
{
    r0 = MemoryInline::FlatRead32((r1 + 452));
}

loc_80670F4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80670F54;
    }
}

loc_80670F50:
{
    r3 = 1;
}

loc_80670F54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670F58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670F60;
    }
}

loc_80670F5C:
{
    MemoryInline::FlatWriteRam32((r1 + 436), r4);
}

loc_80670F60:
{
    r4 = MemoryInline::FlatRead32((r25 + 8));
    r3 = (r1 + 240);
    ctx->lr = 0x80670F6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051CA0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80520000u;
    r3 = (r1 + 344);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x80670F84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    goto loc_80670F90;
}

loc_80670F88:
{
    r27 = 1;
    goto loc_80670FA0;
}

loc_80670F90:
{
    r3 = MemoryInline::FlatRead32(r25);
    r0 = 1;
    r27 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_80670FA0:
{
    r3 = r24;
    r4 = (r1 + 8);
    // inline leaf 0x801DE4EC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x801DE4EC
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = 1;
    ctx->lr = 0x80670FB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

loc_80670FBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670FCC;
    }
}

loc_80670FC0:
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
    r23 = r3;
    goto loc_80670FD0;
}

loc_80670FCC:
{
    r23 = 0;
}

loc_80670FD0:
{
    r3 = r23;
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

loc_80670FDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670FE8;
    }
}

loc_80670FE0:
{
    r3 = r23;
    goto loc_80670FEC;
}

loc_80670FE8:
{
    r3 = r27;
}

loc_80670FEC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 924), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 924));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 928));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 932));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 936));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 940));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 944));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 948));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 952));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 956));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 964));
    ctx->lr = r0;
    r1 = (r1 + 960);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
// RECOMP_REGISTRATION base 0x80670C08 func_80670C08 preserves=true fpr_mask=0x00000000
