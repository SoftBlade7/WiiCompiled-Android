#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CBFBC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801CBFBC;

loc_801CBFBC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = 0x80350000u;
    r31 = (r31 + 16608);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r29 = (r31 + 0);
    MemoryInline::FlatWriteRam32((r1 + 64), r28);
    r28 = 0x802A0000u;
    r28 = (r28 + -432);
    r0 = MemoryInline::FlatRead8((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_801CBFF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC2EC;
    }
}

loc_801CBFF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC064;
    }
}

loc_801CBFFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_801CC000:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC664;
    }
}

loc_801CC004:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC034;
    }
}

loc_801CC008:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801CC00C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC830;
    }
}

loc_801CC010:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC024;
    }
}

loc_801CC014:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801CC018:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC0C4;
    }
}

loc_801CC01C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC138;
    }
}

loc_801CC020:
{
    goto loc_801CC8D0;
}

loc_801CC024:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_801CC028:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC2BC;
    }
}

loc_801CC02C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC8DC;
    }
}

loc_801CC030:
{
    goto loc_801CC1F4;
}

loc_801CC034:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_801CC038:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC8DC;
    }
}

loc_801CC03C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC058;
    }
}

loc_801CC040:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_801CC044:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC79C;
    }
}

loc_801CC048:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC8D0;
    }
}

loc_801CC04C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_801CC050:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC8D0;
    }
}

loc_801CC054:
{
    goto loc_801CC754;
}

loc_801CC058:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(15));
}

loc_801CC05C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC3F0;
    }
}

loc_801CC060:
{
    goto loc_801CC824;
}

loc_801CC064:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(24));
}

loc_801CC068:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC87C;
    }
}

loc_801CC06C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC09C;
    }
}

loc_801CC070:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_801CC074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC534;
    }
}

loc_801CC078:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC08C;
    }
}

loc_801CC07C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(18));
}

loc_801CC080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC438;
    }
}

loc_801CC084:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC4A8;
    }
}

loc_801CC088:
{
    goto loc_801CC390;
}

loc_801CC08C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(22));
}

loc_801CC090:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC770;
    }
}

loc_801CC094:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC7C0;
    }
}

loc_801CC098:
{
    goto loc_801CC5C0;
}

loc_801CC09C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(29));
}

loc_801CC0A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC0D0;
    }
}

loc_801CC0A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC0B8;
    }
}

loc_801CC0A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_801CC0AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC8DC;
    }
}

loc_801CC0B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC8D0;
    }
}

loc_801CC0B4:
{
    goto loc_801CC77C;
}

loc_801CC0B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(255));
}

loc_801CC0BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC7F8;
    }
}

loc_801CC0C0:
{
    goto loc_801CC8D0;
}

loc_801CC0C4:
{
    ctx->lr = 0x801CC0C8u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CBBE0u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r3));
    goto loc_801CC8DC;
}

loc_801CC0D0:
{
    r0 = MemoryInline::FlatRead8((r29 + 1768));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC0E4;
    }
}

loc_801CC0DC:
{
    r4 = 14;
    goto loc_801CC130;
}

loc_801CC0E4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = MemoryInline::FlatRead8((r29 + 1765));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801CC0F4:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(4))) {
        goto loc_801CC114;
    }
}

loc_801CC0F8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = MemoryInline::FlatRead8((r29 + 1764));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(4));
}

loc_801CC108:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC114;
    }
}

loc_801CC10C:
{
    r4 = 14;
    goto loc_801CC130;
}

loc_801CC114:
{
    r3 = MemoryInline::FlatRead16((r29 + 1864));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = 29;
    r3 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWriteRam16((r29 + 1864), static_cast<uint16_t>(r3));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC130;
    }
}

loc_801CC12C:
{
    r4 = 2;
}

loc_801CC130:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r4));
    goto loc_801CC8DC;
}

loc_801CC138:
{
    r0 = MemoryInline::FlatRead8((r29 + 1767));
    r4 = 1;
    r3 = 0;
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC14C:
{
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 51), static_cast<uint8_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC164;
    }
}

loc_801CC158:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r0));
    goto loc_801CC1BC;
}

loc_801CC164:
{
    r0 = MemoryInline::FlatRead8((r29 + 1769));
}

loc_801CC16C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801CC19C;
    }
}

loc_801CC170:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = MemoryInline::FlatRead8((r29 + 1765));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
}

