#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80157924(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r6_subfic_ra_4 = 0;
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

    goto loc_80157924;

loc_80157924:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r8 = 0x80340000u;
    r26 = r5;
    r8 = (r8 + -24768);
    r24 = r3;
    r9 = MemoryInline::FlatRead16((r8 + 4642));
    r25 = r4;
    r27 = r6;
    r28 = r7;
    r30 = (r8 + 4644);
    r5 = 0;
    goto loc_80157C94;
}

loc_80157964:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_8015796C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80157C8C;
    }
}

loc_80157970:
{
    r3 = MemoryInline::FlatRead16((r30 + 8));
    r29 = (r30 + 12);
    r31 = 0;
    goto loc_801579A8;
}

loc_80157980:
{
    r0 = MemoryInline::FlatRead16((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80157988:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015799C;
    }
}

loc_8015798C:
{
    r3 = r24;
    r4 = r25;
    ctx->lr = 0x80157998u;
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
    InvokeDirectCpu<0x80157F10u>(ctx);
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
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801579B4;
}

loc_8015799C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801579B4;
    }
}

loc_801579A0:
{
    r31 = (r31 + 1);
    r29 = (r29 + 12);
}

loc_801579A8:
{
    r0 = (r31 & 65535);
}

loc_801579B0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80157980;
    }
}

loc_801579B4:
{
    r5 = MemoryInline::FlatRead16((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(25));
}

loc_801579BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801579C8;
    }
}

loc_801579C0:
{
    r3 = 0;
    goto loc_80157CA4;
}

loc_801579C8:
{
    r0 = (r31 & 65535);
}

loc_801579D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801579E4;
    }
}

loc_801579D4:
{
    r0 = (r5 * 12);
    r3 = (r30 + r0);
    r29 = (r3 + 12);
    goto loc_80157BA8;
}

loc_801579E4:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_801579E8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80157BA8;
    }
}

loc_801579EC:
{
    r0 = (r5 - r31);
    r3 = (r31 + 8);
    r0 = (r0 & 65535);
}

loc_801579FC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_80157B64;
    }
}

loc_80157A00:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80157B64;
    }
}

loc_80157A04:
{
    r3 = (r3 & 65535);
    r0 = (r5 + 7);
    r0 = (r0 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_80157A1C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r3))) {
        goto loc_80157B64;
    }
}

loc_80157A20:
{
    r0 = (r5 & 65535);
    r3 = (r5 + 65536);
    r4 = (r0 * 12);
    r4_addr_2 = (r4 + r30);
    r9 = MemoryInline::FlatRead32(r4_addr_2);
    r4 = r4_addr_2;
    r6 = (r3 + -1);
    r0 = (r3 + -2);
    r7 = MemoryInline::FlatRead32((r4 + 4));
    r6 = (r6 & 65535);
    r8 = (r6 * 12);
    r5 = (r5 + -8);
    MemoryInline::FlatWrite32((r4 + 12), r9);
    r6 = (r0 & 65535);
    r0 = (r3 + -3);
    MemoryInline::FlatWrite32((r4 + 16), r7);
    r0 = (r0 & 65535);
    r23 = (r30 + r8);
    r11 = MemoryInline::FlatRead32((r4 + 8));
    r10 = (r6 * 12);
    r6 = (r3 + -4);
    MemoryInline::FlatWrite32((r4 + 20), r11);
    r9 = (r0 * 12);
    r0 = (r3 + -5);
    r30_addr_2 = (r30 + r8);
    r12 = MemoryInline::FlatRead32(r30_addr_2);
    r6 = (r6 & 65535);
    r11 = MemoryInline::FlatRead32((r23 + 4));
    r7 = (r0 & 65535);
    MemoryInline::FlatWrite32(r4, r12);
    r12 = (r30 + r10);
    r0 = (r3 + -6);
    r10 = (r30 + r9);
    r8 = (r6 * 12);
    MemoryInline::FlatWrite32((r4 + 4), r11);
    r6 = (r0 & 65535);
    r0 = (r3 + -7);
    r3 = (r6 * 12);
    r6 = MemoryInline::FlatRead32((r23 + 8));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 8), r6);
    r9 = (r30 + r8);
    r7 = (r7 * 12);
    r11 = MemoryInline::FlatRead32(r12);
    r8 = (r30 + r7);
    r7 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r12 + 4));
    r0 = (r0 * 12);
    MemoryInline::FlatWrite32((r4 + -12), r11);
    MemoryInline::FlatWrite32((r4 + -8), r3);
    r6 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r12 + 8));
    MemoryInline::FlatWrite32((r4 + -4), r0);
    r3 = MemoryInline::FlatRead32(r10);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    MemoryInline::FlatWrite32((r4 + -24), r3);
    MemoryInline::FlatWrite32((r4 + -20), r0);
    r0 = MemoryInline::FlatRead32((r10 + 8));
    MemoryInline::FlatWrite32((r4 + -16), r0);
    r3 = MemoryInline::FlatRead32(r9);
    r0 = MemoryInline::FlatRead32((r9 + 4));
    MemoryInline::FlatWrite32((r4 + -36), r3);
    MemoryInline::FlatWrite32((r4 + -32), r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
    MemoryInline::FlatWrite32((r4 + -28), r0);
    r3 = MemoryInline::FlatRead32(r8);
    r0 = MemoryInline::FlatRead32((r8 + 4));
    MemoryInline::FlatWrite32((r4 + -48), r3);
    MemoryInline::FlatWrite32((r4 + -44), r0);
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWrite32((r4 + -40), r0);
    r3 = MemoryInline::FlatRead32(r7);
    r0 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r4 + -60), r3);
    MemoryInline::FlatWrite32((r4 + -56), r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r4 + -52), r0);
    r3 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + -72), r3);
    MemoryInline::FlatWrite32((r4 + -68), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite32((r4 + -64), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80157A20;
    }
}

