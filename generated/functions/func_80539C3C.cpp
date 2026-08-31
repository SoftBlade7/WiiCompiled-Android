#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80539C3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80539C3C;

loc_80539C3C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    ctx->lr = 0x80539C60u;
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80538FECu>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r6 = 12;
    r5 = 0;
    r0 = -1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r6));
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r31 + 64));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r6));
    r4 = MemoryInline::FlatRead32((r31 + 64));
    MemoryInline::FlatWrite16((r4 + 14), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r31 + 260), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 276), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r31 + 262), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    ctx->lr = 0x80539C9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805326ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = (r3 & 65535);
    r11 = 179;
}

loc_80539CA8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80539CB4;
    }
}

loc_80539CAC:
{
    r0 = (r3 + -1);
    r11 = (r0 & 65535);
}

loc_80539CB4:
{
    r3 = 0x88890000u;
    r6 = 1;
    r0 = (r3 + -30583);
    r5 = 0;
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r11))) >> 32));
    MemoryInline::FlatWrite8((r31 + 274), static_cast<uint8_t>(r6));
    r9 = 0;
    MemoryInline::FlatWrite16((r31 + 272), static_cast<uint16_t>(r5));
    r10 = 0;
    r4 = -1;
    r0 = (r0 + r11);
    r3 = 0x809C0000u;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r0) >> 5);
    r12 = 2;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 1);
    r0 = 16;
    r7 = (r7 + r8);
    MemoryInline::FlatWrite16((r31 + 268), static_cast<uint16_t>(r7));
    r7 = (r7 & 65535);
    r7 = (r7 * 60);
    r7 = (r11 - r7);
    MemoryInline::FlatWrite8((r31 + 270), static_cast<uint8_t>(r7));
}

loc_80539D0C:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 510);
    r28 = 2;
    r7 = (r31 + r7);
    MemoryInline::FlatWrite16((r7 + 164), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r7 + 188), static_cast<uint16_t>(r4));
    r7 = MemoryInline::FlatRead32((r31 + 4));
    r7 = MemoryInline::FlatRead8((r7 + 45));
}

loc_80539D2C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80539D34;
    }
}

loc_80539D30:
{
    r28 = 0;
}

loc_80539D34:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & 1020);
    r11 = 0;
    r7 = (r31 + r8);
    MemoryInline::FlatWrite32((r7 + 212), r28);
    r28 = MemoryInline::FlatRead32((r7 + 68));
    MemoryInline::FlatWrite16((r28 + 134), static_cast<uint16_t>(r5));
    ctr = r12;
}

loc_80539D50:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 68), 0, 4u, true, false);
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    MemoryInline::FlatWrite8((r28 + 136), static_cast<uint8_t>(r5));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    MemoryInline::FlatWrite8((r28 + 148), static_cast<uint8_t>(r6));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    MemoryInline::FlatWrite8((r28 + 137), static_cast<uint8_t>(r5));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    MemoryInline::FlatWrite8((r28 + 149), static_cast<uint8_t>(r6));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    MemoryInline::FlatWrite8((r28 + 138), static_cast<uint8_t>(r5));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    MemoryInline::FlatWrite8((r28 + 150), static_cast<uint8_t>(r6));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    MemoryInline::FlatWrite8((r28 + 139), static_cast<uint8_t>(r5));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    MemoryInline::FlatWrite8((r28 + 151), static_cast<uint8_t>(r6));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    MemoryInline::FlatWrite8((r28 + 140), static_cast<uint8_t>(r5));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    MemoryInline::FlatWrite8((r28 + 152), static_cast<uint8_t>(r6));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    MemoryInline::FlatWrite8((r28 + 141), static_cast<uint8_t>(r5));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 68));
    r28 = (r28 + r11);
    r11 = (r11 + 6);
    MemoryInline::FlatWrite8((r28 + 153), static_cast<uint8_t>(r6));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80539D50;
    }
}

loc_80539DE8:
{
    r28 = MemoryInline::FlatRead32((r31 + 64));
    r29 = (r10 & 255);
    r11 = (r29 * 240);
    r28 = (r28 + r29);
    MemoryInline::FlatWrite8((r28 + 16), static_cast<uint8_t>(r5));
    r28 = MemoryInline::FlatRead32((r31 + 64));
    r28 = (r28 + r29);
    MemoryInline::FlatWrite8((r28 + 28), static_cast<uint8_t>(r6));
    r28 = MemoryInline::FlatRead32((r3 + -10456));
    r11 = (r28 + r11);
    r11 = MemoryInline::FlatRead32((r11 + 56));
}

