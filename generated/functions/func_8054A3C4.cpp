#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054A3C4(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8054A3C4;

loc_8054A3C4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r8 = (r3 + 131072);
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
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r24 = r7;
    r0 = MemoryInline::FlatRead8((r8 + 20482));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054A3F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054A408;
    }
}

loc_8054A3F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r8 + 20480), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r8 + 20484), r0);
    goto loc_8054A5B4;
}

loc_8054A408:
{
}

loc_8054A40C:
{
    r31 = 0;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8054A4A4;
    }
}

loc_8054A414:
{
    r26 = 0;
    r25 = 0;
}

loc_8054A41C:
{
    r3 = (r25 & 255);
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

loc_8054A428:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(r3))) {
        goto loc_8054A438;
    }
}

loc_8054A42C:
{
    r30 = r25;
    r26 = 1;
    goto loc_8054A444;
}

loc_8054A438:
{
    r25 = (r25 + 1);
}

loc_8054A440:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(32))) {
        goto loc_8054A41C;
    }
}

loc_8054A444:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8054A448:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054A464;
    }
}

loc_8054A44C:
{
    r3 = (r27 + 131072);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 20480), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::FlatWrite32((r3 + 20484), r0);
    goto loc_8054A5B4;
}

loc_8054A464:
{
    r3 = 65536;
    r0 = (r30 & 255);
    r4 = (r3 + -27664);
    r4 = (r28 * r4);
    r3 = 1;
    r5 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r27 + r4);
    r3 = (r3 + 56);
    r4 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -28064));
    r0 = (r3 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054A4F8;
    }
}

loc_8054A494:
{
    r0 = (r3 & ~r5);
    MemoryInline::FlatWrite32((r4 + -28064), r0);
    r31 = 1;
    goto loc_8054A4F8;
}

loc_8054A4A4:
{
}

loc_8054A4A8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8054A4E8;
    }
}

loc_8054A4AC:
{
    r5 = 65536;
    r0 = 1;
    r5 = (r5 + -27664);
    r4 = (r4 * r5);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r3 = (r3 + r4);
    r3 = (r3 + 56);
    r4 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -28060));
    r0 = (r3 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054A4F8;
    }
}

loc_8054A4D8:
{
    r0 = (r3 & ~r5);
    MemoryInline::FlatWrite32((r4 + -28060), r0);
    r31 = 1;
    goto loc_8054A4F8;
}

loc_8054A4E8:
{
    r0 = (r5 + -4);
}

loc_8054A4F0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8054A4F8;
    }
}

loc_8054A4F4:
{
    r31 = 1;
}

loc_8054A4F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8054A4FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054A5A4;
    }
}

loc_8054A500:
{
    r3 = 65536;
    r26 = 0;
    r31 = (r3 + -27664);
}

loc_8054A50C:
{
    r4 = (r26 & 255);
    r3 = r27;
    r0 = (r4 * r31);
    r5 = (r27 + r0);
    r5 = (r5 + 56);
    ctx->lr = 0x8054A524u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
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

loc_8054A52C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8054A50C;
    }
}

loc_8054A530:
{
    r3 = MemoryInline::FlatRead32((r27 + 24));
    ctx->lr = 0x8054A538u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C088u>(ctx);
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
    r0 = (r29 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8054A540:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8054A54C;
    }
}

loc_8054A544:
{
    r3 = 0;
    goto loc_8054A578;
}

loc_8054A54C:
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

loc_8054A578:
{
    r5 = (r27 + 131072);
    r0 = 1;
    r4 = 0x80550000u;
    MemoryInline::FlatWrite32((r27 + 32), r3);
    r3 = MemoryInline::FlatRead32((r27 + 28));
    r4 = (r4 + -23928);
    MemoryInline::FlatWrite8((r5 + 20480), static_cast<uint8_t>(r0));
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8054A5A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
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
    goto loc_8054A5B4;
}

loc_8054A5A4:
{
    r3 = (r27 + 131072);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 20480), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 20484), r0);
}

loc_8054A5B4:
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
    ctx->gpr[8] = r8;
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
// RECOMP_REGISTRATION base 0x8054A3C4 func_8054A3C4 preserves=true fpr_mask=0x00000000
