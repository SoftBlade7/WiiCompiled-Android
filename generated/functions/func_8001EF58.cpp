#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001EF58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
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
    uint32_t xer = ctx->xer;

    goto loc_8001EF58;

loc_8001EF58:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8001EF64:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 148), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 92), r19);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 96), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 100), r21);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 104), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 108), r23);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 112), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 116), r25);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 120), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 124), r27);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 128), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 132), r29);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 136), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 140), r31);
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r29 = r8;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001EF94;
    }
}

loc_8001EF88:
{
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001EF90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001EF9C;
    }
}

loc_8001EF94:
{
    r3 = 2;
    goto loc_8001F138;
}

loc_8001EF9C:
{
    r30 = 0;
    MemoryInline::FlatWrite32(r6, r30);
    r31 = 0;
    r23 = 0;
    goto loc_8001F108;
}

loc_8001EFB0:
{
    r3 = (r1 + 24);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r26);
    r21 = 2048;
    r0 = (r0 - r31);
}

loc_8001EFD0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2048))) {
        goto loc_8001EFD8;
    }
}

loc_8001EFD4:
{
    r21 = r0;
}

loc_8001EFD8:
{
}

loc_8001EFDC:
{
    r0 = 208;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8001EFE8;
    }
}

loc_8001EFE4:
{
    r0 = 209;
}

loc_8001EFE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8001EFEC:
{
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    r0 = 64;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001EFFC;
    }
}

loc_8001EFF8:
{
    r0 = (r21 + 64);
}

loc_8001EFFC:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 32), r24);
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r21));
    ctx->lr = 0x8001F014u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    InvokeDirectCpu<0x8001D17Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 24);
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D5B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_8001F028:
{
    r23 = r3;
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8001F04C;
    }
}

loc_8001F030:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001F034:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001F04C;
    }
}

loc_8001F038:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r5 = r21;
    r4 = (r25 + r31);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D5B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r23 = r3;
}

loc_8001F04C:
{
}

loc_8001F050:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8001F0FC;
    }
}

loc_8001F054:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8001F058:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001F0F0;
    }
}

loc_8001F05C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 16);
    ctx->lr = 0x8001F068u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    InvokeDirectCpu<0x8001F14Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    xer = ctx->xer;
}

loc_8001F06C:
{
    r23 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8001F080;
    }
}

loc_8001F074:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    // inline leaf 0x8001D218 (9 guest instruction(s))
}

loc_inl0_0x8001D218:
{
}

loc_inl0_0x8001D21C:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl0_0x8001D234;
    }
}

loc_inl0_0x8001D224:
{
    r0 = (r3 * 2188);
    r3 = 0x802A0000u;
    r3 = (r3 + 18936);
    r0 = (r3 + r0);
}

loc_inl0_0x8001D234:
{
    r3 = r0;
}

loc_inl0_cont_8001D218:
{
    // end of inlined leaf 0x8001D218
    r22 = r3;
}

loc_8001F080:
{
    r0 = MemoryInline::FlatRead32((r22 + 28));
}

loc_8001F088:
{
    r19 = MemoryInline::FlatRead16((r22 + 32));
    r20 = (r0 & 255);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8001F0D0;
    }
}

loc_8001F094:
{
}

loc_8001F098:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8001F0D0;
    }
}

loc_8001F09C:
{
}

loc_8001F0A0:
{
    if ((static_cast<uint32_t>(r19) > static_cast<uint32_t>(r21))) {
        goto loc_8001F0D0;
    }
}

loc_8001F0A4:
{
    r3 = r22;
    r4 = 64;
    // inline leaf 0x8001D28C (12 guest instruction(s))
}

loc_inl1_0x8001D28C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(2176));
}

loc_inl1_0x8001D290:
{
    r5 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl1_0x8001D2A0;
    }
}

loc_inl1_0x8001D298:
{
    r5 = 769;
    goto loc_inl1_0x8001D2B4;
}

loc_inl1_0x8001D2A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_inl1_0x8001D2AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl1_0x8001D2B4;
    }
}

loc_inl1_0x8001D2B0:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_inl1_0x8001D2B4:
{
    r3 = r5;
}

loc_inl1_cont_8001D28C:
{
    // end of inlined leaf 0x8001D28C
    r3 = r22;
    r5 = r19;
    r4 = (r25 + r31);
    ctx->lr = 0x8001F0C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D7E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001F0C4:
{
    r23 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(770))) {
        goto loc_8001F0D0;
    }
}

loc_8001F0CC:
{
    r23 = 0;
}

loc_8001F0D0:
{
}

loc_8001F0D4:
{
    if ((static_cast<uint32_t>(r19) == static_cast<uint32_t>(r21))) {
        goto loc_8001F0E0;
    }
}

loc_8001F0D8:
{
    r21 = r19;
    r30 = 1;
}

loc_8001F0E0:
{
    MemoryInline::FlatWrite32(r27, r20);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    // inline leaf 0x8001D23C (10 guest instruction(s))
}

loc_inl2_0x8001D23C:
{
}

loc_inl2_0x8001D240:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8001D244:
{
}

loc_inl2_0x8001D248:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8001D24C:
{
    r0 = (r3 * 2188);
    r3 = 0x802A0000u;
    r4 = 0;
    r3 = (r3 + 18936);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_2, r4);
    goto loc_inl2_cont_8001D23C;
}

loc_inl2_return:
{
}

loc_inl2_cont_8001D23C:
{
    // end of inlined leaf 0x8001D23C
    goto loc_8001F0FC;
}

loc_8001F0F0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x8001F0F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    InvokeDirectCpu<0x8001D0F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    xer = ctx->xer;
    r23 = r3;
}

loc_8001F0FC:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    // inline leaf 0x8001D23C (10 guest instruction(s))
}

loc_inl3_0x8001D23C:
{
}

loc_inl3_0x8001D240:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8001D244:
{
}

loc_inl3_0x8001D248:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8001D24C:
{
    r0 = (r3 * 2188);
    r3 = 0x802A0000u;
    r4 = 0;
    r3 = (r3 + 18936);
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_5, r4);
    goto loc_inl3_cont_8001D23C;
}

loc_inl3_return:
{
}

loc_inl3_cont_8001D23C:
{
    // end of inlined leaf 0x8001D23C
    r31 = (r31 + r21);
}

loc_8001F108:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8001F10C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001F130;
    }
}

loc_8001F110:
{
    r0 = MemoryInline::FlatRead32(r26);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8001F118:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001F130;
    }
}

loc_8001F11C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_8001F120:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001F130;
    }
}

loc_8001F124:
{
    r0 = MemoryInline::FlatRead32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001F12C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001EFB0;
    }
}

loc_8001F130:
{
    MemoryInline::FlatWrite32(r26, r31);
    r3 = r23;
}

loc_8001F138:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 92));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 100));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 108));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 116));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 120));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 124));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 128));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 132));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 136));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 140));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8001EF58 func_8001EF58 preserves=true fpr_mask=0x00000000
