#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80118B8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_10 = 0;
    uint32_t r6_stbu_ea_11 = 0;
    uint32_t r6_stbu_ea_12 = 0;
    uint32_t r6_stbu_ea_13 = 0;
    uint32_t r6_stbu_ea_14 = 0;
    uint32_t r6_stbu_ea_15 = 0;
    uint32_t r6_stbu_ea_16 = 0;
    uint32_t r6_stbu_ea_17 = 0;
    uint32_t r6_stbu_ea_18 = 0;
    uint32_t r6_stbu_ea_19 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_20 = 0;
    uint32_t r6_stbu_ea_21 = 0;
    uint32_t r6_stbu_ea_22 = 0;
    uint32_t r6_stbu_ea_23 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint32_t r6_stbu_ea_4 = 0;
    uint32_t r6_stbu_ea_5 = 0;
    uint32_t r6_stbu_ea_6 = 0;
    uint32_t r6_stbu_ea_7 = 0;
    uint32_t r6_stbu_ea_8 = 0;
    uint32_t r6_stbu_ea_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80118B8C;

loc_80118B8C:
{
    MemoryInline::FlatWriteRam32((r1 + -2848), r1);
    r1 = (r1 + -2848);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 2852), r0);
    r11 = (r1 + 2848);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r29 = 0x80280000u;
    r0 = 0;
    r3_addr_0 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r0));
    r29 = (r29 + -9656);
    r28 = r4;
    r27 = r3;
    r4 = (r29 + 536);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80118BC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80118EF4;
    }
}

loc_80118BCC:
{
    r3 = (r29 + 264);
    r0 = 128;
    r6 = (r1 + 2055);
    r4 = (r13 + -30068);
    r5 = (r3 + -1);
    ctr = r0;
}

loc_80118BE4:
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
        goto loc_80118BE4;
    }
}

loc_80118BF8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r3 = (r1 + 2056);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -26664), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 2056);
    r4 = (r13 + -30112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r27;
    r4 = (r1 + 2056);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80118C28:
{
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80118C38;
    }
}

loc_80118C30:
{
    r3 = 0;
    goto loc_80118C8C;
}

loc_80118C38:
{
    r3 = (r1 + 2056);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r4 = 0x802F0000u;
    r4 = (r4 + 14368);
    r5 = (r28 + r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r3 = (r4 + r0);
    r4 = r3;
    goto loc_80118C70;
}

loc_80118C60:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80118C70:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80118C84;
    }
}

loc_80118C7C:
{
}

loc_80118C80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80118C60;
    }
}

loc_80118C84:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_80118C8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80118C90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80118C98;
    }
}

loc_80118C94:
{
    goto loc_80118C9C;
}

loc_80118C98:
{
    r3 = (r13 + -30108);
}

loc_80118C9C:
{
    ctx->lr = 0x80118CA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r29 + 264);
    r0 = 128;
    r5 = (r4 + -1);
    r31 = r3;
    r6 = (r1 + 2311);
    r4 = (r13 + -30096);
    ctr = r0;
}

loc_80118CBC:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_4 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_4, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_4;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80118CBC;
    }
}

loc_80118CD0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r3 = (r1 + 2312);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -26664), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 2312);
    r4 = (r13 + -30112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r27;
    r4 = (r1 + 2312);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80118D00:
{
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80118D10;
    }
}

loc_80118D08:
{
    r3 = 0;
    goto loc_80118D64;
}

loc_80118D10:
{
    r3 = (r1 + 2312);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r4 = 0x802F0000u;
    r4 = (r4 + 14368);
    r5 = (r28 + r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r3 = (r4 + r0);
    r4 = r3;
    goto loc_80118D48;
}

loc_80118D38:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80118D48:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80118D5C;
    }
}

loc_80118D54:
{
}

loc_80118D58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80118D38;
    }
}

loc_80118D5C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_80118D64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80118D68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80118D70;
    }
}

loc_80118D6C:
{
    goto loc_80118D74;
}

loc_80118D70:
{
    r3 = (r13 + -30108);
}

loc_80118D74:
{
    ctx->lr = 0x80118D78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r29 + 264);
    r0 = 128;
    r5 = (r4 + -1);
    r30 = r3;
    r6 = (r1 + 2567);
    r4 = (r13 + -30060);
    ctr = r0;
}

loc_80118D94:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_6 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_6, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_6;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80118D94;
    }
}

loc_80118DA8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r3 = (r1 + 2568);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -26664), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 2568);
    r4 = (r13 + -30112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r27;
    r4 = (r1 + 2568);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80118DD8:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80118DE8;
    }
}