loc_801CC180:
{
    r3 = 5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC18C;
    }
}

loc_801CC188:
{
    r3 = 10;
}

loc_801CC18C:
{
    r0 = MemoryInline::FlatRead8((r29 + 1768));
    r0 = (r3 - r0);
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r0));
    goto loc_801CC1BC;
}

loc_801CC19C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = MemoryInline::FlatRead8((r29 + 1765));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
}

loc_801CC1AC:
{
    r0 = 3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC1B8;
    }
}

loc_801CC1B4:
{
    r0 = 8;
}

loc_801CC1B8:
{
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r0));
}

loc_801CC1BC:
{
    r0 = 0;
    r3 = (r31 + 3000);
    MemoryInline::FlatWrite8((r13 + -24446), static_cast<uint8_t>(r0));
    r4 = 0;
    r5 = 264;
    ctx->lr = 0x801CC1D4u;
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
    r5 = 0x801D0000u;
    r3 = (r1 + 48);
    r5 = (r5 + -1776);
    r4 = 0;
    ctx->lr = 0x801CC1E8u;
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
    InvokeDirectCpu<0x80134A10u>(ctx);
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
    r0 = 3;
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r0));
    goto loc_801CC8DC;
}

loc_801CC1F4:
{
    r0 = MemoryInline::FlatRead8((r13 + -24446));
    r30 = 1;
}

loc_801CC200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CC250;
    }
}

loc_801CC204:
{
    r0 = MemoryInline::FlatRead8((r13 + -24448));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC20C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC230;
    }
}

loc_801CC210:
{
    r3 = (r31 + 3000);
    r4 = (r28 + 452);
    r3 = (r3 + 6);
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801CC228:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801CC230;
    }
}

loc_801CC22C:
{
    r30 = 5;
}

loc_801CC230:
{
    r3 = (r31 + 0);
    r4 = MemoryInline::FlatRead8((r13 + -24447));
    r0 = MemoryInline::FlatRead8((r3 + 1803));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801CC248:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_801CC250;
    }
}

loc_801CC24C:
{
    r30 = 1;
}

loc_801CC250:
{
    r28 = (r31 + 0);
    r0 = MemoryInline::FlatRead8((r28 + 1769));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC25C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC2B4;
    }
}

loc_801CC260:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_801CC264:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC2B4;
    }
}

loc_801CC268:
{
    r30 = 24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = MemoryInline::FlatRead8((r28 + 1765));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
}

loc_801CC27C:
{
    r0 = 100;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC288;
    }
}

loc_801CC284:
{
    r0 = 200;
}

loc_801CC288:
{
    r31 = (r31 + 0);
    MemoryInline::FlatWriteRam16((r31 + 1866), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 1771), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r31 + 1770), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    r4 = 1;
    ctx->lr = 0x801CC2B4u;
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
    InvokeDirectCpu<0x801349B8u>(ctx);
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
}

loc_801CC2B4:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r30));
    goto loc_801CC8DC;
}

loc_801CC2BC:
{
    r3 = (r31 + 3000);
    r28 = 17;
    ctx->lr = 0x801CC2C8u;
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
    InvokeDirectCpu<0x801CEA6Cu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CC2CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC2E4;
    }
}

loc_801CC2D0:
{
    r4 = r3;
    r3 = (r31 + 3264);
    r5 = 96;
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
    r28 = 16;
}

loc_801CC2E4:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r28));
    goto loc_801CC8DC;
}

loc_801CC2EC:
{
    r28 = (r31 + 3264);
    r3 = 1;
    r0 = MemoryInline::FlatRead8((r28 + 91));
    MemoryInline::FlatWriteRam8((r28 + 89), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801CC300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC32C;
    }
}

loc_801CC304:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC318;
    }
}

loc_801CC308:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC30C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC32C;
    }
}

loc_801CC310:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC360;
    }
}

loc_801CC314:
{
    goto loc_801CC384;
}

loc_801CC318:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801CC31C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC384;
    }
}

loc_801CC320:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_801CC324:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC32C;
    }
}

loc_801CC328:
{
    goto loc_801CC360;
}

loc_801CC32C:
{
    r3 = (r31 + 0);
    r0 = MemoryInline::FlatRead8((r3 + 1769));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC338:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC354;
    }
}

