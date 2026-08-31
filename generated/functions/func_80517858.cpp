#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80517858(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80517858;

loc_80517858:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    }
    r24 = r3;
    r26 = r5;
    r25 = r4;
    r3 = 0;
    r6 = MemoryInline::FlatRead32((r6 + -10520));
    r5 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80517888:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8051789C;
    }
}

loc_8051788C:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
}

loc_80517894:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051789C;
    }
}

loc_80517898:
{
    r3 = 1;
}

loc_8051789C:
{
}

loc_805178A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805178B0;
    }
}

loc_805178A4:
{
    r3 = MemoryInline::FlatRead32((r6 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_805178B4;
}

loc_805178B0:
{
    r0 = 0;
}

loc_805178B4:
{
}

loc_805178B8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_805178E4;
    }
}

loc_805178BC:
{
    r3 = MemoryInline::FlatRead32((r6 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_805178C8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_805178DC;
    }
}

loc_805178CC:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    goto loc_805178E8;
}

loc_805178DC:
{
    r3 = 0;
    goto loc_805178E8;
}

loc_805178E4:
{
    r3 = 0;
}

loc_805178E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805178F0:
{
    r5 = 0;
    r29 = MemoryInline::FlatRead8(r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80517910;
    }
}

loc_805178FC:
{
    r3 = MemoryInline::FlatRead32((r6 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_80517908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80517910;
    }
}

loc_8051790C:
{
    r5 = 1;
}

loc_80517910:
{
}

loc_80517914:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80517924;
    }
}

loc_80517918:
{
    r3 = MemoryInline::FlatRead32((r6 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80517928;
}

loc_80517924:
{
    r0 = 0;
}

loc_80517928:
{
}

loc_8051792C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80517958;
    }
}

loc_80517930:
{
    r3 = MemoryInline::FlatRead32((r6 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_8051793C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80517950;
    }
}

loc_80517940:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    goto loc_8051795C;
}

loc_80517950:
{
    r3 = 0;
    goto loc_8051795C;
}

loc_80517958:
{
    r3 = 0;
}

loc_8051795C:
{
    r4 = MemoryInline::FlatRead32(r3);
    r27 = 0;
    r31 = 0x809C0000u;
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r0 = MemoryInline::FlatRead8(r4);
    r3 = (r0 + r3);
    r0 = (r3 + -1);
    r28 = (r0 & 255);
}

loc_80517980:
{
    r4 = MemoryInline::FlatRead32(r24);
    r3 = (r4 + r27);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80517990:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(r0))) {
        goto loc_80517B70;
    }
}

loc_80517994:
{
}

loc_80517998:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80517B14;
    }
}

loc_8051799C:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_805179AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_805179BC;
    }
}

loc_805179B0:
{
}

loc_805179B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_805179BC;
    }
}

loc_805179B8:
{
    r0 = 0;
}

loc_805179BC:
{
}

loc_805179C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80517A6C;
    }
}

loc_805179C4:
{
    r5 = MemoryInline::FlatRead32((r31 + -10520));
    r4 = MemoryInline::FlatRead8(r4);
    r3 = MemoryInline::FlatRead32((r5 + 16));
}

loc_805179D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805179E0;
    }
}

loc_805179D8:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_805179E4;
}

loc_805179E0:
{
    r0 = 0;
}

loc_805179E4:
{
}

loc_805179E8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80517A14;
    }
}

loc_805179EC:
{
    r3 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_805179F8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80517A0C;
    }
}

loc_805179FC:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 262140);
    r3_addr_6 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_6);
    goto loc_80517A18;
}

loc_80517A0C:
{
    r4 = 0;
    goto loc_80517A18;
}

loc_80517A14:
{
    r4 = 0;
}

loc_80517A18:
{
    r6 = MemoryInline::FlatRead8((r4 + 17));
    r5 = 0;
    goto loc_80517A3C;
}

loc_80517A24:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 & 255);
    r3_addr_9 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_9);
}

loc_80517A34:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(r0))) {
        goto loc_80517B70;
    }
}

loc_80517A38:
{
    r5 = (r5 + 1);
}

loc_80517A3C:
{
    r0 = (r5 & 255);
}

loc_80517A44:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_80517A24;
    }
}

loc_80517A48:
{
    r0 = MemoryInline::FlatRead8((r4 + 19));
}

loc_80517A50:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80517B70;
    }
}

loc_80517A54:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3_addr_10 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_10, static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead8((r4 + 17));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 17), static_cast<uint8_t>(r0));
    goto loc_80517B70;
}

loc_80517A6C:
{
    r5 = MemoryInline::FlatRead32((r31 + -10520));
    r4 = MemoryInline::FlatRead8(r4);
    r3 = MemoryInline::FlatRead32((r5 + 16));
}

loc_80517A7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80517A88;
    }
}

loc_80517A80:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80517A8C;
}

loc_80517A88:
{
    r0 = 0;
}

loc_80517A8C:
{
}

loc_80517A90:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80517ABC;
    }
}

loc_80517A94:
{
    r3 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_80517AA0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80517AB4;
    }
}

loc_80517AA4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 262140);
    r3_addr_11 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_11);
    goto loc_80517AC0;
}

