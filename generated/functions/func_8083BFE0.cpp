#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083BFE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r24_addr_4 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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

    goto loc_8083BFE0;

loc_8083BFE0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -240), 0, 248u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 244u, (r1 + 244), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r1 + 196), r21);
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r1 + 200), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r1 + 204), r23);
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r1 + 208), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r1 + 212), r25);
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r1 + 216), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r1 + 220), r27);
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r1 + 224), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 228u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r1 + 228), r29);
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r1 + 232), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 236u, (r1 + 236), r31);
    r30 = 0x808B0000u;
    r25 = r3;
    r26 = r4;
    r30 = (r30 + -12840);
    r5 = MemoryInline::FlatRead32((r5 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8083C010:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8083C030;
    }
}

loc_8083C014:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r29 = (r3 + 56);
    goto loc_8083C034;
}

loc_8083C030:
{
    r29 = 0;
}

loc_8083C034:
{
    r23 = 0x809C0000u;
    r0 = 3;
    r3 = MemoryInline::FlatRead32((r23 + -10456));
    r24 = MemoryInline::FlatRead32((r3 + 5984));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80860A28u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r23 + -10456));
}

loc_8083C054:
{
    r31 = r3;
    MemoryInline::FlatWrite32((r4 + 5984), r24);
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(4))) {
        goto loc_8083C24C;
    }
}

loc_8083C060:
{
    r5 = (r30 + 72);
    r9 = (r30 + 56);
    r7 = MemoryInline::FlatRead32((r30 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8083C070:
{
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r28 = (r28_rot_0 & -4);
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r3 = (r1 + 88);
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r11 = MemoryInline::FlatRead32((r30 + 56));
    r10 = MemoryInline::FlatRead32((r9 + 4));
    r8 = MemoryInline::FlatRead32((r9 + 8));
    r5 = MemoryInline::FlatRead32((r9 + 12));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 88), r7);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 92), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 96), r4);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 100), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 104), r11);
    r3_addr_0 = (r3 + r28);
    r27 = MemoryInline::FlatRead32(r3_addr_0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 108), r10);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 112), r8);
    }
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 116), r5);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083C0D0;
    }
}

loc_8083C0BC:
{
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8083C0C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8083C0D0;
    }
}

loc_8083C0CC:
{
    r27 = 4;
}

loc_8083C0D0:
{
    r30 = (r26 * 664);
    r4 = MemoryInline::FlatRead32((r25 + 1620));
    r3 = r25;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r25 + 1620), r0);
    r5 = (r25 + r30);
    r6 = 0;
    r5 = (r5 + 1732);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r24 = (r1 + 104);
    r3 = 0x808B0000u;
    r23 = (r3 + -12732);
    r24_addr_0 = (r24 + r28);
    r6 = MemoryInline::FlatRead32(r24_addr_0);
    r3 = (r1 + 72);
    r4 = 16;
    r5 = (r23 + 30);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8083C118u;
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
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r22 = (r1 + 120);
    r4 = (r1 + 136);
    r3 = (r1 + 152);
    r0 = (r1 + 168);
    MemoryInline::FlatWriteRam32((r1 + 56), r22);
    r21 = 0;
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    MemoryInline::FlatWriteRam32((r1 + 64), r3);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    goto loc_8083C164;
}

loc_8083C140:
{
    r24_addr_2 = (r24 + r28);
    r6 = MemoryInline::FlatRead32(r24_addr_2);
    r3 = r22;
    r7 = r21;
    r5 = (r23 + 38);
    r4 = 16;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8083C15Cu;
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
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r22 = (r22 + 16);
    r21 = (r21 + 1);
}

loc_8083C164:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r27));
}

loc_8083C168:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8083C140;
    }
}

loc_8083C16C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8083C170:
{
    r5 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083C194;
    }
}

loc_8083C178:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(1));
}

loc_8083C17C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083C1A8;
    }
}

loc_8083C180:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(2));
}

loc_8083C184:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083C1BC;
    }
}

loc_8083C188:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(3));
}

loc_8083C18C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083C1D0;
    }
}

loc_8083C190:
{
    goto loc_8083C1E0;
}

loc_8083C194:
{
    r3 = (r29 + 65536);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r3 + -28360));
    goto loc_8083C1E0;
}

loc_8083C1A8:
{
    r3 = (r29 + 65536);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r3 + -28344));
    goto loc_8083C1E0;
}

loc_8083C1BC:
{
    r3 = (r29 + 65536);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r3 + -28328));
    goto loc_8083C1E0;
}

