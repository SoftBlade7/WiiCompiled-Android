#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FB7A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r9_addr_0 = 0;
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

    goto loc_801FB7A4;

loc_801FB7A4:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    r0 = 0;
    r9 = 0x80250000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = -1;
    r25 = r8;
    r9 = (r9 + 12640);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 48u, true, false);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r3 + 48));
    r24 = r7;
    r22 = r3;
    r23 = r5;
    r10 = MemoryInline::FlatRead32((r10 + 28));
    MemoryInline::FlatWrite32(r8, r0);
    r8 = (r10 * 20);
    MemoryInline::FlatWrite32(r7, r0);
    r7 = (r9 + r8);
    r9_addr_0 = (r9 + r8);
    r31 = MemoryInline::FlatRead32(r9_addr_0);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r3 + 44));
    r30 = MemoryInline::FlatRead32((r7 + 4));
    r0 = MemoryInline::FlatRead32(r8);
}

loc_801FB808:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FB834;
    }
}

loc_801FB80C:
{
}

loc_801FB810:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_801FB834;
    }
}

loc_801FB814:
{
    r0 = MemoryInline::FlatRead32((r8 + 4));
    r26 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r3 + 44));
    r7 = MemoryInline::FlatRead32(r7);
    r28 = (r4 - r7);
    r27 = (r7 + 1);
    goto loc_801FB840;
}

loc_801FB834:
{
    r26 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    r28 = r4;
    r27 = 1;
}

loc_801FB840:
{
    r7 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
}

loc_801FB848:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801FB878;
    }
}

loc_801FB84C:
{
}

loc_801FB850:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(r4))) {
        goto loc_801FB878;
    }
}

loc_801FB854:
{
    r0 = (r27 + -1);
}

loc_801FB85C:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_801FB878;
    }
}

loc_801FB860:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 20));
    r26 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r28 = (r4 - r7);
    r27 = (r7 + 1);
}

loc_801FB878:
{
    r29 = MemoryInline::FlatRead32(r26);
}

loc_801FB880:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(2))) {
        goto loc_801FB8F8;
    }
}

loc_801FB888:
{
}

loc_801FB88C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_801FB8A4;
    }
}

loc_801FB890:
{
}

loc_801FB894:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801FB8A4;
    }
}

loc_801FB898:
{
    r5 = (r28 + r6);
    r28 = (r5 + -1);
    goto loc_801FB8A8;
}

loc_801FB8A4:
{
    r28 = r6;
}

loc_801FB8A8:
{
    r9 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 8));
    r8 = r28;
}

loc_801FB8B4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801FB910;
    }
}

loc_801FB8B8:
{
    r5 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r3 + 48));
    r7 = 0x80250000u;
    r8 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 12));
    r7 = (r7 + 12640);
    r0 = MemoryInline::FlatRead32((r5 + 28));
    r29 = r9;
    r5 = (r8 + r6);
    r28 = 0;
    r0 = (r0 * 20);
    r8 = (r5 - r4);
    r4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 12));
    r27 = (r4 + 1);
    goto loc_801FB910;
}

loc_801FB8F8:
{
}

loc_801FB8FC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_801FB90C;
    }
}

loc_801FB900:
{
}

loc_801FB904:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801FB90C;
    }
}

loc_801FB908:
{
    r28 = (r28 + 1);
}

loc_801FB90C:
{
    r8 = r28;
}

loc_801FB910:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801FB914:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FBA10;
    }
}

loc_801FB918:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r3 + 48));
    r5 = r29;
    r4 = (r1 + 8);
    ctx->lr = 0x801FB928u;
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
    InvokeDirectCpu<0x801FA844u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FB92C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB934;
    }
}

loc_801FB930:
{
    goto loc_801FBAF4;
}

loc_801FB934:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = 0;
    r21 = 0x80250000u;
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r21 = (r21 + 12640);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    goto loc_801FB9F8;
}

loc_801FB954:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801FB958:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB994;
    }
}

loc_801FB95C:
{
    r3 = r22;
    r4 = r29;
    r5 = r27;
    r6 = (r1 + 20);
    r7 = (r1 + 12);
    r8 = (r1 + 8);
    ctx->lr = 0x801FB978u;
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
    InvokeDirectCpu<0x801FAEE0u>(ctx);
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

loc_801FB97C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801FB9B0;
    }
}

