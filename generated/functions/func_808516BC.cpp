#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808516BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808516BC;

loc_808516BC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
}

loc_808516CC:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r9 = 12;
    MemoryInline::FlatWriteRam32((r1 + 28), r27);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r29 = r4;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 292), r4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_808516F0;
    }
}

loc_808516EC:
{
    r9 = 12;
}

loc_808516F0:
{
}

loc_808516F4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_808516FC;
    }
}

loc_808516F8:
{
    r9 = 12;
}

loc_808516FC:
{
    r0 = 4;
    r10 = 0;
    r6 = 5;
    r5 = 0x809C0000u;
    r7 = 1;
    r8 = 0;
    ctr = r0;
}

loc_80851718:
{
    r0 = (r10 & 255);
}

loc_80851720:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_80851738;
    }
}

loc_80851724:
{
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r8);
    goto loc_80851764;
}

loc_80851738:
{
}

loc_8085173C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r9))) {
        goto loc_80851754;
    }
}

loc_80851740:
{
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r7);
    goto loc_80851764;
}

loc_80851754:
{
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r6);
}

loc_80851764:
{
    r10 = (r10 + 1);
    r0 = (r10 & 255);
}

loc_80851770:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_80851788;
    }
}

loc_80851774:
{
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r8);
    goto loc_808517B4;
}

loc_80851788:
{
}

loc_8085178C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r9))) {
        goto loc_808517A4;
    }
}

loc_80851790:
{
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r7);
    goto loc_808517B4;
}

loc_808517A4:
{
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r6);
}

loc_808517B4:
{
    r10 = (r10 + 1);
    r0 = (r10 & 255);
}

loc_808517C0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_808517D8;
    }
}

loc_808517C4:
{
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r8);
    goto loc_80851804;
}

loc_808517D8:
{
}

loc_808517DC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r9))) {
        goto loc_808517F4;
    }
}

loc_808517E0:
{
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r7);
    goto loc_80851804;
}

loc_808517F4:
{
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r6);
}

loc_80851804:
{
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80851718;
    }
}

loc_8085180C:
{
    r28 = r29;
    r27 = 0x809C0000u;
    goto loc_8085182C;
}

loc_80851818:
{
    r3 = MemoryInline::FlatRead32((r27 + 7736));
    r4 = r28;
    r3 = (r3 + 52);
    ctx->lr = 0x80851828u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061B7C4u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = (r28 + 1);
}

loc_8085182C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_80851830:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80851818;
    }
}

loc_80851834:
{
    r6 = 0x808B0000u;
    r6 = (r6 + -7048);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r30 = 0;
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r31 = 0;
    r3 = MemoryInline::FlatRead32((r6 + 8));
    r28 = -1;
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r27 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_80851904;
}

loc_8085186C:
{
    r3 = MemoryInline::FlatRead32((r27 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r31);
    r3 = MemoryInline::FlatRead32((r3 + 300));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80851880:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808518A0;
    }
}

loc_80851884:
{
    ctx->lr = 0x80851888u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8081D020u>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8085188C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808518A0;
    }
}

loc_80851890:
{
    r3 = MemoryInline::FlatRead32((r27 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r31);
    MemoryInline::FlatWrite32((r3 + 300), r28);
}

loc_808518A0:
{
    r4 = MemoryInline::FlatRead32((r27 + 7736));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 152));
    r4 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r4 + 300));
}

loc_808518B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808518C0;
    }
}

loc_808518BC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
}

loc_808518C0:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 300));
}

loc_808518CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808518D4;
    }
}

loc_808518D0:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r28);
}

loc_808518D4:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 300));
}

loc_808518E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808518E8;
    }
}

loc_808518E4:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
}

loc_808518E8:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r4 + 300));
}

loc_808518F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808518FC;
    }
}

loc_808518F8:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r28);
}

loc_808518FC:
{
    r31 = (r31 + 4);
    r30 = (r30 + 1);
}