loc_80118DE0:
{
    r28 = 0;
    goto loc_80118E3C;
}

loc_80118DE8:
{
    r3 = (r1 + 2568);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r4 = 0x802F0000u;
    r4 = (r4 + 14368);
    r5 = (r27 + r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_5 & -256);
    r28 = (r4 + r0);
    r3 = r28;
    goto loc_80118E20;
}

loc_80118E10:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_80118E20:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80118E34;
    }
}

loc_80118E2C:
{
}

loc_80118E30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80118E10;
    }
}

loc_80118E34:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_80118E3C:
{
}

loc_80118E40:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80118E48;
    }
}

loc_80118E44:
{
    goto loc_80118E4C;
}

loc_80118E48:
{
    r28 = (r13 + -30108);
}

loc_80118E4C:
{
    r0 = MemoryInline::FlatRead32((r13 + -26668));
}

loc_80118E54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80118E60;
    }
}

loc_80118E58:
{
    r27 = -1;
    goto loc_80118EB4;
}

loc_80118E60:
{
    r27 = 0;
    goto loc_80118EA0;
}

loc_80118E68:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    r4 = r27;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl1_0x800EF4B0:
{
}

loc_inl1_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl1_0x800EF4C4;
    }
}

loc_inl1_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl1_0x800EF4CC;
    }
}

loc_inl1_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl1_cont_800EF4B0;
}

loc_inl1_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl1_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80118E7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80118E9C;
    }
}

loc_80118E80:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80118E88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r30))) {
        goto loc_80118E9C;
    }
}

loc_80118E8C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80118E94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80118E9C;
    }
}

loc_80118E98:
{
    goto loc_80118EB4;
}

loc_80118E9C:
{
    r27 = (r27 + 1);
}

loc_80118EA0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
}

loc_80118EAC:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r3))) {
        goto loc_80118E68;
    }
}

loc_80118EB0:
{
    r27 = -1;
}

loc_80118EB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(-1));
}

loc_80118EB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80119800;
    }
}

loc_80118EBC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    r4 = r27;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl3_0x800EF4B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl3_0x800EF4B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl3_0x800EF4C4;
    }
}

loc_inl3_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl3_0x800EF4C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl3_0x800EF4CC;
    }
}

loc_inl3_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl3_cont_800EF4B0;
}

loc_inl3_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl3_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = (0 - r31);
    MemoryInline::FlatWrite32((r3 + 8), r31);
    r0 = (r0 & ~r31);
    r3 = r27;
    r7 = r28;
    r6 = 0;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r5 = 0;
    r8 = 0;
    ctx->lr = 0x80118EF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80119818u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80119800;
}

loc_80118EF4:
{
    r3 = r27;
    r4 = (r29 + 548);
    r5 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80118F08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119164;
    }
}

loc_80118F0C:
{
    r3 = (r29 + 264);
    r0 = 128;
    r6 = (r1 + 1543);
    r4 = (r13 + -30048);
    r5 = (r3 + -1);
    ctr = r0;
}

loc_80118F24:
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
        goto loc_80118F24;
    }
}

loc_80118F38:
{
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r3 = (r1 + 1544);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -26664), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 1544);
    r4 = (r13 + -30112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r27;
    r4 = (r1 + 1544);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80118F68:
{
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80118F78;
    }
}

loc_80118F70:
{
    r3 = 0;
    goto loc_80118FCC;
}

loc_80118F78:
{
    r3 = (r1 + 1544);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r4 = 0x802F0000u;
    r4 = (r4 + 14368);
    r5 = (r28 + r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_7 & -256);
    r3 = (r4 + r0);
    r4 = r3;
    goto loc_80118FB0;
}

loc_80118FA0:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80118FB0:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80118FC4;
    }
}

loc_80118FBC:
{
}

loc_80118FC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80118FA0;
    }
}

loc_80118FC4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_80118FCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80118FD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80118FD8;
    }
}

loc_80118FD4:
{
    goto loc_80118FDC;
}

loc_80118FD8:
{
    r3 = (r13 + -30108);
}

loc_80118FDC:
{
    ctx->lr = 0x80118FE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r29 + 264);
    r0 = 128;
    r5 = (r4 + -1);
    r30 = r3;
    r6 = (r1 + 1799);
    r4 = (r13 + -30096);
    ctr = r0;
}

loc_80118FFC:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_10 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_10, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_10;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80118FFC;
    }
}

loc_80119010:
{
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r3 = (r1 + 1800);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -26664), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 1800);
    r4 = (r13 + -30112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r27;
    r4 = (r1 + 1800);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119040:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119050;
    }
}

