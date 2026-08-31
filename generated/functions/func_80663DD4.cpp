#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80663DD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80663DD4;

loc_80663DD4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80663DF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806640F4;
    }
}

loc_80663DF8:
{
    ctx->lr = 0x80663DFCu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8066506Cu>(ctx);
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
    r3 = r31;
    ctx->lr = 0x80663E04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806651B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl0_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl0_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F34:
{
    r6 = 1;
}

loc_inl0_0x80656F38:
{
    r3 = r6;
}

loc_inl0_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
}

loc_80663E14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80663E68;
    }
}

loc_80663E18:
{
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    ctx->lr = 0x80663E20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80656A8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80663E24:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(40))) {
        goto loc_80663E44;
    }
}

loc_80663E28:
{
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 68));
}

loc_80663E40:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(6))) {
        goto loc_80663E68;
    }
}

loc_80663E44:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 139));
}

loc_80663E60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80663E68;
    }
}

loc_80663E64:
{
    // inline leaf 0x806568F0 (6 guest instruction(s))
}

loc_inl1_0x806568F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 236));
}

loc_inl1_0x806568F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x806568FC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 236), r0);
    goto loc_inl1_cont_806568F0;
}

loc_inl1_return:
{
}

loc_inl1_cont_806568F0:
{
    // end of inlined leaf 0x806568F0
}

loc_80663E68:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_80663E84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80663EA4;
    }
}

loc_80663E88:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_80663E90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80663EA4;
    }
}

loc_80663E94:
{
    r0 = MemoryInline::FlatRead8((r4 + 139));
}

loc_80663E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80663EA4;
    }
}

loc_80663EA0:
{
    // inline leaf 0x80656908 (6 guest instruction(s))
}

loc_inl2_0x80656908:
{
    r0 = MemoryInline::FlatRead32((r3 + 236));
}

loc_inl2_0x80656910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80656914:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 236), r0);
    goto loc_inl2_cont_80656908;
}

loc_inl2_return:
{
}

loc_inl2_cont_80656908:
{
    // end of inlined leaf 0x80656908
}

loc_80663EA4:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl3_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x80656F38;
    }
}

loc_inl3_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl3_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl3_0x80656F38;
    }
}

loc_inl3_0x80656F34:
{
    r6 = 1;
}

loc_inl3_0x80656F38:
{
    r3 = r6;
}

loc_inl3_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
}

loc_80663EB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80663EC0;
    }
}

loc_80663EB8:
{
    r0 = 0;
    goto loc_80663F08;
}

loc_80663EC0:
{
    r5 = MemoryInline::FlatRead32((r31 + 8));
}

loc_80663EC8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80663F04;
    }
}

loc_80663ECC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
    r3 = MemoryInline::FlatRead32((r3 + 72));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    r0 = (r3 & r0);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    goto loc_80663F08;
}

loc_80663F04:
{
    r0 = 0;
}

loc_80663F08:
{
}

loc_80663F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80664084;
    }
}

loc_80663F10:
{
    r0 = 3;
    r3 = 0;
    ctr = r0;
}

loc_80663F1C:
{
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r4 = (r31 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80663F30:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80663F3C;
    }
}

loc_80663F34:
{
    r0 = r5;
    goto loc_80663F40;
}

loc_80663F3C:
{
    r0 = -1;
}

loc_80663F40:
{
}

loc_80663F44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80663F6C;
    }
}

loc_80663F48:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_80663F50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80663F6C;
    }
}

loc_80663F54:
{
}

loc_80663F58:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80663F64;
    }
}

loc_80663F5C:
{
    r4 = MemoryInline::FlatRead32((r4 + 52));
    goto loc_80664074;
}

loc_80663F64:
{
    r4 = -1;
    goto loc_80664074;
}

loc_80663F6C:
{
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r4 = (r31 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80663F84:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80663F90;
    }
}

loc_80663F88:
{
    r0 = r5;
    goto loc_80663F94;
}

loc_80663F90:
{
    r0 = -1;
}

loc_80663F94:
{
}

