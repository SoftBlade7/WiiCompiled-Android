#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80790FB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80790FB8;

loc_80790FB8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r6 = 0x809C0000u;
    r6 = (r6 + 12104);
    r4 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 4), 0, 1628u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r6 + 4));
    r5 = 0x809C0000u;
    r0 = 19;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r4);
    r3 = (r3 + -1);
    r5 = (r5 + 13984);
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + 16), 0, 1628u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r6 + 16), r3);
    r7 = (r1 + 8);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r6 + 120));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 116u, (r6 + 132), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 232u, (r6 + 236));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 232u, (r6 + 248), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 348u, (r6 + 352));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 348u, (r6 + 364), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 464u, (r6 + 468));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 464u, (r6 + 480), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 580u, (r6 + 584));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 580u, (r6 + 596), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 696u, (r6 + 700));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 696u, (r6 + 712), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 812u, (r6 + 816));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 812u, (r6 + 828), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 928u, (r6 + 932));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 40), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 928u, (r6 + 944), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 1044u, (r6 + 1048));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 44), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 1044u, (r6 + 1060), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 1160u, (r6 + 1164));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 48), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 1160u, (r6 + 1176), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 1276u, (r6 + 1280));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 52), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 1276u, (r6 + 1292), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 1392u, (r6 + 1396));
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 56), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 1392u, (r6 + 1408), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 1508u, (r6 + 1512));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 60), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 1508u, (r6 + 1524), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 1624u, (r6 + 1628));
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 64), r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_2, 1624u, (r6 + 1640), r3);
    ctr = r0;
}

loc_807910CC:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_807910D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807910F4;
    }
}

loc_807910D8:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r7_addr_2 = (r7 + r3);
    r0 = MemoryInline::FlatRead32(r7_addr_2);
}

loc_807910EC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_807910F4;
    }
}

loc_807910F0:
{
    r7_addr_3 = (r7 + r3);
    MemoryInline::FlatWrite32(r7_addr_3, r4);
}

loc_807910F4:
{
    r5 = (r5 + 28);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807910CC;
    }
}

loc_807910FC:
{
    r8 = 0x809C0000u;
    r0 = 3;
    r7 = (r1 + 8);
    r8 = (r8 + 12104);
    ctr = r0;
}

loc_80791110:
{
    r3 = MemoryInline::FlatRead32((r8 + 16));
    r0 = MemoryInline::FlatRead32(r7);
    r5 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r8 + 16), r0);
    r4 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r8 + 12), r0);
    r3 = MemoryInline::FlatRead32((r7 + 12));
    r6 = MemoryInline::FlatRead32((r8 + 132));
    r0 = MemoryInline::FlatRead32((r7 + 16));
    r7 = (r7 + 20);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r8 + 132), r5);
    MemoryInline::FlatWrite32((r8 + 128), r5);
    r5 = MemoryInline::FlatRead32((r8 + 248));
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r8 + 248), r4);
    MemoryInline::FlatWrite32((r8 + 244), r4);
    r4 = MemoryInline::FlatRead32((r8 + 364));
    r3 = (r4 + r3);
    MemoryInline::FlatWrite32((r8 + 364), r3);
    MemoryInline::FlatWrite32((r8 + 360), r3);
    r3 = MemoryInline::FlatRead32((r8 + 480));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r8 + 480), r0);
    MemoryInline::FlatWrite32((r8 + 476), r0);
    r8 = (r8 + 580);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80791110;
    }
}

loc_80791180:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14521));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079118C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80791264;
    }
}

loc_80791190:
{
    r5 = 0x809C0000u;
    r0 = 3;
    r5 = (r5 + 12104);
    r6 = 0;
    ctr = r0;
}

loc_807911A4:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_807911AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_807911C8;
    }
}

loc_807911B0:
{
    r0 = (r6 + -9);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    r0 = (r3 + 1);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r5 + 12), r0);
}

loc_807911C8:
{
    r4 = MemoryInline::FlatRead32((r5 + 128));
}

loc_807911D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_807911EC;
    }
}

loc_807911D4:
{
    r0 = (r6 + -8);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_7 & 134217727);
    r0 = (r3 + 1);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r5 + 128), r0);
}

loc_807911EC:
{
    r4 = MemoryInline::FlatRead32((r5 + 244));
}

loc_807911F4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_80791210;
    }
}

loc_807911F8:
{
    r0 = (r6 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_9 & 134217727);
    r0 = (r3 + 1);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r5 + 244), r0);
}

loc_80791210:
{
    r4 = MemoryInline::FlatRead32((r5 + 360));
}

loc_80791218:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_80791234;
    }
}

loc_8079121C:
{
    r0 = (r6 + -6);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_11 & 134217727);
    r0 = (r3 + 1);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r5 + 360), r0);
}

loc_80791234:
{
    r4 = MemoryInline::FlatRead32((r5 + 476));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8079123C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80791258;
    }
}

loc_80791240:
{
    r0 = (r6 + -5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_13 & 134217727);
    r0 = (r3 + 1);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r5 + 476), r0);
}

loc_80791258:
{
    r5 = (r5 + 580);
    r6 = (r6 + 5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807911A4;
    }
}

loc_80791264:
{
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80790FB8 func_80790FB8 preserves=true fpr_mask=0x00000000
