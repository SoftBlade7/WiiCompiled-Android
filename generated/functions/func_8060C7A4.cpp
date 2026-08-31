#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8060C7A4(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mdest_5 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_mrot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r5_stbu_ea_4 = 0;
    uint32_t r5_stbu_ea_5 = 0;
    uint32_t r5_stbu_ea_6 = 0;
    uint32_t r5_stbu_ea_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8060C7A4;

loc_8060C7A4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r0 = MemoryInline::FlatRead32((r3 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8060C7CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8060CB9C;
    }
}

loc_8060C7D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8060C7D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060C7E8;
    }
}

loc_8060C7DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8060C7E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060C7F0;
    }
}

loc_8060C7E4:
{
    goto loc_8060C7F4;
}

loc_8060C7E8:
{
    r28 = 1;
    goto loc_8060C7F4;
}

loc_8060C7F0:
{
    r28 = 0;
}

loc_8060C7F4:
{
    r4 = 0x809C0000u;
    r31 = MemoryInline::FlatRead32((r3 + 92));
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r3 = r31;
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
        goto loc_8060C908;
    }
}

loc_8060C814:
{
    r0 = MemoryInline::FlatRead8((r30 + 110));
    r4 = MemoryInline::FlatRead32((r29 + 20476));
}

loc_8060C820:
{
    r4 = (r4 + 131072);
    r4 = (r4 + 13064);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8060C850;
    }
}

loc_8060C82C:
{
    r0 = (r3 & 65535);
    r3 = (r0 * 160);
    r0 = (r28 * 80);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 9008));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r3 + 9008), r0);
    goto loc_8060C908;
}

loc_8060C850:
{
    r0 = (r3 & 65535);
    r5 = (r30 + 104);
    r8 = (r0 * 160);
    r3 = 99;
    r7 = (r28 * 80);
    r0 = (r4 + r8);
    r6 = (r0 + r7);
    r0 = MemoryInline::FlatRead32((r6 + 9008));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r6 + 9008), r0);
    r0 = MemoryInline::FlatRead16((r30 + 104));
}

loc_8060C880:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_8060C888;
    }
}

loc_8060C884:
{
    r3 = r0;
}

loc_8060C888:
{
    r0 = MemoryInline::FlatRead32((r6 + 9008));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_1 = (r0_rot_1 & 2130706432);
    r0_mdest_1 = (r0 & -2130706433);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r6 + 9008), r0);
    r0 = MemoryInline::FlatRead16(r5);
}

loc_8060C89C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8060C8A8;
    }
}

loc_8060C8A0:
{
    r3 = 59;
    goto loc_8060C8AC;
}

loc_8060C8A8:
{
    r3 = MemoryInline::FlatRead8((r30 + 106));
}

loc_8060C8AC:
{
    r0 = MemoryInline::FlatRead32((r6 + 9008));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r0_mrot_2 = (r0_rot_2 & 16646144);
    r0_mdest_2 = (r0 & -16646145);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r6 + 9008), r0);
    r0 = MemoryInline::FlatRead16(r5);
}

loc_8060C8C0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8060C8CC;
    }
}

loc_8060C8C4:
{
    r5 = 999;
    goto loc_8060C8D0;
}

loc_8060C8CC:
{
    r5 = MemoryInline::FlatRead16((r30 + 108));
}

loc_8060C8D0:
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
    r4 = (r30 + 111);
    ctr = r0;
}

loc_8060C8F4:
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
        goto loc_8060C8F4;
    }
}

loc_8060C908:
{
    r0 = MemoryInline::FlatRead32((r30 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8060C910:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060CB8C;
    }
}

loc_8060C914:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = 0x808B0000u;
    r3 = (r3 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r31;
    r29 = (r4 + 131072);
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
        goto loc_8060C958;
    }
}

loc_8060C950:
{
    r6 = 0;
    goto loc_8060C9AC;
}

loc_8060C958:
{
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r29 + 20476));
    r0 = (r0 * 160);
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 9088));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8060C97C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060C9A8;
    }
}

loc_8060C980:
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
    goto loc_8060C9AC;
}

loc_8060C9A8:
{
    r6 = 0;
}

loc_8060C9AC:
{
    r3 = 0x809C0000u;
    r0 = (0 - r6);
    r4 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = (r0 | r6);
    r3 = r31;
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r29 = (r29_rot_1 & 1);
    r28 = (r4 + 131072);
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
        goto loc_8060C9DC;
    }
}

loc_8060C9D4:
{
    r0 = 0;
    goto loc_8060C9F8;
}

