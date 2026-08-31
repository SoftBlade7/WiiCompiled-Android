#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80532188(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80532188;

loc_80532188:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
}

loc_80532194:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + 12976);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80532444;
    }
}

loc_805321B4:
{
    r5 = 0x808B0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + 12988);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x805321CCu:
        goto loc_805321CC;
        break;
    case 0x80532220u:
        goto loc_80532220;
        break;
    case 0x80532444u:
        goto loc_80532444;
        break;
    case 0x80532254u:
        goto loc_80532254;
        break;
    case 0x80532248u:
        goto loc_80532248;
        break;
    case 0x805322C8u:
        goto loc_805322C8;
        break;
    case 0x805323E0u:
        goto loc_805323E0;
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
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_805321CC:
{
    r3 = 12;
    ctx->lr = 0x805321D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805321D8:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532468;
    }
}

loc_805321E0:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    r5 = 0x808B0000u;
    r5 = (r5 + 13388);
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = 0;
    r4 = (r4 + 488);
    r7 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r5 = (r4 + 16);
    r4 = 0;
    r6 = 0;
    r3 = MemoryInline::FlatRead32((r7 + -10440));
    ctx->lr = 0x80532218u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805411FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r30 + 8), r3);
    goto loc_80532468;
}

loc_80532220:
{
    r3 = 8;
    ctx->lr = 0x80532228u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053222C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532240;
    }
}

loc_80532230:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    r4 = 0x808B0000u;
    r4 = (r4 + 13344);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_80532240:
{
    r30 = r3;
    goto loc_80532468;
}

loc_80532248:
{
    ctx->lr = 0x8053224Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8053D97Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
    goto loc_80532468;
}

loc_80532254:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2936));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80532264:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80532298;
    }
}

loc_80532268:
{
    r3 = 56;
    ctx->lr = 0x80532270u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80532274:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532290;
    }
}

loc_80532278:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    r0 = 0;
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r4 = (r4 + 14052);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_80532290:
{
    r30 = r3;
    goto loc_80532468;
}

loc_80532298:
{
    r3 = 56;
    ctx->lr = 0x805322A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805322A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805322C0;
    }
}

loc_805322A8:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    r0 = 0;
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r4 = (r4 + 13976);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_805322C0:
{
    r30 = r3;
    goto loc_80532468;
}

loc_805322C8:
{
    r3 = 372;
    ctx->lr = 0x805322D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805322D4:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532468;
    }
}

loc_805322DC:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    r5 = 0x808B0000u;
    r5 = (r5 + 14632);
    r4 = 0x80530000u;
    MemoryInline::FlatWriteRam32(r3, r5);
    r5 = 0x80530000u;
    r4 = (r4 + 9352);
    r6 = 20;
    r5 = (r5 + 9388);
    r7 = 12;
    r3 = (r3 + 8);
    ctx->lr = 0x8053230Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r9 = 0x808B0000u;
    r3 = 0x808B0000u;
    r9 = (r9 + 13320);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 300), 0, 70u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 300), r9);
    r8 = 0x808B0000u;
    r7 = 0x808B0000u;
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 9u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r31);
    r6 = 0x808B0000u;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 304), static_cast<uint8_t>(r0));
    r3 = (r3 + 13248);
    r5 = 0x808B0000u;
    r4 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 300), r3);
    r3 = 0x808B0000u;
    r8 = (r8 + 13224);
    r7 = (r7 + 13200);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 308), r9);
    r6 = (r6 + 13272);
    r5 = (r5 + 13176);
    r4 = (r4 + 13152);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r31 + 1));
    r3 = (r3 + 13296);
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r30 + 312), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 308), r8);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 316), r9);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r31 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r30 + 320), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 316), r7);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 324), r6);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r31 + 4));
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r30 + 328), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 324), r5);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 332), r6);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r31 + 6));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r30 + 336), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 332), r4);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 340), r6);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r31 + 6));
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r30 + 344), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 340), r4);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 348), r6);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r31 + 6));
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r30 + 352), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 348), r4);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 356), r9);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r30 + 360), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 356), r3);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 364), r6);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r31 + 6));
    MemoryInline::WriteResolved16(guest_range_0, 68u, (r30 + 368), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 364), r4);
    goto loc_80532468;
}

loc_805323E0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2936));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805323F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80532414;
    }
}

loc_805323F4:
{
    r3 = 368;
    ctx->lr = 0x805323FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80532400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053240C;
    }
}

loc_80532404:
{
    r4 = r29;
    ctx->lr = 0x8053240Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80539F88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053240C:
{
    r30 = r3;
    goto loc_80532468;
}

loc_80532414:
{
    r3 = 56;
    ctx->lr = 0x8053241Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80532420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053243C;
    }
}

loc_80532424:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    r0 = 0;
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r4 = (r4 + 13604);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_8053243C:
{
    r30 = r3;
    goto loc_80532468;
}

loc_80532444:
{
    r3 = 8;
    ctx->lr = 0x8053244Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80532450:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80532464;
    }
}

loc_80532454:
{
    r4 = 0x808B0000u;
    r4 = (r4 + 13432);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
}

loc_80532464:
{
    r30 = r3;
}

loc_80532468:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80532188 func_80532188 preserves=true fpr_mask=0x00000000
