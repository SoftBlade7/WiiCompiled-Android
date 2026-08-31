#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80669858(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r6_addr_9 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint32_t r6_stbu_ea_4 = 0;
    uint32_t r6_stbu_ea_5 = 0;
    uint32_t r6_stbu_ea_6 = 0;
    uint32_t r6_stbu_ea_7 = 0;
    uint32_t r6_stbu_ea_8 = 0;
    uint32_t r6_stbu_ea_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_stbu_ea_0 = 0;
    uint32_t r7_stbu_ea_1 = 0;
    uint32_t r7_stbu_ea_2 = 0;
    uint32_t r7_stbu_ea_3 = 0;
    uint32_t r7_stbu_ea_4 = 0;
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

    goto loc_80669858;

loc_80669858:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -1200), 0, 1208u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -1200), r1);
    r1 = (r1 + -1200);
    r0 = ctx->lr;
    r8 = 10;
    r9 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 1204u, (r1 + 1204), r0);
    r0 = 11;
    r7 = (r0 * 23);
    r10 = (r1 + 64);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1172u, (r1 + 1172), r25);
        MemoryInline::WriteResolved32(guest_range_0, 1176u, (r1 + 1176), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1180u, (r1 + 1180), r27);
        MemoryInline::WriteResolved32(guest_range_0, 1184u, (r1 + 1184), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1188u, (r1 + 1188), r29);
        MemoryInline::WriteResolved32(guest_range_0, 1192u, (r1 + 1192), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1196u, (r1 + 1196), r31);
    r11 = (r1 + 156);
    r12 = (r1 + 248);
    r0 = (r8 * 23);
    r26 = (r1 + 340);
    r27 = (r1 + 432);
    r8 = (r1 + 524);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_0 & -4);
    r28 = r3;
    r29 = r4;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r7 = (r10 + r7);
    r30 = r5;
    r31 = r6;
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r11);
    r11 = (r1 + 616);
    r3 = (r1 + 48);
    r4 = 84;
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r1 + 156), r12);
    r12 = (r1 + 708);
    MemoryInline::WriteResolved32(guest_range_0, 248u, (r1 + 248), r26);
    r26 = (r1 + 800);
    MemoryInline::WriteResolved32(guest_range_0, 340u, (r1 + 340), r27);
    r27 = (r1 + 892);
    MemoryInline::WriteResolved32(guest_range_0, 432u, (r1 + 432), r8);
    r8 = (r1 + 984);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r9);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r9);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r10);
    MemoryInline::WriteResolved32(guest_range_0, 524u, (r1 + 524), r11);
    MemoryInline::WriteResolved32(guest_range_0, 616u, (r1 + 616), r12);
    MemoryInline::WriteResolved32(guest_range_0, 708u, (r1 + 708), r26);
    MemoryInline::WriteResolved32(guest_range_0, 800u, (r1 + 800), r27);
    MemoryInline::WriteResolved32(guest_range_0, 892u, (r1 + 892), r8);
    r10_addr_0 = (r10 + r0);
    MemoryInline::FlatWrite32(r10_addr_0, r7);
    MemoryInline::WriteResolved32(guest_range_0, 1076u, (r1 + 1076), r9);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r10);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 56u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 58u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r0 = 12;
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r0);
    r26 = (r31 + 4);
    r25 = 0;
    r27 = 40;
    goto loc_8066997C;
}

loc_80669928:
{
    r4 = MemoryInline::FlatRead32((r1 + 40));
}

loc_80669930:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8066993C;
    }
}

loc_80669934:
{
    r4 = 0;
    goto loc_80669944;
}

loc_8066993C:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
}

loc_80669944:
{
    r0 = MemoryInline::FlatRead32(r26);
    r6 = (r4 + 3);
    MemoryInline::FlatWrite32(r4, r0);
    r5 = (r26 + 3);
    ctr = r27;
}

loc_80669958:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_3 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_3, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80669958;
    }
}

loc_8066996C:
{
    r3 = (r1 + 48);
    // inline leaf 0x800AEF80 (28 guest instruction(s))
}

loc_inl1_0x800AEF80:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x800AEF88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AEFB8;
    }
}

loc_inl1_0x800AEF8C:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = (r4 + r5);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32(r3, r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_800AEF80;
}

loc_inl1_0x800AEFB8:
{
    r6 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6_addr_2 = (r6 + r4);
    MemoryInline::FlatWrite32(r6_addr_2, r5);
    r6 = r6_addr_2;
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl1_cont_800AEF80:
{
    // end of inlined leaf 0x800AEF80
    r26 = (r26 + 84);
    r25 = (r25 + 1);
}

loc_8066997C:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80669984:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_80669928;
    }
}

