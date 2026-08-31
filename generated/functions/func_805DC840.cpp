#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DC840(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805DC840;

loc_805DC840:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    }
    r22 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r27 = MemoryInline::FlatRead32((r3 + 632));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DC868:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DC874;
    }
}

loc_805DC86C:
{
    r27 = 0;
    goto loc_805DC8C8;
}

loc_805DC874:
{
    r23 = 0x809C0000u;
    r23 = (r23 + 7216);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DC8C4;
    }
}

loc_805DC880:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DC894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DC8AC;
}

loc_805DC898:
{
}

loc_805DC89C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r23))) {
        goto loc_805DC8A8;
    }
}

loc_805DC8A0:
{
    r0 = 1;
    goto loc_805DC8B8;
}

loc_805DC8A8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DC8AC:
{
}

loc_805DC8B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DC898;
    }
}

loc_805DC8B4:
{
    r0 = 0;
}

loc_805DC8B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DC8BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DC8C4;
    }
}

loc_805DC8C0:
{
    goto loc_805DC8C8;
}

loc_805DC8C4:
{
    r27 = 0;
}

loc_805DC8C8:
{
    r3 = (r22 + 9364);
    ctx->lr = 0x805DC8D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805FA370u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r22 + 9840), r0);
    r25 = 0;
    r31 = 0x809C0000u;
    r30 = 0x809C0000u;
    r29 = 1;
    r28 = 0x809C0000u;
}

loc_805DC8EC:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r25));
    r23 = 0;
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r24 = (r24_rot_2 & 134217727);
}

loc_805DC8F8:
{
    r3 = MemoryInline::FlatRead32((r28 + 8408));
    r4 = (r23 & 255);
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_805DC914:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_805DCA6C;
    }
}

loc_805DC918:
{
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DCA6C;
    }
}

loc_805DC928:
{
    r5 = MemoryInline::FlatRead32((r30 + 8456));
    r0 = MemoryInline::FlatRead32((r5 + 2528));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DCA6C;
    }
}

loc_805DC938:
{
    r3 = (r27 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 11001));
}

loc_805DC944:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(r0))) {
        goto loc_805DCA6C;
    }
}

loc_805DC948:
{
    r26 = (r4 * 192);
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = (r1 + 8);
    r5 = (r5 + r26);
    r0 = MemoryInline::FlatRead32((r5 + 368));
    r5 = MemoryInline::FlatRead32((r5 + 372));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805D23D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805DC978:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DCA6C;
    }
}

loc_805DC97C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r22 + 9840), 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r22 + 9840));
    r3 = (r22 + 9364);
    r7 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r23 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    r8 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r22 + r0);
    r6 = 0;
    MemoryInline::FlatWrite32((r4 + 9524), r8);
    MemoryInline::FlatWrite32((r4 + 9520), r7);
    r4 = MemoryInline::FlatRead32((r30 + 8456));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r22 + 9840));
    r4 = (r4 + r26);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & -32);
    r7 = MemoryInline::FlatRead32((r4 + 376));
    r4 = (r22 + r0);
    MemoryInline::FlatWrite32((r4 + 9528), r7);
    r4 = MemoryInline::FlatRead32((r30 + 8456));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r22 + 9840));
    r4 = (r4 + r26);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_5 & -32);
    r7 = MemoryInline::FlatRead16((r4 + 380));
    r4 = (r22 + r0);
    MemoryInline::FlatWrite16((r4 + 9532), static_cast<uint16_t>(r7));
    r4 = MemoryInline::FlatRead32((r30 + 8456));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r22 + 9840));
    r4 = (r4 + r26);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_6 & -32);
    r7 = MemoryInline::FlatRead16((r4 + 382));
    r4 = (r22 + r0);
    MemoryInline::FlatWrite16((r4 + 9534), static_cast<uint16_t>(r7));
    r4 = MemoryInline::FlatRead32((r30 + 8456));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r22 + 9840));
    r8 = (r4 + r26);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_7 & -32);
    r7 = MemoryInline::FlatRead32((r8 + 360));
    r4 = (r22 + r0);
    r0 = MemoryInline::FlatRead32((r8 + 364));
    MemoryInline::FlatWrite32((r4 + 9540), r0);
    MemoryInline::FlatWrite32((r4 + 9536), r7);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r22 + 9840));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_8 & -32);
    r4 = (r22 + r0);
    MemoryInline::FlatWrite8((r4 + 9544), static_cast<uint8_t>(r23));
    r4 = MemoryInline::FlatRead32((r30 + 8456));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r22 + 9840));
    r4 = (r4 + r26);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_9 & -32);
    r7 = MemoryInline::FlatRead8((r4 + 388));
    r4 = (r22 + r0);
    MemoryInline::FlatWrite8((r4 + 9545), static_cast<uint8_t>(r7));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r22 + 9840));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_10 & -32);
    r4 = (r22 + r0);
    MemoryInline::FlatWrite8((r4 + 9546), static_cast<uint8_t>(r24));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r22 + 9840));
    ctx->lr = 0x805DCA60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805FA8B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r22 + 9840));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r22 + 9840), r0);
}

loc_805DCA6C:
{
    r23 = (r23 + 1);
}

loc_805DCA74:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(12))) {
        goto loc_805DC8F8;
    }
}

loc_805DCA78:
{
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(2));
}

loc_805DCA80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DC8EC;
    }
}

loc_805DCA84:
{
    r3 = MemoryInline::FlatRead32((r22 + 9840));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 24));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 40));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 48));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 56));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 60));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805DC840 func_805DC840 preserves=true fpr_mask=0x00000000
