#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014DCEC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014DCEC;

loc_8014DCEC:
{
    r0 = MemoryInline::FlatRead8((r16 + 7));
    r3 = MemoryInline::FlatRead8((r16 + 6));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r4 = MemoryInline::FlatRead8((r16 + 5));
    r0 = (r3 + r0);
    r5 = MemoryInline::FlatRead8((r16 + 4));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    MemoryInline::FlatWriteRam16((r1 + 80), static_cast<uint16_t>(r0));
    r0 = (r5 + r3);
    r17 = (r0 & 65535);
    r0 = MemoryInline::FlatRead8((r16 + 9));
    r3 = MemoryInline::FlatRead8((r16 + 8));
    r16 = (r16 + 10);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 60), static_cast<uint8_t>(r31));
    goto loc_8014DF08;
}

loc_8014DD40:
{
    r0 = MemoryInline::FlatRead8(r16);
    r16 = (r16 + 2);
    r0 = (r0 & 127);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8014DD50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014DDB4;
    }
}

loc_8014DD54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8014DD68;
    }
}

loc_8014DD58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8014DD5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014DD74;
    }
}

loc_8014DD60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8014DD94;
    }
}

loc_8014DD64:
{
    goto loc_8014DF08;
}

loc_8014DD68:
{
}

loc_8014DD6C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_8014DF08;
    }
}

loc_8014DD70:
{
    goto loc_8014DEAC;
}

loc_8014DD74:
{
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead8((r16 + 1));
    r3 = MemoryInline::FlatRead8(r16);
    r16 = (r16 + 2);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    goto loc_8014DF08;
}

loc_8014DD94:
{
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead8((r16 + 1));
    r3 = MemoryInline::FlatRead8(r16);
    r16 = (r16 + 2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    goto loc_8014DF08;
}

loc_8014DDB4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 30), 0, 26u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r1 + 30), static_cast<uint8_t>(r28));
    guest_range_1 = MemoryInline::ResolveRangeHost(r16, 0, 22u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r16);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r1 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r16 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r1 + 33), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r16 + 5));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r16 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r16 + 3));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r5 = (r5_rot_2 & -16777216);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r16 + 2));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_2 & -65536);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_8 & -256);
    r3 = (r4 + r3);
    r0 = (r5 + r0);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 6u, (r1 + 36), r0);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r16 + 9));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r16 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r16 + 7));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r5 = (r5_rot_3 & -16777216);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r16 + 6));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_3 & -65536);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_9 & -256);
    r3 = (r4 + r3);
    r0 = (r5 + r0);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 10u, (r1 + 40), r0);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r16 + 13));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r16 + 12));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r16 + 11));
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r5 = (r5_rot_4 & -16777216);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r16 + 10));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_4 & -65536);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_10 & -256);
    r3 = (r4 + r3);
    r0 = (r5 + r0);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 14u, (r1 + 44), r0);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r16 + 17));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r16 + 16));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r16 + 15));
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r5 = (r5_rot_5 & -16777216);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r16 + 14));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_5 & -65536);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_11 & -256);
    r3 = (r4 + r3);
    r0 = (r5 + r0);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 18u, (r1 + 48), r0);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r16 + 21));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r16 + 20));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r16 + 19));
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r5 = (r5_rot_6 & -16777216);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r16 + 18));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_6 & -65536);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_12 & -256);
    r16 = (r16 + 22);
    r3 = (r4 + r3);
    r0 = (r5 + r0);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 22u, (r1 + 52), r0);
    goto loc_8014DF08;
}

loc_8014DEAC:
{
    MemoryInline::FlatWriteRam8((r1 + 60), static_cast<uint8_t>(r28));
    guest_range_2 = MemoryInline::ResolveRangeHost(r16, 0, 9u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r16);
    MemoryInline::FlatWriteRam8((r1 + 62), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r16 + 1));
    MemoryInline::FlatWriteRam8((r1 + 63), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r16 + 2));
    MemoryInline::FlatWriteRam8((r1 + 64), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r16 + 4));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r16 + 3));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_5 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r1 + 66), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r16 + 6));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r16 + 5));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r1 + 68), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r16 + 8));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r16 + 7));
    r16 = (r16 + 9);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_7 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r1 + 70), static_cast<uint16_t>(r0));
}

loc_8014DF08:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r16), static_cast<uint32_t>(r21));
}

loc_8014DF0C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014DD40;
    }
}

loc_8014DF10:
{
    r3 = r15;
    r4 = r17;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014F974u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8014DF20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8014DF7C;
    }
}

loc_8014DF24:
{
    r5 = MemoryInline::FlatRead8((r3 + 53));
}

loc_8014DF2C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r25))) {
        goto loc_8014DF50;
    }
}

loc_8014DF30:
{
    r0 = MemoryInline::FlatRead8((r27 + -27840));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8014DF38:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014D724;
    }
}

loc_8014DF3C:
{
    r6 = r25;
    r3 = (r29 + 1);
    r4 = (r23 + 560);
    ctx->lr = 0x8014DF4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r21 = ctx->gpr[21];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r21 = ctx->gpr[21];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

loc_8014DF50:
{
    r0 = MemoryInline::FlatRead16((r1 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014DF58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014DF6C;
    }
}

loc_8014DF5C:
{
    r5 = (r1 + 24);
    r4 = 15;
    ctx->lr = 0x8014DF68u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014AC2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r21 = ctx->gpr[21];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r21 = ctx->gpr[21];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

loc_8014DF6C:
{
    r5 = (r1 + 24);
    r4 = 16;
    ctx->lr = 0x8014DF78u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014AC2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r21 = ctx->gpr[21];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r21 = ctx->gpr[21];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

loc_8014DF7C:
{
    r0 = MemoryInline::FlatRead8((r27 + -27840));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8014DF84:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014D724;
    }
}

loc_8014DF88:
{
    r5 = r17;
    r3 = (r29 + 1);
    r4 = (r23 + 604);
    ctx->lr = 0x8014DF98u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r21 = ctx->gpr[21];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r21 = ctx->gpr[21];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

loc_8014D724:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r21 = ctx->gpr[21];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014DCEC func_8014DCEC preserves=true fpr_mask=0x00000000
