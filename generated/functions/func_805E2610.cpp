#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E2610(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E2610;

loc_805E2610:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
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
    r31 = (r3 + r0);
    r29 = r3;
    r30 = r4;
    r26 = MemoryInline::FlatRead32((r31 + 4));
    r27 = MemoryInline::FlatRead32((r3 + 612));
}

loc_805E263C:
{
    r25 = MemoryInline::FlatRead32((r31 + 8));
    if ((static_cast<uint32_t>(r26) <= static_cast<uint32_t>(3))) {
        goto loc_805E2650;
    }
}

loc_805E2644:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(4));
}

loc_805E2648:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E2694;
    }
}

loc_805E264C:
{
    goto loc_805E26C4;
}

loc_805E2650:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r25 & 65535);
    r28 = (r27 + r0);
    r3 = MemoryInline::FlatRead32((r28 + 84));
    // inline leaf 0x8051D084 (14 guest instruction(s))
}

loc_inl0_0x8051D084:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl0_0x8051D08C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8051D098;
    }
}

loc_inl0_0x8051D090:
{
    r3 = 0;
    goto loc_inl0_cont_8051D084;
}

loc_inl0_0x8051D098:
{
    r4 = (r4 * 216);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_inl0_0x8051D0A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8051D0B4;
    }
}

loc_inl0_0x8051D0AC:
{
    r3 = (r3 + r4);
    goto loc_inl0_cont_8051D084;
}

loc_inl0_0x8051D0B4:
{
    r3 = 0;
}

loc_inl0_cont_8051D084:
{
    // end of inlined leaf 0x8051D084
    r4 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r3 + 184));
    r6 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = (r26 & 255);
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r6 + 144));
    r6 = 0;
    // inline leaf 0x80621C08 (13 guest instruction(s))
}

loc_inl1_0x80621C08:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x80621C10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80621C14:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x80621C1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80621C20:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 272), r4);
    MemoryInline::FlatWrite32((r3 + 276), r5);
    MemoryInline::FlatWrite8((r3 + 280), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r3 + 284), r7);
    goto loc_inl1_cont_80621C08;
}

loc_inl1_return:
{
}

loc_inl1_cont_80621C08:
{
    // end of inlined leaf 0x80621C08
    r3 = MemoryInline::FlatRead32((r28 + 84));
    r4 = (r25 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051D064u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    goto loc_805E26C4;
}

loc_805E2694:
{
    r3 = 0x809C0000u;
    r5 = (r25 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r4 = 1;
    r6 = -1;
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80621BD0u>(ctx);
    r0 = ctx->gpr[0];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r25 & 65535);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 84));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051D064u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_805E26C4:
{
    r0 = 13;
    MemoryInline::FlatWrite32((r27 + 148), r0);
    goto loc_805E26F8;
}

loc_805E26D0:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r30 = (r30 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = MemoryInline::FlatRead32((r31 + 24));
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r0 = MemoryInline::FlatRead8((r31 + 28));
    MemoryInline::FlatWrite8((r31 + 12), static_cast<uint8_t>(r0));
    r31 = (r31 + 16);
}

loc_805E26F8:
{
    r3 = MemoryInline::FlatRead32((r29 + 608));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_805E2704:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805E26D0;
    }
}

loc_805E2708:
{
    MemoryInline::FlatWrite32((r29 + 608), r0);
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

// RECOMP_GUEST_ABI gpr_read=0xFE0000FB gpr_write=0xFE0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E2610 func_805E2610 preserves=true fpr_mask=0x00000000
