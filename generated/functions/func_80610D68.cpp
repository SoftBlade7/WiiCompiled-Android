#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80610D68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
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
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r5_stbu_ea_4 = 0;
    uint32_t r5_stbu_ea_5 = 0;
    uint32_t r5_stbu_ea_6 = 0;

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

    goto loc_80610D68;

loc_80610D68:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    r5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRam32((r1 + 252), r31);
    MemoryInline::FlatWriteRam32((r1 + 248), r30);
    MemoryInline::FlatWriteRam32((r1 + 244), r29);
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 964));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80610D98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80610DA8;
    }
}

loc_80610D9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80610DA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80610DB0;
    }
}

loc_80610DA4:
{
    goto loc_80610DB4;
}

loc_80610DA8:
{
    r29 = 1;
    goto loc_80610DB4;
}

loc_80610DB0:
{
    r29 = 0;
}

loc_80610DB4:
{
    r3 = (r1 + 24);
    r4 = (r5 + 104);
    ctx->lr = 0x80610DC0u;
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
    InvokeDirectCpu<0x8051C398u>(ctx);
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
    r31 = MemoryInline::FlatRead32((r1 + 208));
    r4 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = r31;
    r30 = (r4 + 131072);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80610ED0;
    }
}

loc_80610DE0:
{
    r0 = MemoryInline::FlatRead8((r1 + 198));
    r4 = MemoryInline::FlatRead32((r30 + 20476));
}

loc_80610DEC:
{
    r4 = (r4 + 131072);
    r4 = (r4 + 13064);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80610E1C;
    }
}

loc_80610DF8:
{
    r0 = (r3 & 65535);
    r3 = (r0 * 160);
    r0 = (r29 * 80);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 9008));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r3 + 9008), r0);
    goto loc_80610ED0;
}

loc_80610E1C:
{
    r0 = (r3 & 65535);
    r3 = 99;
    r8 = (r0 * 160);
    r7 = (r29 * 80);
    r0 = (r4 + r8);
    r6 = (r0 + r7);
    r0 = MemoryInline::FlatRead32((r6 + 9008));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r6 + 9008), r0);
    r0 = MemoryInline::FlatRead16((r1 + 192));
}

loc_80610E48:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_80610E50;
    }
}

loc_80610E4C:
{
    r3 = r0;
}

loc_80610E50:
{
    r0 = MemoryInline::FlatRead32((r6 + 9008));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_1 = (r0_rot_1 & 2130706432);
    r0_mdest_1 = (r0 & -2130706433);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r6 + 9008), r0);
    r0 = MemoryInline::FlatRead16((r1 + 192));
}

loc_80610E64:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_80610E70;
    }
}

loc_80610E68:
{
    r3 = 59;
    goto loc_80610E74;
}

loc_80610E70:
{
    r3 = MemoryInline::FlatRead8((r1 + 194));
}

loc_80610E74:
{
    r0 = MemoryInline::FlatRead32((r6 + 9008));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r0_mrot_2 = (r0_rot_2 & 16646144);
    r0_mdest_2 = (r0 & -16646145);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r6 + 9008), r0);
    r0 = MemoryInline::FlatRead16((r1 + 192));
}

loc_80610E88:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_80610E94;
    }
}

loc_80610E8C:
{
    r5 = 999;
    goto loc_80610E98;
}

loc_80610E94:
{
    r5 = MemoryInline::FlatRead16((r1 + 196));
}

loc_80610E98:
{
    r0 = (r4 + r8);
    r4 = MemoryInline::FlatRead32((r6 + 9008));
    r3 = (r0 + r7);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r4_mrot_1 = (r4_rot_1 & 130944);
    r4_mdest_1 = (r4 & -130945);
    r4 = (r4_mdest_1 | r4_mrot_1);
    MemoryInline::FlatWrite32((r6 + 9008), r4);
    r0 = 38;
    r5 = (r3 + 9011);
    r4 = (r1 + 47);
    ctr = r0;
}

loc_80610EBC:
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
        goto loc_80610EBC;
    }
}

loc_80610ED0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 964));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80610EE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061115C;
    }
}

loc_80610EE8:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = 0x808B0000u;
    r3 = (r3 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r31;
    r30 = (r4 + 131072);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80610F2C;
    }
}

loc_80610F24:
{
    r6 = 0;
    goto loc_80610F80;
}

loc_80610F2C:
{
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r30 + 20476));
    r0 = (r0 * 160);
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 9088));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80610F50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80610F7C;
    }
}

loc_80610F54:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r5 = (r5_rot_1 & 1023);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(15));
    r4 = (r4_rot_3 & 127);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 127);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    r6 = 1;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r5));
    goto loc_80610F80;
}

loc_80610F7C:
{
    r6 = 0;
}

loc_80610F80:
{
    r3 = 0x809C0000u;
    r0 = (0 - r6);
    r4 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = (r0 | r6);
    r3 = r31;
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r30 = (r30_rot_1 & 1);
    r29 = (r4 + 131072);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80610FB0;
    }
}

