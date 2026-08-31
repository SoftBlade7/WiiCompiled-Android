#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F09B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_12 = 0;
    uint32_t r0_mdest_13 = 0;
    uint32_t r0_mdest_14 = 0;
    uint32_t r0_mdest_15 = 0;
    uint32_t r0_mdest_16 = 0;
    uint32_t r0_mdest_17 = 0;
    uint32_t r0_mdest_18 = 0;
    uint32_t r0_mdest_19 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_20 = 0;
    uint32_t r0_mdest_21 = 0;
    uint32_t r0_mdest_22 = 0;
    uint32_t r0_mdest_23 = 0;
    uint32_t r0_mdest_24 = 0;
    uint32_t r0_mdest_25 = 0;
    uint32_t r0_mdest_26 = 0;
    uint32_t r0_mdest_27 = 0;
    uint32_t r0_mdest_28 = 0;
    uint32_t r0_mdest_29 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_30 = 0;
    uint32_t r0_mdest_31 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_10 = 0;
    uint32_t r0_mrot_11 = 0;
    uint32_t r0_mrot_12 = 0;
    uint32_t r0_mrot_13 = 0;
    uint32_t r0_mrot_14 = 0;
    uint32_t r0_mrot_15 = 0;
    uint32_t r0_mrot_16 = 0;
    uint32_t r0_mrot_17 = 0;
    uint32_t r0_mrot_18 = 0;
    uint32_t r0_mrot_19 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_20 = 0;
    uint32_t r0_mrot_21 = 0;
    uint32_t r0_mrot_22 = 0;
    uint32_t r0_mrot_23 = 0;
    uint32_t r0_mrot_24 = 0;
    uint32_t r0_mrot_25 = 0;
    uint32_t r0_mrot_26 = 0;
    uint32_t r0_mrot_27 = 0;
    uint32_t r0_mrot_28 = 0;
    uint32_t r0_mrot_29 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_30 = 0;
    uint32_t r0_mrot_31 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
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
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F09B8;

loc_801F09B8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F09C4:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801F09E8;
    }
}

loc_801F09E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F09E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F09F0;
    }
}

loc_801F09E8:
{
    r3 = 1;
    goto loc_801F0ED4;
}

loc_801F09F0:
{
    r31 = 0;
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801F0A18;
    }
}

loc_801F09F8:
{
    r0 = (r4 + 76);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(76)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801F09FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F0A18;
    }
}

loc_801F0A00:
{
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWrite8((r4 + 76), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r4 + 77), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWrite8((r4 + 78), static_cast<uint8_t>(r0));
}

loc_801F0A18:
{
    r0 = (r3 + 3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(3)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801F0A1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F0A68;
    }
}

loc_801F0A20:
{
}

loc_801F0A24:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801F0A68;
    }
}

loc_801F0A28:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 3), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 3));
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r4 + 7), static_cast<uint8_t>(r0));
}

loc_801F0A68:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 11), 0, 29u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 12));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 11));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 13));
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 15));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 14));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_1 & 65280);
    r0_mdest_1 = (r0 & -65281);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 16));
    MemoryInline::FlatWrite8((r4 + 11), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 18));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 17));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_2 & 65280);
    r0_mdest_2 = (r0 & -65281);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite16((r4 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 20));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 19));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r7_mrot_0 = (r7_rot_0 & 65280);
    r7_mdest_0 = (r7 & -65281);
    r7 = (r7_mdest_0 | r7_mrot_0);
}

