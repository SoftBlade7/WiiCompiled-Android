#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8060CBBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r5_stbu_ea_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint32_t r6_stbu_ea_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8060CBBC;

loc_8060CBBC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r0 = MemoryInline::FlatRead32((r3 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8060CBDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8060CF54;
    }
}

loc_8060CBE0:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x8060CBFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 16));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 88), 0, 23u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 92));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8060CC08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060CF54;
    }
}

loc_8060CC0C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 88));
}

loc_8060CC14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8060CC24;
    }
}

loc_8060CC18:
{
}

loc_8060CC1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8060CC2C;
    }
}

loc_8060CC20:
{
    goto loc_8060CC30;
}

loc_8060CC24:
{
    r6 = 1;
    goto loc_8060CC30;
}

loc_8060CC2C:
{
    r6 = 0;
}

loc_8060CC30:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r31 + 110));
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r4 = (r31 + 110);
}

loc_8060CC44:
{
    r3 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r5 = (r3 + 131072);
    r5 = (r5 + 13064);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8060CC70;
    }
}

loc_8060CC58:
{
    r0 = (r6 * 84);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 14128));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r3 + 14128), r0);
    goto loc_8060CD20;
}

loc_8060CC70:
{
    r9 = (r6 * 84);
    r7 = (r31 + 104);
    r3 = 99;
    r6 = (r5 + r9);
    r0 = MemoryInline::FlatRead32((r6 + 14128));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r6 + 14128), r0);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r6 + 14132), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r31 + 104));
}

loc_8060CC9C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_8060CCA4;
    }
}

loc_8060CCA0:
{
    r3 = r0;
}

loc_8060CCA4:
{
    r0 = MemoryInline::FlatRead32((r6 + 14128));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_1 = (r0_rot_1 & 2130706432);
    r0_mdest_1 = (r0 & -2130706433);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r6 + 14128), r0);
    r0 = MemoryInline::FlatRead16(r7);
}

loc_8060CCB8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8060CCC4;
    }
}

loc_8060CCBC:
{
    r3 = 59;
    goto loc_8060CCC8;
}

loc_8060CCC4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r31 + 106));
}

loc_8060CCC8:
{
    r0 = MemoryInline::FlatRead32((r6 + 14128));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r0_mrot_2 = (r0_rot_2 & 16646144);
    r0_mdest_2 = (r0 & -16646145);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r6 + 14128), r0);
    r0 = MemoryInline::FlatRead16(r7);
}

loc_8060CCDC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8060CCE8;
    }
}

loc_8060CCE0:
{
    r0 = 999;
    goto loc_8060CCEC;
}

loc_8060CCE8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r31 + 108));
}

loc_8060CCEC:
{
    r3 = (r5 + r9);
    r5 = MemoryInline::FlatRead32((r6 + 14128));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r5_mrot_1 = (r5_rot_1 & 130944);
    r5_mdest_1 = (r5 & -130945);
    r5 = (r5_mdest_1 | r5_mrot_1);
    MemoryInline::FlatWrite32((r6 + 14128), r5);
    r0 = 38;
    r6 = (r3 + 14135);
    r5 = (r31 + 111);
    ctr = r0;
}

loc_8060CD0C:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_2 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8060CD0C;
    }
}

loc_8060CD20:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 88));
}

loc_8060CD28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8060CF44;
    }
}

loc_8060CD2C:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r3 = (r3 + 131072);
    r12 = MemoryInline::FlatRead32((r3 + 20476));
    r30 = (r12 + 131072);
    r9 = MemoryInline::FlatRead32((r30 + 27276));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
}

loc_8060CD5C:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(1))) {
        goto loc_8060CD6C;
    }
}

loc_8060CD60:
{
    r8 = MemoryInline::FlatRead32((r30 + 27280));
    r11 = 1;
    goto loc_8060CD70;
}

loc_8060CD6C:
{
    r11 = 0;
}

loc_8060CD70:
{
    r10 = MemoryInline::FlatRead32((r1 + 16));
    r9 = (0 - r11);
    r11 = (r9 | r11);
    r9 = MemoryInline::FlatRead32((r30 + 27276));
    r8 = (r10 - r8);
    r10 = PPC_CntlzwInline(static_cast<uint32_t>(r8));
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_1 & 1);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(27));
    r10 = (r10_rot_1 & 134217727);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    r10 = (r11 & r10);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
}

