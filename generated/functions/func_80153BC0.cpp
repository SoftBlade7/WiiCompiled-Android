#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80153BC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80153BC0;

loc_80153BC0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r4;
    r4 = MemoryInline::FlatRead8(r6);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015182Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_80153BF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80153C38;
    }
}

loc_80153BFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80153C00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80153EAC;
    }
}

loc_80153C04:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 9;
    ctx->lr = 0x80153C14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r30;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80154220u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead8(r30);
    r3 = r29;
    r6 = MemoryInline::FlatRead16((r30 + 18));
    r5 = (r1 + 8);
    ctx->lr = 0x80153C34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015090Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80153EAC;
}

loc_80153C38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80153C3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80153CAC;
    }
}

loc_80153C40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80153C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80153CAC;
    }
}

loc_80153C48:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 81), 0, 9u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 81));
    r6 = (r3 + 81);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 82));
    r5 = 0;
    r7 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 8), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 9), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 83));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 84));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 10), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 11), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 85));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 86));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r1 + 12), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r1 + 13), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 87));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 88));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 89));
    r3 = r29;
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 16), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8(r30);
    ctx->lr = 0x80153CA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015501Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80153EAC;
}

loc_80153CAC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 81), 0, 9u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 81));
    r4 = r30;
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 82));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 8), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 9), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 83));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 84));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r1 + 11), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 85));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 86));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r1 + 12), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r1 + 13), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 87));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 88));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 89));
    r3 = (r1 + 8);
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r1 + 16), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80154220u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80153D04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80153D20;
    }
}

loc_80153D08:
{
    r4 = MemoryInline::FlatRead8(r30);
    r3 = r29;
    r6 = MemoryInline::FlatRead16((r30 + 18));
    r5 = (r1 + 8);
    ctx->lr = 0x80153D1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015090Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80153EAC;
}

loc_80153D20:
{
    r4 = MemoryInline::FlatRead8(r30);
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015182Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80153D30:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80153EAC;
    }
}

loc_80153D38:
{
    r0 = MemoryInline::FlatRead8((r3 + 105));
    r0 = (r0 & 6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80153D40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80153D48;
    }
}

loc_80153D44:
{
    goto loc_80153EAC;
}

loc_80153D48:
{
    ctx->lr = 0x80153D4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801561E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead8((r31 + 105));
    r0 = (r3 & 2);
}

loc_80153D54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80153E04;
    }
}

loc_80153D58:
{
    r0 = (r3 & -3);
    guest_range_4 = MemoryInline::ResolveRangeHost((r31 + 81), 0, 25u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 24u, (r31 + 105), static_cast<uint8_t>(r0));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 9u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r1 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 1u, (r1 + 9));
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r31 + 81), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r31 + 82), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_5, 2u, (r1 + 10));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 3u, (r1 + 11));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r31 + 83), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r31 + 84), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_5, 4u, (r1 + 12));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 5u, (r1 + 13));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r31 + 85), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r31 + 86), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_5, 6u, (r1 + 14));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 7u, (r1 + 15));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r31 + 87), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r31 + 88), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 8u, (r1 + 16));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r31 + 89), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 5u, (r1 + 13));
}

loc_80153DB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_80153DBC;
    }
}

loc_80153DB4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(48));
}

loc_80153DB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80153DC8;
    }
}

loc_80153DBC:
{
    r0 = 16255;
    MemoryInline::FlatWrite16((r30 + 18), static_cast<uint16_t>(r0));
    goto loc_80153E0C;
}

loc_80153DC8:
{
    r0 = 12;
    r3 = r29;
    MemoryInline::FlatWrite8((r31 + 86), static_cast<uint8_t>(r0));
    r6 = (r31 + 81);
    r5 = 1;
    r7 = 3072;
    r0 = MemoryInline::FlatRead8((r31 + 105));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 105), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8(r30);
    ctx->lr = 0x80153DF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015501Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    r4 = 60;
    ctx->lr = 0x80153E00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80156168u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80153EAC;
}

loc_80153E04:
{
    r0 = (r3 & -5);
    MemoryInline::FlatWrite8((r31 + 105), static_cast<uint8_t>(r0));
}

loc_80153E0C:
{
    r3 = MemoryInline::FlatRead16((r30 + 18));
    r0 = (r3 & 3072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3072));
}

loc_80153E18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80153E28;
    }
}

loc_80153E1C:
{
    r0 = (r3 & 12288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12288));
}

loc_80153E24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80153E40;
    }
}

loc_80153E28:
{
    r4 = MemoryInline::FlatRead8((r31 + 13));
    r3 = r29;
    r5 = (r1 + 8);
    r6 = 0;
    ctx->lr = 0x80153E3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80150A5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80153EAC;
}

loc_80153E40:
{
    r0 = MemoryInline::FlatRead8((r31 + 86));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_80153E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80153E88;
    }
}

loc_80153E4C:
{
    r0 = 48;
    r3 = r29;
    MemoryInline::FlatWrite8((r31 + 86), static_cast<uint8_t>(r0));
    r6 = (r31 + 81);
    r5 = 1;
    r7 = 12288;
    r0 = MemoryInline::FlatRead8((r31 + 105));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 105), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8(r30);
    ctx->lr = 0x80153E78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015501Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    r4 = 60;
    ctx->lr = 0x80153E84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80156168u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80153EAC;
}

loc_80153E88:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(48));
}

loc_80153E8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80153EAC;
    }
}

loc_80153E90:
{
    r0 = 0;
    r3 = r29;
    MemoryInline::FlatWrite8((r31 + 86), static_cast<uint8_t>(r0));
    r5 = (r1 + 8);
    r6 = 0;
    r4 = MemoryInline::FlatRead8((r31 + 13));
    ctx->lr = 0x80153EACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80150A5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80153EAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80153BC0 func_80153BC0 preserves=true fpr_mask=0x00000000