loc_801FB980:
{
    r4 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r4 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FB98C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB9B0;
    }
}

loc_801FB990:
{
    goto loc_801FBAF4;
}

loc_801FB994:
{
    r3 = MemoryInline::FlatRead32((r22 + 48));
    r27 = (r27 + -1);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 * 20);
    r3 = (r21 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_801FB9B0:
{
    r4 = MemoryInline::FlatRead32((r1 + 20));
}

loc_801FB9B8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(2))) {
        goto loc_801FB9D0;
    }
}

loc_801FB9BC:
{
    r3 = MemoryInline::FlatRead32((r22 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r0 = (r3 + 2);
}

loc_801FB9CC:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_801FB9E0;
    }
}

loc_801FB9D0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r30));
}

loc_801FB9D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FB9E0;
    }
}

loc_801FB9D8:
{
    r3 = 14;
    goto loc_801FBAF4;
}

loc_801FB9E0:
{
}

loc_801FB9E4:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_801FB9F0;
    }
}

loc_801FB9E8:
{
}

loc_801FB9EC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r30))) {
        goto loc_801FBA0C;
    }
}

loc_801FB9F0:
{
    r29 = r4;
    r27 = (r27 + 1);
}

loc_801FB9F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801FB9FC:
{
    r28 = (r28 + -1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FBA0C;
    }
}

loc_801FBA04:
{
}

loc_801FBA08:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r31))) {
        goto loc_801FB954;
    }
}

loc_801FBA0C:
{
    r8 = r28;
}

loc_801FBA10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_801FBA14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FBAEC;
    }
}

loc_801FBA18:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_801FBA20:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FBAEC;
    }
}

loc_801FBA24:
{
    r0 = 0;
    r3 = r22;
    MemoryInline::FlatWrite32(r24, r0);
    r5 = r27;
    r6 = r24;
    r4 = (r8 + 1);
    r7 = (r1 + 20);
    ctx->lr = 0x801FBA44u;
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
    InvokeDirectCpu<0x801FB4F8u>(ctx);
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

loc_801FBA48:
{
    r21 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801FBA80;
    }
}

loc_801FBA50:
{
    r4 = MemoryInline::FlatRead32(r24);
    r0 = (r4 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FBA5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FBA70;
    }
}

loc_801FBA60:
{
    r3 = r22;
    r5 = r27;
    r6 = -1;
    ctx->lr = 0x801FBA70u;
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
    InvokeDirectCpu<0x801FC900u>(ctx);
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

loc_801FBA70:
{
    r0 = -1;
    MemoryInline::FlatWrite32(r24, r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_801FBA84;
}

loc_801FBA80:
{
    r21 = 0;
}

loc_801FBA84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_801FBA88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FBA94;
    }
}

loc_801FBA8C:
{
    r3 = r21;
    goto loc_801FBAF4;
}

loc_801FBA94:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FBAA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FBAAC;
    }
}

loc_801FBAA4:
{
    r3 = 6;
    goto loc_801FBAF4;
}

loc_801FBAAC:
{
    r0 = MemoryInline::FlatRead32(r26);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FBAB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FBAC4;
    }
}

loc_801FBAB8:
{
    r0 = MemoryInline::FlatRead32(r24);
    MemoryInline::FlatWrite32(r26, r0);
    goto loc_801FBAE8;
}

loc_801FBAC4:
{
    r6 = MemoryInline::FlatRead32(r24);
    r3 = r22;
    r4 = r29;
    r5 = (r27 + -1);
    r7 = 1;
    ctx->lr = 0x801FBADCu;
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
    InvokeDirectCpu<0x801FB0ACu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FBAE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FBAE8;
    }
}

loc_801FBAE4:
{
    goto loc_801FBAF4;
}

loc_801FBAE8:
{
    r29 = MemoryInline::FlatRead32((r1 + 20));
}

loc_801FBAEC:
{
    MemoryInline::FlatWrite32(r25, r29);
    r3 = 0;
}

loc_801FBAF4:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
// RECOMP_REGISTRATION base 0x801FB7A4 func_801FB7A4 preserves=true fpr_mask=0x00000000