loc_8060C9DC:
{
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r28 + 20476));
    r0 = (r0 * 160);
    r3 = (r3 + 131072);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 22152));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_8060C9F8:
{
    r3 = (r29 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060CA08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060CA90;
    }
}

loc_8060CA0C:
{
    r0 = MemoryInline::FlatRead8((r30 + 110));
}

loc_8060CA14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8060CA20;
    }
}

loc_8060CA18:
{
    r0 = 0;
    goto loc_8060CA88;
}

loc_8060CA20:
{
    r0 = MemoryInline::FlatRead8((r1 + 18));
}

loc_8060CA28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8060CA34;
    }
}

loc_8060CA2C:
{
    r0 = 1;
    goto loc_8060CA88;
}

loc_8060CA34:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r3 = MemoryInline::FlatRead16((r30 + 104));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8060CA40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060CA4C;
    }
}

loc_8060CA44:
{
    r0 = 1;
    goto loc_8060CA88;
}

loc_8060CA4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060CA84;
    }
}

loc_8060CA50:
{
    r0 = MemoryInline::FlatRead8((r1 + 14));
    r3 = MemoryInline::FlatRead8((r30 + 106));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8060CA5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060CA68;
    }
}

loc_8060CA60:
{
    r0 = 1;
    goto loc_8060CA88;
}

loc_8060CA68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060CA84;
    }
}

loc_8060CA6C:
{
    r3 = MemoryInline::FlatRead16((r30 + 108));
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_8060CA78:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8060CA84;
    }
}

loc_8060CA7C:
{
    r0 = 1;
    goto loc_8060CA88;
}

loc_8060CA84:
{
    r0 = 0;
}

loc_8060CA88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060CA8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060CB8C;
    }
}

loc_8060CA90:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r28 = (r4 + 131072);
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
        goto loc_8060CB8C;
    }
}

loc_8060CAAC:
{
    r0 = MemoryInline::FlatRead8((r30 + 110));
    r4 = MemoryInline::FlatRead32((r28 + 20476));
}

loc_8060CAB8:
{
    r4 = (r4 + 131072);
    r4 = (r4 + 13064);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8060CAE0;
    }
}

loc_8060CAC4:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 9088));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r3 + 9088), r0);
    goto loc_8060CB8C;
}

loc_8060CAE0:
{
    r0 = (r3 & 65535);
    r6 = (r30 + 104);
    r7 = (r0 * 160);
    r3 = 99;
    r5 = (r4 + r7);
    r0 = MemoryInline::FlatRead32((r5 + 9088));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r5 + 9088), r0);
    r0 = MemoryInline::FlatRead16((r30 + 104));
}

loc_8060CB08:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(99))) {
        goto loc_8060CB10;
    }
}

loc_8060CB0C:
{
    r3 = r0;
}

loc_8060CB10:
{
    r0 = MemoryInline::FlatRead32((r5 + 9088));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_4 = (r0_rot_9 & 2130706432);
    r0_mdest_4 = (r0 & -2130706433);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite32((r5 + 9088), r0);
    r0 = MemoryInline::FlatRead16(r6);
}

loc_8060CB24:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8060CB30;
    }
}

loc_8060CB28:
{
    r3 = 59;
    goto loc_8060CB34;
}

loc_8060CB30:
{
    r3 = MemoryInline::FlatRead8((r30 + 106));
}

loc_8060CB34:
{
    r0 = MemoryInline::FlatRead32((r5 + 9088));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r0_mrot_5 = (r0_rot_10 & 16646144);
    r0_mdest_5 = (r0 & -16646145);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32((r5 + 9088), r0);
    r0 = MemoryInline::FlatRead16(r6);
}

loc_8060CB48:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8060CB54;
    }
}

loc_8060CB4C:
{
    r0 = 999;
    goto loc_8060CB58;
}

loc_8060CB54:
{
    r0 = MemoryInline::FlatRead16((r30 + 108));
}

loc_8060CB58:
{
    r3 = (r4 + r7);
    r4 = MemoryInline::FlatRead32((r5 + 9088));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r4_mrot_3 = (r4_rot_5 & 130944);
    r4_mdest_3 = (r4 & -130945);
    r4 = (r4_mdest_3 | r4_mrot_3);
    MemoryInline::FlatWrite32((r5 + 9088), r4);
    r0 = 38;
    r5 = (r3 + 9091);
    r4 = (r30 + 111);
    ctr = r0;
}

loc_8060CB78:
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
        goto loc_8060CB78;
    }
}

loc_8060CB8C:
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

loc_8060CB9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8060C7A4 func_8060C7A4 preserves=true fpr_mask=0x00000000