loc_801F0AB4:
{
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r7));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 21));
    MemoryInline::FlatWrite8((r4 + 34), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 23));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 22));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_3 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite16((r4 + 18), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 25));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 24));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_4 = (r0_rot_4 & 65280);
    r0_mdest_4 = (r0 & -65281);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite16((r4 + 20), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 27));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 26));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_5 = (r0_rot_5 & 65280);
    r0_mdest_5 = (r0 & -65281);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite16((r4 + 32), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r3 + 29));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r3 + 28));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_6 = (r0_rot_6 & 65280);
    r0_mdest_6 = (r0 & -65281);
    r0 = (r0_mdest_6 | r0_mrot_6);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r3 + 30));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 31));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0_mrot_7 = (r0_rot_7 & 16711680);
    r0_mdest_7 = (r0 & -16711681);
    r0 = (r0_mdest_7 | r0_mrot_7);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0_mrot_8 = (r0_rot_8 & -16777216);
    r0_mdest_8 = (r0 & 16777215);
    r0 = (r0_mdest_8 | r0_mrot_8);
    MemoryInline::FlatWrite32((r4 + 24), r0);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r3 + 33));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 32));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_9 = (r0_rot_9 & 65280);
    r0_mdest_9 = (r0 & -65281);
    r0 = (r0_mdest_9 | r0_mrot_9);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r3 + 34));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r3 + 35));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0_mrot_10 = (r0_rot_10 & 16711680);
    r0_mdest_10 = (r0 & -16711681);
    r0 = (r0_mdest_10 | r0_mrot_10);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0_mrot_11 = (r0_rot_11 & -16777216);
    r0_mdest_11 = (r0 & 16777215);
    r0 = (r0_mdest_11 | r0_mrot_11);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801F0B38;
    }
}

loc_801F0B34:
{
    goto loc_801F0B3C;
}

loc_801F0B38:
{
    r0 = (r7 & 65535);
}

loc_801F0B3C:
{
    r5 = MemoryInline::FlatRead16((r4 + 18));
    MemoryInline::FlatWrite32((r4 + 104), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801F0B48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F0B74;
    }
}

loc_801F0B4C:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r3 + 37));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r3 + 36));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r3 + 38));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_12 = (r0_rot_12 & 65280);
    r0_mdest_12 = (r0 & -65281);
    r0 = (r0_mdest_12 | r0_mrot_12);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r3 + 39));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0_mrot_13 = (r0_rot_13 & 16711680);
    r0_mdest_13 = (r0 & -16711681);
    r0 = (r0_mdest_13 | r0_mrot_13);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_14 = (r0_rot_14 & -16777216);
    r0_mdest_14 = (r0 & 16777215);
    r0 = (r0_mdest_14 | r0_mrot_14);
    MemoryInline::FlatWrite32((r4 + 60), r0);
    MemoryInline::FlatWrite32((r4 + 108), r0);
    goto loc_801F0B80;
}

loc_801F0B74:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 108), r5);
    MemoryInline::FlatWrite32((r4 + 60), r0);
}

loc_801F0B80:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F08A4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801F0B90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F0CB8;
    }
}

loc_801F0B94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F0E30;
    }
}

loc_801F0B98:
{
}

loc_801F0B9C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801F0BA4;
    }
}

loc_801F0BA0:
{
    goto loc_801F0E30;
}

loc_801F0BA4:
{
    r0 = MemoryInline::FlatRead16((r30 + 18));
}

loc_801F0BAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F0BB4;
    }
}

loc_801F0BB0:
{
    r31 = 4;
}

loc_801F0BB4:
{
    r3 = 0;
    r0 = (r29 + 43);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r29)) + static_cast<uint64_t>(static_cast<uint32_t>(43)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F0BBC:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r30 + 35), 0, 41u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 29u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_5, 29u, (r30 + 64), r3);
        MemoryInline::WriteResolved16(guest_range_5, 31u, (r30 + 66), r3);
    }
    MemoryInline::WriteResolved32(guest_range_5, 33u, (r30 + 68), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 37u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_5, 37u, (r30 + 72), r3);
        MemoryInline::WriteResolved16(guest_range_5, 39u, (r30 + 74), r3);
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 36), 0, 26u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r29 + 36));
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r30 + 35), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r29 + 38));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r30 + 40), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r29 + 40));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r29 + 39));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_16 = (r0_rot_16 & 65280);
    r0_mdest_16 = (r0 & -65281);
    r0 = (r0_mdest_16 | r0_mrot_16);
    r4 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r29 + 41));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r29 + 42));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0_mrot_17 = (r0_rot_17 & 16711680);
    r0_mdest_17 = (r0 & -16711681);
    r0 = (r0_mdest_17 | r0_mrot_17);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_18 = (r0_rot_18 & -16777216);
    r0_mdest_18 = (r0 & 16777215);
    r0 = (r0_mdest_18 | r0_mrot_18);
    MemoryInline::WriteResolved32(guest_range_5, 1u, (r30 + 36), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F0C64;
    }
}

