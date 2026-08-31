#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C6C98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r28_addr_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_801C6C98;

loc_801C6C98:
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
    r31 = 0x802A0000u;
    r26 = r3;
    r27 = r4;
    r31 = (r31 + -6824);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r3 = (r31 + 1360);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r3 = 0x80350000u;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & 1020);
    r3 = (r3 + 2352);
    r0 = 2;
    r3_addr_0 = (r3 + r4);
    r30 = MemoryInline::FlatRead32(r3_addr_0);
    r5 = 0;
    r3 = 0;
    r4 = MemoryInline::FlatRead8((r30 + 2248));
    r4 = (r4 * 96);
    r4 = (r30 + r4);
    r28 = (r4 + 160);
    ctr = r0;
}

loc_801C6D00:
{
    r28_addr_2 = (r28 + r5);
    MemoryInline::FlatWrite8(r28_addr_2, static_cast<uint8_t>(r3));
    r4 = (r28 + r5);
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r28 + r5);
    r28_addr_3 = (r28 + r5);
    MemoryInline::FlatWrite8(r28_addr_3, static_cast<uint8_t>(r3));
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r28 + r5);
    r28_addr_4 = (r28 + r5);
    MemoryInline::FlatWrite8(r28_addr_4, static_cast<uint8_t>(r3));
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r28 + r5);
    r28_addr_5 = (r28 + r5);
    MemoryInline::FlatWrite8(r28_addr_5, static_cast<uint8_t>(r3));
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r28 + r5);
    r28_addr_6 = (r28 + r5);
    MemoryInline::FlatWrite8(r28_addr_6, static_cast<uint8_t>(r3));
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r28 + r5);
    r28_addr_7 = (r28 + r5);
    MemoryInline::FlatWrite8(r28_addr_7, static_cast<uint8_t>(r3));
    r5 = (r5 + 8);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C6D00;
    }
}

loc_801C6DF4:
{
    r4 = MemoryInline::FlatRead8((r27 + 2));
    r3 = (r31 + 1376);
    r0 = MemoryInline::FlatRead8((r27 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0 = (r0 & 40735);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C6E08:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r25 = MemoryInline::FlatRead8((r27 + 3));
    r27 = MemoryInline::FlatRead8((r27 + 4));
    r4 = r25;
    r5 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r0 = -2;
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r27));
    MemoryInline::FlatWrite8((r28 + 41), static_cast<uint8_t>(r0));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_801C6E38:
{
    r3 = -3;
    r0 = MemoryInline::FlatRead8((r30 + 2241));
    r4 = (0 - r4);
    MemoryInline::FlatWrite8((r28 + 40), static_cast<uint8_t>(r0));
    r28 = (r3 & ~r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C6E64;
    }
}

loc_801C6E50:
{
    r4 = r25;
    r5 = r27;
    r3 = (r31 + 1420);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
}

loc_801C6E64:
{
    r0 = MemoryInline::FlatRead8((r30 + 2439));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r25));
}

loc_801C6E6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C6EA0;
    }
}

loc_801C6E70:
{
    r12 = MemoryInline::FlatRead32((r30 + 2204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801C6E78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C6E94;
    }
}

loc_801C6E7C:
{
    r3 = r26;
    r4 = r28;
    ctr = r12;
    ctx->lr = 0x801C6E8Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    MemoryInline::FlatWrite32((r30 + 2204), r0);
}

loc_801C6E94:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 2236), r0);
    goto loc_801C6EAC;
}

loc_801C6EA0:
{
    r3 = (r31 + 1468);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
}

loc_801C6EAC:
{
    r0 = MemoryInline::FlatRead8((r30 + 2248));
    r3 = r29;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8((r30 + 2248), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801C6C98 func_801C6C98 preserves=true fpr_mask=0x00000000
