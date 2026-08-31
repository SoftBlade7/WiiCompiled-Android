#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079E38C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079E38C;

loc_8079E38C:
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
    r5 = MemoryInline::FlatRead32((r3 + 168));
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8079E3AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079E538;
    }
}

loc_8079E3B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079E3B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079E50C;
    }
}

loc_8079E3BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
    r31 = 0x809C0000u;
    r27 = 0x808A0000u;
    r28 = 0x808A0000u;
    r0 = (r0 * 240);
    r4 = MemoryInline::FlatRead32((r31 + -10456));
    r3 = MemoryInline::FlatRead32((r5 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r27 + 20992));
    r4 = (r4 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 20996));
    r30 = MemoryInline::FlatRead32((r4 + 244));
    r0 = (0 - r30);
    r0 = (r0 | r30);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    ctx->lr = 0x8079E3F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 168));
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 20992));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 20996));
    ctx->lr = 0x8079E410u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8079E41C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079E538;
    }
}

loc_8079E420:
{
    r25 = MemoryInline::FlatRead8((r3 + 37));
    r26 = 0;
    r27 = 0;
    r28 = 0x809C0000u;
    goto loc_8079E480;
}

loc_8079E434:
{
    r3 = MemoryInline::FlatRead32((r28 + 6584));
    r4 = MemoryInline::FlatRead32((r31 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r3_addr_2 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead8((r3 + 156));
    r0 = (r0 * 240);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
}

loc_8079E458:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(r0))) {
        goto loc_8079E46C;
    }
}

loc_8079E45C:
{
    r3 = MemoryInline::FlatRead32((r29 + 168));
    r4 = r26;
    // inline leaf 0x8055CCE0 (6 guest instruction(s))
    r0 = 65536;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x8055CCE0
    goto loc_8079E478;
}

loc_8079E46C:
{
    r3 = MemoryInline::FlatRead32((r29 + 168));
    r4 = r26;
    // inline leaf 0x8055CCF8 (6 guest instruction(s))
    r0 = 65536;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r5 & ~r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x8055CCF8
}

loc_8079E478:
{
    r27 = (r27 + 4);
    r26 = (r26 + 1);
}

loc_8079E480:
{
}

loc_8079E484:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r25))) {
        goto loc_8079E434;
    }
}

loc_8079E488:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead8((r5 + 37));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8079E498:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079E538;
    }
}

loc_8079E49C:
{
    r3 = MemoryInline::FlatRead32((r5 + 536));
    r4 = 1;
    r3 = (r3 + -1);
}

loc_8079E4AC:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(4))) {
        goto loc_8079E4C4;
    }
}

loc_8079E4B0:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r0 = (r0 & 25);
}

loc_8079E4BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079E4C4;
    }
}

loc_8079E4C0:
{
    r4 = 0;
}

loc_8079E4C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079E4C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079E538;
    }
}

loc_8079E4CC:
{
    r3 = MemoryInline::FlatRead32((r5 + 776));
    r4 = 1;
    r3 = (r3 + -1);
}

loc_8079E4DC:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(4))) {
        goto loc_8079E4F4;
    }
}

loc_8079E4E0:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r0 = (r0 & 25);
}

loc_8079E4EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079E4F4;
    }
}

loc_8079E4F0:
{
    r4 = 0;
}

loc_8079E4F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079E4F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079E538;
    }
}

loc_8079E4FC:
{
    r3 = MemoryInline::FlatRead32((r29 + 168));
    r4 = 3;
    // inline leaf 0x8055CCF8 (6 guest instruction(s))
    r0 = 65536;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r5 & ~r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x8055CCF8
    goto loc_8079E538;
}

loc_8079E50C:
{
    r3 = 0x809C0000u;
    r25 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r26 = MemoryInline::FlatRead8((r3 + 37));
    goto loc_8079E530;
}

loc_8079E520:
{
    r3 = MemoryInline::FlatRead32((r29 + 168));
    r4 = r25;
    // inline leaf 0x8055CCF8 (6 guest instruction(s))
    r0 = 65536;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r5 & ~r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x8055CCF8
    r25 = (r25 + 1);
}

loc_8079E530:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(r26));
}

loc_8079E534:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8079E520;
    }
}

loc_8079E538:
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8079E38C func_8079E38C preserves=true fpr_mask=0x00000000