loc_80517AB4:
{
    r4 = 0;
    goto loc_80517AC0;
}

loc_80517ABC:
{
    r4 = 0;
}

loc_80517AC0:
{
    r6 = MemoryInline::FlatRead8((r4 + 16));
    r5 = 0;
    goto loc_80517AE4;
}

loc_80517ACC:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r5 & 255);
    r3_addr_14 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_14);
}

loc_80517ADC:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(r0))) {
        goto loc_80517B70;
    }
}

loc_80517AE0:
{
    r5 = (r5 + 1);
}

loc_80517AE4:
{
    r0 = (r5 & 255);
}

loc_80517AEC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_80517ACC;
    }
}

loc_80517AF0:
{
    r0 = MemoryInline::FlatRead8((r4 + 18));
}

loc_80517AF8:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80517B70;
    }
}

loc_80517AFC:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r3_addr_15 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_15, static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead8((r4 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r0));
    goto loc_80517B70;
}

loc_80517B14:
{
    r5 = MemoryInline::FlatRead32((r31 + -10520));
    r4 = MemoryInline::FlatRead8(r4);
    r3 = MemoryInline::FlatRead32((r5 + 16));
}

loc_80517B24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80517B30;
    }
}

loc_80517B28:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80517B34;
}

loc_80517B30:
{
    r0 = 0;
}

loc_80517B34:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80517B38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80517B64;
    }
}

loc_80517B3C:
{
    r3 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80517B48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80517B5C;
    }
}

loc_80517B4C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & 262140);
    r3_addr_16 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_16);
    goto loc_80517B68;
}

loc_80517B5C:
{
    r3 = 0;
    goto loc_80517B68;
}

loc_80517B64:
{
    r3 = 0;
}

loc_80517B68:
{
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80517D8Cu>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_80517B70:
{
    r27 = (r27 + 1);
}

loc_80517B78:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(6))) {
        goto loc_80517980;
    }
}

loc_80517B7C:
{
    r27 = 0;
    r31 = 0x809C0000u;
}

loc_80517B84:
{
    r5 = MemoryInline::FlatRead32(r24);
    r3 = (r5 + r27);
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80517B94:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(r0))) {
        goto loc_80517CC4;
    }
}

loc_80517B98:
{
}

loc_80517B9C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80517C58;
    }
}

loc_80517BA0:
{
    r6 = MemoryInline::FlatRead32((r31 + -10520));
    r4 = MemoryInline::FlatRead8((r5 + 1));
    r0 = MemoryInline::FlatRead8(r5);
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r4 = (r0 + r4);
    r0 = (r4 + -1);
}

loc_80517BBC:
{
    r4 = (r0 & 255);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80517BCC;
    }
}

loc_80517BC4:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80517BD0;
}

loc_80517BCC:
{
    r0 = 0;
}

loc_80517BD0:
{
}

loc_80517BD4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80517C00;
    }
}

loc_80517BD8:
{
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_80517BE4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80517BF8;
    }
}

loc_80517BE8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & 262140);
    r3_addr_20 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_20);
    goto loc_80517C04;
}

loc_80517BF8:
{
    r4 = 0;
    goto loc_80517C04;
}

loc_80517C00:
{
    r4 = 0;
}

loc_80517C04:
{
    r6 = MemoryInline::FlatRead8((r4 + 17));
    r5 = 0;
    goto loc_80517C28;
}

loc_80517C10:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 & 255);
    r3_addr_23 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_23);
}

loc_80517C20:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(r0))) {
        goto loc_80517CC4;
    }
}

loc_80517C24:
{
    r5 = (r5 + 1);
}

loc_80517C28:
{
    r0 = (r5 & 255);
}

loc_80517C30:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_80517C10;
    }
}

loc_80517C34:
{
    r0 = MemoryInline::FlatRead8((r4 + 19));
}

loc_80517C3C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80517CC4;
    }
}

loc_80517C40:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3_addr_24 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_24, static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead8((r4 + 17));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 17), static_cast<uint8_t>(r0));
    goto loc_80517CC4;
}

loc_80517C58:
{
    r6 = MemoryInline::FlatRead32((r31 + -10520));
    r4 = MemoryInline::FlatRead8((r5 + 1));
    r0 = MemoryInline::FlatRead8(r5);
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r4 = (r0 + r4);
    r0 = (r4 + -1);
}

loc_80517C74:
{
    r4 = (r0 & 255);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80517C84;
    }
}

loc_80517C7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80517C88;
}

loc_80517C84:
{
    r0 = 0;
}

loc_80517C88:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80517C8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80517CB8;
    }
}

loc_80517C90:
{
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80517C9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80517CB0;
    }
}

loc_80517CA0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & 262140);
    r3_addr_25 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_25);
    goto loc_80517CBC;
}

loc_80517CB0:
{
    r3 = 0;
    goto loc_80517CBC;
}

loc_80517CB8:
{
    r3 = 0;
}

loc_80517CBC:
{
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80517D8Cu>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_80517CC4:
{
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(6));
}

loc_80517CCC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80517B84;
    }
}

loc_80517CD0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF0003FB gpr_write=0xFF0003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80517858 func_80517858 preserves=true fpr_mask=0x00000000
