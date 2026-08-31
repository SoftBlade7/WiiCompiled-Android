#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066DBBC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
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
    uint32_t xer = ctx->xer;

    goto loc_8066DBBC;

loc_8066DBBC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -512), 0, 520u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -512), r1);
    r1 = (r1 + -512);
    r0 = ctx->lr;
    r3 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_0, 516u, (r1 + 516), r0);
    r3 = (r3 + 11400);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 472u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r1 + 472), r22);
        MemoryInline::WriteResolved32(guest_range_0, 476u, (r1 + 476), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 480u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r1 + 480), r24);
        MemoryInline::WriteResolved32(guest_range_0, 484u, (r1 + 484), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 488u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 488u, (r1 + 488), r26);
        MemoryInline::WriteResolved32(guest_range_0, 492u, (r1 + 492), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 496u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 496u, (r1 + 496), r28);
        MemoryInline::WriteResolved32(guest_range_0, 500u, (r1 + 500), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 504u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 504u, (r1 + 504), r30);
        MemoryInline::WriteResolved32(guest_range_0, 508u, (r1 + 508), r31);
    }
    r23 = r4;
    r22 = r5;
    r4 = 0;
    r5 = 448;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r3);
    r3 = (r1 + 16);
    ctx->lr = 0x8066DBF0u;
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r23;
    r4 = 0;
    r5 = 512;
    ctx->lr = 0x8066DC00u;
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066DC04:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8066DC14;
    }
}

loc_8066DC08:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r23, r0);
    goto loc_8066DC1C;
}

loc_8066DC14:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r23, r0);
}

loc_8066DC1C:
{
    r31 = 65536;
    r0 = 0;
    MemoryInline::FlatWrite32((r23 + 4), r0);
    r30 = (r31 + -29504);
    r25 = 0;
    r29 = 0x809C0000u;
}

loc_8066DC34:
{
    r4 = (r25 & 255);
    r5 = MemoryInline::FlatRead32((r29 + -10424));
    r0 = (r30 * r4);
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20548));
}

loc_8066DC54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066DD28;
    }
}

loc_8066DC58:
{
    r0 = (r31 + -27664);
    r24 = 0;
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r28 = (r3 + 56);
    r27 = (r28 + 65536);
    r26 = (r28 + 22984);
    r27 = (r27 + -29104);
}

loc_8066DC78:
{
    r0 = (r24 & 65535);
    r3 = (r1 + 8);
    r0 = (r0 * 448);
    r4 = (r28 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x8066DC90u;
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066DC94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066DD1C;
    }
}

loc_8066DC98:
{
    r4 = MemoryInline::FlatRead16((r1 + 32));
    r3 = (r26 + 13448);
    r0 = (r4 & 1);
}

loc_8066DCA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8066DCB0;
    }
}

loc_8066DCA8:
{
    r0 = 0;
    goto loc_8066DCC0;
}

loc_8066DCB0:
{
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066DCB4:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066DCC0;
    }
}

loc_8066DCBC:
{
    r0 = 1;
}

loc_8066DCC0:
{
}

loc_8066DCC4:
{
    r22 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066DCE8;
    }
}

loc_8066DCCC:
{
    r0 = MemoryInline::FlatRead8((r1 + 118));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    // inline leaf 0x800EB870 (9 guest instruction(s))
}

loc_inl0_0x800EB870:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r0 = (r0_rot_3 & 3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r3 = (r3_rot_3 & 2097151);
}

loc_inl0_0x800EB880:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_inl0_0x800EB88C;
    }
}

loc_inl0_0x800EB884:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_4 & 1);
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

loc_8066DCE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066DCE8;
    }
}

loc_8066DCE4:
{
    r22 = 1;
}

loc_8066DCE8:
{
}

loc_8066DCEC:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8066DD1C;
    }
}

loc_8066DCF0:
{
    r3 = MemoryInline::FlatRead8((r1 + 118));
    r0 = MemoryInline::FlatRead32((r23 + 4));
    r3 = (r3 * 12);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r27 + r3);
    r3 = (r23 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r23 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r23 + 4), r0);
}

loc_8066DD1C:
{
    r24 = (r24 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(30));
}

loc_8066DD24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066DC78;
    }
}

loc_8066DD28:
{
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(4));
}

loc_8066DD30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066DC34;
    }
}

loc_8066DD34:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 472), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 472));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 476));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 480));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 484));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 488));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 492));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 496));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 500));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 504));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 508));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 516));
    ctx->lr = r0;
    r1 = (r1 + 512);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC000FB gpr_write=0xFFC000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8066DBBC func_8066DBBC preserves=true fpr_mask=0x00000000
