#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083B400(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8083B400;

loc_8083B400:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->lr = 0x8083B420u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80837170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = 0x808B0000u;
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r5 + -12896));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = 1;
    ctx->lr = 0x8083B43Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80838884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8083B44C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8083B46C;
    }
}

loc_8083B450:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r31 = (r3 + 56);
    goto loc_8083B470;
}

loc_8083B46C:
{
    r31 = 0;
}

loc_8083B470:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80860A28u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r0 = (r31 + 65536);
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead32((r3 + -28344));
}

loc_8083B488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083B4A0;
    }
}

loc_8083B48C:
{
}

loc_8083B490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8083B4B8;
    }
}

loc_8083B494:
{
}

loc_8083B498:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8083B4D0;
    }
}

loc_8083B49C:
{
    goto loc_8083B4E4;
}

loc_8083B4A0:
{
    r3 = 0x809C0000u;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 116), r0);
    goto loc_8083B4E4;
}

loc_8083B4B8:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 116), r0);
    goto loc_8083B4E4;
}

loc_8083B4D0:
{
    r3 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 116), r0);
}

loc_8083B4E4:
{
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r0 = (r3 & 255);
    r8 = 1;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_8083B4F4:
{
    r7 = 0x809C0000u;
    r4 = (12 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8083B5F8;
    }
}

loc_8083B500:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_8083B504:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083B5D8;
    }
}

loc_8083B50C:
{
    r0 = (r3 & 255);
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + -10456), 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r5 = (r0 * 240);
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r5 = (r6 + r5);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + -10456));
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8083B50C;
    }
}

loc_8083B5D0:
{
    r4 = (r4 & 7);
}

loc_8083B5D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8083B5F8;
    }
}

loc_8083B5D8:
{
    ctr = r4;
}

loc_8083B5DC:
{
    r0 = (r3 & 255);
    r6 = MemoryInline::FlatRead32((r7 + -10456));
    r5 = (r0 * 240);
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8083B5DC;
    }
}

loc_8083B5F8:
{
    r0 = (r31 + 65536);
    r29 = 0;
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead32((r3 + -28360));
}

loc_8083B60C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083B624;
    }
}

loc_8083B610:
{
}

loc_8083B614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8083B62C;
    }
}

loc_8083B618:
{
}

loc_8083B61C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8083B634;
    }
}

loc_8083B620:
{
    goto loc_8083B63C;
}

loc_8083B624:
{
    r29 = 0;
    goto loc_8083B750;
}

loc_8083B62C:
{
    r29 = 1;
    goto loc_8083B750;
}

loc_8083B634:
{
    r29 = 2;
    goto loc_8083B750;
}

loc_8083B63C:
{
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r0 = (r3 & 255);
    r8 = 5;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_8083B64C:
{
    r7 = 0x809C0000u;
    r4 = (12 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8083B750;
    }
}

loc_8083B658:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
}

loc_8083B65C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083B730;
    }
}

loc_8083B664:
{
    r0 = (r3 & 255);
    guest_range_1 = MemoryInline::ResolveRangeHost((r7 + -10456), 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r7 + -10456));
    r5 = (r0 * 240);
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r5 = (r6 + r5);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r0 = (r3 & 255);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r7 + -10456));
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    r5 = (r0 * 240);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r7 + -10456));
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8083B664;
    }
}

loc_8083B728:
{
    r4 = (r4 & 7);
}

loc_8083B72C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8083B750;
    }
}

loc_8083B730:
{
    ctr = r4;
}

loc_8083B734:
{
    r0 = (r3 & 255);
    r6 = MemoryInline::FlatRead32((r7 + -10456));
    r5 = (r0 * 240);
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8083B734;
    }
}

loc_8083B750:
{
    r5 = 0x809C0000u;
    r0 = (r31 + 65536);
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = (r0 + r30);
    MemoryInline::FlatWrite32((r4 + 5996), r29);
    r0 = MemoryInline::FlatRead32((r3 + -28312));
}

loc_8083B76C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8083B784;
    }
}

loc_8083B770:
{
}

loc_8083B774:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8083B794;
    }
}

loc_8083B778:
{
}

loc_8083B77C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083B7A4;
    }
}

loc_8083B780:
{
    goto loc_8083B7B0;
}

loc_8083B784:
{
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 6000), r0);
    goto loc_8083B7B0;
}

loc_8083B794:
{
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 6000), r0);
    goto loc_8083B7B0;
}

loc_8083B7A4:
{
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 6000), r0);
}

loc_8083B7B0:
{
    r0 = (r31 + 65536);
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead32((r3 + -28296));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_8083B7C0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8083B89C;
    }
}

loc_8083B7C4:
{
    r3 = 0x808E0000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + -28700);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8083B7DCu:
        goto loc_8083B7DC;
        break;
    case 0x8083B7F4u:
        goto loc_8083B7F4;
        break;
    case 0x8083B80Cu:
        goto loc_8083B80C;
        break;
    case 0x8083B824u:
        goto loc_8083B824;
        break;
    case 0x8083B83Cu:
        goto loc_8083B83C;
        break;
    case 0x8083B854u:
        goto loc_8083B854;
        break;
    case 0x8083B86Cu:
        goto loc_8083B86C;
        break;
    case 0x8083B884u:
        goto loc_8083B884;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8083B7DC:
{
    r3 = 0x809C0000u;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_8083B8B0;
}

loc_8083B7F4:
{
    r3 = 0x809C0000u;
    r0 = 3;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_8083B8B0;
}

loc_8083B80C:
{
    r3 = 0x809C0000u;
    r0 = 4;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_8083B8B0;
}

loc_8083B824:
{
    r3 = 0x809C0000u;
    r0 = 5;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_8083B8B0;
}

loc_8083B83C:
{
    r3 = 0x809C0000u;
    r0 = 8;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_8083B8B0;
}

loc_8083B854:
{
    r3 = 0x809C0000u;
    r0 = 10;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_8083B8B0;
}

loc_8083B86C:
{
    r3 = 0x809C0000u;
    r0 = 12;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_8083B8B0;
}

loc_8083B884:
{
    r3 = 0x809C0000u;
    r0 = 16;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_8083B8B0;
}

loc_8083B89C:
{
    r3 = 0x809C0000u;
    r0 = 32;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
}

loc_8083B8B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8083B400 func_8083B400 preserves=true fpr_mask=0x00000000
