#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C9CC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r29_addr_7 = 0;
    uint32_t r29_addr_8 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_subfic_ra_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C9CC4;

loc_801C9CC4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r7 = 1127219200;
    r5 = 0x80350000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & 1020);
    r5 = (r5 + 2352);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = (r13 + -24512);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    r31_addr_0 = (r31 + r3);
    r0 = MemoryInline::FlatRead8(r31_addr_0);
    r5_addr_0 = (r5 + r6);
    r30 = MemoryInline::FlatRead32(r5_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C9D04:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    r0 = MemoryInline::FlatRead8((r30 + 2248));
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    r0 = (r0 * 96);
    r5 = (r30 + r0);
    r29 = (r5 + 160);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C9E34;
    }
}

loc_801C9D20:
{
    r5 = (r13 + -24508);
    r5_addr_1 = (r5 + r3);
    r0 = MemoryInline::FlatRead8(r5_addr_1);
}

loc_801C9D2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C9E34;
    }
}

loc_801C9D30:
{
    r0 = 2;
    r6 = 0;
    r3 = 0;
    ctr = r0;
}

loc_801C9D40:
{
    r29_addr_2 = (r29 + r6);
    MemoryInline::FlatWrite8(r29_addr_2, static_cast<uint8_t>(r3));
    r5 = (r29 + r6);
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r29 + r6);
    r29_addr_3 = (r29 + r6);
    MemoryInline::FlatWrite8(r29_addr_3, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r29 + r6);
    r29_addr_4 = (r29 + r6);
    MemoryInline::FlatWrite8(r29_addr_4, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r29 + r6);
    r29_addr_5 = (r29 + r6);
    MemoryInline::FlatWrite8(r29_addr_5, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r29 + r6);
    r29_addr_6 = (r29 + r6);
    MemoryInline::FlatWrite8(r29_addr_6, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r29 + r6);
    r29_addr_7 = (r29 + r6);
    MemoryInline::FlatWrite8(r29_addr_7, static_cast<uint8_t>(r3));
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
        goto loc_801C9D40;
    }
}

loc_801C9E34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 1), 0, 21u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0 = (r0 & 40735);
}

loc_801C9E44:
{
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 2232));
}

loc_801C9E50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C9E64;
    }
}

loc_801C9E54:
{
}

loc_801C9E58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801C9E64;
    }
}

loc_801C9E5C:
{
}

loc_801C9E60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_801C9E70;
    }
}

loc_801C9E64:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 41), static_cast<uint8_t>(r0));
    goto loc_801C9E78;
}

loc_801C9E70:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r29 + 41), static_cast<uint8_t>(r0));
}

loc_801C9E78:
{
    r3 = MemoryInline::FlatRead8((r30 + 2241));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 40), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r30 + 2120), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = MemoryInline::FlatRead16((r30 + 2166));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 2);
    r3 = (static_cast<int32_t>(r3) >> 6);
    r5 = (r5 & -4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 12);
    r7 = MemoryInline::FlatRead16((r29 + 6));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(31));
    r0_mrot_1 = (r0_rot_4 & 48);
    r0_mdest_1 = (r0 & -49);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r5 = (static_cast<int32_t>(r6) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (static_cast<int32_t>(r3) >> 3);
    r0 = (r7 | r0);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 6));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & 768);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r29 + 24), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 5));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 6));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 768);
    r0 = (r3 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_subfic_ra_0 = r0;
    r0 = (767 - r0_subfic_ra_0);
    MemoryInline::FlatWrite16((r29 + 26), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r4 + 11));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r4 + 12));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & 65280);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 | r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_7 & 65472);
    MemoryInline::FlatWrite16((r29 + 74), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 6));
    r0 = (r0 & 15);
    MemoryInline::FlatWrite8((r29 + 76), static_cast<uint8_t>(r0));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 7));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (r5 + 1);
    r0 = (-1 - r5);
    r0 = ~(r3 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r6 & ~r0);
    MemoryInline::FlatWrite16((r29 + 66), static_cast<uint16_t>(r0));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 8));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (r5 + 1);
    r0 = (-1 - r5);
    r0 = ~(r3 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r6 & ~r0);
    MemoryInline::FlatWrite16((r29 + 68), static_cast<uint16_t>(r0));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 9));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -26088));
    r3 = (r5 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26080));
    r0 = (-1 - r5);
    r0 = ~(r3 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r6 & ~r0);
    MemoryInline::FlatWrite16((r29 + 70), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_1 & -8);
    r0 = MemoryInline::FlatRead16((r29 + 66));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 10));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    MemoryInline::FlatWrite16((r29 + 66), static_cast<uint16_t>(r0));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r6 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r29 + 68));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5_subfic_ra_0 = r5;
    r5 = (-1 - r5_subfic_ra_0);
    r5 = ~(r6 | r5);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r5 = (static_cast<int32_t>(r5) >> 31);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_subfic_ra_1 = r0;
    r0 = (767 - r0_subfic_ra_1);
    r5 = (r7 & ~r5);
    MemoryInline::FlatWrite16((r29 + 68), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r29 + 70), static_cast<uint16_t>(r3));
    r0_subfic_ra_2 = r0;
    r0 = (767 - r0_subfic_ra_2);
    MemoryInline::FlatWrite16((r29 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 76));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    r0 = (r3 & 65535);
}

