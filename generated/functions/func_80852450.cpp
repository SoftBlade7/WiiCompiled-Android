#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80852450(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80852450;

loc_80852450:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->lr = 0x80852470u;
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
    r0 = MemoryInline::FlatRead32((r5 + -6220));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = 1;
    ctx->lr = 0x8085248Cu;
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
}

loc_8085249C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808524BC;
    }
}

loc_808524A0:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r31 = (r3 + 56);
    goto loc_808524C0;
}

loc_808524BC:
{
    r31 = 0;
}

loc_808524C0:
{
    r29 = 0;
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r0 = (r3 & 255);
}

loc_808524D0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_808524D8;
    }
}

loc_808524D4:
{
    r29 = 2;
}

loc_808524D8:
{
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r0 = (r31 + 65536);
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead32((r3 + -28344));
}

loc_808524EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80852504;
    }
}

loc_808524F0:
{
}

loc_808524F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8085251C;
    }
}

loc_808524F8:
{
}

loc_808524FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80852534;
    }
}

loc_80852500:
{
    goto loc_80852548;
}

loc_80852504:
{
    r3 = 0x809C0000u;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 116), r0);
    goto loc_80852548;
}

loc_8085251C:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 116), r0);
    goto loc_80852548;
}

loc_80852534:
{
    r3 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 116), r0);
}

loc_80852548:
{
    r0 = (r31 + 65536);
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead32((r3 + -28376));
}

loc_80852558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80852578;
    }
}

loc_8085255C:
{
}

loc_80852560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8085259C;
    }
}

loc_80852564:
{
}

loc_80852568:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_808525C0;
    }
}

loc_8085256C:
{
}

loc_80852570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_808525E4;
    }
}

loc_80852574:
{
    goto loc_80852604;
}

loc_80852578:
{
    r4 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    goto loc_80852604;
}

loc_8085259C:
{
    r4 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    goto loc_80852604;
}

loc_808525C0:
{
    r4 = 0x809C0000u;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    goto loc_80852604;
}

loc_808525E4:
{
    r4 = 0x809C0000u;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
}

loc_80852604:
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

loc_80852614:
{
    r7 = 0x809C0000u;
    r4 = (12 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80852718;
    }
}

loc_80852620:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_80852624:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808526F8;
    }
}

loc_8085262C:
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
        goto loc_8085262C;
    }
}

loc_808526F0:
{
    r4 = (r4 & 7);
}

loc_808526F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80852718;
    }
}

loc_808526F8:
{
    ctr = r4;
}

loc_808526FC:
{
    r0 = (r3 & 255);
    r6 = MemoryInline::FlatRead32((r7 + -10456));
    r5 = (r0 * 240);
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808526FC;
    }
}

loc_80852718:
{
    r0 = (r31 + 65536);
    r29 = 0;
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead32((r3 + -28360));
}

loc_8085272C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80852744;
    }
}

loc_80852730:
{
}

loc_80852734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8085274C;
    }
}

loc_80852738:
{
}

loc_8085273C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80852754;
    }
}

loc_80852740:
{
    goto loc_8085275C;
}

loc_80852744:
{
    r29 = 0;
    goto loc_80852870;
}

loc_8085274C:
{
    r29 = 1;
    goto loc_80852870;
}

loc_80852754:
{
    r29 = 2;
    goto loc_80852870;
}

loc_8085275C:
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

loc_8085276C:
{
    r7 = 0x809C0000u;
    r4 = (12 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80852870;
    }
}

loc_80852778:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
}

loc_8085277C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80852850;
    }
}

loc_80852784:
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
        goto loc_80852784;
    }
}

loc_80852848:
{
    r4 = (r4 & 7);
}

loc_8085284C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80852870;
    }
}

loc_80852850:
{
    ctr = r4;
}

loc_80852854:
{
    r0 = (r3 & 255);
    r6 = MemoryInline::FlatRead32((r7 + -10456));
    r5 = (r0 * 240);
    r3 = (r3 + 1);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3112), r8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80852854;
    }
}

loc_80852870:
{
    r5 = 0x809C0000u;
    r0 = (r31 + 65536);
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = (r0 + r30);
    MemoryInline::FlatWrite32((r4 + 5996), r29);
    r0 = MemoryInline::FlatRead32((r3 + -28312));
}

loc_8085288C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808528A4;
    }
}

loc_80852890:
{
}

loc_80852894:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_808528B4;
    }
}

loc_80852898:
{
}

loc_8085289C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_808528C4;
    }
}

loc_808528A0:
{
    goto loc_808528D4;
}

loc_808528A4:
{
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 6000), r0);
    goto loc_808528E0;
}

loc_808528B4:
{
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 6000), r0);
    goto loc_808528E0;
}

loc_808528C4:
{
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 6000), r0);
    goto loc_808528E0;
}

loc_808528D4:
{
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 6000), r0);
}

loc_808528E0:
{
    r0 = (r31 + 65536);
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead32((r3 + -28296));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_808528F0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_808529CC;
    }
}

loc_808528F4:
{
    r3 = 0x808E0000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + -24044);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8085290Cu:
        goto loc_8085290C;
        break;
    case 0x80852924u:
        goto loc_80852924;
        break;
    case 0x8085293Cu:
        goto loc_8085293C;
        break;
    case 0x80852954u:
        goto loc_80852954;
        break;
    case 0x8085296Cu:
        goto loc_8085296C;
        break;
    case 0x80852984u:
        goto loc_80852984;
        break;
    case 0x8085299Cu:
        goto loc_8085299C;
        break;
    case 0x808529B4u:
        goto loc_808529B4;
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

loc_8085290C:
{
    r3 = 0x809C0000u;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_808529E0;
}

loc_80852924:
{
    r3 = 0x809C0000u;
    r0 = 3;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_808529E0;
}

loc_8085293C:
{
    r3 = 0x809C0000u;
    r0 = 4;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_808529E0;
}

loc_80852954:
{
    r3 = 0x809C0000u;
    r0 = 5;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_808529E0;
}

loc_8085296C:
{
    r3 = 0x809C0000u;
    r0 = 8;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_808529E0;
}

loc_80852984:
{
    r3 = 0x809C0000u;
    r0 = 10;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_808529E0;
}

loc_8085299C:
{
    r3 = 0x809C0000u;
    r0 = 12;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_808529E0;
}

loc_808529B4:
{
    r3 = 0x809C0000u;
    r0 = 16;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
    goto loc_808529E0;
}

loc_808529CC:
{
    r3 = 0x809C0000u;
    r0 = 32;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 100), r0);
}

loc_808529E0:
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
// RECOMP_REGISTRATION base 0x80852450 func_80852450 preserves=true fpr_mask=0x00000000
