#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DAF38(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_805DAF38;

loc_805DAF38:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
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
    r25 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r28 = MemoryInline::FlatRead32((r3 + 632));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805DAF60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DAF6C;
    }
}

loc_805DAF64:
{
    r28 = 0;
    goto loc_805DAFC0;
}

loc_805DAF6C:
{
    r24 = 0x809C0000u;
    r24 = (r24 + 7216);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DAFBC;
    }
}

loc_805DAF78:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DAF8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
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
    goto loc_805DAFA4;
}

loc_805DAF90:
{
}

loc_805DAF94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r24))) {
        goto loc_805DAFA0;
    }
}

loc_805DAF98:
{
    r0 = 1;
    goto loc_805DAFB0;
}

loc_805DAFA0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DAFA4:
{
}

loc_805DAFA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DAF90;
    }
}

loc_805DAFAC:
{
    r0 = 0;
}

loc_805DAFB0:
{
}

loc_805DAFB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DAFBC;
    }
}

loc_805DAFB8:
{
    goto loc_805DAFC0;
}

loc_805DAFBC:
{
    r28 = 0;
}

loc_805DAFC0:
{
    r26 = 0;
    r30 = 0x809C0000u;
    r24 = 0x809C0000u;
    r29 = 1;
}

loc_805DAFD0:
{
    r3 = MemoryInline::FlatRead32((r24 + 8408));
    r0 = (r26 & 255);
    r4 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DB1E4;
    }
}

loc_805DAFF4:
{
    r3 = (r28 + 10820);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 254);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805FA930
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_805DB00C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DB1E4;
    }
}

loc_805DB010:
{
    r3 = MemoryInline::FlatRead32((r24 + 8408));
    r4 = (r26 & 255);
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_805DB02C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_805DB10C;
    }
}

loc_805DB030:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r31 = MemoryInline::FlatRead32((r25 + 344));
    r27 = (r25 + r0);
    r0 = MemoryInline::FlatRead32((r27 + 244));
}

loc_805DB044:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_805DB058;
    }
}

loc_805DB048:
{
    r3 = MemoryInline::FlatRead8((r25 + 348));
    r0 = MemoryInline::FlatRead8((r25 + 340));
}

loc_805DB054:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_805DB1E4;
    }
}

loc_805DB058:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(8));
    r0 = (r0_rot_5 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_805DB060:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DB0E4;
    }
}

loc_805DB064:
{
    r7 = r25;
    r6 = 0;
    r3 = 0;
    goto loc_805DB0D8;
}

loc_805DB074:
{
    r0 = MemoryInline::FlatRead32(r7);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_4 & 255);
    r0 = (r4 + -3);
}

loc_805DB084:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_805DB0CC;
    }
}

loc_805DB088:
{
    r5 = r6;
    r8 = (r25 + r3);
    goto loc_805DB0B4;
}

loc_805DB094:
{
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32(r8, r0);
    r0 = MemoryInline::FlatRead8((r8 + 12));
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 13));
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r0));
    r8 = (r8 + 8);
}

loc_805DB0B4:
{
    r4 = MemoryInline::FlatRead32((r25 + 240));
    r0 = (r4 + -1);
}

loc_805DB0C0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_805DB094;
    }
}

loc_805DB0C4:
{
    MemoryInline::FlatWrite32((r25 + 240), r0);
    goto loc_805DB0D8;
}

loc_805DB0CC:
{
    r7 = (r7 + 8);
    r6 = (r6 + 1);
    r3 = (r3 + 8);
}

loc_805DB0D8:
{
    r0 = MemoryInline::FlatRead32((r25 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_805DB0E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DB074;
    }
}

loc_805DB0E4:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r3 = r25;
    r4 = (r26 & 255);
    r6 = (r1 + 12);
    r5 = MemoryInline::FlatRead8((r25 + 348));
    ctx->lr = 0x805DB0FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x805DB358u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
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
    MemoryInline::FlatWrite32((r27 + 244), r31);
    r0 = MemoryInline::FlatRead8((r25 + 348));
    MemoryInline::FlatWrite8((r25 + 340), static_cast<uint8_t>(r0));
    goto loc_805DB1E4;
}

loc_805DB10C:
{
    r3 = MemoryInline::FlatRead32((r30 + 8416));
    // inline leaf 0x8065AF64 (4 guest instruction(s))
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8065AF64
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
    r31 = r3;
    r27 = (r25 + r0);
    r0 = MemoryInline::FlatRead32((r27 + 244));
}

loc_805DB128:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_805DB1E4;
    }
}

loc_805DB12C:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_805DB134:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DB1B8;
    }
}

loc_805DB138:
{
    r8 = r25;
    r7 = 0;
    r4 = 0;
    goto loc_805DB1AC;
}

loc_805DB148:
{
    r0 = MemoryInline::FlatRead32(r8);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_3 & 255);
    r0 = (r5 + -3);
}

loc_805DB158:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_805DB1A0;
    }
}

loc_805DB15C:
{
    r6 = r7;
    r9 = (r25 + r4);
    goto loc_805DB188;
}

loc_805DB168:
{
    r0 = MemoryInline::FlatRead32((r9 + 8));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite32(r9, r0);
    r0 = MemoryInline::FlatRead8((r9 + 12));
    MemoryInline::FlatWrite8((r9 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r9 + 13));
    MemoryInline::FlatWrite8((r9 + 5), static_cast<uint8_t>(r0));
    r9 = (r9 + 8);
}

loc_805DB188:
{
    r5 = MemoryInline::FlatRead32((r25 + 240));
    r0 = (r5 + -1);
}

loc_805DB194:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_805DB168;
    }
}

loc_805DB198:
{
    MemoryInline::FlatWrite32((r25 + 240), r0);
    goto loc_805DB1AC;
}

loc_805DB1A0:
{
    r8 = (r8 + 8);
    r7 = (r7 + 1);
    r4 = (r4 + 8);
}

loc_805DB1AC:
{
    r0 = MemoryInline::FlatRead32((r25 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_805DB1B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DB148;
    }
}

loc_805DB1B8:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r25;
    r5 = MemoryInline::FlatRead32((r24 + 8408));
    r4 = (r26 & 255);
    r6 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead8((r5 + 89));
    ctx->lr = 0x805DB1E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x805DB358u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
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
    MemoryInline::FlatWrite32((r27 + 244), r31);
}

loc_805DB1E4:
{
    r26 = (r26 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
}

loc_805DB1EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DAFD0;
    }
}

loc_805DB1F0:
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x805DAF38 func_805DAF38 preserves=true fpr_mask=0x00000000
