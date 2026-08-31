#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C8E50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C8E50;

loc_801C8E50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80350000u;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & 1020);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r5 + 2352);
    r0 = 2;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r3 = 0;
    r5_addr_0 = (r5 + r6);
    r31 = MemoryInline::FlatRead32(r5_addr_0);
    r5 = MemoryInline::FlatRead8((r31 + 2248));
    r5 = (r5 * 96);
    r5 = (r31 + r5);
    r5 = (r5 + 160);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    ctr = r0;
}

loc_801C8EA8:
{
    r5_addr_2 = (r5 + r7);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r3));
    r6 = (r5 + r7);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r3));
    r6 = (r5 + r7);
    r5_addr_3 = (r5 + r7);
    MemoryInline::FlatWrite8(r5_addr_3, static_cast<uint8_t>(r3));
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r3));
    r6 = (r5 + r7);
    r5_addr_4 = (r5 + r7);
    MemoryInline::FlatWrite8(r5_addr_4, static_cast<uint8_t>(r3));
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r3));
    r6 = (r5 + r7);
    r5_addr_5 = (r5 + r7);
    MemoryInline::FlatWrite8(r5_addr_5, static_cast<uint8_t>(r3));
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r3));
    r6 = (r5 + r7);
    r5_addr_6 = (r5 + r7);
    MemoryInline::FlatWrite8(r5_addr_6, static_cast<uint8_t>(r3));
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r3));
    r6 = (r5 + r7);
    r5_addr_7 = (r5 + r7);
    MemoryInline::FlatWrite8(r5_addr_7, static_cast<uint8_t>(r3));
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C8EA8;
    }
}

loc_801C8F9C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 1), 0, 5u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 & 40735);
}

loc_801C8FB0:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 2232));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_801C8FBC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C8FD0;
    }
}

loc_801C8FC0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r0));
    goto loc_801C8FDC;
}

loc_801C8FD0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = -4;
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r0));
}

loc_801C8FDC:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
    r3 = r28;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r6 = (r29 + 6);
    r7 = 10;
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite32((r31 + 2120), r0);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r9 = MemoryInline::FlatRead16((r31 + 2164));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 3);
    r8 = (r5 & -4);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0 = (r8 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r9);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r9 = MemoryInline::FlatRead16((r31 + 2166));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 2);
    r8 = (r5 & -4);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r8 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r9);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 5));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r4 = (r1 + 8);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    r9 = MemoryInline::FlatRead16((r31 + 2168));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 2);
    r8 = (r5 & -4);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r8 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r9);
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead8((r31 + 2251));
    ctx->lr = 0x801C90B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C6EDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x80350000u;
    r4 = (r29 + 16);
    r3 = (r3 + 16504);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r28;
    r4 = (r29 + 16);
    r5 = 6;
    r6 = 0;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB0A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r31 + 2112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C90E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C96A4;
    }
}

loc_801C90E4:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
}

loc_801C90EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801C926C;
    }
}

loc_801C90F0:
{
    r3 = MemoryInline::FlatRead8((r31 + 2248));
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 16), 0, 6u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r29 + 16));
    r3 = (r3 * 96);
    r3 = (r31 + r3);
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r29 + 17));
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r29 + 18));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r29 + 21));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r6 = MemoryInline::FlatRead16((r31 + 2190));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = (r5 & -4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r0 = (r0_rot_6 & 3);
    r4 = (static_cast<int32_t>(r4) >> 2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r4 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r3 + 202), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r29 + 19));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r29 + 21));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r6 = MemoryInline::FlatRead16((r31 + 2192));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r0 = (r0_rot_8 & 3);
    r4 = (static_cast<int32_t>(r4) >> 4);
    r5 = (r5 & -4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r4 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r3 + 204), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r29 + 20));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r29 + 21));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r5 = MemoryInline::FlatRead16((r31 + 2194));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 6);
    r4 = (r4 & -4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r4 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r5);
    MemoryInline::FlatWrite16((r3 + 206), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r29 + 21));
    r4 = MemoryInline::FlatRead16((r3 + 160));
    r0 = ~(r0 | r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_9 & 24576);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 160), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2321));
}

loc_801C91C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C91E8;
    }
}

loc_801C91C8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 2321), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 208));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r31 + 2178), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 209));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r31 + 2184), static_cast<uint16_t>(r0));
}

loc_801C91E8:
{
    r4 = MemoryInline::FlatRead16((r31 + 2178));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 208));
    r5 = (r4 & 255);
    r4 = MemoryInline::FlatRead16((r31 + 2184));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = (r0 - r5);
    r0 = MemoryInline::FlatRead8((r3 + 209));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r4 = (r4 & 255);
}