loc_8060CD9C:
{
    r8 = (0 - r10);
    r8 = (r8 | r10);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060CDC4;
    }
}

loc_8060CDAC:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r5 = (r5_rot_3 & 127);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(15));
    r6 = (r6_rot_1 & 127);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(25));
    r7 = (r7_rot_1 & 1023);
    r0 = 1;
    r9 = 1;
    goto loc_8060CDC8;
}

loc_8060CDC4:
{
    r9 = 0;
}

loc_8060CDC8:
{
    r10 = (r8 & r9);
    r8 = (r12 + 131072);
    r9 = (0 - r10);
    r8 = MemoryInline::FlatRead32((r8 + 27276));
    r9 = (r9 | r10);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_3 & 1);
    r9 = (r9 & r8);
    r8 = (0 - r9);
    r8 = (r8 | r9);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_4 & 1);
}

loc_8060CDF4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8060CE78;
    }
}

loc_8060CDF8:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r31 + 110));
}

loc_8060CE00:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8060CE0C;
    }
}

loc_8060CE04:
{
    r0 = 0;
    goto loc_8060CE70;
}

loc_8060CE0C:
{
}

loc_8060CE10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8060CE1C;
    }
}

loc_8060CE14:
{
    r0 = 1;
    goto loc_8060CE70;
}

loc_8060CE1C:
{
    r8 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r31 + 104));
    r0 = (r5 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_8060CE28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060CE34;
    }
}

loc_8060CE2C:
{
    r0 = 1;
    goto loc_8060CE70;
}

loc_8060CE34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060CE6C;
    }
}

loc_8060CE38:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r31 + 106));
    r0 = (r6 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8060CE44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060CE50;
    }
}

loc_8060CE48:
{
    r0 = 1;
    goto loc_8060CE70;
}

loc_8060CE50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060CE6C;
    }
}

loc_8060CE54:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r31 + 108));
    r0 = (r7 & 65535);
}

loc_8060CE60:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_8060CE6C;
    }
}

loc_8060CE64:
{
    r0 = 1;
    goto loc_8060CE70;
}

loc_8060CE6C:
{
    r0 = 0;
}

loc_8060CE70:
{
}

loc_8060CE74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8060CF44;
    }
}

loc_8060CE78:
{
    r0 = MemoryInline::FlatRead8(r4);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
}

loc_8060CE84:
{
    r5 = (r3 + 131072);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8060CE9C;
    }
}

loc_8060CE8C:
{
    r0 = MemoryInline::FlatRead32((r5 + 27276));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r5 + 27276), r0);
    goto loc_8060CF44;
}

loc_8060CE9C:
{
    r0 = MemoryInline::FlatRead32((r5 + 27276));
    r6 = (r5 + 27276);
    r4 = (r31 + 104);
    r3 = 99;
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r5 + 27276), r0);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r5 + 27280), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r31 + 104));
}

loc_8060CEC4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_8060CECC;
    }
}

loc_8060CEC8:
{
    r3 = r0;
}

loc_8060CECC:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_4 = (r0_rot_4 & 2130706432);
    r0_mdest_4 = (r0 & -2130706433);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8060CEE0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8060CEEC;
    }
}

loc_8060CEE4:
{
    r3 = 59;
    goto loc_8060CEF0;
}

loc_8060CEEC:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r31 + 106));
}

loc_8060CEF0:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r0_mrot_5 = (r0_rot_5 & 16646144);
    r0_mdest_5 = (r0 & -16646145);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8060CF04:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8060CF10;
    }
}

loc_8060CF08:
{
    r4 = 999;
    goto loc_8060CF14;
}

loc_8060CF10:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r31 + 108));
}

loc_8060CF14:
{
    r3 = MemoryInline::FlatRead32(r6);
    r0 = 38;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
    r3_mrot_1 = (r3_rot_1 & 130944);
    r3_mdest_1 = (r3 & -130945);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32(r6, r3);
    r5 = (r5 + 27283);
    r4 = (r31 + 111);
    ctr = r0;
}

loc_8060CF30:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_2 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_2, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8060CF30;
    }
}

loc_8060CF44:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl0_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80621410;
}

loc_inl0_return:
{
}

loc_inl0_cont_80621410:
{
    // end of inlined leaf 0x80621410
}

loc_8060CF54:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8060CBBC func_8060CBBC preserves=true fpr_mask=0x00000000