loc_801F0C04:
{
    r0 = (r30 + 41);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30)) + static_cast<uint64_t>(static_cast<uint32_t>(41)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801F0C08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F0C64;
    }
}

loc_801F0C0C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r29 + 43));
    guest_range_6 = MemoryInline::ResolveRangeHost((r30 + 41), 0, 11u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, (r30 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r29 + 44));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r30 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 9u, (r29 + 45));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r30 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 10u, (r29 + 46));
    MemoryInline::WriteResolved8(guest_range_6, 3u, (r30 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 11u, (r29 + 47));
    MemoryInline::WriteResolved8(guest_range_6, 4u, (r30 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 12u, (r29 + 48));
    MemoryInline::WriteResolved8(guest_range_6, 5u, (r30 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 13u, (r29 + 49));
    MemoryInline::WriteResolved8(guest_range_6, 6u, (r30 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 14u, (r29 + 50));
    MemoryInline::WriteResolved8(guest_range_6, 7u, (r30 + 48), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 15u, (r29 + 51));
    MemoryInline::WriteResolved8(guest_range_6, 8u, (r30 + 49), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 16u, (r29 + 52));
    MemoryInline::WriteResolved8(guest_range_6, 9u, (r30 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 17u, (r29 + 53));
    MemoryInline::WriteResolved8(guest_range_6, 10u, (r30 + 51), static_cast<uint8_t>(r0));
}

loc_801F0C64:
{
    r0 = (r29 + 54);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r29)) + static_cast<uint64_t>(static_cast<uint32_t>(54)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801F0C68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F0E34;
    }
}

loc_801F0C6C:
{
    r0 = (r30 + 52);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30)) + static_cast<uint64_t>(static_cast<uint32_t>(52)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801F0C70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F0E34;
    }
}

loc_801F0C74:
{
    r0 = MemoryInline::ReadResolved8(guest_range_3, 18u, (r29 + 54));
    guest_range_7 = MemoryInline::ResolveRangeHost((r30 + 52), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_7, 0u, (r30 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 19u, (r29 + 55));
    MemoryInline::WriteResolved8(guest_range_7, 1u, (r30 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 20u, (r29 + 56));
    MemoryInline::WriteResolved8(guest_range_7, 2u, (r30 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 21u, (r29 + 57));
    MemoryInline::WriteResolved8(guest_range_7, 3u, (r30 + 55), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 22u, (r29 + 58));
    MemoryInline::WriteResolved8(guest_range_7, 4u, (r30 + 56), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 23u, (r29 + 59));
    MemoryInline::WriteResolved8(guest_range_7, 5u, (r30 + 57), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 24u, (r29 + 60));
    MemoryInline::WriteResolved8(guest_range_7, 6u, (r30 + 58), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 25u, (r29 + 61));
    MemoryInline::WriteResolved8(guest_range_7, 7u, (r30 + 59), static_cast<uint8_t>(r0));
    goto loc_801F0E34;
}

loc_801F0CB8:
{
    r0 = MemoryInline::FlatRead16((r30 + 16));
}

loc_801F0CC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F0CD0;
    }
}

loc_801F0CC4:
{
    r0 = MemoryInline::FlatRead16((r30 + 18));
}

loc_801F0CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F0CD4;
    }
}

loc_801F0CD0:
{
    r31 = 4;
}