loc_801C920C:
{
    r0 = (r0 - r4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(-128))) {
        goto loc_801C9224;
    }
}

loc_801C9218:
{
    r0 = -128;
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
    goto loc_801C923C;
}

loc_801C9224:
{
}

loc_801C9228:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(127))) {
        goto loc_801C9238;
    }
}

loc_801C922C:
{
    r0 = 127;
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
    goto loc_801C923C;
}

loc_801C9238:
{
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r5));
}

loc_801C923C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-128));
}

loc_801C9240:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C9250;
    }
}

loc_801C9244:
{
    r0 = -128;
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r0));
    goto loc_801C966C;
}

loc_801C9250:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(127));
}

loc_801C9254:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801C9264;
    }
}

loc_801C9258:
{
    r0 = 127;
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r0));
    goto loc_801C966C;
}

loc_801C9264:
{
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r4));
    goto loc_801C966C;
}

loc_801C926C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801C9270:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C966C;
    }
}

loc_801C9274:
{
    r0 = MemoryInline::FlatRead8((r31 + 2242));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801C927C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9360;
    }
}

loc_801C9280:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C9290;
    }
}

loc_801C9284:
{
}

loc_801C9288:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_801C929C;
    }
}

loc_801C928C:
{
    goto loc_801C94C8;
}

loc_801C9290:
{
}

loc_801C9294:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_801C94C8;
    }
}

loc_801C9298:
{
    goto loc_801C9440;
}

loc_801C929C:
{
    r3 = MemoryInline::FlatRead8((r31 + 2248));
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 16), 0, 6u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r29 + 16));
    r3 = (r3 * 96);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & 1008);
    r4 = (r31 + r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    r30 = (r4 + 160);
    MemoryInline::FlatWrite16((r4 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r29 + 17));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & 1008);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 206), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r29 + 17));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 18));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r29 + 16));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_12 & 6);
    r5 = (static_cast<int32_t>(r5) >> 7);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0_mrot_1 = (r0_rot_13 & 24);
    r0_mdest_1 = (r0 & -25);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r4 = (static_cast<int32_t>(r4) >> 3);
    r0 = (r5 | r0);
    r3 = (static_cast<int32_t>(r3) >> 5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_14 & -32);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 18));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_15 & 992);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r30 + 50), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 18));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r29 + 19));
    r3 = (static_cast<int32_t>(r3) >> 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r0_mrot_2 = (r3 & 24);
    r0_mdest_2 = (r0 & -25);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & 248);
    MemoryInline::FlatWrite8((r30 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r29 + 19));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_17 & 248);
    MemoryInline::FlatWrite8((r30 + 53), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r29 + 20));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r29 + 21));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_18 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0 = (r0 ^ 65535);
    MemoryInline::FlatWrite16((r30 + 42), static_cast<uint16_t>(r0));
    goto loc_801C94C8;
}

loc_801C9360:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 16), 0, 6u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r29 + 16));
    r0 = 0;
    r5 = MemoryInline::FlatRead8((r31 + 2248));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r3 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r29 + 20));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (r4 & -4);
    r3 = (r3 & 3);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r3 = (r4 | r3);
    r5 = (r5 * 96);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = (r31 + r5);
    r3 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 204), static_cast<uint16_t>(r3));
    r30 = (r4 + 160);
    r4 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r29 + 20));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r29 + 17));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r3 = (r3_rot_5 & 3);
    r4 = (static_cast<int32_t>(r4) >> 2);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (r4 & -4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r3 = (r4 | r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 + -512);
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r29 + 20));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r29 + 18));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r3 = (r3_rot_6 & 3);
    r4 = (static_cast<int32_t>(r4) >> 4);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (r4 & -4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r3 = (r4 | r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 + -512);
    MemoryInline::FlatWrite16((r30 + 46), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r29 + 19));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r29 + 20));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_5 & -4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 6);
    r4 = (r4 & -4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r3 = (r4 | r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 + -512);
    MemoryInline::FlatWrite16((r30 + 50), static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r29 + 21));
    MemoryInline::FlatWrite8((r30 + 52), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 53), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r30 + 42), static_cast<uint16_t>(r0));
    goto loc_801C94C8;
}

loc_801C9440:
{
    r4 = MemoryInline::FlatRead8((r31 + 2248));
    r0 = 0;
    r3 = MemoryInline::FlatRead8((r29 + 16));
    r4 = (r4 * 96);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = (r31 + r4);
    r3 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 204), static_cast<uint16_t>(r3));
    r30 = (r4 + 160);
    r3 = MemoryInline::FlatRead8((r29 + 17));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 208), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead8((r29 + 18));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 206), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead8((r29 + 19));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 210), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead8((r29 + 20));
    MemoryInline::FlatWrite8((r4 + 212), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r29 + 21));
    MemoryInline::FlatWrite8((r4 + 213), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r4 + 202), static_cast<uint16_t>(r0));
}