loc_80669988:
{
}

loc_8066998C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(1))) {
        goto loc_80669A4C;
    }
}

loc_80669990:
{
    r26 = (r30 * 168);
    r0 = (r28 + 65536);
    r3 = (r0 + r26);
    r0 = MemoryInline::FlatRead32((r3 + -29948));
}

loc_806699A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80669A4C;
    }
}

loc_806699A8:
{
    r29 = (r3 + -29948);
    r27 = 0;
    goto loc_806699D0;
}

loc_806699B4:
{
    r3 = r27;
    r4 = r29;
    r5 = 84;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806699C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806699D0;
    }
}

loc_806699CC:
{
    goto loc_806699EC;
}

loc_806699D0:
{
    r4 = r27;
    r3 = (r1 + 48);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl2_0x800AF180:
{
}

loc_inl2_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800AF190;
    }
}

loc_inl2_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_800AF180;
}

loc_inl2_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806699E0:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806699B4;
    }
}

loc_806699E8:
{
    r27 = 0;
}

loc_806699EC:
{
}

loc_806699F0:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80669A4C;
    }
}

loc_806699F4:
{
    r4 = MemoryInline::FlatRead32((r1 + 40));
}

loc_806699FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80669A08;
    }
}

loc_80669A00:
{
    r4 = 0;
    goto loc_80669A10;
}

loc_80669A08:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
}

loc_80669A10:
{
    r3 = (r28 + 65536);
    r0 = 40;
    r5 = (r3 + r26);
    r6 = (r4 + 3);
    r3 = MemoryInline::FlatRead32((r5 + -29948));
    r5 = (r5 + -29945);
    MemoryInline::FlatWrite32(r4, r3);
    ctr = r0;
}

loc_80669A30:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_5 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_5, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_5;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80669A30;
    }
}

loc_80669A44:
{
    r3 = (r1 + 48);
    // inline leaf 0x800AEF80 (28 guest instruction(s))
}

loc_inl3_0x800AEF80:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl3_0x800AEF88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800AEFB8;
    }
}

loc_inl3_0x800AEF8C:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = (r4 + r5);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32(r3, r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    goto loc_inl3_cont_800AEF80;
}

loc_inl3_0x800AEFB8:
{
    r6 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6_addr_4 = (r6 + r4);
    MemoryInline::FlatWrite32(r6_addr_4, r5);
    r6 = r6_addr_4;
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl3_cont_800AEF80:
{
    // end of inlined leaf 0x800AEF80
}

loc_80669A4C:
{
    r26 = (r30 * 168);
    r0 = (r28 + 65536);
    r3 = (r0 + r26);
    r0 = MemoryInline::FlatRead32((r3 + -29864));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80669A60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80669B08;
    }
}

loc_80669A64:
{
    r29 = (r3 + -29864);
    r27 = 0;
    goto loc_80669A8C;
}

loc_80669A70:
{
    r3 = r27;
    r4 = r29;
    r5 = 84;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80669A84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80669A8C;
    }
}

loc_80669A88:
{
    goto loc_80669AA8;
}

loc_80669A8C:
{
    r4 = r27;
    r3 = (r1 + 48);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl4_0x800AF180:
{
}

loc_inl4_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800AF190;
    }
}

loc_inl4_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl4_cont_800AF180;
}

loc_inl4_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl4_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80669A9C:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80669A70;
    }
}

loc_80669AA4:
{
    r27 = 0;
}

loc_80669AA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80669AAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80669B08;
    }
}

loc_80669AB0:
{
    r4 = MemoryInline::FlatRead32((r1 + 40));
}

loc_80669AB8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80669AC4;
    }
}

loc_80669ABC:
{
    r4 = 0;
    goto loc_80669ACC;
}

loc_80669AC4:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
}

loc_80669ACC:
{
    r3 = (r28 + 65536);
    r0 = 40;
    r5 = (r3 + r26);
    r6 = (r4 + 3);
    r3 = MemoryInline::FlatRead32((r5 + -29864));
    r5 = (r5 + -29861);
    MemoryInline::FlatWrite32(r4, r3);
    ctr = r0;
}

loc_80669AEC:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_8 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_8, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_8;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80669AEC;
    }
}

loc_80669B00:
{
    r3 = (r1 + 48);
    // inline leaf 0x800AEF80 (28 guest instruction(s))
}

loc_inl5_0x800AEF80:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl5_0x800AEF88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_0x800AEFB8;
    }
}