loc_801F0CD4:
{
    r0 = (r29 + 71);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r29)) + static_cast<uint64_t>(static_cast<uint32_t>(71)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F0CD8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 40), 0, 50u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r29 + 41));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r29 + 40));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_19 = (r0_rot_19 & 65280);
    r0_mdest_19 = (r0 & -65281);
    r0 = (r0_mdest_19 | r0_mrot_19);
    guest_range_8 = MemoryInline::ResolveRangeHost((r30 + 35), 0, 41u, false, true);
    MemoryInline::WriteResolved16(guest_range_8, 29u, (r30 + 64), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r29 + 43));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r29 + 42));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_20 = (r0_rot_20 & 65280);
    r0_mdest_20 = (r0 & -65281);
    r0 = (r0_mdest_20 | r0_mrot_20);
    MemoryInline::WriteResolved16(guest_range_8, 31u, (r30 + 66), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r29 + 45));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r29 + 44));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_21 = (r0_rot_21 & 65280);
    r0_mdest_21 = (r0 & -65281);
    r0 = (r0_mdest_21 | r0_mrot_21);
    r4 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r29 + 46));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r29 + 47));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0_mrot_22 = (r0_rot_22 & 16711680);
    r0_mdest_22 = (r0 & -16711681);
    r0 = (r0_mdest_22 | r0_mrot_22);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_23 = (r0_rot_23 & -16777216);
    r0_mdest_23 = (r0 & 16777215);
    r0 = (r0_mdest_23 | r0_mrot_23);
    MemoryInline::WriteResolved32(guest_range_8, 33u, (r30 + 68), r0);
    r3 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r29 + 49));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r29 + 48));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_24 = (r0_rot_24 & 65280);
    r0_mdest_24 = (r0 & -65281);
    r0 = (r0_mdest_24 | r0_mrot_24);
    MemoryInline::WriteResolved16(guest_range_8, 37u, (r30 + 72), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r29 + 51));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 10u, (r29 + 50));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_25 = (r0_rot_25 & 65280);
    r0_mdest_25 = (r0 & -65281);
    r0 = (r0_mdest_25 | r0_mrot_25);
    MemoryInline::WriteResolved16(guest_range_8, 39u, (r30 + 74), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 24u, (r29 + 64));
    MemoryInline::WriteResolved8(guest_range_8, 0u, (r30 + 35), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 26u, (r29 + 66));
    MemoryInline::WriteResolved8(guest_range_8, 5u, (r30 + 40), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 28u, (r29 + 68));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 27u, (r29 + 67));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_26 = (r0_rot_26 & 65280);
    r0_mdest_26 = (r0 & -65281);
    r0 = (r0_mdest_26 | r0_mrot_26);
    r4 = MemoryInline::ReadResolved8(guest_range_2, 29u, (r29 + 69));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 30u, (r29 + 70));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0_mrot_27 = (r0_rot_27 & 16711680);
    r0_mdest_27 = (r0 & -16711681);
    r0 = (r0_mdest_27 | r0_mrot_27);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_28 = (r0_rot_28 & -16777216);
    r0_mdest_28 = (r0 & 16777215);
    r0 = (r0_mdest_28 | r0_mrot_28);
    MemoryInline::WriteResolved32(guest_range_8, 1u, (r30 + 36), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F0DCC;
    }
}

loc_801F0D6C:
{
    r0 = (r30 + 41);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30)) + static_cast<uint64_t>(static_cast<uint32_t>(41)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801F0D70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F0DCC;
    }
}