loc_801C94C8:
{
    r0 = MemoryInline::FlatRead8((r31 + 2321));
}

loc_801C94D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C950C;
    }
}

loc_801C94D4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 2321), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2178), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2184), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2196), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 52));
    MemoryInline::FlatWrite8((r31 + 2202), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 53));
    MemoryInline::FlatWrite8((r31 + 2203), static_cast<uint8_t>(r0));
}

loc_801C950C:
{
    r4 = MemoryInline::FlatRead16((r31 + 2178));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead16((r31 + 2184));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = (r0 - r4);
    r0 = MemoryInline::FlatRead16((r30 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 - r3);
}

loc_801C952C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(-512))) {
        goto loc_801C9540;
    }
}

loc_801C9534:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    goto loc_801C9558;
}

loc_801C9540:
{
}

loc_801C9544:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(511))) {
        goto loc_801C9554;
    }
}

loc_801C9548:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    goto loc_801C9558;
}

loc_801C9554:
{
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r4));
}

loc_801C9558:
{
}

loc_801C955C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-512))) {
        goto loc_801C956C;
    }
}

loc_801C9560:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r30 + 46), static_cast<uint16_t>(r0));
    goto loc_801C9584;
}

loc_801C956C:
{
}

loc_801C9570:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(511))) {
        goto loc_801C9580;
    }
}

loc_801C9574:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r30 + 46), static_cast<uint16_t>(r0));
    goto loc_801C9584;
}

loc_801C9580:
{
    MemoryInline::FlatWrite16((r30 + 46), static_cast<uint16_t>(r3));
}

loc_801C9584:
{
    r4 = MemoryInline::FlatRead16((r31 + 2190));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead16((r31 + 2196));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = (r0 - r4);
    r0 = MemoryInline::FlatRead16((r30 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 - r3);
}

loc_801C95A4:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(-512))) {
        goto loc_801C95B8;
    }
}

loc_801C95AC:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r0));
    goto loc_801C95D0;
}

loc_801C95B8:
{
}

loc_801C95BC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(511))) {
        goto loc_801C95CC;
    }
}

loc_801C95C0:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r0));
    goto loc_801C95D0;
}

loc_801C95CC:
{
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r4));
}

loc_801C95D0:
{
}

loc_801C95D4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-512))) {
        goto loc_801C95E4;
    }
}

loc_801C95D8:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r30 + 50), static_cast<uint16_t>(r0));
    goto loc_801C95FC;
}

loc_801C95E4:
{
}

loc_801C95E8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(511))) {
        goto loc_801C95F8;
    }
}

loc_801C95EC:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r30 + 50), static_cast<uint16_t>(r0));
    goto loc_801C95FC;
}

loc_801C95F8:
{
    MemoryInline::FlatWrite16((r30 + 50), static_cast<uint16_t>(r3));
}

loc_801C95FC:
{
    r4 = MemoryInline::FlatRead8((r31 + 2202));
    r0 = MemoryInline::FlatRead8((r30 + 52));
    r3 = MemoryInline::FlatRead8((r31 + 2203));
    r4 = (r0 - r4);
    r0 = MemoryInline::FlatRead8((r30 + 53));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 - r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_801C962C;
    }
}

loc_801C9620:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 52), static_cast<uint8_t>(r0));
    goto loc_801C9630;
}

loc_801C962C:
{
    MemoryInline::FlatWrite8((r30 + 52), static_cast<uint8_t>(r4));
}

loc_801C9630:
{
}

loc_801C9634:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801C9644;
    }
}

loc_801C9638:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 53), static_cast<uint8_t>(r0));
    goto loc_801C9648;
}

loc_801C9644:
{
    MemoryInline::FlatWrite8((r30 + 53), static_cast<uint8_t>(r3));
}

loc_801C9648:
{
    r3 = (r13 + -24500);
    r3_addr_1 = (r3 + r28);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C9654:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C966C;
    }
}

loc_801C9658:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 50), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r30 + 52), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 53), static_cast<uint8_t>(r0));
}

loc_801C966C:
{
    r3 = 0x80350000u;
    r4 = 0x802A0000u;
    r3 = (r3 + 16504);
    r5 = 6;
    r4 = (r4 + -6696);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
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

loc_801C9688:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C96A4;
    }
}

loc_801C968C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r3 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C96A4;
    }
}

loc_801C969C:
{
    r0 = -7;
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r0));
}

loc_801C96A4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 2248));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_22 & 255);
    MemoryInline::FlatWrite8((r31 + 2248), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFCFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C8E50 func_801C8E50 preserves=true fpr_mask=0x00000000
