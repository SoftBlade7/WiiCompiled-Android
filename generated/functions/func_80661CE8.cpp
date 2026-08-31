#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80661CE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r0_addc_right_4 = 0;
    uint32_t r0_addc_right_5 = 0;
    uint32_t r0_addc_right_6 = 0;
    uint32_t r0_addc_right_7 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_adde_left_3 = 0;
    uint32_t r0_adde_left_4 = 0;
    uint32_t r0_adde_left_5 = 0;
    uint32_t r0_adde_left_6 = 0;
    uint32_t r0_adde_left_7 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80661CE8;

loc_80661CE8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    r3 = 1;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = 0;
    r5 = MemoryInline::FlatRead32((r4 + 8408));
    r4 = MemoryInline::FlatRead32((r5 + 10524));
    r4 = (r4 * 88);
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 72));
    ctr = r0;
}

loc_80661D2C:
{
    r0 = (r6 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661D40;
    }
}

loc_80661D3C:
{
    r30 = (r30 + 1);
}

loc_80661D40:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661D58;
    }
}

loc_80661D54:
{
    r30 = (r30 + 1);
}

loc_80661D58:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661D70;
    }
}

loc_80661D6C:
{
    r30 = (r30 + 1);
}

loc_80661D70:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661D88;
    }
}

loc_80661D84:
{
    r30 = (r30 + 1);
}

loc_80661D88:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661DA0;
    }
}

loc_80661D9C:
{
    r30 = (r30 + 1);
}

loc_80661DA0:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661DB8;
    }
}

loc_80661DB4:
{
    r30 = (r30 + 1);
}

loc_80661DB8:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80661D2C;
    }
}

loc_80661DC0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_80661DC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8066201C;
    }
}

loc_80661DC8:
{
    r3 = (r1 + 8);
    ctx->lr = 0x80661DD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80555464u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r4 = r30;
    r3 = (r1 + 8);
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_1 = r0;
    r0 = (r8 + r0_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_1 + r6);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r4 = 0x809C0000u;
    r0 = 12;
    r8 = MemoryInline::FlatRead32((r4 + 8408));
    r9 = 0;
    r4 = 0;
    r7 = 1;
    ctr = r0;
}

loc_80661DF8:
{
    r5 = MemoryInline::FlatRead32((r8 + 10524));
    r0 = (r4 & 255);
    r6 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r5 = (r5 * 88);
    r5 = (r8 + r5);
    r5 = MemoryInline::FlatRead32((r5 + 72));
    r5 = (r6 & r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80661F00;
    }
}

loc_80661E18:
{
}

loc_80661E1C:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r3))) {
        goto loc_80661EFC;
    }
}

loc_80661E20:
{
    MemoryInline::FlatWrite8((r31 + 62), static_cast<uint8_t>(r4));
    r3 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r3 + 8408));
    r3 = MemoryInline::FlatRead32((r7 + 10524));
    r3 = (r3 * 88);
    r3 = (r7 + r3);
    r6 = MemoryInline::FlatRead8((r3 + 89));
}

loc_80661E40:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r6))) {
        goto loc_80661E9C;
    }
}

loc_80661E44:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & 1020);
    r5 = 0;
    r4 = (r3 + r7);
    goto loc_80661E58;
}

loc_80661E54:
{
    r5 = (r5 + 1);
}

loc_80661E58:
{
}

loc_80661E5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r6))) {
        goto loc_80661E74;
    }
}

loc_80661E60:
{
    r3 = MemoryInline::FlatRead32((r7 + 10524));
    r3 = (r3 * 88);
    r3 = (r3 + r4);
    r3 = MemoryInline::FlatRead8((r3 + 91));
    goto loc_80661E84;
}

loc_80661E74:
{
    r3 = MemoryInline::FlatRead32((r7 + 10524));
    r3 = (r3 * 88);
    r3 = (r7 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 88));
}

loc_80661E84:
{
}

