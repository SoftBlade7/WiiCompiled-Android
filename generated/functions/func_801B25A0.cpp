#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B25A0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r6_subfic_ra_4 = 0;
    uint32_t r6_subfic_ra_5 = 0;
    uint32_t r6_subfic_ra_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_subfic_ra_0 = 0;
    uint32_t r7_subfic_ra_1 = 0;
    uint32_t r7_subfic_ra_2 = 0;
    uint32_t r7_subfic_ra_3 = 0;
    uint32_t r7_subfic_ra_4 = 0;
    uint32_t r7_subfic_ra_5 = 0;
    uint32_t r7_subfic_ra_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801B25A0;

loc_801B25A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = -855638016;
    r31 = MemoryInline::FlatRead32((r29 + 25656));
    r0 = MemoryInline::FlatRead32((r29 + 25652));
    r0 = (r0 | -2147483648);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r29 + 25652), r0);
    r0 = MemoryInline::FlatRead32((r30 + -12464));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_801B25DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B2874;
    }
}

loc_801B25E0:
{
    ctx->lr = 0x801B25E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r7 = MemoryInline::FlatRead32((r30 + -12464));
    r6 = 0x80350000u;
    r5 = (r30 + -12464);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_1 & -8);
    r6 = (r6 + 1152);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + r7);
    MemoryInline::FlatWrite32((r6 + 4), r4);
    r7 = 0;
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r8 = (r8_rot_1 & 1073741823);
}

loc_801B260C:
{
    r5 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32(r6, r3);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801B26C4;
    }
}

loc_801B2618:
{
}

loc_801B261C:
{
    r3 = (r8 + -8);
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(8))) {
        goto loc_801B268C;
    }
}

loc_801B2624:
{
    r0 = (r3 + 7);
    r4 = (r29 + 25600);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_801B2638:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_801B268C;
    }
}

loc_801B263C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 128), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 128));
    r7 = (r7 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 132));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 136));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 140));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 144));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 148));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 152));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 156));
    r4 = (r4 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 28), r0);
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B263C;
    }
}

loc_801B268C:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = -855638016;
    r3 = (r0 + r3);
    r0 = (r8 - r7);
    r3 = (r3 + 25600);
    ctr = r0;
}

loc_801B26A8:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r8))) {
        goto loc_801B26C4;
    }
}

loc_801B26AC:
{
    r0 = MemoryInline::FlatRead32((r3 + 128));
    r3 = (r3 + 4);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B26AC;
    }
}

loc_801B26C4:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -12464);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r0 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B26D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B27E0;
    }
}

loc_801B26D8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = -855638016;
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 25728));
    r4 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B27E0;
    }
}

loc_801B26F0:
{
}

loc_801B26F4:
{
    r7 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_801B27B4;
    }
}

loc_801B26FC:
{
    r6 = (r7 + 7);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_1 & 536870911);
    ctr = r6;
}

loc_801B270C:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_801B27B4;
    }
}

loc_801B2710:
{
    r6 = (3 - r4);
    r7 = (r4 + 1);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r8 = (r8_rot_3 & -8);
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r7_subfic_ra_2 = r7;
    r7 = (3 - r7_subfic_ra_2);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r8 = (r8_rot_4 & -8);
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r5, static_cast<uint8_t>(r9));
    r7 = (r4 + 2);
    r6 = (0 - r4);
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r8 = (r8_rot_5 & -8);
    r7_subfic_ra_3 = r7;
    r7 = (3 - r7_subfic_ra_3);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r6 = (r6_rot_3 & -8);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r5 + 1), static_cast<uint8_t>(r9));
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r8 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r6 = (r4 + 4);
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r5 + 2), static_cast<uint8_t>(r9));
    r7 = (3 - r6);
    r6 = (r4 + 5);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r5 + 3), static_cast<uint8_t>(r8));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_3 & -8);
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r6_subfic_ra_2 = r6;
    r6 = (3 - r6_subfic_ra_2);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r8 = (r8_rot_6 & -8);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r5 + 4), static_cast<uint8_t>(r9));
    r6 = (r4 + 6);
    r7 = (3 - r6);
    r8 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r6 = (r4 + 7);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r5 + 5), static_cast<uint8_t>(r8));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_4 & -8);
    r4 = (r4 + 8);
    r6_subfic_ra_3 = r6;
    r6 = (3 - r6_subfic_ra_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(3) >= static_cast<uint32_t>(r6_subfic_ra_3) ? 1u : 0u) << 29);
    r7 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_4 & -8);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r5 + 6), static_cast<uint8_t>(r7));
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r5 + 7), static_cast<uint8_t>(r6));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B2710;
    }
}

loc_801B27B4:
{
    r6 = (r3 - r4);
    ctr = r6;
}

loc_801B27C0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_801B27E0;
    }
}

loc_801B27C4:
{
    r3 = (3 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(3) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r4 = (r4 + 1);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_4 & -8);
    r3 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r3));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B27C4;
    }
}

loc_801B27E0:
{
    r3 = -855638016;
    r0 = MemoryInline::FlatRead32((r3 + 25652));
    r0 = (r0 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B27EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B2840;
    }
}

loc_801B27F0:
{
    r3 = 0x802A0000u;
    r4 = MemoryInline::FlatRead32((r3 + -12464));
    r0 = (3 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(3) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r31 = PPC_Srw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r31 = (r31 & 15);
    r0 = (r31 & 8);
}

loc_801B280C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B2830;
    }
}

loc_801B2810:
{
    r3 = 0x802A0000u;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r3 = (r3 + -12440);
    r3_addr_1 = (r3 + r4);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (r0 & 128);
}

loc_801B2824:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B2830;
    }
}

loc_801B2828:
{
    r0 = 8;
    r3_addr_2 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_2, r0);
}

loc_801B2830:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801B2834:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B2868;
    }
}

loc_801B2838:
{
    r31 = 4;
    goto loc_801B2868;
}

loc_801B2840:
{
    ctx->lr = 0x801B2844u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r6 = 0x802A0000u;
    r5 = 0x80350000u;
    r0 = MemoryInline::FlatRead32((r6 + -12464));
    r5 = (r5 + 1184);
    r31 = 0;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32(r5, r3);
}

loc_801B2868:
{
    r0 = -1;
    r3 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r3 + -12464), r0);
}

loc_801B2874:
{
    r3 = r31;
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
// RECOMP_REGISTRATION base 0x801B25A0 func_801B25A0 preserves=true fpr_mask=0x00000000
