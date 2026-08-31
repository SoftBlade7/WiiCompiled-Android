#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D225C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_800D225C;

loc_800D225C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r0 = MemoryInline::FlatRead32((r13 + -26896));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D2278:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D2284;
    }
}

loc_800D227C:
{
    r3 = 0;
    goto loc_800D249C;
}

loc_800D2284:
{
    r27 = 0x802F0000u;
    r30 = 0;
    r24 = 0;
    r31 = 1;
    r29 = (r27 + 4960);
}

loc_800D2298:
{
    r0 = MemoryInline::FlatRead32((r13 + -26896));
}

loc_800D22A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D22AC;
    }
}

loc_800D22A4:
{
    r0 = 0;
    goto loc_800D22F4;
}

loc_800D22AC:
{
    r25 = (r27 + 4960);
    r28 = (r24 & 255);
    r26 = 0;
}

loc_800D22B8:
{
    r3 = MemoryInline::FlatRead32(r25);
}

loc_800D22C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D22E0;
    }
}

loc_800D22C4:
{
    // inline leaf 0x8010AD0C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x8010AD0C
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_800D22D0:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_800D22E0;
    }
}

loc_800D22D4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r29_addr_2 = (r29 + r0);
    r0 = MemoryInline::FlatRead32(r29_addr_2);
    goto loc_800D22F4;
}

loc_800D22E0:
{
    r26 = (r26 + 1);
    r25 = (r25 + 4);
}

loc_800D22EC:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(32))) {
        goto loc_800D22B8;
    }
}

loc_800D22F0:
{
    r0 = 0;
}

loc_800D22F4:
{
}

loc_800D22F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D2308;
    }
}

loc_800D22FC:
{
    r0 = (r24 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r30 = (r30 | r0);
}

loc_800D2308:
{
    r24 = (r24 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(32));
}

loc_800D2310:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800D2298;
    }
}

loc_800D2314:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800E7DFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800D231C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D2338;
    }
}

loc_800D2320:
{
    r3 = MemoryInline::FlatRead8((r3 + 22));
}

loc_800D2328:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_800D2338;
    }
}

loc_800D232C:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r30 = (r30 | r0);
}

loc_800D2338:
{
    r0 = MemoryInline::FlatRead32((r13 + -26896));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D2340:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D234C;
    }
}

loc_800D2344:
{
    r0 = 0;
    goto loc_800D2498;
}

loc_800D234C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D2358;
    }
}

loc_800D2350:
{
    r3 = 0;
    goto loc_800D23A8;
}

loc_800D2358:
{
    r31 = 0x802F0000u;
    r4 = 0;
    r3 = (r31 + 5344);
    r5 = 32;
    ctx->lr = 0x800D236Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = (r31 + 5344);
    r26 = 0;
    goto loc_800D2390;
}

loc_800D2378:
{
    r3 = r26;
    // inline leaf 0x800E7E6C (10 guest instruction(s))
}

loc_inl2_0x800E7E6C:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_inl2_0x800E7E78:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_inl2_0x800E7E8C;
    }
}

loc_inl2_0x800E7E7C:
{
    r0 = (r3 * 48);
    r3 = (r4 + r0);
    r3 = (r3 + 56);
    goto loc_inl2_cont_800E7E6C;
}

loc_inl2_0x800E7E8C:
{
    r3 = 0;
}

loc_inl2_cont_800E7E6C:
{
    // end of inlined leaf 0x800E7E6C
    r0 = MemoryInline::FlatRead8((r3 + 22));
    r26 = (r26 + 1);
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r27 = (r27 + 1);
}

loc_800D2390:
{
    // inline leaf 0x800E7C28 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x800E7C28
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r3));
}

loc_800D2398:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800D2378;
    }
}

loc_800D239C:
{
    r31 = 0x802F0000u;
    r31 = (r31 + 5344);
    // inline leaf 0x800E7C28 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x800E7C28
}

loc_800D23A8:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800D23AC:
{
    r0 = 0;
    r4 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800D2498;
    }
}

loc_800D23B8:
{
}

loc_800D23BC:
{
    r6 = (r3 + -8);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_800D246C;
    }
}

loc_800D23C4:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800D23E0;
    }
}

loc_800D23CC:
{
    r5 = 0x80000000u;
    r5 = (r5 + -2);
}

loc_800D23D8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r5))) {
        goto loc_800D23E0;
    }
}

loc_800D23DC:
{
    r7 = 1;
}

loc_800D23E0:
{
}

loc_800D23E4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800D246C;
    }
}

loc_800D23E8:
{
    r5 = (r6 + 7);
    r11 = 1;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & 536870911);
    ctr = r5;
}

loc_800D23FC:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_800D246C;
    }
}

loc_800D2400:
{
    r12 = (r31 + r4);
    r31_addr_2 = (r31 + r4);
    r5 = MemoryInline::FlatRead8(r31_addr_2);
    r6 = MemoryInline::FlatRead8((r12 + 1));
    r4 = (r4 + 8);
    r7 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r5));
    r5 = MemoryInline::FlatRead8((r12 + 2));
    r9 = MemoryInline::FlatRead8((r12 + 3));
    r0 = (r0 | r7);
    r6 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r6));
    r8 = MemoryInline::FlatRead8((r12 + 4));
    r0 = (r0 | r6);
    r10 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r5));
    r7 = MemoryInline::FlatRead8((r12 + 5));
    r0 = (r0 | r10);
    r9 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r9));
    r6 = MemoryInline::FlatRead8((r12 + 6));
    r5 = MemoryInline::FlatRead8((r12 + 7));
    r8 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r8));
    r0 = (r0 | r9);
    r7 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r7));
    r0 = (r0 | r8);
    r6 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r6));
    r0 = (r0 | r7);
    r5 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r5));
    r0 = (r0 | r6);
    r0 = (r0 | r5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D2400;
    }
}

loc_800D246C:
{
    r5 = (r3 - r4);
    r6 = (r31 + r4);
    r7 = 1;
    ctr = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r3));
}

loc_800D2480:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D2498;
    }
}

loc_800D2484:
{
    r3 = MemoryInline::FlatRead8(r6);
    r6 = (r6 + 1);
    r3 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r3));
    r0 = (r0 | r3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D2484;
    }
}

loc_800D2498:
{
    r3 = (r30 & r0);
}

loc_800D249C:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 52));
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFF003FFB gpr_write=0xFF001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D225C func_800D225C preserves=true fpr_mask=0x00000000