loc_80661E88:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r3))) {
        goto loc_80661E54;
    }
}

loc_80661E8C:
{
    r0 = MemoryInline::FlatRead8((r31 + 30));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r0));
    goto loc_80661F08;
}

loc_80661E9C:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r8 = 0;
    r5 = (r3 + r7);
    goto loc_80661EB0;
}

loc_80661EAC:
{
    r8 = (r8 + 1);
}

loc_80661EB0:
{
}

loc_80661EB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r6))) {
        goto loc_80661ECC;
    }
}

loc_80661EB8:
{
    r3 = MemoryInline::FlatRead32((r7 + 10524));
    r3 = (r3 * 88);
    r3 = (r3 + r5);
    r3 = MemoryInline::FlatRead8((r3 + 91));
    goto loc_80661EDC;
}

loc_80661ECC:
{
    r3 = MemoryInline::FlatRead32((r7 + 10524));
    r3 = (r3 * 88);
    r3 = (r7 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 88));
}

loc_80661EDC:
{
}

loc_80661EE0:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r3))) {
        goto loc_80661EAC;
    }
}

loc_80661EE4:
{
    r0 = (r4 * 56);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 86));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r0));
    goto loc_80661F08;
}

loc_80661EFC:
{
    r9 = (r9 + 1);
}

loc_80661F00:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80661DF8;
    }
}

loc_80661F08:
{
    r0 = MemoryInline::FlatRead8((r31 + 60));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80661F14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80662010;
    }
}

loc_80661F18:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80661F20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80661F2C;
    }
}

loc_80661F24:
{
}

loc_80661F28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80661F9C;
    }
}

loc_80661F2C:
{
    r3 = (r1 + 8);
    r4 = 32;
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_3 = r0;
    r0 = (r8 + r0_addc_right_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_3)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_3 = r0;
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_3 + r6);
    r0 = (r0 + r0_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r4 = 0x809C0000u;
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80661F4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80661F94;
    }
}

loc_80661F50:
{
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    r3 = 0;
}

loc_80661F5C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_80661F6C;
    }
}

loc_80661F60:
{
}

loc_80661F64:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80661F6C;
    }
}

loc_80661F68:
{
    r3 = 1;
}

loc_80661F6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80661F70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80661F94;
    }
}

loc_80661F74:
{
    r3 = (r1 + 8);
    r4 = 31;
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_4 = r0;
    r0 = (r8 + r0_addc_right_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_4)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_4 = r0;
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_4 + r6);
    r0 = (r0 + r0_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r3 = (r3 + r30);
    r30 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(32));
}

loc_80661F8C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80661F94;
    }
}

loc_80661F90:
{
    r30 = (r30 + -31);
}

loc_80661F94:
{
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r30));
    goto loc_80662010;
}

loc_80661F9C:
{
    r3 = (r1 + 8);
    r4 = 10;
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_2 = r0;
    r0 = (r8 + r0_addc_right_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_2 + r6);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r4 = 0x809C0000u;
    r0 = (r3 + 32);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 2920));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80661FC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80662008;
    }
}

loc_80661FC4:
{
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    r3 = 0;
}

loc_80661FD0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_80661FE0;
    }
}

loc_80661FD4:
{
}

loc_80661FD8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80661FE0;
    }
}

loc_80661FDC:
{
    r3 = 1;
}

loc_80661FE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80661FE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80662008;
    }
}

loc_80661FE8:
{
    r3 = (r1 + 8);
    r4 = 9;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x805555CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
    r3 = (r3 + r30);
    r30 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(10));
}

loc_80662000:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80662008;
    }
}

loc_80662004:
{
    r30 = (r30 + -9);
}

loc_80662008:
{
    r0 = (r30 + 32);
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r0));
}

loc_80662010:
{
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x8066201Cu;
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
    InvokeDirectCpu<0x80555538u>(ctx);
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

loc_8066201C:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80661CE8 func_80661CE8 preserves=true fpr_mask=0x00000000
