#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053CBC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8053CBC8;

loc_8053CBC8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
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
    r26 = r3;
    r25 = r4;
    r27 = r5;
    r0 = MemoryInline::FlatRead8((r3 + 262));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053CBEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CDFC;
    }
}

loc_8053CBF0:
{
    r3 = 0x809C0000u;
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053CC04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CDFC;
    }
}

loc_8053CC08:
{
    r3 = 0x809C0000u;
    r28 = (r27 * 24);
    r0 = MemoryInline::FlatRead32((r3 + 18248));
    r3 = (r0 + r28);
    r0 = MemoryInline::FlatRead8((r3 + 964));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053CC20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053CDFC;
    }
}

loc_8053CC24:
{
    r3 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead8((r6 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(r0));
}

loc_8053CC34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053CDFC;
    }
}

loc_8053CC38:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
}

loc_8053CC3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053CC44;
    }
}

loc_8053CC40:
{
    goto loc_8053CDFC;
}

loc_8053CC44:
{
    r5 = (r25 * 240);
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 1020);
    r7 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = (r6 + r5);
    r5 = MemoryInline::FlatRead32((r3 + 244));
    r7_addr_1 = (r7 + r4);
    r30 = MemoryInline::FlatRead32(r7_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_8053CC68:
{
    r7_addr_2 = (r7 + r0);
    r29 = MemoryInline::FlatRead32(r7_addr_2);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CC78;
    }
}

loc_8053CC70:
{
    r31 = 0;
    goto loc_8053CCA0;
}

loc_8053CC78:
{
    r0 = (r27 * 240);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8053CC88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CC94;
    }
}

loc_8053CC8C:
{
    r31 = 0;
    goto loc_8053CCA0;
}

loc_8053CC94:
{
    r0 = (r0 - r5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r31 = (r31_rot_1 & 134217727);
}

loc_8053CCA0:
{
    r25 = 0x809C0000u;
    r4 = 0x808B0000u;
    r5 = 0x808B0000u;
    r7 = MemoryInline::FlatRead32((r4 + 8208));
    r9 = MemoryInline::FlatRead32((r5 + 8212));
    r4 = r27;
    r3 = MemoryInline::FlatRead32((r25 + 18248));
    r5 = 1;
    r6 = 1;
    r8 = 1;
    ctx->lr = 0x8053CCCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80869FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r25 + 18248));
    r3 = (r0 + r28);
    r0 = MemoryInline::FlatRead8((r3 + 964));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053CCDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CCF8;
    }
}

loc_8053CCE0:
{
    r3 = 0x809C0000u;
    r4 = r27;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    ctx->lr = 0x8053CCF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80581778u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8053CCF8:
{
}

loc_8053CCFC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8053CD4C;
    }
}

loc_8053CD00:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r0 = MemoryInline::FlatRead16((r30 + 34));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead16((r3 + 464));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8053CD20;
    }
}

loc_8053CD1C:
{
    r0 = 0;
}

loc_8053CD20:
{
    MemoryInline::FlatWrite16((r30 + 34), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r0 = MemoryInline::FlatRead16((r29 + 34));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead16((r3 + 466));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8053CD44;
    }
}

loc_8053CD40:
{
    r0 = 0;
}

loc_8053CD44:
{
    MemoryInline::FlatWrite16((r29 + 34), static_cast<uint16_t>(r0));
    goto loc_8053CD94;
}

loc_8053CD4C:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r0 = MemoryInline::FlatRead16((r30 + 34));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead16((r3 + 456));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8053CD6C;
    }
}

loc_8053CD68:
{
    r0 = 0;
}

loc_8053CD6C:
{
    MemoryInline::FlatWrite16((r30 + 34), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r0 = MemoryInline::FlatRead16((r29 + 34));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead16((r3 + 462));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8053CD90;
    }
}

loc_8053CD8C:
{
    r0 = 0;
}

loc_8053CD90:
{
    MemoryInline::FlatWrite16((r29 + 34), static_cast<uint16_t>(r0));
}

loc_8053CD94:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 18248));
    r3 = (r0 + r28);
    r0 = MemoryInline::FlatRead8((r3 + 964));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053CDA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CDFC;
    }
}

loc_8053CDAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8053CDB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CDFC;
    }
}

loc_8053CDB4:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r0 = MemoryInline::FlatRead16((r30 + 34));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead16((r3 + 458));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8053CDD4;
    }
}

loc_8053CDD0:
{
    r0 = 0;
}

loc_8053CDD4:
{
    MemoryInline::FlatWrite16((r30 + 34), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r0 = MemoryInline::FlatRead16((r29 + 34));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead16((r3 + 460));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053CDF8;
    }
}

loc_8053CDF4:
{
    r0 = 0;
}

loc_8053CDF8:
{
    MemoryInline::FlatWrite16((r29 + 34), static_cast<uint16_t>(r0));
}

loc_8053CDFC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF807FB gpr_write=0xFFF807FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8053CBC8 func_8053CBC8 preserves=true fpr_mask=0x00000000
