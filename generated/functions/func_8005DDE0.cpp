#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005DDE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_8005DF28_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8005DDE0;

loc_8005DDE0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = MemoryInline::FlatRead32(r5);
    r25 = r3;
    r29 = r4;
    r30 = r6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005DE08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005DE14;
    }
}

loc_8005DE0C:
{
    r3 = 0;
    goto loc_8005DF40;
}

loc_8005DE14:
{
    r3 = r5;
    // inline leaf 0x8004E550 (13 guest instruction(s))
}

loc_inl1_0x8004E550:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x8004E55C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004E568;
    }
}

loc_inl1_0x8004E560:
{
    r3 = (r3 + r0);
    goto loc_inl1_0x8004E56C;
}

loc_inl1_0x8004E568:
{
    r3 = 0;
}

loc_inl1_0x8004E56C:
{
}

loc_inl1_0x8004E570:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004E57C;
    }
}

loc_inl1_0x8004E574:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl1_cont_8004E550;
}

loc_inl1_0x8004E57C:
{
    r3 = 0;
}

loc_inl1_cont_8004E550:
{
    // end of inlined leaf 0x8004E550
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r0 = (r4 + 39);
    r28 = r3;
    r27 = (r0 & -4);
}

loc_8005DE34:
{
    r3 = (r27 + r5);
    r0 = (r3 + 3);
    r26 = (r0 & -4);
    r3 = (r26 + r5);
    r0 = (r3 + 3);
    r4 = (r0 & -4);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8005DE54;
    }
}

loc_8005DE50:
{
    MemoryInline::FlatWrite32(r29, r4);
}

loc_8005DE54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_8005DE58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005DE64;
    }
}

loc_8005DE5C:
{
    r3 = 0;
    goto loc_8005DF40;
}

loc_8005DE64:
{
    r3 = r25;
    ctx->lr = 0x8005DE6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8005DE70:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005DE80;
    }
}

loc_8005DE78:
{
    r3 = 0;
    goto loc_8005DF40;
}

loc_8005DE80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005DF3C;
    }
}

loc_8005DE84:
{
    r29 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r29);
    r12 = 0x80270000u;
    r0 = (r3 + 36);
    MemoryInline::FlatWrite32((r3 + 8), r25);
    r12 = (r12 + 11984);
    MemoryInline::FlatWrite32((r3 + 12), r29);
    MemoryInline::FlatWrite32(r3, r12);
    MemoryInline::FlatWrite32((r3 + 16), r28);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x8005DEB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x80270000u;
    r0 = (r31 + r27);
    r3 = (r3 + 11904);
    MemoryInline::FlatWrite32(r31, r3);
    r4 = 0;
    r5 = 0;
    MemoryInline::FlatWrite32((r31 + 24), r30);
    MemoryInline::FlatWrite32((r31 + 28), r0);
    goto loc_8005DEF0;
}

loc_8005DEE0:
{
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r4 = (r4 + 1);
    r3_addr_2 = (r3 + r5);
    MemoryInline::FlatWrite32(r3_addr_2, r29);
    r5 = (r5 + 4);
}

loc_8005DEF0:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
}

loc_8005DEF8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8005DEE0;
    }
}

loc_8005DEFC:
{
    r3 = 0x80270000u;
    r0 = (r31 + r26);
    r3 = (r3 + 11824);
    MemoryInline::FlatWrite32(r31, r3);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29612));
    r4 = 0;
    MemoryInline::FlatWrite32((r31 + 32), r0);
    r5 = 0;
    goto loc_8005DF30;
}

loc_8005DF20:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r4 = (r4 + 1);
    addr_stfsx_8005DF28_loc_0 = (r3 + r5);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8005DF28_loc_0, f0.d);
    r5 = (r5 + 4);
}

loc_8005DF30:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8005DF38:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8005DF20;
    }
}

loc_8005DF3C:
{
    r3 = r31;
}

loc_8005DF40:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8005DDE0 func_8005DDE0 preserves=true fpr_mask=0x00000000