loc_80663F98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80663FC0;
    }
}

loc_80663F9C:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_80663FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80663FC0;
    }
}

loc_80663FA8:
{
}

loc_80663FAC:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80663FB8;
    }
}

loc_80663FB0:
{
    r4 = MemoryInline::FlatRead32((r4 + 52));
    goto loc_80664074;
}

loc_80663FB8:
{
    r4 = -1;
    goto loc_80664074;
}

loc_80663FC0:
{
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r4 = (r31 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80663FD8:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80663FE4;
    }
}

loc_80663FDC:
{
    r0 = r5;
    goto loc_80663FE8;
}

loc_80663FE4:
{
    r0 = -1;
}

loc_80663FE8:
{
}

loc_80663FEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80664014;
    }
}

loc_80663FF0:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_80663FF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80664014;
    }
}

loc_80663FFC:
{
}

loc_80664000:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_8066400C;
    }
}

loc_80664004:
{
    r4 = MemoryInline::FlatRead32((r4 + 52));
    goto loc_80664074;
}

loc_8066400C:
{
    r4 = -1;
    goto loc_80664074;
}

loc_80664014:
{
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r4 = (r31 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_8066402C:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80664038;
    }
}

loc_80664030:
{
    r0 = r5;
    goto loc_8066403C;
}

loc_80664038:
{
    r0 = -1;
}

loc_8066403C:
{
}

loc_80664040:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80664068;
    }
}

loc_80664044:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_8066404C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80664068;
    }
}

loc_80664050:
{
}

loc_80664054:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80664060;
    }
}

loc_80664058:
{
    r4 = MemoryInline::FlatRead32((r4 + 52));
    goto loc_80664074;
}

loc_80664060:
{
    r4 = -1;
    goto loc_80664074;
}

loc_80664068:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80663F1C;
    }
}

loc_80664070:
{
    r4 = -1;
}

loc_80664074:
{
    r3 = (-1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0 = (r4 + 1);
    r0 = (r3 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_80664084:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80664088:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806640B8;
    }
}

loc_8066408C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 139));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806640A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806640F4;
    }
}

loc_806640AC:
{
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl4_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x80656F38;
    }
}

loc_inl4_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl4_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl4_0x80656F38;
    }
}

loc_inl4_0x80656F34:
{
    r6 = 1;
}

loc_inl4_0x80656F38:
{
    r3 = r6;
}

loc_inl4_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806640B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806640F4;
    }
}

loc_806640B8:
{
    r31 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 8456));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80662C88u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806640C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806640F4;
    }
}

loc_806640CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 8456));
    // inline leaf 0x80662D20 (24 guest instruction(s))
}

loc_inl5_0x80662D20:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl5_0x80662D28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x80662D34;
    }
}

loc_inl5_0x80662D2C:
{
    r3 = 0;
    goto loc_inl5_cont_80662D20;
}

loc_inl5_0x80662D34:
{
    r5 = 0x809C0000u;
    r4 = 1;
    r5 = MemoryInline::FlatRead32((r5 + 8408));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 89));
    r5 = MemoryInline::FlatRead32((r5 + 72));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r5 = (r5 & ~r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x80662D78;
    }
}

loc_inl5_0x80662D60:
{
    r0 = MemoryInline::FlatRead32((r3 + 2532));
    r0 = (r5 & r0);
    r0 = (r0 - r5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    goto loc_inl5_cont_80662D20;
}

loc_inl5_0x80662D78:
{
    r3 = 0;
}

loc_inl5_cont_80662D20:
{
    // end of inlined leaf 0x80662D20
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806640D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806640F4;
    }
}

loc_806640DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 8456));
    // inline leaf 0x80662C58 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2524));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x80662C58
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806640E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806640F4;
    }
}

loc_806640EC:
{
    r3 = MemoryInline::FlatRead32((r31 + 8456));
    ctx->lr = 0x806640F4u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80662BECu>(ctx);
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
}

loc_806640F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80663DD4 func_80663DD4 preserves=true fpr_mask=0x00000000
