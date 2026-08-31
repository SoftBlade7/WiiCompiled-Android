#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801277A8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r27_addic_src_0 = 0;
    uint32_t r27_addic_src_1 = 0;
    uint32_t r27_addic_src_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_11 = 0;
    uint32_t r31_addr_12 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
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
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801277A8;

loc_801277A8:
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
    r0 = MemoryInline::FlatRead32((r13 + -26212));
    r29 = 0;
    r25 = r3;
    MemoryInline::FlatWrite32((r13 + -26208), r29);
    r4 = (r0 * 320);
    r3 = MemoryInline::FlatRead32((r13 + -26224));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r0 = MemoryInline::FlatRead32((r13 + -26212));
    r3 = MemoryInline::FlatRead32((r13 + -26220));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r4 = (r4_rot_0 & -64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1600u>(ctx);
    // inline leaf 0x80125BAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26388));
    // end of inlined leaf 0x80125BAC
    r0 = MemoryInline::FlatRead32((r13 + -26212));
    r31 = 0x80280000u;
    r30 = 0x80280000u;
    r27 = 31;
    r0 = (r0 * 600);
    r31 = (r31 + -6080);
    r30 = (r30 + -6208);
    r0 = (r3 + r0);
    r3 = (r0 + r25);
    r28 = (r3 + 32);
}

loc_80127814:
{
    r3 = r27;
    // inline leaf 0x80124EDC (5 guest instruction(s))
    r4 = 0x802F0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r4 + 16576);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
    // end of inlined leaf 0x80124EDC
    r26 = r3;
    goto loc_80127A14;
}

loc_80127824:
{
    r0 = MemoryInline::FlatRead16((r26 + 108));
}

loc_8012782C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80127834;
    }
}

loc_80127830:
{
    r28 = (r28 + 129);
}

loc_80127834:
{
    r0 = MemoryInline::FlatRead32((r26 + 32));
}

loc_8012783C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127854;
    }
}

loc_80127840:
{
    r0 = MemoryInline::FlatRead32((r26 + 24));
    r3 = MemoryInline::FlatRead32((r13 + -26224));
    r0 = (r0 * 320);
    r3 = (r3 + r0);
    ctx->lr = 0x80127854u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x801270E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_80127854:
{
    r0 = MemoryInline::FlatRead16((r26 + 56));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8012785C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80127A00;
    }
}

loc_80127860:
{
    r0 = MemoryInline::FlatRead16((r26 + 226));
    r28 = (r28 + 387);
}

loc_8012786C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127874;
    }
}

loc_80127870:
{
    r28 = (r28 + 309);
}

loc_80127874:
{
    r0 = MemoryInline::FlatRead16((r26 + 234));
}

loc_8012787C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127884;
    }
}

loc_80127880:
{
    r28 = (r28 + 1024);
}

loc_80127884:
{
    r0 = MemoryInline::FlatRead16((r26 + 108));
}

loc_8012788C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80127894;
    }
}

loc_80127890:
{
    r28 = (r28 + 27);
}

loc_80127894:
{
    r3 = MemoryInline::FlatRead16((r26 + 48));
    r0 = MemoryInline::FlatRead16((r26 + 206));
}

loc_801278A0:
{
    r4 = MemoryInline::FlatRead16((r26 + 208));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4_mrot_3 = (r4_rot_3 & -65536);
    r4_mdest_3 = (r4 & 65535);
    r4 = (r4_mdest_3 | r4_mrot_3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801278C4;
    }
}

loc_801278AC:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r3 = (r3_rot_3 & -512);
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_4 & 65535);
    r0 = (r3 + 1561);
    goto loc_801278E4;
}

loc_801278C4:
{
}

loc_801278C8:
{
    r0 = 605;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801278E4;
    }
}

loc_801278D0:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r3 = (r3_rot_5 & -512);
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_6 & 65535);
    r0 = (r3 + 1466);
}

loc_801278E4:
{
    r4 = MemoryInline::FlatRead32((r26 + 52));
    r28 = (r28 + r0);
    r0 = MemoryInline::FlatRead16((r26 + 254));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(13));
    r5 = (r5_rot_3 & 124);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & 124);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r6 = (r6_rot_3 & 124);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(18));
    r4 = (r4_rot_4 & 124);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80127904:
{
    r30_addr_3 = (r30 + r5);
    r5 = MemoryInline::FlatRead32(r30_addr_3);
    r30_addr_4 = (r30 + r3);
    r0 = MemoryInline::FlatRead32(r30_addr_4);
    r30_addr_5 = (r30 + r6);
    r6 = MemoryInline::FlatRead32(r30_addr_5);
    r30_addr_6 = (r30 + r4);
    r4 = MemoryInline::FlatRead32(r30_addr_6);
    r0 = (r5 + r0);
    r3 = (r28 + r6);
    r0 = (r4 + r0);
    r28 = (r3 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801279B0;
    }
}

loc_80127928:
{
    r0 = MemoryInline::FlatRead16((r26 + 316));
    r28 = (r28 + 613);
}

loc_80127934:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80127940;
    }
}