loc_80119048:
{
    r3 = 0;
    goto loc_801190A4;
}

loc_80119050:
{
    r3 = (r1 + 1800);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r4 = 0x802F0000u;
    r4 = (r4 + 14368);
    r5 = (r27 + r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_9 & -256);
    r3 = (r4 + r0);
    r4 = r3;
    goto loc_80119088;
}

loc_80119078:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80119088:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011909C;
    }
}

loc_80119094:
{
}

loc_80119098:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80119078;
    }
}

loc_8011909C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_801190A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801190A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801190B0;
    }
}

loc_801190AC:
{
    goto loc_801190B4;
}

loc_801190B0:
{
    r3 = (r13 + -30108);
}

loc_801190B4:
{
    ctx->lr = 0x801190B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r13 + -26668));
    r27 = r3;
}

loc_801190C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801190D0;
    }
}

loc_801190C8:
{
    r28 = -1;
    goto loc_80119124;
}

loc_801190D0:
{
    r28 = 0;
    goto loc_80119110;
}

loc_801190D8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    r4 = r28;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl4_0x800EF4B0:
{
}

loc_inl4_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl4_0x800EF4C4;
    }
}

loc_inl4_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl4_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl4_0x800EF4CC;
    }
}

loc_inl4_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl4_cont_800EF4B0;
}

loc_inl4_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl4_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = MemoryInline::FlatRead32(r3);
}

loc_801190EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8011910C;
    }
}

loc_801190F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801190F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r27))) {
        goto loc_8011910C;
    }
}

loc_801190FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80119104:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011910C;
    }
}

loc_80119108:
{
    goto loc_80119124;
}

loc_8011910C:
{
    r28 = (r28 + 1);
}

loc_80119110:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
}

loc_8011911C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r3))) {
        goto loc_801190D8;
    }
}

loc_80119120:
{
    r28 = -1;
}

loc_80119124:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(-1));
}

loc_80119128:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80119800;
    }
}

loc_8011912C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    r4 = r28;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl6_0x800EF4B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl6_0x800EF4B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl6_0x800EF4C4;
    }
}

loc_inl6_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl6_0x800EF4C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl6_0x800EF4CC;
    }
}

loc_inl6_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl6_cont_800EF4B0;
}

loc_inl6_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl6_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = (0 - r30);
    MemoryInline::FlatWrite32((r3 + 8), r30);
    r0 = (r0 & ~r30);
    r3 = r28;
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r6 = 0;
    r5 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x80119160u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80119818u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80119800;
}

loc_80119164:
{
    r3 = r27;
    r4 = (r29 + 548);
    r5 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119178:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801193D4;
    }
}

loc_8011917C:
{
    r3 = (r29 + 264);
    r0 = 128;
    r6 = (r1 + 1031);
    r4 = (r13 + -30048);
    r5 = (r3 + -1);
    ctr = r0;
}

loc_80119194:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_12 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_12, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_12;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80119194;
    }
}

loc_801191A8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r3 = (r1 + 1032);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -26664), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 1032);
    r4 = (r13 + -30112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r27;
    r4 = (r1 + 1032);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801191D8:
{
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801191E8;
    }
}

loc_801191E0:
{
    r3 = 0;
    goto loc_8011923C;
}

loc_801191E8:
{
    r3 = (r1 + 1032);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r4 = 0x802F0000u;
    r4 = (r4 + 14368);
    r5 = (r28 + r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_11 & -256);
    r3 = (r4 + r0);
    r4 = r3;
    goto loc_80119220;
}

loc_80119210:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80119220:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80119234;
    }
}

loc_8011922C:
{
}

loc_80119230:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80119210;
    }
}

loc_80119234:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_8011923C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119240:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80119248;
    }
}

loc_80119244:
{
    goto loc_8011924C;
}

loc_80119248:
{
    r3 = (r13 + -30108);
}

loc_8011924C:
{
    ctx->lr = 0x80119250u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r29 + 264);
    r0 = 128;
    r5 = (r4 + -1);
    r30 = r3;
    r6 = (r1 + 1287);
    r4 = (r13 + -30096);
    ctr = r0;
}

loc_8011926C:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_14 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_14, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_14;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8011926C;
    }
}

loc_80119280:
{
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r3 = (r1 + 1288);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -26664), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 1288);
    r4 = (r13 + -30112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r27;
    r4 = (r1 + 1288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801192B0:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801192C0;
    }
}

loc_801192B8:
{
    r3 = 0;
    goto loc_80119314;
}