loc_80539E18:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_80539E38;
    }
}

loc_80539E1C:
{
    r11 = MemoryInline::FlatRead32((r31 + 64));
    r11_addr_2 = (r11 + r9);
    MemoryInline::FlatWrite8(r11_addr_2, static_cast<uint8_t>(r10));
    r11 = MemoryInline::FlatRead16((r31 + 260));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
}

loc_80539E2C:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_80539E34;
    }
}

loc_80539E30:
{
    MemoryInline::FlatWrite16((r31 + 260), static_cast<uint16_t>(r29));
}

loc_80539E34:
{
    r9 = (r9 + 1);
}

loc_80539E38:
{
    r11 = (r31 + r8);
    r8 = MemoryInline::FlatRead32((r7 + 68));
    r7 = MemoryInline::FlatRead32((r11 + 116));
    r29 = (r8 + -4);
    r28 = (r7 + -4);
    ctr = r0;
}

loc_80539E50:
{
    r30 = MemoryInline::FlatRead32((r29 + 4));
    r29 = (r29 + 8);
    r11 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32((r28 + 4), r30);
    MemoryInline::FlatWrite32((r28 + 8), r11);
    r28 = (r28 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80539E50;
    }
}

loc_80539E64:
{
    r11 = MemoryInline::FlatRead8((r8 + 128));
    r10 = (r10 + 1);
    MemoryInline::FlatWrite8((r7 + 128), static_cast<uint8_t>(r11));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
}

loc_80539E74:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r8 + 129), 0, 31u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r8 + 129));
    guest_range_2 = MemoryInline::ResolveRangeHost((r7 + 129), 0, 31u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r7 + 129), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r8 + 130));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r7 + 130), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r8 + 131));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r7 + 131), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r8 + 132));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r7 + 132), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r8 + 133));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r7 + 133), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved16(guest_range_1, 5u, (r8 + 134));
    MemoryInline::WriteResolved16(guest_range_2, 5u, (r7 + 134), static_cast<uint16_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r8 + 137));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r8 + 136));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r7 + 136), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r7 + 137), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r8 + 139));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r8 + 138));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r7 + 138), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r7 + 139), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r8 + 141));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r8 + 140));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r7 + 140), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r7 + 141), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r8 + 143));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r8 + 142));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r7 + 142), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r7 + 143), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r8 + 144));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r7 + 144), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r8 + 145));
    MemoryInline::WriteResolved8(guest_range_2, 16u, (r7 + 145), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r8 + 146));
    MemoryInline::WriteResolved8(guest_range_2, 17u, (r7 + 146), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r8 + 147));
    MemoryInline::WriteResolved8(guest_range_2, 18u, (r7 + 147), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r8 + 149));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r8 + 148));
    MemoryInline::WriteResolved8(guest_range_2, 19u, (r7 + 148), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 20u, (r7 + 149), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r8 + 151));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r8 + 150));
    MemoryInline::WriteResolved8(guest_range_2, 21u, (r7 + 150), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 22u, (r7 + 151), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r8 + 153));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r8 + 152));
    MemoryInline::WriteResolved8(guest_range_2, 23u, (r7 + 152), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 24u, (r7 + 153), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r8 + 155));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r8 + 154));
    MemoryInline::WriteResolved8(guest_range_2, 25u, (r7 + 154), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 26u, (r7 + 155), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 27u, (r8 + 156));
    MemoryInline::WriteResolved8(guest_range_2, 27u, (r7 + 156), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r8 + 157));
    MemoryInline::WriteResolved8(guest_range_2, 28u, (r7 + 157), static_cast<uint8_t>(r11));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 29u, (r8 + 158));
    MemoryInline::WriteResolved8(guest_range_2, 29u, (r7 + 158), static_cast<uint8_t>(r11));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 30u, (r8 + 159));
    MemoryInline::WriteResolved8(guest_range_2, 30u, (r7 + 159), static_cast<uint8_t>(r8));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80539D0C;
    }
}

loc_80539F68:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80539C3C func_80539C3C preserves=true fpr_mask=0x00000000
