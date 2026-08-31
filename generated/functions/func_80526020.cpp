#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80526020(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80526020;

loc_80526020:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 164));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80526044:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805263A4;
    }
}

loc_80526048:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r7 = (r1 + 16);
    r8 = (r1 + 20);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r9 = (r1 + 8);
    ctx->lr = 0x80526064u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80526460u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80526068:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805263A4;
    }
}

loc_8052606C:
{
    r4 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r30 + 104);
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r6 = MemoryInline::FlatRead16((r1 + 8));
    ctx->lr = 0x80526080u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CB7E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80526084:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805263A4;
    }
}

loc_80526088:
{
    r0 = MemoryInline::FlatRead32((r30 + 156));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r3 = (r3_rot_1 & 15);
    MemoryInline::FlatWrite32((r30 + 100), r3);
    // inline leaf 0x800C0AD0 (5 guest instruction(s))
    r4 = 0x80250000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -18144);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    // end of inlined leaf 0x800C0AD0
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r8 = (r8_rot_1 & 255);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r8));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r8 = (r8_rot_2 & 255);
    r0 = MemoryInline::FlatRead32((r30 + 156));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r8));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r8 = (r8_rot_3 & 255);
    r5 = MemoryInline::FlatRead8((r1 + 12));
    r6 = 1;
    r7 = MemoryInline::FlatRead8((r1 + 13));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r4 = (r4_rot_1 & 127);
    MemoryInline::FlatWrite8((r30 + 96), static_cast<uint8_t>(r5));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & 127);
    r0 = (150 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(150) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite8((r30 + 97), static_cast<uint8_t>(r7));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_805260D4:
{
    r7 = 1;
    MemoryInline::FlatWrite8((r30 + 98), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r30 + 99), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 164), static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r30 + 12), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80526108;
    }
}

loc_80526100:
{
    r7 = 2;
    goto loc_80526118;
}

loc_80526108:
{
    r0 = (104 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(104) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
}

loc_80526110:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r0))) {
        goto loc_80526118;
    }
}

loc_80526114:
{
    r7 = 0;
}

loc_80526118:
{
    MemoryInline::FlatWrite32((r30 + 168), r7);
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r1 + 16));
}

loc_8052612C:
{
    MemoryInline::FlatWrite32((r30 + 92), r3);
    MemoryInline::FlatWrite8((r30 + 9), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 165), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_80526148;
    }
}

loc_8052613C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 165), static_cast<uint8_t>(r0));
    goto loc_80526174;
}

loc_80526148:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_8052614C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80526158;
    }
}

loc_80526150:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80526154:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80526174;
    }
}

loc_80526158:
{
    r3 = (r30 + 148);
    r4 = 0;
    ctx->lr = 0x80526164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80526168:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80526174;
    }
}

loc_8052616C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 165), static_cast<uint8_t>(r0));
}

loc_80526174:
{
    r3 = -1;
    r4 = 0;
    r0 = 6;
    MemoryInline::FlatWrite8((r30 + 174), static_cast<uint8_t>(r3));
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite32((r30 + 176), r4);
    MemoryInline::FlatWrite32((r30 + 180), r0);
    r6 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = (r6 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r3 = (r3 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 13068));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805261A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805263A4;
    }
}

loc_805261AC:
{
    r0 = MemoryInline::FlatRead8((r30 + 165));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805261B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805263A4;
    }
}

loc_805261B8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_805261C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805263A4;
    }
}

loc_805261C4:
{
    r3 = 65536;
    r5 = 0;
    r4 = (r3 + -27664);
    r7 = (r6 + 56);
    r0 = (r5 * r4);
    r6 = (r7 + r0);
    r3 = (r6 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -27667));
}

loc_805261E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80526214;
    }
}

loc_805261EC:
{
    r3 = MemoryInline::FlatRead32((r30 + 148));
    r0 = MemoryInline::FlatRead32((r6 + 22));
}

loc_805261F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80526214;
    }
}

