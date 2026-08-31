#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80526460(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80526460;

loc_80526460:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8052646C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r27 = r3;
    r28 = r9;
    r31 = 1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805264B8;
    }
}

loc_80526484:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(3));
}

loc_80526488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805264CC;
    }
}

loc_8052648C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(2));
}

loc_80526490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805264E4;
    }
}

loc_80526494:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_80526498:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80526508;
    }
}

loc_8052649C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(4));
}

loc_805264A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80526534;
    }
}

loc_805264A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(5));
}

loc_805264A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80526580;
    }
}

loc_805264AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_805264B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805265CC;
    }
}

loc_805264B4:
{
    goto loc_80526620;
}

loc_805264B8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r8, r0);
    MemoryInline::FlatWrite16(r9, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32(r7, r0);
    goto loc_80526624;
}

loc_805264CC:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r8, r0);
    r0 = 0;
    MemoryInline::FlatWrite16(r9, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32(r7, r0);
    goto loc_80526624;
}

loc_805264E4:
{
    r3 = 0x80890000u;
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    r3 = (r3 + -664);
    r0 = 0;
    r3_addr_1 = (r3 + r5);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    MemoryInline::FlatWrite32(r8, r3);
    MemoryInline::FlatWrite16(r9, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32(r7, r0);
    goto loc_80526624;
}

loc_80526508:
{
    r0 = 7;
    MemoryInline::FlatWrite32(r8, r0);
    r0 = (r5 & 65535);
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite16(r9, static_cast<uint16_t>(r4));
    r0 = (r0 * 24);
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r3 = (r3 + r0);
    r0 = (r3 + 248);
    MemoryInline::FlatWrite32(r7, r0);
    goto loc_80526624;
}

loc_80526534:
{
    r3 = 1374420992;
    r5 = 7;
    r0 = (r3 + -31457);
    MemoryInline::FlatWrite32(r8, r5);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r0 = (r0 + r5);
    r5 = (r0 & 65535);
    r0 = (r5 * 24);
    r3 = (r3 + r0);
    r0 = (r5 * 100);
    r3 = (r3 + 104);
    MemoryInline::FlatWrite32(r7, r3);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite16(r9, static_cast<uint16_t>(r0));
    goto loc_80526624;
}

loc_80526580:
{
    r3 = 1374420992;
    r5 = 7;
    r0 = (r3 + -31457);
    MemoryInline::FlatWrite32(r8, r5);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r0 = (r0 + r5);
    r5 = (r0 & 65535);
    r0 = (r5 * 24);
    r3 = (r3 + r0);
    r0 = (r5 * 100);
    r3 = (r3 + 152);
    MemoryInline::FlatWrite32(r7, r3);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite16(r9, static_cast<uint16_t>(r0));
    goto loc_80526624;
}

loc_805265CC:
{
    r0 = 7;
    MemoryInline::FlatWrite32(r8, r0);
    r5 = 0x809C0000u;
    r30 = 0;
    r3 = MemoryInline::FlatRead32((r5 + -10480));
    r4 = 4;
    r6 = 1;
    r0 = (r3 + 224);
    MemoryInline::FlatWrite32(r7, r0);
    r29 = MemoryInline::FlatRead32((r5 + -10480));
    r5 = MemoryInline::FlatRead32((r29 + 52));
    r3 = (r29 + 224);
    ctx->lr = 0x80526600u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C8860u>(ctx);
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
    r3 = (r29 + 224);
    r4 = (r27 + 16);
    ctx->lr = 0x8052660Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C9920u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80526610:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80526618;
    }
}

loc_80526614:
{
    r30 = 255;
}

loc_80526618:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r30));
    goto loc_80526624;
}

loc_80526620:
{
    r31 = 0;
}

loc_80526624:
{
    r3 = r31;
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80023FB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80526460 func_80526460 preserves=true fpr_mask=0x00000000