loc_801CC33C:
{
    r3 = r28;
    ctx->lr = 0x801CC344u;
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
    InvokeDirectCpu<0x801CF0A4u>(ctx);
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
    r3 = (r28 + 64);
    ctx->lr = 0x801CC34Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE910u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 17;
    goto loc_801CC388;
}

loc_801CC354:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r28 + 91), static_cast<uint8_t>(r0));
    goto loc_801CC384;
}

loc_801CC360:
{
    r3 = r28;
    ctx->lr = 0x801CC368u;
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
    InvokeDirectCpu<0x801CED1Cu>(ctx);
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
    r3 = (r31 + 0);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + 64);
    ctx->lr = 0x801CC37Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE910u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 17;
    goto loc_801CC388;
}

loc_801CC384:
{
    r0 = 15;
}

loc_801CC388:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r0));
    goto loc_801CC8DC;
}

loc_801CC390:
{
    r3 = MemoryInline::FlatRead8((r29 + 1769));
    r28 = (r31 + 3264);
    r5 = 1;
    r4 = (r31 + 3000);
    r0 = (0 - r3);
    MemoryInline::FlatWriteRam8((r28 + 89), static_cast<uint8_t>(r5));
    r0 = (r0 | r3);
    r3 = (r28 + 64);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r5 = 6;
    MemoryInline::FlatWriteRam8((r28 + 91), static_cast<uint8_t>(r0));
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
    r4 = (r31 + 3000);
    r3 = r28;
    r4 = (r4 + 6);
    r5 = 64;
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
    r3 = (r28 + 70);
    r4 = 0;
    r5 = 16;
    ctx->lr = 0x801CC3E4u;
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
    r0 = 15;
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r0));
    goto loc_801CC8DC;
}

loc_801CC3F0:
{
    r3 = (r31 + 3000);
    r4 = (r28 + 452);
    r3 = (r3 + 6);
    r28 = 255;
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CC40C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC430;
    }
}

loc_801CC410:
{
    r3 = (r31 + 3264);
    r0 = 2;
    MemoryInline::FlatWriteRam8((r3 + 89), static_cast<uint8_t>(r0));
    r3 = (r3 + 64);
    r4 = 0;
    r5 = 18;
    ctx->lr = 0x801CC42Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801370B0u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = 6;
}

loc_801CC430:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r28));
    goto loc_801CC8DC;
}

loc_801CC438:
{
    r3 = (r31 + 3264);
    r0 = MemoryInline::FlatRead8((r3 + 91));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801CC444:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC48C;
    }
}

loc_801CC448:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC464;
    }
}

loc_801CC44C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801CC450:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC474;
    }
}

loc_801CC454:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC49C;
    }
}

loc_801CC458:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC45C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC47C;
    }
}

loc_801CC460:
{
    goto loc_801CC4A0;
}

loc_801CC464:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_801CC468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC484;
    }
}

loc_801CC46C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC4A0;
    }
}

loc_801CC470:
{
    goto loc_801CC494;
}

loc_801CC474:
{
    r0 = 19;
    goto loc_801CC4A0;
}

loc_801CC47C:
{
    r0 = 20;
    goto loc_801CC4A0;
}

loc_801CC484:
{
    r0 = 21;
    goto loc_801CC4A0;
}

loc_801CC48C:
{
    r0 = 23;
    goto loc_801CC4A0;
}

loc_801CC494:
{
    r0 = 7;
    goto loc_801CC4A0;
}

loc_801CC49C:
{
    r0 = 7;
}

loc_801CC4A0:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r0));
    goto loc_801CC8DC;
}

loc_801CC4A8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = MemoryInline::FlatRead8((r29 + 19));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(6));
}

loc_801CC4B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC4CC;
    }
}

loc_801CC4BC:
{
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + 64);
    ctx->lr = 0x801CC4CCu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE910u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801CC4CC:
{
    ctx->lr = 0x801CC4D0u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CEB44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CC4D4:
{
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC4E4;
    }
}

loc_801CC4DC:
{
    r5 = 255;
    goto loc_801CC52C;
}

loc_801CC4E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 89));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC4EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC4F8;
    }
}

loc_801CC4F0:
{
    r5 = 255;
    goto loc_801CC52C;
}

loc_801CC4F8:
{
    r4 = (r31 + 3264);
    r5 = 96;
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
    r3 = (r28 + 64);
    ctx->lr = 0x801CC50Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE7E0u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r28;
    ctx->lr = 0x801CC514u;
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
    InvokeDirectCpu<0x801CEC04u>(ctx);
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
    r0 = MemoryInline::FlatRead8((r28 + 86));
    r4 = (r28 + 64);
    r3 = (r31 + 3360);
    r5 = 23;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r4);
}