loc_805261FC:
{
    r3 = MemoryInline::FlatRead32((r30 + 152));
    r0 = MemoryInline::FlatRead32((r6 + 26));
}

loc_80526208:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80526214;
    }
}

loc_8052620C:
{
    r5 = 1;
    goto loc_805262DC;
}

loc_80526214:
{
    r0 = 1;
    r0 = (r0 * r4);
    r6 = (r7 + r0);
    r3 = (r6 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -27667));
}

loc_8052622C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80526258;
    }
}

loc_80526230:
{
    r3 = MemoryInline::FlatRead32((r30 + 148));
    r0 = MemoryInline::FlatRead32((r6 + 22));
}

loc_8052623C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80526258;
    }
}

loc_80526240:
{
    r3 = MemoryInline::FlatRead32((r30 + 152));
    r0 = MemoryInline::FlatRead32((r6 + 26));
}

loc_8052624C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80526258;
    }
}

loc_80526250:
{
    r5 = 1;
    goto loc_805262DC;
}

loc_80526258:
{
    r0 = 2;
    r0 = (r0 * r4);
    r6 = (r7 + r0);
    r3 = (r6 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -27667));
}

loc_80526270:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052629C;
    }
}

loc_80526274:
{
    r3 = MemoryInline::FlatRead32((r30 + 148));
    r0 = MemoryInline::FlatRead32((r6 + 22));
}

loc_80526280:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8052629C;
    }
}

loc_80526284:
{
    r3 = MemoryInline::FlatRead32((r30 + 152));
    r0 = MemoryInline::FlatRead32((r6 + 26));
}

loc_80526290:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8052629C;
    }
}

loc_80526294:
{
    r5 = 1;
    goto loc_805262DC;
}

loc_8052629C:
{
    r0 = 3;
    r0 = (r0 * r4);
    r6 = (r7 + r0);
    r3 = (r6 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -27667));
}

loc_805262B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805262DC;
    }
}

loc_805262B8:
{
    r3 = MemoryInline::FlatRead32((r30 + 148));
    r0 = MemoryInline::FlatRead32((r6 + 22));
}

loc_805262C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_805262DC;
    }
}

loc_805262C8:
{
    r3 = MemoryInline::FlatRead32((r30 + 152));
    r0 = MemoryInline::FlatRead32((r6 + 26));
}

loc_805262D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_805262DC;
    }
}

loc_805262D8:
{
    r5 = 1;
}

loc_805262DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805262E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805263A4;
    }
}

loc_805262E4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 148), 0, 12u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 148));
    r3 = 1374420992;
    r7 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 149));
    r4 = 0x809C0000u;
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 156));
    r6 = (r3 + -31457);
    r8 = (r8 + r7);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 150));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r4 = MemoryInline::FlatRead32((r4 + -10480));
    r8 = (r8 + r7);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r30 + 151));
    r3 = (r0 * 36);
    r0 = 7;
    r8 = (r8 + r7);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r30 + 152));
    r8 = (r8 + r7);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 153));
    r5 = (r4 + r3);
    r8 = (r8 + r7);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r30 + 154));
    r8 = (r8 + r7);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r30 + 155));
    r8 = (r8 + r7);
    MemoryInline::FlatWrite32((r30 + 180), r0);
    r4 = (r8 & 65535);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
    r7 = (r0 & 65535);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r3 = (static_cast<int32_t>(r0) >> 5);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3 = (r3 + r4);
    r4 = (r3 & 65535);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 + r3);
    r4 = (r4 * 24);
    r0 = (r0 * 100);
    r3 = (r5 + r4);
    r0 = (r7 - r0);
    r3 = (r3 + 544);
    MemoryInline::FlatWrite32((r30 + 176), r3);
    MemoryInline::FlatWrite8((r30 + 174), static_cast<uint8_t>(r0));
}

loc_805263A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80023FB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80526020 func_80526020 preserves=true fpr_mask=0x00000000
