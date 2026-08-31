#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8060D800(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8060D800;

loc_8060D800:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r0 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r31);
    }
    r30 = r3;
    r31 = r4;
    MemoryInline::FlatWrite32((r3 + 3460), r0);
    r3 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r27 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8060D834:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060D840;
    }
}

loc_8060D838:
{
    r27 = 0;
    goto loc_8060D894;
}

loc_8060D840:
{
    r26 = 0x809C0000u;
    r26 = (r26 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060D890;
    }
}

loc_8060D84C:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8060D860u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8060D878;
}

loc_8060D864:
{
}

loc_8060D868:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r26))) {
        goto loc_8060D874;
    }
}

loc_8060D86C:
{
    r0 = 1;
    goto loc_8060D884;
}

loc_8060D874:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8060D878:
{
}

loc_8060D87C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8060D864;
    }
}

loc_8060D880:
{
    r0 = 0;
}

loc_8060D884:
{
}

loc_8060D888:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8060D890;
    }
}

loc_8060D88C:
{
    goto loc_8060D894;
}

loc_8060D890:
{
    r27 = 0;
}

loc_8060D894:
{
    r3 = r27;
    // inline leaf 0x805E17CC (13 guest instruction(s))
}

loc_inl0_0x805E17CC:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r4 = MemoryInline::FlatRead32((r4 + 964));
    r0 = (r4 + -37);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_inl0_0x805E17E4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl0_0x805E17F4;
    }
}

loc_inl0_0x805E17E8:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 156), r0);
    goto loc_inl0_cont_805E17CC;
}

loc_inl0_0x805E17F4:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r3 + 156), r0);
}

loc_inl0_cont_805E17CC:
{
    // end of inlined leaf 0x805E17CC
    r3 = 1;
    r4 = 0x809C0000u;
    r26 = (r3 * 240);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + -10456), 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r28 = 2;
    r12 = 3;
    r6 = (r6 + r26);
    r27 = 5;
    MemoryInline::FlatWrite32((r6 + 3112), r27);
    r29 = (r28 * 240);
    r10 = 4;
    r8 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r3 = 6;
    r11 = (r12 * 240);
    r5 = 11;
    r8 = (r8 + r29);
    MemoryInline::FlatWrite32((r8 + 3112), r27);
    r28 = 7;
    r9 = (r10 * 240);
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r8 = 10;
    r12 = 8;
    r11 = (r29 + r11);
    r10 = 9;
    MemoryInline::FlatWrite32((r11 + 3112), r27);
    r26 = (r3 * 240);
    r7 = 2;
    r11 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r0 = 0;
    r6 = (r27 * 240);
    r3 = r31;
    r9 = (r11 + r9);
    MemoryInline::FlatWrite32((r9 + 3112), r27);
    r29 = (r28 * 240);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r6 = (r9 + r6);
    MemoryInline::FlatWrite32((r6 + 3112), r27);
    r11 = (r12 * 240);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r9 = (r10 * 240);
    r6 = (r6 + r26);
    MemoryInline::FlatWrite32((r6 + 3112), r27);
    r6 = (r8 * 240);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r8 = (r8 + r29);
    MemoryInline::FlatWrite32((r8 + 3112), r27);
    r5 = (r5 * 240);
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r11 = (r29 + r11);
    MemoryInline::FlatWrite32((r11 + 3112), r27);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r9 = (r11 + r9);
    MemoryInline::FlatWrite32((r9 + 3112), r27);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r6 = (r9 + r6);
    MemoryInline::FlatWrite32((r6 + 3112), r27);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r27);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    MemoryInline::FlatWrite32((r5 + 5980), r7);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r5 = MemoryInline::FlatRead32((r6 + 6016));
    r5 = (r5 & -2);
    MemoryInline::FlatWrite32((r6 + 6016), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    MemoryInline::FlatWrite32((r5 + 5988), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    MemoryInline::FlatWrite32((r5 + 5984), r7);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 6016));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r4 + 6016), r0);
    ctx->lr = 0x8060D9C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805BDF88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 50;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8060D9E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = MemoryInline::FlatRead32((r1 + 8));
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x8060D800 func_8060D800 preserves=true fpr_mask=0x00000000
