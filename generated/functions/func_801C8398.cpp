#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C8398(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
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
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
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
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C8398;

loc_801C8398:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r5 = 0x80350000u;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & 1020);
    r5 = (r5 + 2352);
    r27 = r3;
    r5_addr_0 = (r5 + r6);
    r31 = MemoryInline::FlatRead32(r5_addr_0);
    r0 = 2;
    r28 = r4;
    r6 = 0;
    r5 = MemoryInline::FlatRead8((r31 + 2248));
    r3 = 0;
    r5 = (r5 * 96);
    r5 = (r31 + r5);
    r30 = (r5 + 160);
    ctr = r0;
}

loc_801C83E4:
{
    r30_addr_2 = (r30 + r6);
    MemoryInline::FlatWrite8(r30_addr_2, static_cast<uint8_t>(r3));
    r5 = (r30 + r6);
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r30 + r6);
    r30_addr_3 = (r30 + r6);
    MemoryInline::FlatWrite8(r30_addr_3, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r30 + r6);
    r30_addr_4 = (r30 + r6);
    MemoryInline::FlatWrite8(r30_addr_4, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r30 + r6);
    r30_addr_5 = (r30 + r6);
    MemoryInline::FlatWrite8(r30_addr_5, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r30 + r6);
    r30_addr_6 = (r30 + r6);
    MemoryInline::FlatWrite8(r30_addr_6, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r30 + r6);
    r30_addr_7 = (r30 + r6);
    MemoryInline::FlatWrite8(r30_addr_7, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C83E4;
    }
}

loc_801C84D8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 1), 0, 5u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0 = (r0 & 40735);
}

loc_801C84E8:
{
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 2232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801C84F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C851C;
    }
}

loc_801C84F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_801C84FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C851C;
    }
}

loc_801C8500:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
}

loc_801C8504:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C851C;
    }
}

loc_801C8508:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_801C850C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C851C;
    }
}

loc_801C8510:
{
    r0 = (r3 + -6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801C8518:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C8528;
    }
}

loc_801C851C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r0));
    goto loc_801C8530;
}

loc_801C8528:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r0));
}

loc_801C8530:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
    r3 = 0x80350000u;
    r3 = (r3 + 16504);
    r5 = 16;
    MemoryInline::FlatWrite8((r30 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite32((r31 + 2120), r0);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r7 = MemoryInline::FlatRead16((r31 + 2164));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 3);
    r6 = (r6 & -4);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = (r6 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r7);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    r7 = MemoryInline::FlatRead16((r31 + 2166));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 2);
    r6 = (r6 & -4);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r6 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r7);
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 5));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r4 = (r4 + 6);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_3 & -4);
    r7 = MemoryInline::FlatRead16((r31 + 2168));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 2);
    r6 = (r6 & -4);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r6 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r7);
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
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
    r3 = r27;
    r4 = (r28 + 6);
    r5 = 16;
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r31 + 2112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C860C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C8BE8;
    }
}

loc_801C8610:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
}

loc_801C8618:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801C8798;
    }
}

loc_801C861C:
{
    r3 = MemoryInline::FlatRead8((r31 + 2248));
    guest_range_3 = MemoryInline::ResolveRangeHost((r28 + 6), 0, 6u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 6));
    r3 = (r3 * 96);
    r3 = (r31 + r3);
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r28 + 7));
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r28 + 8));
    r4 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r28 + 11));
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
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r28 + 9));
    r4 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r28 + 11));
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
    r4 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r28 + 10));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r28 + 11));
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
    r0 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r28 + 11));
    r4 = MemoryInline::FlatRead16((r3 + 160));
    r0 = ~(r0 | r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_9 & 24576);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 160), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2321));
}

loc_801C86F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C8714;
    }
}

loc_801C86F4:
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

loc_801C8714:
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

loc_801C8738:
{
    r0 = (r0 - r4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(-128))) {
        goto loc_801C8750;
    }
}

loc_801C8744:
{
    r0 = -128;
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
    goto loc_801C8768;
}

loc_801C8750:
{
}

loc_801C8754:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(127))) {
        goto loc_801C8764;
    }
}

loc_801C8758:
{
    r0 = 127;
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
    goto loc_801C8768;
}

loc_801C8764:
{
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r5));
}

loc_801C8768:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-128));
}

loc_801C876C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C877C;
    }
}

