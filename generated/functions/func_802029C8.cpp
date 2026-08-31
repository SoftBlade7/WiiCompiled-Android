#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802029C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_10 = 0;
    uint32_t r5_addr_11 = 0;
    uint32_t r5_addr_12 = 0;
    uint32_t r5_addr_13 = 0;
    uint32_t r5_addr_14 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_802029C8;

loc_802029C8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r29 = 0x80360000u;
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = (r29 + -20912);
    goto loc_80202E50;
}

loc_802029F8:
{
    r0 = (r27 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(63));
}

loc_80202A00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202A14;
    }
}

loc_80202A04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80202D14;
    }
}

loc_80202A08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(42));
}

loc_80202A0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202A24;
    }
}

loc_80202A10:
{
    goto loc_80202D14;
}

loc_80202A14:
{
    r0 = (r25 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80202A18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202D2C;
    }
}

loc_80202A1C:
{
    r3 = 0;
    goto loc_80202E64;
}

loc_80202A24:
{
    r4 = MemoryInline::FlatRead16((r26 + 4));
    r3 = r28;
    ctx->lr = 0x80202A30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8020270Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r27 = r3;
    goto loc_80202A48;
}

loc_80202A38:
{
    r4 = MemoryInline::FlatRead16((r26 + 4));
    r3 = r28;
    ctx->lr = 0x80202A44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8020270Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r27 = r3;
}

loc_80202A48:
{
    r0 = (r27 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(42));
}

loc_80202A50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202A38;
    }
}

loc_80202A54:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(63));
}

loc_80202A58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202A38;
    }
}

loc_80202A5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80202A60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202A6C;
    }
}

loc_80202A64:
{
    r3 = 1;
    goto loc_80202E64;
}

loc_80202A6C:
{
    r3 = 0x80360000u;
    r31 = (r3 + -20912);
    goto loc_80202D04;
}

loc_80202A78:
{
    r3 = (r25 & 65535);
    r0 = (r27 & 65535);
}

loc_80202A84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80202BF0;
    }
}

loc_80202A88:
{
    r5 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead32((r26 + 4));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r4 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80202AA8:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r0 = MemoryInline::FlatRead32((r28 + 8));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202B38;
    }
}

loc_80202ABC:
{
    r3 = MemoryInline::FlatRead16((r1 + 14));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(522));
}

loc_80202AC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80202AD0;
    }
}

loc_80202AC8:
{
    r25 = 0;
    goto loc_80202BBC;
}

loc_80202AD0:
{
    r5_addr_3 = (r5 + r3);
    r4 = MemoryInline::FlatRead16(r5_addr_3);
    r3 = (r3 + 2);
    r0 = 0;
}

loc_80202AE0:
{
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r3));
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(97))) {
        goto loc_80202AF4;
    }
}

loc_80202AE8:
{
}

loc_80202AEC:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(122))) {
        goto loc_80202AF4;
    }
}

loc_80202AF0:
{
    r0 = 1;
}

loc_80202AF4:
{
}

loc_80202AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80202B00;
    }
}

loc_80202AFC:
{
    r4 = (r4 + -32);
}

loc_80202B00:
{
    r25 = (r4 & 65535);
}

loc_80202B08:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(65345))) {
        goto loc_80202B24;
    }
}

loc_80202B0C:
{
}

loc_80202B10:
{
    if ((static_cast<uint32_t>(r25) > static_cast<uint32_t>(65370))) {
        goto loc_80202B24;
    }
}

loc_80202B14:
{
    r0 = (r25 + -32);
    r3 = 1;
    r30 = (r0 & 65535);
    goto loc_80202B28;
}

loc_80202B24:
{
    r3 = 0;
}

loc_80202B28:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_80202B2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202BBC;
    }
}

loc_80202B30:
{
    r25 = r30;
    goto loc_80202BBC;
}

loc_80202B38:
{
    r3 = MemoryInline::FlatRead16((r1 + 14));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
}

loc_80202B40:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80202B4C;
    }
}

loc_80202B44:
{
    r25 = 0;
    goto loc_80202BBC;
}

loc_80202B4C:
{
    r0 = (r3 + 1);
    r12 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r4 = 1;
    r5_addr_4 = (r5 + r3);
    r25 = MemoryInline::FlatRead8(r5_addr_4);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
    ctr = r12;
    ctx->lr = 0x80202B6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_80202B70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80202B94;
    }
}

loc_80202B74:
{
    r4 = MemoryInline::FlatRead16((r1 + 14));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 65280);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r4 + 1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r3));
    r5_addr_5 = (r5 + r4);
    r3 = MemoryInline::FlatRead8(r5_addr_5);
    r0 = (r0 + r3);
    r25 = (r0 & 65535);
}

loc_80202B94:
{
}