loc_801192C0:
{
    r3 = (r1 + 1288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r4 = 0x802F0000u;
    r4 = (r4 + 14368);
    r5 = (r27 + r3);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_13 & -256);
    r3 = (r4 + r0);
    r4 = r3;
    goto loc_801192F8;
}

loc_801192E8:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_801192F8:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011930C;
    }
}

loc_80119304:
{
}

loc_80119308:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_801192E8;
    }
}

loc_8011930C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_80119314:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80119320;
    }
}

loc_8011931C:
{
    goto loc_80119324;
}

loc_80119320:
{
    r3 = (r13 + -30108);
}

loc_80119324:
{
    ctx->lr = 0x80119328u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r13 + -26668));
    r27 = r3;
}

loc_80119334:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80119340;
    }
}

loc_80119338:
{
    r28 = -1;
    goto loc_80119394;
}

loc_80119340:
{
    r28 = 0;
    goto loc_80119380;
}

loc_80119348:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    r4 = r28;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl7_0x800EF4B0:
{
}

loc_inl7_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl7_0x800EF4C4;
    }
}

loc_inl7_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl7_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl7_0x800EF4CC;
    }
}

loc_inl7_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl7_cont_800EF4B0;
}

loc_inl7_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl7_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8011935C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8011937C;
    }
}

loc_80119360:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80119368:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r27))) {
        goto loc_8011937C;
    }
}

loc_8011936C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80119374:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011937C;
    }
}

loc_80119378:
{
    goto loc_80119394;
}

loc_8011937C:
{
    r28 = (r28 + 1);
}

loc_80119380:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
}

loc_8011938C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r3))) {
        goto loc_80119348;
    }
}

loc_80119390:
{
    r28 = -1;
}

loc_80119394:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(-1));
}

loc_80119398:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80119800;
    }
}

loc_8011939C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    r4 = r28;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl9_0x800EF4B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl9_0x800EF4B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl9_0x800EF4C4;
    }
}

loc_inl9_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl9_0x800EF4C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl9_0x800EF4CC;
    }
}

loc_inl9_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl9_cont_800EF4B0;
}

loc_inl9_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl9_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = (0 - r30);
    MemoryInline::FlatWrite32((r3 + 8), r30);
    r0 = (r0 & ~r30);
    r3 = r28;
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r6 = 0;
    r5 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x801193D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80119818u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80119800;
}

loc_801193D4:
{
    r3 = r27;
    r4 = (r29 + 560);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801193E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801193FC;
    }
}

loc_801193EC:
{
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x801193F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80118660u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80119800;
}

loc_801193FC:
{
    r3 = r27;
    r4 = (r29 + 572);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119410:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119800;
    }
}

loc_80119414:
{
    r3 = (r29 + 264);
    r0 = 128;
    r6 = (r1 + 7);
    r4 = (r13 + -30040);
    r5 = (r3 + -1);
    ctr = r0;
}

loc_8011942C:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_16 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_16, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_16;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8011942C;
    }
}

loc_80119440:
{
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r3 = (r1 + 8);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -26664), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 8);
    r4 = (r13 + -30112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r27;
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119470:
{
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119480;
    }
}

loc_80119478:
{
    r3 = 0;
    goto loc_801194D4;
}

loc_80119480:
{
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r4 = 0x802F0000u;
    r4 = (r4 + 14368);
    r5 = (r28 + r3);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_15 & -256);
    r3 = (r4 + r0);
    r4 = r3;
    goto loc_801194B8;
}

loc_801194A8:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_801194B8:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801194CC;
    }
}

loc_801194C4:
{
}

loc_801194C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_801194A8;
    }
}

loc_801194CC:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_801194D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801194D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801194E0;
    }
}

loc_801194DC:
{
    goto loc_801194E4;
}

loc_801194E0:
{
    r3 = (r13 + -30108);
}

loc_801194E4:
{
    ctx->lr = 0x801194E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r29 + 264);
    r0 = 128;
    r5 = (r4 + -1);
    r28 = r3;
    r6 = (r1 + 263);
    r4 = (r13 + -30092);
    ctr = r0;
}

loc_80119504:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_18 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_18, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_18;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80119504;
    }
}

loc_80119518:
{
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r3 = (r1 + 264);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -26664), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 264);
    r4 = (r13 + -30112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r27;
    r4 = (r1 + 264);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119548:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119558;
    }
}

loc_80119550:
{
    r3 = 0;
    goto loc_801195AC;
}

loc_80119558:
{
    r3 = (r1 + 264);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r4 = 0x802F0000u;
    r4 = (r4 + 14368);
    r5 = (r30 + r3);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_17 & -256);
    r3 = (r4 + r0);
    r4 = r3;
    goto loc_80119590;
}

