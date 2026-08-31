#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065E644(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r24_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_8065E644;

loc_8065E644:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r23);
    }
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
    r27 = (r3 + r0);
    r24 = r3;
    r25 = r5;
    r28 = r27;
    r26 = 0;
    r30 = 0x809C0000u;
    r31 = 0x809C0000u;
    r22 = 1;
    r23 = 2;
}

loc_8065E67C:
{
    r5 = MemoryInline::FlatRead32((r30 + 8408));
    r4 = -1;
    r29 = 0;
    ctr = r23;
}

loc_8065E68C:
{
    r3 = (r5 + r29);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
}

loc_8065E698:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(r0))) {
        goto loc_8065E6AC;
    }
}

loc_8065E69C:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r26));
}

loc_8065E6A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E6AC;
    }
}

loc_8065E6A8:
{
    goto loc_8065E76C;
}

loc_8065E6AC:
{
    r29 = (r29 + 1);
    r3 = (r5 + r29);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
}

loc_8065E6BC:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(r0))) {
        goto loc_8065E6D0;
    }
}

loc_8065E6C0:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r26));
}

loc_8065E6C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E6D0;
    }
}

loc_8065E6CC:
{
    goto loc_8065E76C;
}

loc_8065E6D0:
{
    r29 = (r29 + 1);
    r3 = (r5 + r29);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
}

loc_8065E6E0:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(r0))) {
        goto loc_8065E6F4;
    }
}

loc_8065E6E4:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r26));
}

loc_8065E6EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E6F4;
    }
}

loc_8065E6F0:
{
    goto loc_8065E76C;
}

loc_8065E6F4:
{
    r29 = (r29 + 1);
    r3 = (r5 + r29);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
}

loc_8065E704:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(r0))) {
        goto loc_8065E718;
    }
}

loc_8065E708:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r26));
}

loc_8065E710:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E718;
    }
}

loc_8065E714:
{
    goto loc_8065E76C;
}

loc_8065E718:
{
    r29 = (r29 + 1);
    r3 = (r5 + r29);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
}

loc_8065E728:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(r0))) {
        goto loc_8065E73C;
    }
}

loc_8065E72C:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r26));
}

loc_8065E734:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E73C;
    }
}

loc_8065E738:
{
    goto loc_8065E76C;
}

loc_8065E73C:
{
    r29 = (r29 + 1);
    r3 = (r5 + r29);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(r0));
}

loc_8065E74C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E760;
    }
}

loc_8065E750:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r26));
}

loc_8065E758:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E760;
    }
}

loc_8065E75C:
{
    goto loc_8065E76C;
}

loc_8065E760:
{
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8065E68C;
    }
}

loc_8065E768:
{
    r29 = -1;
}

loc_8065E76C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065E77C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E884;
    }
}

loc_8065E780:
{
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r3));
}

loc_8065E790:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E7A8;
    }
}

loc_8065E794:
{
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r3));
}

loc_8065E7A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E7C0;
    }
}

loc_8065E7A8:
{
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    r4 = r29;
    ctx->lr = 0x8065E7B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r24_addr_2 = (r24 + r0);
    r0 = MemoryInline::FlatRead8(r24_addr_2);
    goto loc_8065E7E8;
}

loc_8065E7C0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065E7D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E7E4;
    }
}

loc_8065E7D4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 16));
    goto loc_8065E7E8;
}

loc_8065E7E4:
{
    r0 = 0;
}

loc_8065E7E8:
{
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    ctx->lr = 0x8065E7F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065E7FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E81C;
    }
}

loc_8065E800:
{
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    r4 = r29;
    ctx->lr = 0x8065E80Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_8065E844;
}

loc_8065E81C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065E82C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065E840;
    }
}

loc_8065E830:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 19));
    goto loc_8065E844;
}

loc_8065E840:
{
    r0 = 0;
}

loc_8065E844:
{
}

loc_8065E848:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8065E874;
    }
}

loc_8065E84C:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 112));
}

loc_8065E85C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8065E874;
    }
}

loc_8065E860:
{
    r3 = MemoryInline::FlatRead8((r27 + 5));
    r0 = PPC_Slw(static_cast<uint32_t>(r22), static_cast<uint32_t>(r26));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite8((r27 + 5), static_cast<uint8_t>(r0));
    goto loc_8065E884;
}

loc_8065E874:
{
    r3 = MemoryInline::FlatRead8((r27 + 5));
    r0 = PPC_Slw(static_cast<uint32_t>(r22), static_cast<uint32_t>(r26));
    r0 = (r3 & ~r0);
    MemoryInline::FlatWrite8((r27 + 5), static_cast<uint8_t>(r0));
}

loc_8065E884:
{
    r26 = (r26 + 1);
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
}

loc_8065E890:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065E67C;
    }
}

loc_8065E894:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xFFC001FB gpr_write=0xFFC001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065E644 func_8065E644 preserves=true fpr_mask=0x00000000
