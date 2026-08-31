#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802314E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_802314E0;

loc_802314E0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
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
    r23 = r3;
    r25 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80231500:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231510;
    }
}

loc_80231504:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_80231600;
}

loc_80231510:
{
    r24 = 1;
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r27 = r3;
    r30 = 0x80000000u;
    r29 = 0x802A0000u;
    r31 = 0;
    goto loc_802315F8;
}

loc_8023152C:
{
    r3 = MemoryInline::FlatRead32(r23);
    ctx->lr = 0x80231534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    InvokeDirectCpu<0x801DCCFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
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
    r0 = (r3 + 49);
    r28 = r3;
}

loc_80231540:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(49))) {
        goto loc_802315E8;
    }
}

loc_80231544:
{
    r4 = (r29 + 12760);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80231578u:
        goto loc_80231578;
        break;
    case 0x802315E8u:
        goto loc_802315E8;
        break;
    case 0x80231590u:
        goto loc_80231590;
        break;
    case 0x802315D4u:
        goto loc_802315D4;
        break;
    case 0x80231558u:
        goto loc_80231558;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
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
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80231558:
{
    r4 = MemoryInline::FlatRead32((r23 + 20));
    r25 = 0;
    MemoryInline::FlatWrite32((r23 + 4), r31);
    r24 = 0;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r23 + 8), r3);
    MemoryInline::FlatWrite32((r23 + 20), r0);
    goto loc_802315F8;
}

loc_80231578:
{
    // inline leaf 0x801DD220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24372));
    // end of inlined leaf 0x801DD220
    MemoryInline::FlatWrite32((r23 + 4), r3);
    r25 = 1;
    r24 = 0;
    MemoryInline::FlatWrite32((r23 + 8), r28);
    goto loc_802315F8;
}

loc_80231590:
{
    r0 = MemoryInline::FlatRead32((r30 + 248));
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r26 = (r26_rot_2 & 1073741823);
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0 = (r3 - r27);
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_802315A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802315BC;
    }
}

loc_802315AC:
{
    r4 = r26;
    r3 = 0;
    ctx->lr = 0x802315B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    InvokeDirectCpu<0x801AACA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
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
    goto loc_802315F8;
}

loc_802315BC:
{
    // inline leaf 0x801DD220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24372));
    // end of inlined leaf 0x801DD220
    MemoryInline::FlatWrite32((r23 + 4), r3);
    r25 = 1;
    r24 = 0;
    MemoryInline::FlatWrite32((r23 + 8), r28);
    goto loc_802315F8;
}

loc_802315D4:
{
    MemoryInline::FlatWrite32((r23 + 4), r31);
    r25 = 3;
    r24 = 0;
    MemoryInline::FlatWrite32((r23 + 8), r3);
    goto loc_802315F8;
}

loc_802315E8:
{
    MemoryInline::FlatWrite32((r23 + 4), r31);
    r25 = 4;
    r24 = 0;
    MemoryInline::FlatWrite32((r23 + 8), r3);
}

loc_802315F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_802315FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023152C;
    }
}

loc_80231600:
{
    r3 = r25;
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
// RECOMP_REGISTRATION base 0x802314E0 func_802314E0 preserves=true fpr_mask=0x00000000