loc_80119580:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80119590:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801195A4;
    }
}

loc_8011959C:
{
}

loc_801195A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80119580;
    }
}

loc_801195A4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_801195AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801195B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801195B8;
    }
}

loc_801195B4:
{
    goto loc_801195BC;
}

loc_801195B8:
{
    r3 = (r13 + -30108);
}

loc_801195BC:
{
    ctx->lr = 0x801195C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r29 + 264);
    r0 = 128;
    r5 = (r4 + -1);
    r30 = r3;
    r6 = (r1 + 519);
    r4 = (r13 + -30096);
    ctr = r0;
}

loc_801195DC:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_20 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_20, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_20;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801195DC;
    }
}

loc_801195F0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r3 = (r1 + 520);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -26664), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 520);
    r4 = (r13 + -30112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r27;
    r4 = (r1 + 520);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119620:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119630;
    }
}

loc_80119628:
{
    r3 = 0;
    goto loc_80119684;
}

loc_80119630:
{
    r3 = (r1 + 520);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r4 = 0x802F0000u;
    r4 = (r4 + 14368);
    r5 = (r31 + r3);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_19 & -256);
    r3 = (r4 + r0);
    r4 = r3;
    goto loc_80119668;
}

loc_80119658:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80119668:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011967C;
    }
}

loc_80119674:
{
}

loc_80119678:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80119658;
    }
}

loc_8011967C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_80119684:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119688:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80119690;
    }
}

loc_8011968C:
{
    goto loc_80119694;
}

loc_80119690:
{
    r3 = (r13 + -30108);
}

loc_80119694:
{
    ctx->lr = 0x80119698u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r29 + 264);
    r0 = 128;
    r5 = (r4 + -1);
    r31 = r3;
    r6 = (r1 + 775);
    r4 = (r13 + -30088);
    ctr = r0;
}

loc_801196B4:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_22 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_22, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_22;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801196B4;
    }
}

loc_801196C8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r3 = (r1 + 776);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite32((r13 + -26664), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 776);
    r4 = (r13 + -30112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r27;
    r4 = (r1 + 776);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801196F8:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119708;
    }
}

loc_80119700:
{
    r3 = 0;
    goto loc_8011975C;
}

loc_80119708:
{
    r3 = (r1 + 776);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26664));
    r4 = 0x802F0000u;
    r4 = (r4 + 14368);
    r5 = (r27 + r3);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_21 & -256);
    r3 = (r4 + r0);
    r4 = r3;
    goto loc_80119740;
}

loc_80119730:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80119740:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80119754;
    }
}

loc_8011974C:
{
}

loc_80119750:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80119730;
    }
}

loc_80119754:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_8011975C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119760:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80119768;
    }
}

loc_80119764:
{
    goto loc_8011976C;
}

loc_80119768:
{
    r3 = (r13 + -30108);
}

loc_8011976C:
{
    ctx->lr = 0x80119770u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r13 + -26668));
    r29 = r3;
}

loc_8011977C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80119788;
    }
}

loc_80119780:
{
    r27 = -1;
    goto loc_801197DC;
}

loc_80119788:
{
    r27 = 0;
    goto loc_801197C8;
}

loc_80119790:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    r4 = r27;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl10_0x800EF4B0:
{
}

loc_inl10_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl10_0x800EF4C4;
    }
}

loc_inl10_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl10_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl10_0x800EF4CC;
    }
}

loc_inl10_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl10_cont_800EF4B0;
}

loc_inl10_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl10_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = MemoryInline::FlatRead32(r3);
}

loc_801197A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801197C4;
    }
}

loc_801197A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801197B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r31))) {
        goto loc_801197C4;
    }
}

loc_801197B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_801197BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r30))) {
        goto loc_801197C4;
    }
}

loc_801197C0:
{
    goto loc_801197DC;
}

loc_801197C4:
{
    r27 = (r27 + 1);
}

loc_801197C8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26668));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
}

loc_801197D4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r3))) {
        goto loc_80119790;
    }
}

loc_801197D8:
{
    r27 = -1;
}

loc_801197DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(-1));
}

loc_801197E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80119800;
    }
}

loc_801197E4:
{
    r3 = r27;
    r4 = r28;
    r6 = r29;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r29);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r29) >> 31);
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x80119800u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80119818u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80119800:
{
    r11 = (r1 + 2848);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 2852));
    ctx->lr = r0;
    r1 = (r1 + 2848);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
// RECOMP_REGISTRATION base 0x80118B8C func_80118B8C preserves=true fpr_mask=0x00000000