loc_801F0D74:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 31u, (r29 + 71));
    guest_range_9 = MemoryInline::ResolveRangeHost((r30 + 41), 0, 11u, false, true);
    MemoryInline::WriteResolved8(guest_range_9, 0u, (r30 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 32u, (r29 + 72));
    MemoryInline::WriteResolved8(guest_range_9, 1u, (r30 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 33u, (r29 + 73));
    MemoryInline::WriteResolved8(guest_range_9, 2u, (r30 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 34u, (r29 + 74));
    MemoryInline::WriteResolved8(guest_range_9, 3u, (r30 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 35u, (r29 + 75));
    MemoryInline::WriteResolved8(guest_range_9, 4u, (r30 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 36u, (r29 + 76));
    MemoryInline::WriteResolved8(guest_range_9, 5u, (r30 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 37u, (r29 + 77));
    MemoryInline::WriteResolved8(guest_range_9, 6u, (r30 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 38u, (r29 + 78));
    MemoryInline::WriteResolved8(guest_range_9, 7u, (r30 + 48), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 39u, (r29 + 79));
    MemoryInline::WriteResolved8(guest_range_9, 8u, (r30 + 49), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 40u, (r29 + 80));
    MemoryInline::WriteResolved8(guest_range_9, 9u, (r30 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 41u, (r29 + 81));
    MemoryInline::WriteResolved8(guest_range_9, 10u, (r30 + 51), static_cast<uint8_t>(r0));
}

loc_801F0DCC:
{
    r0 = (r29 + 82);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r29)) + static_cast<uint64_t>(static_cast<uint32_t>(82)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801F0DD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F0E1C;
    }
}

loc_801F0DD4:
{
    r0 = (r30 + 52);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30)) + static_cast<uint64_t>(static_cast<uint32_t>(52)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801F0DD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F0E1C;
    }
}

loc_801F0DDC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 42u, (r29 + 82));
    guest_range_10 = MemoryInline::ResolveRangeHost((r30 + 52), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_10, 0u, (r30 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 43u, (r29 + 83));
    MemoryInline::WriteResolved8(guest_range_10, 1u, (r30 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 44u, (r29 + 84));
    MemoryInline::WriteResolved8(guest_range_10, 2u, (r30 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 45u, (r29 + 85));
    MemoryInline::WriteResolved8(guest_range_10, 3u, (r30 + 55), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 46u, (r29 + 86));
    MemoryInline::WriteResolved8(guest_range_10, 4u, (r30 + 56), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 47u, (r29 + 87));
    MemoryInline::WriteResolved8(guest_range_10, 5u, (r30 + 57), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 48u, (r29 + 88));
    MemoryInline::WriteResolved8(guest_range_10, 6u, (r30 + 58), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 49u, (r29 + 89));
    MemoryInline::WriteResolved8(guest_range_10, 7u, (r30 + 59), static_cast<uint8_t>(r0));
}

loc_801F0E1C:
{
    r0 = MemoryInline::FlatRead16((r30 + 66));
}

loc_801F0E24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F0E34;
    }
}

loc_801F0E28:
{
    r31 = 4;
    goto loc_801F0E34;
}

loc_801F0E30:
{
    r31 = 4;
}

loc_801F0E34:
{
    r0 = MemoryInline::FlatRead32((r30 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801F0E3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F0E74;
    }
}

loc_801F0E40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F0ED0;
    }
}

loc_801F0E44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F0E48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F0E50;
    }
}

loc_801F0E4C:
{
    goto loc_801F0ED0;
}

loc_801F0E50:
{
    r3 = MemoryInline::FlatRead8((r30 + 11));
    r0 = MemoryInline::FlatRead32((r30 + 108));
    r4 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r3 * r0);
    MemoryInline::FlatWrite8((r30 + 79), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r30 + 88), r4);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r30 + 92), r0);
    goto loc_801F0ED0;
}

loc_801F0E74:
{
    r3 = MemoryInline::FlatRead16((r30 + 64));
    r5 = MemoryInline::FlatRead32((r30 + 68));
    r4 = MemoryInline::FlatRead8((r30 + 85));
    r0 = (r3 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F0E84:
{
    r5 = (r5 + -2);
    r6 = MemoryInline::FlatRead32((r30 + 96));
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r30 + 92), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F0EC0;
    }
}

loc_801F0E9C:
{
    r0 = MemoryInline::FlatRead32((r30 + 108));
    r3 = (r3 & 7);
    r5 = 1;
    r4 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r3 * r0);
    MemoryInline::FlatWrite8((r30 + 79), static_cast<uint8_t>(r5));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r30 + 88), r0);
    goto loc_801F0ED0;
}

loc_801F0EC0:
{
    r3 = MemoryInline::FlatRead8((r30 + 11));
    r0 = MemoryInline::FlatRead16((r30 + 12));
    MemoryInline::FlatWrite8((r30 + 79), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r30 + 88), r0);
}

loc_801F0ED0:
{
    r3 = r31;
}

loc_801F0ED4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00004FB gpr_write=0xE00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F09B8 func_801F09B8 preserves=true fpr_mask=0x00000000
