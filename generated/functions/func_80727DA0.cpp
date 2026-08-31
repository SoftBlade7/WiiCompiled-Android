#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80727DA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80727DA0;

loc_80727DA0:
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
    r25 = r3;
    r26 = r4;
    r30 = 0;
    r31 = 0;
    r27 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 192));
    r29 = MemoryInline::FlatRead32((r5 + 24));
    goto loc_80727DF0;
}

loc_80727DD0:
{
    r3 = MemoryInline::FlatRead32((r25 + 192));
    r3_addr_2 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctx->lr = 0x80727DDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80726290u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
}

loc_80727DE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80727DE8;
    }
}

loc_80727DE4:
{
    r30 = (r30 + 1);
}

loc_80727DE8:
{
    r27 = (r27 + 4);
    r31 = (r31 + 1);
}

loc_80727DF0:
{
}

loc_80727DF4:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r29))) {
        goto loc_80727DD0;
    }
}

loc_80727DF8:
{
    r3 = MemoryInline::FlatRead32((r25 + 196));
    r31 = 0;
    r29 = 0;
    r27 = 0;
    r28 = MemoryInline::FlatRead32((r3 + 24));
    goto loc_80727E30;
}

loc_80727E10:
{
    r3 = MemoryInline::FlatRead32((r25 + 196));
    r3_addr_4 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    ctx->lr = 0x80727E1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80726290u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
}

loc_80727E20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80727E28;
    }
}

loc_80727E24:
{
    r31 = (r31 + 1);
}

loc_80727E28:
{
    r27 = (r27 + 4);
    r29 = (r29 + 1);
}

loc_80727E30:
{
}

loc_80727E34:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r28))) {
        goto loc_80727E10;
    }
}

loc_80727E38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r31));
}

loc_80727E3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80727E54;
    }
}

loc_80727E40:
{
    r3 = MemoryInline::FlatRead32((r25 + 192));
    r4 = r26;
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80726380 (10 guest instruction(s))
}

loc_inl0_0x80726380:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x80726388:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x80726394;
    }
}

loc_inl0_0x8072638C:
{
    r3 = 0;
    goto loc_inl0_cont_80726380;
}

loc_inl0_0x80726394:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl0_cont_80726380:
{
    // end of inlined leaf 0x80726380
    goto loc_80727E70;
}

loc_80727E54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80727E6C;
    }
}

loc_80727E58:
{
    r3 = MemoryInline::FlatRead32((r25 + 196));
    r4 = r26;
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80726380 (10 guest instruction(s))
}

loc_inl1_0x80726380:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x80726388:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl1_0x80726394;
    }
}

loc_inl1_0x8072638C:
{
    r3 = 0;
    goto loc_inl1_cont_80726380;
}

loc_inl1_0x80726394:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
}

loc_inl1_cont_80726380:
{
    // end of inlined leaf 0x80726380
    goto loc_80727E70;
}

loc_80727E6C:
{
    r3 = 0;
}

loc_80727E70:
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

// RECOMP_GUEST_ABI gpr_read=0xFE00001B gpr_write=0xFE00003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80727DA0 func_80727DA0 preserves=true fpr_mask=0x00000000
