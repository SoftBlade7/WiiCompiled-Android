#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052F4E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_8052F4E8;

loc_8052F4E8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r1 + 276), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 228u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r1 + 228), r21);
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r1 + 232), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r1 + 236), r23);
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r1 + 240), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r1 + 244), r25);
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r1 + 248), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r1 + 252), r27);
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r1 + 256), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 260u, (r1 + 260), r29);
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r1 + 264), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 268u, (r1 + 268), r31);
    r29 = -1;
    r24 = r3;
    r25 = r4;
    r28 = 0;
    r27 = 0;
    r26 = 0;
    r31 = 0x809C0000u;
    r22 = 0x80520000u;
    r23 = 5;
    MemoryInline::FlatWrite8((r3 + 2916), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r3 + 2917), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r3 + 2918), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r3 + 2919), static_cast<uint8_t>(r29));
}

loc_8052F52C:
{
    r0 = (r26 & 255);
    r0 = (r0 * 240);
    r30 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r30 + 24));
}

loc_8052F540:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052F558;
    }
}

loc_8052F544:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8052F548:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052F5C0;
    }
}

loc_8052F54C:
{
}

loc_8052F550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8052F664;
    }
}

loc_8052F554:
{
    goto loc_8052F668;
}

loc_8052F558:
{
    MemoryInline::FlatWrite8((r30 + 13), static_cast<uint8_t>(r28));
    r0 = (r27 & 255);
    r0 = (r0 * 236);
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r27));
    r3 = MemoryInline::FlatRead32((r31 + -10484));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052F578:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052F590;
    }
}

loc_8052F57C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8052F58Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    goto loc_8052F594;
}

loc_8052F590:
{
    r3 = -1;
}

loc_8052F594:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    MemoryInline::FlatWrite32((r30 + 216), r3);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2916));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8052F5AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_8052F5B4;
    }
}

loc_8052F5B0:
{
    MemoryInline::FlatWrite8((r3 + 2916), static_cast<uint8_t>(r26));
}

loc_8052F5B4:
{
    r28 = (r28 + 1);
    r27 = (r27 + 1);
    goto loc_8052F668;
}

loc_8052F5C0:
{
    r3 = MemoryInline::FlatRead32((r24 + 3052));
    r21 = 0;
    ctx->lr = 0x8052F5CCu;
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
    InvokeDirectCpu<0x8051C120u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052F5D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052F648;
    }
}

loc_8052F5D4:
{
    r3 = (r1 + 8);
    ctx->lr = 0x8052F5DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x8051C270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    r4 = MemoryInline::FlatRead32((r24 + 3052));
    r3 = (r1 + 8);
    ctx->lr = 0x8052F5E8u;
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
    InvokeDirectCpu<0x8051C790u>(ctx);
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
    r3 = MemoryInline::FlatRead32((r1 + 192));
    r0 = MemoryInline::FlatRead32((r24 + 2888));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8052F5F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052F634;
    }
}

loc_8052F5F8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052F614;
    }
}

loc_8052F600:
{
    r3 = MemoryInline::FlatRead32((r31 + -10484));
    r4 = (r27 & 255);
    r5 = MemoryInline::FlatRead32((r1 + 220));
    r6 = MemoryInline::FlatRead8((r1 + 208));
    ctx->lr = 0x8052F614u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x8052453Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
}

loc_8052F614:
{
    r0 = MemoryInline::FlatRead32((r1 + 184));
    r21 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r0 = MemoryInline::FlatRead32((r1 + 188));
    MemoryInline::FlatWrite32((r30 + 16), r0);
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r27));
    r0 = MemoryInline::FlatRead32((r1 + 196));
    MemoryInline::FlatWrite32((r30 + 216), r0);
}

loc_8052F634:
{
    r3 = (r1 + 112);
    r4 = (r22 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x8052F648u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
}

loc_8052F648:
{
}

loc_8052F64C:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_8052F658;
    }
}

loc_8052F650:
{
    r27 = (r27 + 1);
    goto loc_8052F668;
}

loc_8052F658:
{
    MemoryInline::FlatWrite32((r30 + 24), r23);
    MemoryInline::FlatWrite32((r30 + 216), r29);
    goto loc_8052F668;
}

loc_8052F664:
{
    MemoryInline::FlatWrite32((r30 + 216), r29);
}

loc_8052F668:
{
    r26 = (r26 + 1);
}

loc_8052F670:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(12))) {
        goto loc_8052F52C;
    }
}

loc_8052F674:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r25));
}

loc_8052F67C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052F774;
    }
}

loc_8052F680:
{
    r0 = 4;
    r5 = 0;
    ctr = r0;
}

loc_8052F68C:
{
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r4 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_8052F6A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8052F6D4;
    }
}

loc_8052F6A4:
{
    r0 = MemoryInline::FlatRead8((r4 + 13));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8052F6B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_8052F6D4;
    }
}

loc_8052F6B4:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    MemoryInline::FlatWrite8((r4 + 13), static_cast<uint8_t>(r28));
    r28 = (r28 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    r3 = (r24 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r25));
}

loc_8052F6CC:
{
    MemoryInline::FlatWrite8((r3 + 2916), static_cast<uint8_t>(r5));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052F774;
    }
}

loc_8052F6D4:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r4 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_8052F6EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8052F720;
    }
}

loc_8052F6F0:
{
    r0 = MemoryInline::FlatRead8((r4 + 13));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8052F6FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_8052F720;
    }
}

loc_8052F700:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    MemoryInline::FlatWrite8((r4 + 13), static_cast<uint8_t>(r28));
    r28 = (r28 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    r3 = (r24 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r25));
}

loc_8052F718:
{
    MemoryInline::FlatWrite8((r3 + 2916), static_cast<uint8_t>(r5));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052F774;
    }
}

loc_8052F720:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r4 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8052F738:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052F76C;
    }
}

loc_8052F73C:
{
    r0 = MemoryInline::FlatRead8((r4 + 13));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8052F748:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052F76C;
    }
}

loc_8052F74C:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    MemoryInline::FlatWrite8((r4 + 13), static_cast<uint8_t>(r28));
    r28 = (r28 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    r3 = (r24 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r25));
}

loc_8052F764:
{
    MemoryInline::FlatWrite8((r3 + 2916), static_cast<uint8_t>(r5));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052F774;
    }
}

loc_8052F76C:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052F68C;
    }
}

loc_8052F774:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 228), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 228));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 232));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 236));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 240));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 244));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 248));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 252));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 256));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 260));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 264));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 268));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x8052F4E8 func_8052F4E8 preserves=true fpr_mask=0x00000000