loc_801CC52C:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r5));
    goto loc_801CC8DC;
}

loc_801CC534:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = MemoryInline::FlatRead8((r29 + 18));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(10));
}

loc_801CC544:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC558;
    }
}

loc_801CC548:
{
    r3 = MemoryInline::FlatRead32((r29 + 104));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + 64);
    ctx->lr = 0x801CC558u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE910u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801CC558:
{
    ctx->lr = 0x801CC55Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CEB44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CC560:
{
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC570;
    }
}

loc_801CC568:
{
    r5 = 255;
    goto loc_801CC5B8;
}

loc_801CC570:
{
    r0 = MemoryInline::FlatRead8((r3 + 89));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC578:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC584;
    }
}

loc_801CC57C:
{
    r5 = 255;
    goto loc_801CC5B8;
}

loc_801CC584:
{
    r4 = (r31 + 3264);
    r5 = 96;
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
    r3 = (r28 + 64);
    ctx->lr = 0x801CC598u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE7E0u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r28;
    ctx->lr = 0x801CC5A0u;
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
    InvokeDirectCpu<0x801CEF8Cu>(ctx);
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
    r0 = MemoryInline::FlatRead8((r28 + 86));
    r4 = (r28 + 64);
    r3 = (r31 + 3360);
    r5 = 7;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_5, r4);
}

loc_801CC5B8:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r5));
    goto loc_801CC8DC;
}

loc_801CC5C0:
{
    r3 = (r31 + 3264);
    ctx->lr = 0x801CC5C8u;
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
    InvokeDirectCpu<0x801CED1Cu>(ctx);
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
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + 64);
    ctx->lr = 0x801CC5D8u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE910u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = MemoryInline::FlatRead8((r29 + 18));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(10));
}

loc_801CC5E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC5FC;
    }
}

loc_801CC5EC:
{
    r3 = MemoryInline::FlatRead32((r29 + 104));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + 64);
    ctx->lr = 0x801CC5FCu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE910u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801CC5FC:
{
    ctx->lr = 0x801CC600u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CEB44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CC604:
{
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC614;
    }
}

loc_801CC60C:
{
    r5 = 255;
    goto loc_801CC65C;
}

loc_801CC614:
{
    r0 = MemoryInline::FlatRead8((r3 + 89));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC61C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC628;
    }
}

loc_801CC620:
{
    r5 = 255;
    goto loc_801CC65C;
}

loc_801CC628:
{
    r4 = (r31 + 3264);
    r5 = 96;
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
    r3 = (r28 + 64);
    ctx->lr = 0x801CC63Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE7E0u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r28;
    ctx->lr = 0x801CC644u;
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
    InvokeDirectCpu<0x801CEF8Cu>(ctx);
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
    r0 = MemoryInline::FlatRead8((r28 + 86));
    r4 = (r28 + 64);
    r3 = (r31 + 3360);
    r5 = 7;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_3, r4);
}

loc_801CC65C:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r5));
    goto loc_801CC8DC;
}

loc_801CC664:
{
    r0 = MemoryInline::FlatRead8((r29 + 14));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC66C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CC678;
    }
}

loc_801CC670:
{
    r0 = 7;
    goto loc_801CC74C;
}

loc_801CC678:
{
    r3 = (r31 + 3264);
    r3 = (r3 + 64);
    ctx->lr = 0x801CC684u;
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
    InvokeDirectCpu<0x801CEA6Cu>(ctx);
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
    r30 = r3;
    r3 = (r28 + 472);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead8((r30 + 64));
    r3 = (r28 + 496);
    r5 = MemoryInline::FlatRead8((r30 + 65));
    r6 = MemoryInline::FlatRead8((r30 + 66));
    r7 = MemoryInline::FlatRead8((r30 + 67));
    r8 = MemoryInline::FlatRead8((r30 + 68));
    r9 = MemoryInline::FlatRead8((r30 + 69));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 70), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r30 + 77));
    r3 = (r28 + 536);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r30 + 78));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r30 + 79));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r30 + 80));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r30 + 81));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r30 + 82));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r30 + 83));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r30 + 84));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r30 + 85));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 40), r0);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 70));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 71));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 72));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r30 + 73));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r30 + 74));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 75));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r30 + 76));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r0 = 2;
    r6 = 0x801D0000u;
    MemoryInline::FlatWriteRam8((r29 + 14), static_cast<uint8_t>(r0));
    r4 = (r30 + 64);
    r5 = (r30 + 70);
    r6 = (r6 + -416);
    r3 = 1;
    ctx->lr = 0x801CC748u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013B568u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 8;
}