loc_8083C1D0:
{
    r3 = (r29 + 65536);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r3 + -28312));
}

loc_8083C1E0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r25 + r30);
    r9 = 0x808B0000u;
    r9 = (r9 + -12732);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r22 = (r3 + 1732);
    r3 = r22;
    r4 = r27;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r6 = (r9 + 49);
    r7 = (r9 + 57);
    r8 = (r1 + 72);
    r9 = (r9 + 80);
    r10 = (r1 + 56);
    ctx->lr = 0x8083C224u;
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
    InvokeDirectCpu<0x8060594Cu>(ctx);
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
    r4 = MemoryInline::FlatRead32((r25 + 7008));
    r3 = r22;
    // inline leaf 0x80605D54 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 496), r4);
    // end of inlined leaf 0x80605D54
    r4 = MemoryInline::FlatRead32((r25 + 7012));
    r3 = r22;
    // inline leaf 0x80605D6C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 508), r4);
    // end of inlined leaf 0x80605D6C
    r4 = (r25 + r30);
    r3 = r22;
    MemoryInline::FlatWrite32((r4 + 2256), r26);
    goto loc_8083C390;
}

loc_8083C24C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(5));
}

loc_8083C250:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8083C38C;
    }
}

loc_8083C254:
{
    r27 = (r26 + -4);
    r4 = MemoryInline::FlatRead32((r25 + 1620));
    r28 = (r27 * 1480);
    r26 = MemoryInline::FlatRead32((r30 + 96));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r25 + 1620), r0);
    r3 = r25;
    r5 = (r25 + r28);
    r6 = 0;
    r5 = (r5 + 4388);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r4 = 0x808B0000u;
    r6 = r26;
    r4 = (r4 + -12732);
    r3 = (r1 + 40);
    r5 = (r4 + 105);
    r4 = 16;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8083C2A0u;
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
    InvokeDirectCpu<0x80011938u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8083C2A4:
{
    r5 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083C2BC;
    }
}

loc_8083C2AC:
{
    r3 = (r29 + 65536);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r3 + -28296));
}

loc_8083C2BC:
{
    r26 = 0x808B0000u;
    r3 = (r25 + r28);
    r26 = (r26 + -12732);
    r11 = 1;
    r0 = (r26 + 185);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 8), r0);
    r0 = (r26 + 212);
    r22 = (r3 + 4388);
    r23 = (r27 * 1140);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 12), r0);
    r0 = 0;
    r6 = (r26 + 114);
    r3 = (r25 + r23);
    r7 = (r26 + 122);
    r4 = (r3 + 6240);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 16), r4);
    r3 = r22;
    r8 = (r1 + 40);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 20), r11);
    r9 = (r26 + 146);
    r10 = (r26 + 173);
    r4 = 6;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 32), r11);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 36), r11);
    }
    ctx->lr = 0x8083C328u;
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
    InvokeDirectCpu<0x8063EBDCu>(ctx);
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
    r4 = MemoryInline::FlatRead32((r25 + 7016));
    r3 = r22;
    // inline leaf 0x8063F020 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 668), r4);
    // end of inlined leaf 0x8063F020
    r4 = MemoryInline::FlatRead32((r25 + 7020));
    r3 = r22;
    // inline leaf 0x8063F028 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 672), r4);
    // end of inlined leaf 0x8063F028
    r4 = MemoryInline::FlatRead32((r25 + 7024));
    r3 = r22;
    // inline leaf 0x8063F030 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 676), r4);
    // end of inlined leaf 0x8063F030
    r4 = (r25 + r28);
    r3 = (r25 + r23);
    r23 = (r3 + 5868);
    MemoryInline::FlatWrite32((r4 + 4912), r27);
    r3 = r23;
    r4 = (r26 + 223);
    r5 = (r26 + 231);
    r6 = (r26 + 256);
    r7 = (r26 + 262);
    r8 = (r26 + 286);
    ctx->lr = 0x8083C378u;
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
    InvokeDirectCpu<0x806406B0u>(ctx);
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
    r4 = MemoryInline::FlatRead32((r25 + 7028));
    r3 = r23;
    // inline leaf 0x806407D4 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 376), r4);
    // end of inlined leaf 0x806407D4
    r3 = r22;
    goto loc_8083C390;
}

loc_8083C38C:
{
    r3 = 0;
}

loc_8083C390:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 196), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 196));
            r22 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 200));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 204));
            r24 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 208));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 212));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 216));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 220));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 224));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 228));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r1 + 232));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r1 + 236));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8083BFE0 func_8083BFE0 preserves=true fpr_mask=0x00000000