loc_inl5_0x800AEF8C:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = (r4 + r5);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32(r3, r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    goto loc_inl5_cont_800AEF80;
}

loc_inl5_0x800AEFB8:
{
    r6 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6_addr_7 = (r6 + r4);
    MemoryInline::FlatWrite32(r6_addr_7, r5);
    r6 = r6_addr_7;
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl5_cont_800AEF80:
{
    // end of inlined leaf 0x800AEF80
}

loc_80669B08:
{
    r3 = (r1 + 48);
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AF1C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r27 = r3;
    goto loc_80669BA4;
}

loc_80669B1C:
{
    r4 = r27;
    r3 = (r1 + 48);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl6_0x800AF180:
{
}

loc_inl6_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800AF190;
    }
}

loc_inl6_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl6_cont_800AF180;
}

loc_inl6_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl6_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    r28 = r3;
    r4 = r27;
    r3 = (r1 + 48);
    // inline leaf 0x800AF1A0 (7 guest instruction(s))
}

loc_inl7_0x800AF1A0:
{
}

loc_inl7_0x800AF1A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x800AF1B0;
    }
}

loc_inl7_0x800AF1A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl7_cont_800AF1A0;
}

loc_inl7_0x800AF1B0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_inl7_cont_800AF1A0:
{
    // end of inlined leaf 0x800AF1A0
    r5 = MemoryInline::FlatRead32(r27);
    r4 = r3;
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 - r5);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80669BA0;
    }
}

loc_80669B4C:
{
    goto loc_80669B60;
}

loc_80669B50:
{
    r5 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 - r5);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80669B74;
    }
}

loc_80669B60:
{
    r3 = (r1 + 48);
    // inline leaf 0x800AF1A0 (7 guest instruction(s))
}

loc_inl8_0x800AF1A0:
{
}

loc_inl8_0x800AF1A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x800AF1B0;
    }
}

loc_inl8_0x800AF1A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl8_cont_800AF1A0;
}

loc_inl8_0x800AF1B0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_5 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_5);
}

loc_inl8_cont_800AF1A0:
{
    // end of inlined leaf 0x800AF1A0
}

loc_80669B6C:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80669B50;
    }
}

loc_80669B74:
{
    r4 = r3;
    r3 = (r1 + 48);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl9_0x800AF180:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl9_0x800AF184:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl9_0x800AF190;
    }
}

loc_inl9_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl9_cont_800AF180;
}

loc_inl9_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl9_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    r29 = r3;
    r4 = r27;
    r3 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AF110u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = r29;
    r5 = r27;
    r3 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AEFF0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_80669BA0:
{
    r27 = r28;
}

loc_80669BA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80669BA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80669B1C;
    }
}

loc_80669BAC:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    r3 = (r1 + 48);
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AF180u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_80669BC4:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80669BD4;
    }
}

loc_80669BCC:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_80669BD4:
{
    r7 = MemoryInline::FlatRead32((r1 + 16));
    r5 = 40;
    r8 = MemoryInline::FlatRead32((r1 + 20));
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    MemoryInline::FlatWriteRam32((r1 + 36), r8);
    goto loc_80669C48;
}

loc_80669BF0:
{
    r4 = MemoryInline::FlatRead32(r31);
    r6 = (r7 + 3);
    r0 = MemoryInline::FlatRead32(r7);
    r4 = (r4 * 84);
    r4 = (r31 + r4);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r7 = (r4 + 7);
    ctr = r5;
}

loc_80669C10:
{
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r4));
    r7_stbu_ea_3 = (r7 + 2);
    MemoryInline::FlatWrite8(r7_stbu_ea_3, static_cast<uint8_t>(r0));
    r7 = r7_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80669C10;
    }
}

loc_80669C24:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r31, r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_80669C34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80669C60;
    }
}

loc_80669C38:
{
}

loc_80669C3C:
{
    r7 = r8;
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80669C48;
    }
}

loc_80669C44:
{
    r8 = MemoryInline::FlatRead32((r8 + 88));
}

loc_80669C48:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r3));
}

loc_80669C50:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80669BF0;
    }
}

loc_80669C60:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 1172), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 1172));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 1176));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 1180));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 1184));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 1188));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 1192));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 1196));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 1204));
    ctx->lr = r0;
    r1 = (r1 + 1200);
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
    ctx->gpr[25] = r25;
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

// RECOMP_GUEST_ABI gpr_read=0xFE0001FB gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80669858 func_80669858 preserves=true fpr_mask=0x00000000