loc_80127938:
{
    r28 = (r28 + 118);
    goto loc_8012794C;
}

loc_80127940:
{
}

loc_80127944:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012794C;
    }
}

loc_80127948:
{
    r28 = (r28 + 834);
}

loc_8012794C:
{
    r3 = MemoryInline::FlatRead16((r26 + 256));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r4 = (r4_rot_5 & 12);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 12);
    r31_addr_3 = (r31 + r4);
    r4 = MemoryInline::FlatRead32(r31_addr_3);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r9 = (r9_rot_3 & 12);
    r31_addr_4 = (r31 + r0);
    r0 = MemoryInline::FlatRead32(r31_addr_4);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(22));
    r8 = (r8_rot_3 & 12);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r7 = (r7_rot_3 & 12);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r6 = (r6_rot_4 & 12);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r5 = (r5_rot_4 & 12);
    r3 = (r3 & 12);
    r31_addr_5 = (r31 + r7);
    r7 = MemoryInline::FlatRead32(r31_addr_5);
    r0 = (r4 + r0);
    r31_addr_6 = (r31 + r3);
    r3 = MemoryInline::FlatRead32(r31_addr_6);
    r31_addr_7 = (r31 + r9);
    r9 = MemoryInline::FlatRead32(r31_addr_7);
    r7 = (r28 + r7);
    r31_addr_8 = (r31 + r8);
    r8 = MemoryInline::FlatRead32(r31_addr_8);
    r0 = (r3 + r0);
    r31_addr_9 = (r31 + r6);
    r6 = MemoryInline::FlatRead32(r31_addr_9);
    r31_addr_10 = (r31 + r5);
    r4 = MemoryInline::FlatRead32(r31_addr_10);
    r8 = (r9 + r8);
    r3 = (r8 + r7);
    r4 = (r6 + r4);
    r0 = (r4 + r0);
    r28 = (r3 + r0);
}

loc_801279B0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26200));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
}

loc_801279B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801279C8;
    }
}

loc_801279BC:
{
    r3 = r26;
    ctx->lr = 0x801279C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80127258u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80127A08;
}

loc_801279C8:
{
    r0 = MemoryInline::FlatRead32((r26 + 24));
    r3 = MemoryInline::FlatRead32((r13 + -26224));
    r0 = (r0 * 320);
    r25 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r25 + 16));
}

loc_801279E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801279EC;
    }
}

loc_801279E4:
{
    r3 = r25;
    ctx->lr = 0x801279ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x801270E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_801279EC:
{
    MemoryInline::FlatWrite16((r26 + 56), static_cast<uint16_t>(r29));
    r3 = r26;
    MemoryInline::FlatWrite16((r25 + 16), static_cast<uint16_t>(r29));
    // inline leaf 0x80125068 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26480));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r13 + -26480), r3);
    // end of inlined leaf 0x80125068
    goto loc_80127A08;
}

loc_80127A00:
{
    r3 = r26;
    ctx->lr = 0x80127A08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80127258u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80127A08:
{
    MemoryInline::FlatWrite32((r26 + 28), r29);
    MemoryInline::FlatWrite32((r26 + 32), r29);
    r26 = MemoryInline::FlatRead32(r26);
}

loc_80127A14:
{
}

loc_80127A18:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_80127824;
    }
}

loc_80127A1C:
{
    r27_addic_src_2 = r27;
    r27 = (r27_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r27_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80127A20:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80127814;
    }
}

loc_80127A24:
{
    MemoryInline::FlatWrite32((r13 + -26204), r28);
    r3 = 0;
    // inline leaf 0x80124EDC (5 guest instruction(s))
    r4 = 0x802F0000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4 = (r4 + 16576);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
    // end of inlined leaf 0x80124EDC
    r25 = r3;
    r26 = 0;
    goto loc_80127A78;
}

loc_80127A3C:
{
    r0 = MemoryInline::FlatRead32((r25 + 32));
}

loc_80127A44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127A5C;
    }
}

loc_80127A48:
{
    r0 = MemoryInline::FlatRead32((r25 + 24));
    r3 = MemoryInline::FlatRead32((r13 + -26224));
    r0 = (r0 * 320);
    r3 = (r3 + r0);
    ctx->lr = 0x80127A5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x801270E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_80127A5C:
{
    MemoryInline::FlatWrite32((r25 + 32), r26);
    r0 = MemoryInline::FlatRead32((r25 + 24));
    r3 = MemoryInline::FlatRead32((r13 + -26224));
    r0 = (r0 * 320);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r26));
    r25 = MemoryInline::FlatRead32(r25);
}

loc_80127A78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80127A7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80127A3C;
    }
}

loc_80127A80:
{
    r0 = MemoryInline::FlatRead32((r13 + -26212));
    r3 = MemoryInline::FlatRead32((r13 + -26224));
    r4 = (r0 * 320);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r13 + -26212));
    r3 = MemoryInline::FlatRead32((r13 + -26220));
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r4 = (r4_rot_8 & -64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A162Cu>(ctx);
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0023FB gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801277A8 func_801277A8 preserves=true fpr_mask=0x00000000