loc_80157B64:
{
    r3 = (r31 & 65535);
    r4 = (r5 & 65535);
    r0 = (r4 - r3);
    ctr = r0;
}

loc_80157B78:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r3))) {
        goto loc_80157BA8;
    }
}

loc_80157B7C:
{
    r0 = (r5 & 65535);
    r5 = (r5 + -1);
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    r30_addr_5 = (r30 + r0);
    r3 = MemoryInline::FlatRead32(r30_addr_5);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r4 + 12), r3);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r4 + 20), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80157B7C;
    }
}

loc_80157BA8:
{
    r3 = MemoryInline::FlatRead16((r30 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite32(r29, r27);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r26));
    r6 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r6 + r27);
}

loc_80157BCC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(350))) {
        goto loc_80157C1C;
    }
}

loc_80157BD0:
{
    r3 = 0x80340000u;
    r3 = (r3 + -24768);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80157BE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80157C00;
    }
}

loc_80157BE4:
{
    r3 = 655360;
    r4 = 0x80280000u;
    r5 = r27;
    r6_subfic_ra_1 = r6;
    r6 = (350 - r6_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(350) >= static_cast<uint32_t>(r6_subfic_ra_1) ? 1u : 0u) << 29);
    r3 = (r3 + 1);
    r4 = (r4 + 30736);
    ctx->lr = 0x80157C00u;
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
    InvokeDirectCpu<0x80131770u>(ctx);
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
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80157C00:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0;
    r27 = (350 - r0);
    r28_addr_1 = (r28 + r27);
    MemoryInline::FlatWrite8(r28_addr_1, static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0_subfic_ra_1 = r0;
    r0 = (351 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(351) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    r28_addr_2 = (r28 + r0);
    MemoryInline::FlatWrite8(r28_addr_2, static_cast<uint8_t>(r3));
}

loc_80157C1C:
{
}

loc_80157C20:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80157C60;
    }
}

loc_80157C24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80157C28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80157C60;
    }
}

loc_80157C2C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = r28;
    r5 = r27;
    r3 = (r30 + r0);
    r3 = (r3 + 312);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = (r30 + r0);
    r0 = (r3 + 312);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_80157C60:
{
    r3 = 0x80340000u;
    r3 = (r3 + -24768);
    r0 = MemoryInline::FlatRead32((r3 + 4636));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(r0));
}

loc_80157C70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80157C84;
    }
}

loc_80157C74:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(32769));
}

loc_80157C78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80157C84;
    }
}

loc_80157C7C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 4640), static_cast<uint8_t>(r0));
}

loc_80157C84:
{
    r3 = 1;
    goto loc_80157CA4;
}

loc_80157C8C:
{
    r5 = (r5 + 1);
    r30 = (r30 + 664);
}

loc_80157C94:
{
    r0 = (r5 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r9));
}

loc_80157C9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80157964;
    }
}

loc_80157CA0:
{
    r3 = 0;
}

loc_80157CA4:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
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
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80157924 func_80157924 preserves=true fpr_mask=0x00000000
