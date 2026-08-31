#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065BE40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r5_addic_src_3 = 0;
    uint32_t r5_addic_src_4 = 0;
    uint32_t r5_addic_src_5 = 0;
    uint32_t r5_addic_src_6 = 0;
    uint32_t r5_addic_src_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r21 = ctx->gpr[21];
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

    goto loc_8065BE40;

loc_8065BE40:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r21);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r23);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    r30 = (r3 + 772);
    r29 = (r3 + 9988);
    r28 = 0;
    r25 = 1;
    r24 = 0;
    r31 = 0x809C0000u;
    r26 = 0x809C0000u;
    r27 = 3;
    goto loc_8065C028;
}

loc_8065BE74:
{
}

loc_8065BE78:
{
    r7 = MemoryInline::FlatRead32((r31 + 8408));
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(0))) {
        goto loc_8065BE94;
    }
}

loc_8065BE80:
{
}

loc_8065BE84:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(12))) {
        goto loc_8065BE94;
    }
}

loc_8065BE88:
{
    r3 = (r7 + r28);
    r4 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_8065BE98;
}

loc_8065BE94:
{
    r4 = 255;
}

loc_8065BE98:
{
    r5 = MemoryInline::FlatRead32((r31 + 8408));
    r3 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r4));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 72));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065C01C;
    }
}

loc_8065BEB8:
{
    r0 = MemoryInline::FlatRead8((r5 + 89));
}

loc_8065BEC0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8065C01C;
    }
}

loc_8065BEC4:
{
    r6 = -1;
    r5 = 0;
    ctr = r27;
}

loc_8065BED0:
{
}

loc_8065BED4:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8065BEEC;
    }
}

loc_8065BED8:
{
}

loc_8065BEDC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_8065BEEC;
    }
}

loc_8065BEE0:
{
    r3 = (r7 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_8065BEF0;
}

loc_8065BEEC:
{
    r0 = 255;
}

loc_8065BEF0:
{
}

loc_8065BEF4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8065BF04;
    }
}

loc_8065BEF8:
{
}

loc_8065BEFC:
{
    r6 = (r6 + 1);
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r28))) {
        goto loc_8065BFA8;
    }
}

loc_8065BF04:
{
    r5_addic_src_3 = r5;
    r5 = (r5_addic_src_3 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_3)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8065BF08:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8065BF20;
    }
}

loc_8065BF0C:
{
}

loc_8065BF10:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_8065BF20;
    }
}

loc_8065BF14:
{
    r3 = (r7 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_8065BF24;
}

loc_8065BF20:
{
    r0 = 255;
}

loc_8065BF24:
{
}

loc_8065BF28:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8065BF38;
    }
}

loc_8065BF2C:
{
}

loc_8065BF30:
{
    r6 = (r6 + 1);
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r28))) {
        goto loc_8065BFA8;
    }
}

loc_8065BF38:
{
    r5_addic_src_4 = r5;
    r5 = (r5_addic_src_4 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_4)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8065BF3C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8065BF54;
    }
}

loc_8065BF40:
{
}

loc_8065BF44:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_8065BF54;
    }
}

loc_8065BF48:
{
    r3 = (r7 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_8065BF58;
}

loc_8065BF54:
{
    r0 = 255;
}

loc_8065BF58:
{
}

loc_8065BF5C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8065BF6C;
    }
}

loc_8065BF60:
{
}

loc_8065BF64:
{
    r6 = (r6 + 1);
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r28))) {
        goto loc_8065BFA8;
    }
}

loc_8065BF6C:
{
    r5_addic_src_5 = r5;
    r5 = (r5_addic_src_5 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_5)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8065BF70:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8065BF88;
    }
}

loc_8065BF74:
{
}

loc_8065BF78:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_8065BF88;
    }
}

loc_8065BF7C:
{
    r3 = (r7 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_8065BF8C;
}

loc_8065BF88:
{
    r0 = 255;
}

loc_8065BF8C:
{
}

loc_8065BF90:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8065BFA0;
    }
}

loc_8065BF94:
{
}

loc_8065BF98:
{
    r6 = (r6 + 1);
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r28))) {
        goto loc_8065BFA8;
    }
}

loc_8065BFA0:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8065BED0;
    }
}

loc_8065BFA8:
{
}

loc_8065BFAC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8065C01C;
    }
}

loc_8065BFB0:
{
    r23 = r30;
    r22 = r29;
    r21 = 0;
}

loc_8065BFBC:
{
    r3 = MemoryInline::FlatRead8((r23 + 26));
}

loc_8065BFC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(16))) {
        goto loc_8065BFD0;
    }
}

loc_8065BFC8:
{
    MemoryInline::FlatWrite32(r22, r24);
    goto loc_8065C008;
}

loc_8065BFD0:
{
    r0 = MemoryInline::FlatRead32(r22);
}

loc_8065BFD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8065C008;
    }
}

loc_8065BFDC:
{
    r4 = MemoryInline::FlatRead8((r23 + 27));
}

loc_8065BFE4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8065C008;
    }
}

loc_8065BFE8:
{
    r0 = MemoryInline::FlatRead8((r23 + 28));
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065BFF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065BFFC;
    }
}

loc_8065BFF8:
{
    r5 = (r23 + 4);
}

loc_8065BFFC:
{
    r6 = (r28 & 255);
    ctx->lr = 0x8065C004u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079C8ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32(r22, r25);
}

loc_8065C008:
{
    r21 = (r21 + 1);
    r22 = (r22 + 4);
}

loc_8065C014:
{
    r23 = (r23 + 32);
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(24))) {
        goto loc_8065BFBC;
    }
}

loc_8065C01C:
{
    r30 = (r30 + 768);
    r29 = (r29 + 96);
    r28 = (r28 + 1);
}

loc_8065C028:
{
    r3 = MemoryInline::FlatRead32((r26 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_8065C034:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065BE74;
    }
}

loc_8065C038:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[21] = r21;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFE002FB gpr_write=0xFFE003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8065BE40 func_8065BE40 preserves=true fpr_mask=0x00000000
