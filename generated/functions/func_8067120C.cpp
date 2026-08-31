#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067120C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8067120C;

loc_8067120C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -496), 0, 504u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -496), r1);
    r1 = (r1 + -496);
    r0 = ctx->lr;
    r3 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_0, 500u, (r1 + 500), r0);
    r3 = (r3 + 11400);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 468u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 468u, (r1 + 468), r25);
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r1 + 472), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 476u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 476u, (r1 + 476), r27);
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r1 + 480), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 484u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 484u, (r1 + 484), r29);
        MemoryInline::WriteResolved32(guest_range_0, 488u, (r1 + 488), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 492u, (r1 + 492), r31);
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r4 = 0;
    r5 = 448;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r3);
    r3 = (r1 + 16);
    ctx->lr = 0x80671244u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r26 + 65536);
    r30 = (r26 + 22984);
    r29 = 0;
    r31 = (r31 + -29104);
}

loc_80671254:
{
    r0 = (r29 & 65535);
    r3 = (r1 + 8);
    r0 = (r0 * 448);
    r4 = (r26 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x8067126Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80671270:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806712F0;
    }
}

loc_80671274:
{
    r4 = MemoryInline::FlatRead16((r1 + 32));
    r3 = (r30 + 13448);
    r0 = (r4 & 1);
}

loc_80671280:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8067128C;
    }
}

loc_80671284:
{
    r0 = 0;
    goto loc_8067129C;
}

loc_8067128C:
{
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80671290:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067129C;
    }
}

loc_80671298:
{
    r0 = 1;
}

loc_8067129C:
{
}

loc_806712A0:
{
    r25 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_806712C4;
    }
}

loc_806712A8:
{
    r0 = MemoryInline::FlatRead8((r1 + 118));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    // inline leaf 0x800EB870 (9 guest instruction(s))
}

loc_inl0_0x800EB870:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r0 = (r0_rot_2 & 3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r3 = (r3_rot_2 & 2097151);
}

loc_inl0_0x800EB880:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_inl0_0x800EB88C;
    }
}

loc_inl0_0x800EB884:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_3 & 1);
    goto loc_inl0_cont_800EB870;
}

loc_inl0_0x800EB88C:
{
    r3 = 0;
}

loc_inl0_cont_800EB870:
{
    // end of inlined leaf 0x800EB870
}

loc_806712BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806712C4;
    }
}

loc_806712C0:
{
    r25 = 1;
}

loc_806712C4:
{
}

loc_806712C8:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_806712F0;
    }
}

loc_806712CC:
{
    r0 = MemoryInline::FlatRead8((r1 + 118));
    r0 = (r0 * 12);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_806712E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806712F0;
    }
}

loc_806712E4:
{
    MemoryInline::FlatWrite32(r28, r29);
    r3 = 1;
    goto loc_80671300;
}

loc_806712F0:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(30));
}

loc_806712F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80671254;
    }
}

loc_806712FC:
{
    r3 = 0;
}

loc_80671300:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 468), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 468));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 472));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 476));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 480));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 484));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 488));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 492));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 500));
    ctx->lr = r0;
    r1 = (r1 + 496);
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

// RECOMP_GUEST_ABI gpr_read=0xFE0000FB gpr_write=0xFE0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8067120C func_8067120C preserves=true fpr_mask=0x00000000
