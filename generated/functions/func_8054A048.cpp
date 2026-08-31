#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054A048(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
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

    goto loc_8054A048;

loc_8054A048:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r9 = (r3 + 131072);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r23);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r23 = r7;
    r31 = r8;
    r0 = MemoryInline::FlatRead8((r9 + 20482));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054A07C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054A090;
    }
}

loc_8054A080:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r9 + 20480), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r9 + 20484), r0);
    goto loc_8054A274;
}

loc_8054A090:
{
    r4 = MemoryInline::FlatRead32((r27 + 24));
    r3 = r23;
    ctx->lr = 0x8054A09Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051CA80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8054A0A0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8054A158;
    }
}

loc_8054A0A4:
{
    r25 = 0;
    r24 = 0;
}

loc_8054A0AC:
{
    r26 = MemoryInline::FlatRead32((r23 + 184));
    r3 = (r24 & 255);
    // inline leaf 0x80552E74 (9 guest instruction(s))
}

loc_inl0_0x80552E74:
{
}

loc_inl0_0x80552E78:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(32))) {
        goto loc_inl0_0x80552E84;
    }
}

loc_inl0_0x80552E7C:
{
    r3 = 8;
    goto loc_inl0_cont_80552E74;
}

loc_inl0_0x80552E84:
{
    r4 = 0x80890000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r4 = (r4 + 4544);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_inl0_cont_80552E74:
{
    // end of inlined leaf 0x80552E74
}

loc_8054A0BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r26))) {
        goto loc_8054A0CC;
    }
}

loc_8054A0C0:
{
    r30 = r24;
    r25 = 1;
    goto loc_8054A0D8;
}

loc_8054A0CC:
{
    r24 = (r24 + 1);
}

loc_8054A0D4:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(32))) {
        goto loc_8054A0AC;
    }
}

loc_8054A0D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_8054A0DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054A0F8;
    }
}

loc_8054A0E0:
{
    r3 = (r27 + 131072);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 20480), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::FlatWrite32((r3 + 20484), r0);
    goto loc_8054A274;
}

loc_8054A0F8:
{
    r3 = 65536;
    r0 = (r30 & 255);
    r4 = (r3 + -27664);
    r4 = (r28 * r4);
    r3 = 1;
    r6 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r27 + r4);
    r5 = (r3 + 56);
    r4 = (r5 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -28064));
    r0 = (r3 & r6);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054A134;
    }
}

loc_8054A128:
{
    r0 = (r3 | r6);
    MemoryInline::FlatWrite32((r4 + -28064), r0);
    r31 = 1;
}

loc_8054A134:
{
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -28660));
    r0 = (r0 & r6);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054A1D0;
    }
}

loc_8054A144:
{
    r0 = MemoryInline::FlatRead32((r3 + -28660));
    r31 = 1;
    r0 = (r0 | r6);
    MemoryInline::FlatWrite32((r3 + -28660), r0);
    goto loc_8054A1D0;
}

loc_8054A158:
{
}

loc_8054A15C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(1))) {
        goto loc_8054A19C;
    }
}

loc_8054A160:
{
    r3 = 65536;
    r0 = 1;
    r3 = (r3 + -27664);
    r3 = (r28 * r3);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
    r3 = (r27 + r3);
    r3 = (r3 + 56);
    r4 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -28060));
    r0 = (r3 & r5);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054A1D0;
    }
}

loc_8054A18C:
{
    r0 = (r3 | r5);
    MemoryInline::FlatWrite32((r4 + -28060), r0);
    r31 = 1;
    goto loc_8054A1D0;
}

loc_8054A19C:
{
}

loc_8054A1A0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(4))) {
        goto loc_8054A1D0;
    }
}

loc_8054A1A4:
{
    r3 = 65536;
    r0 = (r3 + -27664);
    r0 = (r28 * r0);
    r3 = (r27 + r0);
    r3 = (r3 + 56);
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -28056));
}

loc_8054A1C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054A1D0;
    }
}

loc_8054A1C8:
{
    r31 = 1;
    MemoryInline::FlatWrite8((r3 + -28056), static_cast<uint8_t>(r31));
}

loc_8054A1D0:
{
    r0 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054A1D4:
{
    MemoryInline::FlatWrite8((r27 + 36), static_cast<uint8_t>(r31));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054A20C;
    }
}

loc_8054A1DC:
{
    r3 = 65536;
    r26 = 0;
    r31 = (r3 + -27664);
}

loc_8054A1E8:
{
    r4 = (r26 & 255);
    r3 = r27;
    r0 = (r4 * r31);
    r5 = (r27 + r0);
    r5 = (r5 + 56);
    ctx->lr = 0x8054A200u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[9] = r9;
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
    InvokeDirectCpu<0x805467D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r26 = (r26 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(4));
}

loc_8054A208:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8054A1E8;
    }
}

loc_8054A20C:
{
    r0 = (r29 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8054A214:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8054A220;
    }
}

loc_8054A218:
{
    r3 = 0;
    goto loc_8054A24C;
}

loc_8054A220:
{
    r3 = 0x80890000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + 3368);
    r4 = (r30 & 255);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = (r28 * 66);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    r3 = (r0 * 10240);
    r3 = (r3 + 196608);
    r3 = (r3 + -32768);
}

loc_8054A24C:
{
    r5 = (r27 + 131072);
    r0 = 1;
    r4 = 0x80550000u;
    MemoryInline::FlatWrite32((r27 + 32), r3);
    r3 = MemoryInline::FlatRead32((r27 + 28));
    r4 = (r4 + -24860);
    MemoryInline::FlatWrite8((r5 + 20480), static_cast<uint8_t>(r0));
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8054A274u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[9] = r9;
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
    InvokeDirectCpu<0x80242C18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_8054A274:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 12));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[9] = r9;
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
// RECOMP_REGISTRATION base 0x8054A048 func_8054A048 preserves=true fpr_mask=0x00000000