loc_80202B98:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(97))) {
        goto loc_80202BAC;
    }
}

loc_80202BA0:
{
}

loc_80202BA4:
{
    if ((static_cast<uint32_t>(r25) > static_cast<uint32_t>(122))) {
        goto loc_80202BAC;
    }
}

loc_80202BA8:
{
    r0 = 1;
}

loc_80202BAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80202BB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202BB8;
    }
}

loc_80202BB4:
{
    r25 = (r25 + -32);
}

loc_80202BB8:
{
    r25 = (r25 & 65535);
}

loc_80202BBC:
{
    r4 = MemoryInline::FlatRead16((r26 + 4));
    r3 = (r1 + 16);
    ctx->lr = 0x80202BC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8020270Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r27 = r3;
    r3 = (r25 & 65535);
    r4 = (r1 + 8);
    r6 = (r1 + 16);
    r5 = (r27 & 65535);
    ctx->lr = 0x80202BE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802029C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_80202BE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202BF0;
    }
}

loc_80202BE8:
{
    r3 = 1;
    goto loc_80202E64;
}

loc_80202BF0:
{
    r0 = MemoryInline::FlatRead16((r26 + 4));
}

loc_80202BF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80202C7C;
    }
}

loc_80202BFC:
{
    r5 = MemoryInline::FlatRead16((r26 + 6));
}

loc_80202C04:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(522))) {
        goto loc_80202C10;
    }
}

loc_80202C08:
{
    r25 = 0;
    goto loc_80202D04;
}

loc_80202C10:
{
    r4 = MemoryInline::FlatRead32(r26);
    r3 = (r5 + 2);
    r0 = 0;
    r4_addr_3 = (r4 + r5);
    r4 = MemoryInline::FlatRead16(r4_addr_3);
}

loc_80202C24:
{
    MemoryInline::FlatWrite16((r26 + 6), static_cast<uint16_t>(r3));
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(97))) {
        goto loc_80202C38;
    }
}

loc_80202C2C:
{
}

loc_80202C30:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(122))) {
        goto loc_80202C38;
    }
}

loc_80202C34:
{
    r0 = 1;
}

loc_80202C38:
{
}

loc_80202C3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80202C44;
    }
}

loc_80202C40:
{
    r4 = (r4 + -32);
}

loc_80202C44:
{
    r25 = (r4 & 65535);
}

loc_80202C4C:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(65345))) {
        goto loc_80202C68;
    }
}

loc_80202C50:
{
}

loc_80202C54:
{
    if ((static_cast<uint32_t>(r25) > static_cast<uint32_t>(65370))) {
        goto loc_80202C68;
    }
}

loc_80202C58:
{
    r0 = (r25 + -32);
    r3 = 1;
    r29 = (r0 & 65535);
    goto loc_80202C6C;
}

loc_80202C68:
{
    r3 = 0;
}

loc_80202C6C:
{
}

loc_80202C70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80202D04;
    }
}

loc_80202C74:
{
    r25 = r29;
    goto loc_80202D04;
}

loc_80202C7C:
{
    r5 = MemoryInline::FlatRead16((r26 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
}

loc_80202C84:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80202C90;
    }
}

loc_80202C88:
{
    r25 = 0;
    goto loc_80202D04;
}

loc_80202C90:
{
    r0 = (r5 + 1);
    r3 = MemoryInline::FlatRead32(r26);
    MemoryInline::FlatWrite16((r26 + 6), static_cast<uint16_t>(r0));
    r4 = 1;
    r3_addr_3 = (r3 + r5);
    r25 = MemoryInline::FlatRead8(r3_addr_3);
    r12 = MemoryInline::FlatRead32((r31 + 48));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
    ctr = r12;
    ctx->lr = 0x80202CB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_80202CB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80202CDC;
    }
}

loc_80202CBC:
{
    r4 = MemoryInline::FlatRead16((r26 + 6));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(8));
    r0 = (r0_rot_7 & 65280);
    r5 = MemoryInline::FlatRead32(r26);
    r3 = (r4 + 1);
    MemoryInline::FlatWrite16((r26 + 6), static_cast<uint16_t>(r3));
    r5_addr_9 = (r5 + r4);
    r3 = MemoryInline::FlatRead8(r5_addr_9);
    r0 = (r0 + r3);
    r25 = (r0 & 65535);
}

loc_80202CDC:
{
}

loc_80202CE0:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(97))) {
        goto loc_80202CF4;
    }
}

loc_80202CE8:
{
}

loc_80202CEC:
{
    if ((static_cast<uint32_t>(r25) > static_cast<uint32_t>(122))) {
        goto loc_80202CF4;
    }
}

loc_80202CF0:
{
    r0 = 1;
}

loc_80202CF4:
{
}

loc_80202CF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80202D00;
    }
}

