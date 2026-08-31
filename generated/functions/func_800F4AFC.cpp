#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F4AFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_800F4AFC;

loc_800F4AFC:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_800F4B14:
{
    r26 = 0x802F0000u;
    r30 = r3;
    r23 = r4;
    r26 = (r26 + 9280);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F4B58;
    }
}

loc_800F4B28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F4B38;
    }
}

loc_800F4B2C:
{
}

loc_800F4B30:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F4B68;
    }
}

loc_800F4B34:
{
    goto loc_800F4B70;
}

loc_800F4B38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(7));
}

loc_800F4B3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F4B50;
    }
}

loc_800F4B40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F4B70;
    }
}

loc_800F4B44:
{
}

loc_800F4B48:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(6))) {
        goto loc_800F4B60;
    }
}

loc_800F4B4C:
{
    goto loc_800F4B70;
}

loc_800F4B50:
{
    r31 = 7;
    goto loc_800F4B74;
}

loc_800F4B58:
{
    r31 = 2;
    goto loc_800F4B74;
}

loc_800F4B60:
{
    r31 = 6;
    goto loc_800F4B74;
}

loc_800F4B68:
{
    r31 = 0;
    goto loc_800F4B74;
}

loc_800F4B70:
{
    r31 = 13;
}

loc_800F4B74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_800F4B78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F4BE8;
    }
}

loc_800F4B7C:
{
    r3 = r30;
    // inline leaf 0x8010ACBC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8010ACBC
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = r30;
    // inline leaf 0x8010ACC4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 4));
    // end of inlined leaf 0x8010ACC4
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r3));
    r5 = 0x800F0000u;
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r4 = (r1 + 20);
    r5 = (r5 + 18620);
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x800F4BB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x800EF9F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_800F4BB4:
{
    r25 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F4BE8;
    }
}

loc_800F4BBC:
{
    r3 = r30;
    // inline leaf 0x8010ACC4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 4));
    // end of inlined leaf 0x8010ACC4
    r27 = r3;
    r3 = r30;
    // inline leaf 0x8010ACBC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8010ACBC
    r4 = (r27 & 65535);
    r5 = (r1 + 32);
    ctx->lr = 0x800F4BDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x8010E9C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r4 = r25;
    ctx->lr = 0x800F4BE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x800EF830u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_800F4BE8:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r27 = r3;
    r25 = 0;
    r29 = 0x800F0000u;
    goto loc_800F4CA8;
}

loc_800F4C00:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r4 = r25;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl6_0x800EF4B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl6_0x800EF4B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl6_0x800EF4C4;
    }
}

loc_inl6_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl6_0x800EF4C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl6_0x800EF4CC;
    }
}

loc_inl6_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl6_cont_800EF4B0;
}

loc_inl6_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl6_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r28 = r3;
    r3 = r30;
    // inline leaf 0x8010ACBC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8010ACBC
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r30;
    // inline leaf 0x8010ACC4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 4));
    // end of inlined leaf 0x8010ACC4
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r3));
    r4 = (r1 + 8);
    r5 = (r29 + 18620);
    r6 = 0;
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r7 = 0;
    ctx->lr = 0x800F4C40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x800EF9F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_800F4C44:
{
    r24 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_800F4CA4;
    }
}

loc_800F4C4C:
{
    r0 = MemoryInline::FlatRead32((r28 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F4C54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F4C94;
    }
}

loc_800F4C58:
{
    r0 = (r23 + -2);
    r3 = r30;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r27 = (r27_rot_1 & 134217727);
    // inline leaf 0x8010ACC4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 4));
    // end of inlined leaf 0x8010ACC4
    r29 = r3;
    r3 = r30;
    // inline leaf 0x8010ACBC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8010ACBC
    r12 = MemoryInline::FlatRead32((r28 + 44));
    r5 = r31;
    r6 = r27;
    r4 = (r29 & 65535);
    r7 = MemoryInline::FlatRead32((r28 + 56));
    ctr = r12;
    ctx->lr = 0x800F4C94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_800F4C94:
{
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r4 = r24;
    ctx->lr = 0x800F4CA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x800EF830u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    goto loc_800F4D10;
}

loc_800F4CA4:
{
    r25 = (r25 + 1);
}

loc_800F4CA8:
{
}

loc_800F4CAC:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r27))) {
        goto loc_800F4C00;
    }
}

loc_800F4CB0:
{
    r0 = MemoryInline::FlatRead32((r26 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F4CB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F4D10;
    }
}

loc_800F4CBC:
{
    r0 = MemoryInline::FlatRead32((r26 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F4CC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F4D04;
    }
}

loc_800F4CC8:
{
    r0 = (r23 + -2);
    r3 = r30;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r27 = (r27_rot_3 & 134217727);
    // inline leaf 0x8010ACC4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 4));
    // end of inlined leaf 0x8010ACC4
    r29 = r3;
    r3 = r30;
    // inline leaf 0x8010ACBC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8010ACBC
    r12 = MemoryInline::FlatRead32((r26 + 16));
    r5 = r31;
    r6 = r27;
    r4 = (r29 & 65535);
    r7 = MemoryInline::FlatRead32((r26 + 44));
    ctr = r12;
    ctx->lr = 0x800F4D04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_800F4D04:
{
    r3 = MemoryInline::FlatRead32((r26 + 48));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r26 + 48), r0);
}

loc_800F4D10:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x800F4AFC func_800F4AFC preserves=true fpr_mask=0x00000000