loc_801CC74C:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r0));
    goto loc_801CC8DC;
}

loc_801CC754:
{
    r0 = MemoryInline::FlatRead8((r29 + 14));
    r3 = 8;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC760:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC768;
    }
}

loc_801CC764:
{
    r3 = 22;
}

loc_801CC768:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r3));
    goto loc_801CC8DC;
}

loc_801CC770:
{
    ctx->lr = 0x801CC774u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CBD40u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r3));
    goto loc_801CC8DC;
}

loc_801CC77C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = 13;
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x801D0000u;
    r3 = (r3 + -17800);
    ctx->lr = 0x801CC798u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B1690u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801CC8DC;
}

loc_801CC79C:
{
    r0 = MemoryInline::FlatRead8((r29 + 14));
    r28 = 10;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC7A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC7B8;
    }
}

loc_801CC7AC:
{
    r3 = (r29 + 1788);
    r28 = 20;
    ctx->lr = 0x801CC7B8u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CE910u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801CC7B8:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r28));
    goto loc_801CC8DC;
}

loc_801CC7C0:
{
    r6 = MemoryInline::FlatRead8((r29 + 1766));
    r3 = (r31 + 3264);
    r4 = 0;
    r5 = 96;
    r0 = (r6 + 1);
    MemoryInline::FlatWriteRam8((r29 + 1766), static_cast<uint8_t>(r0));
    ctx->lr = 0x801CC7DCu;
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
    r0 = MemoryInline::FlatRead8((r29 + 1769));
    r3 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC7E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC7F0;
    }
}

loc_801CC7EC:
{
    r3 = 14;
}

loc_801CC7F0:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r3));
    goto loc_801CC8DC;
}

loc_801CC7F8:
{
    r3 = (r31 + 3264);
    r4 = 0;
    r5 = 96;
    ctx->lr = 0x801CC808u;
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
    r0 = MemoryInline::FlatRead8((r29 + 1769));
    r3 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CC814:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC81C;
    }
}

loc_801CC818:
{
    r3 = 14;
}

loc_801CC81C:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r3));
    goto loc_801CC8DC;
}

loc_801CC824:
{
    ctx->lr = 0x801CC828u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CBE4Cu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r3));
    goto loc_801CC8DC;
}

loc_801CC830:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = MemoryInline::FlatRead8((r29 + 1765));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
}

loc_801CC840:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC870;
    }
}

loc_801CC844:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = MemoryInline::FlatRead8((r29 + 1764));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
}

loc_801CC854:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CC870;
    }
}

loc_801CC858:
{
    r3 = (r28 + 624);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    ctx->lr = 0x801CC868u;
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
    InvokeDirectCpu<0x80134A94u>(ctx);
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
    r0 = 26;
    goto loc_801CC874;
}

loc_801CC870:
{
    r0 = 3;
}

loc_801CC874:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r0));
    goto loc_801CC8DC;
}

loc_801CC87C:
{
    r30 = 24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = MemoryInline::FlatRead8((r29 + 1765));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801CC890:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(4))) {
        goto loc_801CC8AC;
    }
}

loc_801CC894:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = MemoryInline::FlatRead8((r29 + 1764));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801CC8A4:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(4))) {
        goto loc_801CC8AC;
    }
}

loc_801CC8A8:
{
    r30 = 14;
}

loc_801CC8AC:
{
    r4 = (r31 + 0);
    r3 = MemoryInline::FlatRead16((r4 + 1866));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWriteRam16((r4 + 1866), static_cast<uint16_t>(r3));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CC8C8;
    }
}

loc_801CC8C4:
{
    r30 = 1;
}

loc_801CC8C8:
{
    MemoryInline::FlatWriteRam8((r29 + 12), static_cast<uint8_t>(r30));
    goto loc_801CC8DC;
}

loc_801CC8D0:
{
    r3 = (r28 + 672);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
}

loc_801CC8DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801CBFBC func_801CBFBC preserves=true fpr_mask=0x00000000