loc_801CA048:
{
    MemoryInline::FlatWrite16((r29 + 28), static_cast<uint16_t>(r3));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CA074;
    }
}

loc_801CA050:
{
    r0 = MemoryInline::FlatRead16((r29 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801CA058:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1023))) {
        goto loc_801CA074;
    }
}

loc_801CA05C:
{
    r0 = MemoryInline::FlatRead16((r29 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801CA064:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(767))) {
        goto loc_801CA074;
    }
}

loc_801CA068:
{
    r0 = MemoryInline::FlatRead8((r29 + 76));
}

loc_801CA070:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_801CA090;
    }
}

loc_801CA074:
{
    r3 = 0;
    r0 = 767;
    MemoryInline::FlatWrite16((r29 + 24), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r29 + 26), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 28), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r29 + 74), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r29 + 76), static_cast<uint8_t>(r3));
}

loc_801CA090:
{
    r0 = 2;
    f3.d = MemoryInline::FlatReadFloat64((r2 + -26088));
    MemoryInline::FlatWrite8((r29 + 30), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26080));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r4 + 13));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 15));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & 768);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r29 + 32), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r4 + 14));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 15));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & 768);
    r0 = (r3 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_subfic_ra_3 = r0;
    r0 = (767 - r0_subfic_ra_3);
    MemoryInline::FlatWrite16((r29 + 34), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r4 + 20));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r4 + 21));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & 65280);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 | r0);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_13 & 65472);
    MemoryInline::FlatWrite16((r29 + 86), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 15));
    r0 = (r0 & 15);
    MemoryInline::FlatWrite8((r29 + 88), static_cast<uint8_t>(r0));
    r0 = (r0 ^ -2147483648);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r4 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r5 + 1);
    r0 = (-1 - r5);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = ~(r3 | r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = (static_cast<int32_t>(r0) >> 31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r0 = (r6 & ~r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    MemoryInline::FlatWrite16((r29 + 78), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r7 = (r7_rot_0 & -8);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r4 + 17));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r3 = (r5 + 1);
    r0 = (-1 - r5);
    r0 = ~(r3 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    f0.d = PPC_Fctiwz(f0.d);
    r0 = (r6 & ~r0);
    MemoryInline::FlatWrite16((r29 + 80), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & -8);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r4 + 18));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    r3 = fctiwzword1;
    r5 = (r8 + 1);
    r0 = (-1 - r8);
    r5 = ~(r5 | r0);
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CA19C:
{
    r0 = (static_cast<int32_t>(r5) >> 31);
    r0 = (r9 & ~r0);
    MemoryInline::FlatWrite16((r29 + 82), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & -8);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r4 + 19));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    MemoryInline::FlatWrite16((r29 + 78), static_cast<uint16_t>(r7));
    r4 = (r8 + 1);
    r0 = (-1 - r8);
    r0 = ~(r4 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r4 = (r9 & ~r0);
    r0 = (767 - r6);
    MemoryInline::FlatWrite16((r29 + 80), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_15 & -8);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r29 + 82), static_cast<uint16_t>(r5));
    r0_subfic_ra_4 = r0;
    r0 = (767 - r0_subfic_ra_4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(767) >= static_cast<uint32_t>(r0_subfic_ra_4) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite16((r29 + 84), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 36), static_cast<uint16_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CA21C;
    }
}

loc_801CA1F8:
{
    r0 = MemoryInline::FlatRead16((r29 + 32));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801CA200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1023))) {
        goto loc_801CA21C;
    }
}

loc_801CA204:
{
    r0 = MemoryInline::FlatRead16((r29 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801CA20C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(767))) {
        goto loc_801CA21C;
    }
}

loc_801CA210:
{
    r0 = MemoryInline::FlatRead8((r29 + 88));
}

loc_801CA218:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_801CA238;
    }
}

loc_801CA21C:
{
    r3 = 0;
    r0 = 767;
    MemoryInline::FlatWrite16((r29 + 32), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r29 + 34), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 36), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r29 + 86), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r29 + 88), static_cast<uint8_t>(r3));
}

loc_801CA238:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 38), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31_addr_1 = (r31 + r28);
    r0 = MemoryInline::FlatRead8(r31_addr_1);
    r6 = (r13 + -24508);
    r4 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CA254:
{
    r6_addr_0 = (r6 + r28);
    MemoryInline::FlatWrite8(r6_addr_0, static_cast<uint8_t>(r4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CA294;
    }
}

loc_801CA25C:
{
    r6_addr_1 = (r6 + r28);
    r0 = MemoryInline::FlatRead8(r6_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801CA264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CA294;
    }
}

loc_801CA268:
{
    r5 = MemoryInline::FlatRead16((r30 + 2168));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = 0;
    r4 = MemoryInline::FlatRead16((r29 + 6));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r4 - r5);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead8((r30 + 2248));
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 255);
    MemoryInline::FlatWrite8((r30 + 2248), static_cast<uint8_t>(r4));
    r6_addr_2 = (r6 + r28);
    MemoryInline::FlatWrite8(r6_addr_2, static_cast<uint8_t>(r0));
    r31_addr_2 = (r31 + r28);
    MemoryInline::FlatWrite8(r31_addr_2, static_cast<uint8_t>(r0));
}

loc_801CA294:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00022FF gpr_write=0xF00003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C9CC4 func_801C9CC4 preserves=true fpr_mask=0x00000000