loc_80202CFC:
{
    r25 = (r25 + -32);
}

loc_80202D00:
{
    r25 = (r25 & 65535);
}

loc_80202D04:
{
    r0 = (r25 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80202D08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202A78;
    }
}

loc_80202D0C:
{
    r3 = 0;
    goto loc_80202E64;
}

loc_80202D14:
{
    r3 = (r25 & 65535);
    r0 = (r27 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80202D20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202D2C;
    }
}

loc_80202D24:
{
    r3 = 0;
    goto loc_80202E64;
}

loc_80202D2C:
{
    r0 = MemoryInline::FlatRead16((r26 + 4));
}

loc_80202D34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80202DB8;
    }
}

loc_80202D38:
{
    r5 = MemoryInline::FlatRead16((r26 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(522));
}

loc_80202D40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80202D4C;
    }
}

loc_80202D44:
{
    r25 = 0;
    goto loc_80202E40;
}

loc_80202D4C:
{
    r4 = MemoryInline::FlatRead32(r26);
    r3 = (r5 + 2);
    r0 = 0;
    r4_addr_4 = (r4 + r5);
    r4 = MemoryInline::FlatRead16(r4_addr_4);
}

loc_80202D60:
{
    MemoryInline::FlatWrite16((r26 + 6), static_cast<uint16_t>(r3));
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(97))) {
        goto loc_80202D74;
    }
}

loc_80202D68:
{
}

loc_80202D6C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(122))) {
        goto loc_80202D74;
    }
}

loc_80202D70:
{
    r0 = 1;
}

loc_80202D74:
{
}

loc_80202D78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80202D80;
    }
}

loc_80202D7C:
{
    r4 = (r4 + -32);
}

loc_80202D80:
{
    r25 = (r4 & 65535);
}

loc_80202D88:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(65345))) {
        goto loc_80202DA4;
    }
}

loc_80202D8C:
{
}

loc_80202D90:
{
    if ((static_cast<uint32_t>(r25) > static_cast<uint32_t>(65370))) {
        goto loc_80202DA4;
    }
}

loc_80202D94:
{
    r0 = (r25 + -32);
    r3 = 1;
    r31 = (r0 & 65535);
    goto loc_80202DA8;
}

loc_80202DA4:
{
    r3 = 0;
}

loc_80202DA8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_80202DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202E40;
    }
}

loc_80202DB0:
{
    r25 = r31;
    goto loc_80202E40;
}

loc_80202DB8:
{
    r5 = MemoryInline::FlatRead16((r26 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
}

loc_80202DC0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80202DCC;
    }
}

loc_80202DC4:
{
    r25 = 0;
    goto loc_80202E40;
}

loc_80202DCC:
{
    r0 = (r5 + 1);
    r3 = MemoryInline::FlatRead32(r26);
    MemoryInline::FlatWrite16((r26 + 6), static_cast<uint16_t>(r0));
    r4 = 1;
    r3_addr_4 = (r3 + r5);
    r25 = MemoryInline::FlatRead8(r3_addr_4);
    r12 = MemoryInline::FlatRead32((r29 + 48));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
    ctr = r12;
    ctx->lr = 0x80202DF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_80202DF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80202E18;
    }
}

loc_80202DF8:
{
    r4 = MemoryInline::FlatRead16((r26 + 6));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(8));
    r0 = (r0_rot_9 & 65280);
    r5 = MemoryInline::FlatRead32(r26);
    r3 = (r4 + 1);
    MemoryInline::FlatWrite16((r26 + 6), static_cast<uint16_t>(r3));
    r5_addr_11 = (r5 + r4);
    r3 = MemoryInline::FlatRead8(r5_addr_11);
    r0 = (r0 + r3);
    r25 = (r0 & 65535);
}

loc_80202E18:
{
}

loc_80202E1C:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(97))) {
        goto loc_80202E30;
    }
}

loc_80202E24:
{
}

loc_80202E28:
{
    if ((static_cast<uint32_t>(r25) > static_cast<uint32_t>(122))) {
        goto loc_80202E30;
    }
}

loc_80202E2C:
{
    r0 = 1;
}

loc_80202E30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80202E34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202E3C;
    }
}

loc_80202E38:
{
    r25 = (r25 + -32);
}

loc_80202E3C:
{
    r25 = (r25 & 65535);
}

loc_80202E40:
{
    r4 = MemoryInline::FlatRead16((r26 + 4));
    r3 = r28;
    ctx->lr = 0x80202E4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8020270Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r27 = r3;
}

loc_80202E50:
{
    r0 = (r27 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80202E54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802029F8;
    }
}

loc_80202E58:
{
    r0 = (r25 & 65535);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_80202E64:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x802029C8 func_802029C8 preserves=true fpr_mask=0x00000000