loc_80610FA8:
{
    r0 = 0;
    goto loc_80610FCC;
}

loc_80610FB0:
{
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r29 + 20476));
    r0 = (r0 * 160);
    r3 = (r3 + 131072);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 22152));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_80610FCC:
{
    r3 = (r30 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80610FDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611064;
    }
}

loc_80610FE0:
{
    r0 = MemoryInline::FlatRead8((r1 + 198));
}

loc_80610FE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80610FF4;
    }
}

loc_80610FEC:
{
    r0 = 0;
    goto loc_8061105C;
}

loc_80610FF4:
{
    r0 = MemoryInline::FlatRead8((r1 + 18));
}

loc_80610FFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80611008;
    }
}

loc_80611000:
{
    r0 = 1;
    goto loc_8061105C;
}

loc_80611008:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r3 = MemoryInline::FlatRead16((r1 + 192));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80611014:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80611020;
    }
}

loc_80611018:
{
    r0 = 1;
    goto loc_8061105C;
}

loc_80611020:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80611058;
    }
}

loc_80611024:
{
    r0 = MemoryInline::FlatRead8((r1 + 14));
    r3 = MemoryInline::FlatRead8((r1 + 194));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80611030:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061103C;
    }
}

loc_80611034:
{
    r0 = 1;
    goto loc_8061105C;
}

loc_8061103C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80611058;
    }
}

loc_80611040:
{
    r3 = MemoryInline::FlatRead16((r1 + 196));
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_8061104C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80611058;
    }
}

loc_80611050:
{
    r0 = 1;
    goto loc_8061105C;
}

loc_80611058:
{
    r0 = 0;
}

loc_8061105C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80611060:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061115C;
    }
}

loc_80611064:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r29 = (r4 + 131072);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8061115C;
    }
}

loc_80611080:
{
    r0 = MemoryInline::FlatRead8((r1 + 198));
    r4 = MemoryInline::FlatRead32((r29 + 20476));
}

loc_8061108C:
{
    r4 = (r4 + 131072);
    r4 = (r4 + 13064);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806110B4;
    }
}

loc_80611098:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 9088));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r3 + 9088), r0);
    goto loc_8061115C;
}

loc_806110B4:
{
    r0 = (r3 & 65535);
    r3 = 99;
    r6 = (r0 * 160);
    r5 = (r4 + r6);
    r0 = MemoryInline::FlatRead32((r5 + 9088));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r5 + 9088), r0);
    r0 = MemoryInline::FlatRead16((r1 + 192));
}

loc_806110D8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_806110E0;
    }
}

loc_806110DC:
{
    r3 = r0;
}

loc_806110E0:
{
    r0 = MemoryInline::FlatRead32((r5 + 9088));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_4 = (r0_rot_9 & 2130706432);
    r0_mdest_4 = (r0 & -2130706433);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite32((r5 + 9088), r0);
    r0 = MemoryInline::FlatRead16((r1 + 192));
}

loc_806110F4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_80611100;
    }
}

loc_806110F8:
{
    r3 = 59;
    goto loc_80611104;
}

loc_80611100:
{
    r3 = MemoryInline::FlatRead8((r1 + 194));
}

loc_80611104:
{
    r0 = MemoryInline::FlatRead32((r5 + 9088));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r0_mrot_5 = (r0_rot_10 & 16646144);
    r0_mdest_5 = (r0 & -16646145);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32((r5 + 9088), r0);
    r0 = MemoryInline::FlatRead16((r1 + 192));
}

loc_80611118:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_80611124;
    }
}

loc_8061111C:
{
    r0 = 999;
    goto loc_80611128;
}

loc_80611124:
{
    r0 = MemoryInline::FlatRead16((r1 + 196));
}

loc_80611128:
{
    r3 = (r4 + r6);
    r4 = MemoryInline::FlatRead32((r5 + 9088));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r4_mrot_3 = (r4_rot_5 & 130944);
    r4_mdest_3 = (r4 & -130945);
    r4 = (r4_mdest_3 | r4_mrot_3);
    MemoryInline::FlatWrite32((r5 + 9088), r4);
    r0 = 38;
    r5 = (r3 + 9091);
    r4 = (r1 + 47);
    ctr = r0;
}

loc_80611148:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_5 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_5, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_5;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80611148;
    }
}

loc_8061115C:
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
    r4 = 0x80520000u;
    r3 = (r1 + 128);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x80611184u;
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
    InvokeDirectCpu<0x800210ECu>(ctx);
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
    r0 = MemoryInline::FlatRead32((r1 + 260));
    r31 = MemoryInline::FlatRead32((r1 + 252));
    r30 = MemoryInline::FlatRead32((r1 + 248));
    r29 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 256);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80610D68 func_80610D68 preserves=true fpr_mask=0x00000000