loc_80851904:
{
}

loc_80851908:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r29))) {
        goto loc_8085186C;
    }
}

loc_8085190C:
{
    r8 = (r1 + 8);
    r10 = 0;
    r7 = 0;
    r3 = -1;
    r6 = 0x809C0000u;
    r0 = 4;
    goto loc_80851980;
}

loc_80851928:
{
    r4 = MemoryInline::FlatRead32((r6 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r9 = (r4 + r7);
    r4 = MemoryInline::FlatRead32((r9 + 300));
}

loc_8085193C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_80851978;
    }
}

loc_80851940:
{
    r5 = (r1 + 8);
    r11 = 0;
    ctr = r0;
}

loc_8085194C:
{
    r4 = MemoryInline::FlatRead32(r5);
}

loc_80851954:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_8085196C;
    }
}

loc_80851958:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    r8_addr_2 = (r8 + r5);
    r4 = MemoryInline::FlatRead32(r8_addr_2);
    MemoryInline::FlatWrite32((r9 + 300), r4);
    r8_addr_3 = (r8 + r5);
    MemoryInline::FlatWrite32(r8_addr_3, r3);
    goto loc_80851978;
}

loc_8085196C:
{
    r5 = (r5 + 4);
    r11 = (r11 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8085194C;
    }
}

loc_80851978:
{
    r7 = (r7 + 4);
    r10 = (r10 + 1);
}

loc_80851980:
{
}

loc_80851984:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r29))) {
        goto loc_80851928;
    }
}

loc_80851988:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_8085198C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80851B74;
    }
}

loc_80851990:
{
    r5 = (4 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
}

loc_80851998:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_80851B30;
    }
}

loc_8085199C:
{
}

loc_808519A0:
{
    r3 = 0;
    r4 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(5))) {
        goto loc_808519B4;
    }
}

loc_808519B0:
{
    r0 = 1;
}

loc_808519B4:
{
}

loc_808519B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808519CC;
    }
}

loc_808519BC:
{
    r0 = (r29 + -2147483648);
}

loc_808519C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_808519CC;
    }
}

loc_808519C8:
{
    r4 = 1;
}

loc_808519CC:
{
}

loc_808519D0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_808519FC;
    }
}

loc_808519D4:
{
    r0 = (0 - r29);
    r4 = 1;
    r0 = (r0 & -2147483648);
}

loc_808519E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808519F0;
    }
}

loc_808519E4:
{
    r0 = (r5 & -2147483648);
}

loc_808519E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808519F0;
    }
}

loc_808519EC:
{
    r4 = 0;
}

loc_808519F0:
{
}

loc_808519F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_808519FC;
    }
}

loc_808519F8:
{
    r3 = 1;
}

loc_808519FC:
{
}

loc_80851A00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80851B30;
    }
}

loc_80851A04:
{
    r5 = (3 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(3) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r5 = (r5_rot_4 & 536870911);
    r3 = 0x809C0000u;
    r0 = -1;
    ctr = r5;
}

loc_80851A20:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(-4))) {
        goto loc_80851B30;
    }
}

loc_80851A24:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 7736), 0, 4u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r29 = (r29 + 8);
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 300), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 316), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 304), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 320), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 308), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 324), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 312), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 328), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 316), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 332), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 320), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 336), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 324), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 340), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    MemoryInline::FlatWrite32((r5 + 328), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r5 + r4);
    r4 = (r4 + 32);
    MemoryInline::FlatWrite32((r5 + 344), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80851A24;
    }
}

loc_80851B30:
{
    r0 = (4 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r5 = -1;
    r4 = 0x809C0000u;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_80851B48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80851B74;
    }
}

loc_80851B4C:
{
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 300), r5);
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r6);
    r6 = (r6 + 4);
    MemoryInline::FlatWrite32((r3 + 316), r5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80851B4C;
    }
}

loc_80851B74:
{
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x808516BC func_808516BC preserves=true fpr_mask=0x00000000