loc_801C8770:
{
    r0 = -128;
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r0));
    goto loc_801C8BB4;
}

loc_801C877C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(127));
}

loc_801C8780:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801C8790;
    }
}

loc_801C8784:
{
    r0 = 127;
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r0));
    goto loc_801C8BB4;
}

loc_801C8790:
{
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r4));
    goto loc_801C8BB4;
}

loc_801C8798:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801C879C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C8BB4;
    }
}

loc_801C87A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 2242));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801C87A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C888C;
    }
}

loc_801C87AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C87BC;
    }
}

loc_801C87B0:
{
}

loc_801C87B4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_801C87C8;
    }
}

loc_801C87B8:
{
    goto loc_801C8A10;
}

loc_801C87BC:
{
}

loc_801C87C0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_801C8A10;
    }
}

loc_801C87C4:
{
    goto loc_801C897C;
}

loc_801C87C8:
{
    r3 = MemoryInline::FlatRead8((r31 + 2248));
    guest_range_2 = MemoryInline::ResolveRangeHost((r28 + 6), 0, 6u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r28 + 6));
    r3 = (r3 * 96);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & 1008);
    r4 = (r31 + r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    r29 = (r4 + 160);
    MemoryInline::FlatWrite16((r4 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r28 + 7));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & 1008);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 206), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r28 + 7));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r28 + 8));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r28 + 6));
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
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r28 + 8));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_15 & 992);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r28 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r28 + 9));
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
    MemoryInline::FlatWrite8((r29 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r28 + 9));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_17 & 248);
    MemoryInline::FlatWrite8((r29 + 53), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r28 + 10));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r28 + 11));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_18 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0 = (r0 ^ 65535);
    MemoryInline::FlatWrite16((r29 + 42), static_cast<uint16_t>(r0));
    goto loc_801C8A10;
}

loc_801C888C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r28 + 6), 0, 9u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r28 + 6));
    r4 = MemoryInline::FlatRead8((r31 + 2248));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r28 + 10));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 & -4);
    r0 = (r0 & 3);
    r4 = (r4 * 96);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 | r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = (r31 + r4);
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 204), static_cast<uint16_t>(r0));
    r29 = (r4 + 160);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r28 + 10));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r28 + 7));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_24 & 3);
    r3 = (static_cast<int32_t>(r3) >> 2);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 | r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r28 + 10));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r28 + 8));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r0 = (r0_rot_25 & 3);
    r3 = (static_cast<int32_t>(r3) >> 4);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r3 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 | r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r29 + 46), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r28 + 9));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r28 + 10));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 6);
    r3 = (r3 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 | r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r28 + 11));
    MemoryInline::FlatWrite8((r29 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r28 + 12));
    MemoryInline::FlatWrite8((r29 + 53), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r28 + 13));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r28 + 14));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_5 = (r0_rot_26 & 65280);
    r0_mdest_5 = (r0 & -65281);
    r0 = (r0_mdest_5 | r0_mrot_5);
    r0 = (r0 ^ 65535);
    MemoryInline::FlatWrite16((r29 + 42), static_cast<uint16_t>(r0));
    goto loc_801C8A10;
}

loc_801C897C:
{
    r3 = MemoryInline::FlatRead8((r31 + 2248));
    guest_range_4 = MemoryInline::ResolveRangeHost((r28 + 6), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, (r28 + 6));
    r3 = (r3 * 96);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = (r31 + r3);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    r29 = (r4 + 160);
    MemoryInline::FlatWrite16((r4 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r28 + 7));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 208), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r28 + 8));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 206), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r28 + 9));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + -512);
    MemoryInline::FlatWrite16((r4 + 210), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r28 + 10));
    MemoryInline::FlatWrite8((r4 + 212), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r28 + 11));
    MemoryInline::FlatWrite8((r4 + 213), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r28 + 12));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r28 + 13));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_4 = (r0_rot_23 & 65280);
    r0_mdest_4 = (r0 & -65281);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r0 = (r0 ^ 65535);
    MemoryInline::FlatWrite16((r4 + 202), static_cast<uint16_t>(r0));
}

loc_801C8A10:
{
    r0 = MemoryInline::FlatRead8((r31 + 2321));
}

loc_801C8A18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C8A54;
    }
}

