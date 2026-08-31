#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C8118(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805C8118;

loc_805C8118:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805C8144:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C8150;
    }
}

loc_805C8148:
{
    r30 = 0;
    goto loc_805C81A4;
}

loc_805C8150:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C81A0;
    }
}

loc_805C815C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805C8170u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C8188;
}

loc_805C8174:
{
}

loc_805C8178:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805C8184;
    }
}

loc_805C817C:
{
    r0 = 1;
    goto loc_805C8194;
}

loc_805C8184:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805C8188:
{
}

loc_805C818C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805C8174;
    }
}

loc_805C8190:
{
    r0 = 0;
}

loc_805C8194:
{
}

loc_805C8198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805C81A0;
    }
}

loc_805C819C:
{
    goto loc_805C81A4;
}

loc_805C81A0:
{
    r30 = 0;
}

loc_805C81A4:
{
    r3 = r30;
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
    r29 = 1;
    r3 = 0x809C0000u;
    r29 = (r29 * 240);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + -10456), 0, 4u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r31 = 2;
    r11 = 3;
    r5 = (r5 + r29);
    r30 = 5;
    MemoryInline::FlatWrite32((r5 + 3112), r30);
    r12 = (r31 * 240);
    r9 = 4;
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r29 = 6;
    r10 = (r11 * 240);
    r4 = 11;
    r7 = (r7 + r12);
    MemoryInline::FlatWrite32((r7 + 3112), r30);
    r31 = 7;
    r8 = (r9 * 240);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r7 = 10;
    r11 = 8;
    r10 = (r12 + r10);
    r9 = 9;
    MemoryInline::FlatWrite32((r10 + 3112), r30);
    r5 = (r30 * 240);
    r6 = 2;
    r10 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r0 = 0;
    r29 = (r29 * 240);
    r8 = (r10 + r8);
    MemoryInline::FlatWrite32((r8 + 3112), r30);
    r12 = (r31 * 240);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r5 = (r8 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r30);
    r10 = (r11 * 240);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r8 = (r9 * 240);
    r5 = (r5 + r29);
    MemoryInline::FlatWrite32((r5 + 3112), r30);
    r5 = (r7 * 240);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r7 = (r7 + r12);
    MemoryInline::FlatWrite32((r7 + 3112), r30);
    r4 = (r4 * 240);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r10 = (r12 + r10);
    MemoryInline::FlatWrite32((r10 + 3112), r30);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r8 = (r10 + r8);
    MemoryInline::FlatWrite32((r8 + 3112), r30);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r5 = (r8 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r30);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r4 + 3112), r30);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    MemoryInline::FlatWrite32((r4 + 5980), r6);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r4 = MemoryInline::FlatRead32((r5 + 6016));
    r4 = (r4 & -2);
    MemoryInline::FlatWrite32((r5 + 6016), r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    MemoryInline::FlatWrite32((r4 + 5988), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    MemoryInline::FlatWrite32((r4 + 5984), r6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805C8118 func_805C8118 preserves=true fpr_mask=0x00000000