loc_801C8A1C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 2321), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2178), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2184), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2196), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 52));
    MemoryInline::FlatWrite8((r31 + 2202), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    MemoryInline::FlatWrite8((r31 + 2203), static_cast<uint8_t>(r0));
}

loc_801C8A54:
{
    r4 = MemoryInline::FlatRead16((r31 + 2178));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead16((r31 + 2184));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = (r0 - r4);
    r0 = MemoryInline::FlatRead16((r29 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 - r3);
}

loc_801C8A74:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(-512))) {
        goto loc_801C8A88;
    }
}

loc_801C8A7C:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    goto loc_801C8AA0;
}

loc_801C8A88:
{
}

loc_801C8A8C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(511))) {
        goto loc_801C8A9C;
    }
}

loc_801C8A90:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    goto loc_801C8AA0;
}

loc_801C8A9C:
{
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r4));
}

loc_801C8AA0:
{
}

loc_801C8AA4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-512))) {
        goto loc_801C8AB4;
    }
}

loc_801C8AA8:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r29 + 46), static_cast<uint16_t>(r0));
    goto loc_801C8ACC;
}

loc_801C8AB4:
{
}

loc_801C8AB8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(511))) {
        goto loc_801C8AC8;
    }
}

loc_801C8ABC:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r29 + 46), static_cast<uint16_t>(r0));
    goto loc_801C8ACC;
}

loc_801C8AC8:
{
    MemoryInline::FlatWrite16((r29 + 46), static_cast<uint16_t>(r3));
}

loc_801C8ACC:
{
    r4 = MemoryInline::FlatRead16((r31 + 2190));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead16((r31 + 2196));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = (r0 - r4);
    r0 = MemoryInline::FlatRead16((r29 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 - r3);
}

loc_801C8AEC:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(-512))) {
        goto loc_801C8B00;
    }
}

loc_801C8AF4:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    goto loc_801C8B18;
}

loc_801C8B00:
{
}

loc_801C8B04:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(511))) {
        goto loc_801C8B14;
    }
}

loc_801C8B08:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    goto loc_801C8B18;
}

loc_801C8B14:
{
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r4));
}

loc_801C8B18:
{
}

loc_801C8B1C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-512))) {
        goto loc_801C8B2C;
    }
}

loc_801C8B20:
{
    r0 = -512;
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r0));
    goto loc_801C8B44;
}

loc_801C8B2C:
{
}

loc_801C8B30:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(511))) {
        goto loc_801C8B40;
    }
}

loc_801C8B34:
{
    r0 = 511;
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r0));
    goto loc_801C8B44;
}

loc_801C8B40:
{
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r3));
}

loc_801C8B44:
{
    r4 = MemoryInline::FlatRead8((r31 + 2202));
    r0 = MemoryInline::FlatRead8((r29 + 52));
    r3 = MemoryInline::FlatRead8((r31 + 2203));
    r4 = (r0 - r4);
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 - r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_801C8B74;
    }
}

loc_801C8B68:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 52), static_cast<uint8_t>(r0));
    goto loc_801C8B78;
}

loc_801C8B74:
{
    MemoryInline::FlatWrite8((r29 + 52), static_cast<uint8_t>(r4));
}

loc_801C8B78:
{
}

loc_801C8B7C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801C8B8C;
    }
}

loc_801C8B80:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 53), static_cast<uint8_t>(r0));
    goto loc_801C8B90;
}

loc_801C8B8C:
{
    MemoryInline::FlatWrite8((r29 + 53), static_cast<uint8_t>(r3));
}

loc_801C8B90:
{
    r3 = (r13 + -24500);
    r3_addr_1 = (r3 + r27);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C8B9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C8BB4;
    }
}

loc_801C8BA0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 50), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r29 + 52), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 53), static_cast<uint8_t>(r0));
}

loc_801C8BB4:
{
    r3 = 0x80350000u;
    r4 = 0x802A0000u;
    r3 = (r3 + 16504);
    r5 = 16;
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

loc_801C8BD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C8BE8;
    }
}

loc_801C8BD4:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C8BE8;
    }
}

loc_801C8BE0:
{
    r0 = -7;
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r0));
}

loc_801C8BE8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 2248));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_30 & 255);
    MemoryInline::FlatWrite8((r31 + 2248), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
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
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
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

// RECOMP_GUEST_ABI gpr_read=0xF8003FFB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C8398 func_801C8398 preserves=true fpr_mask=0x00000000
