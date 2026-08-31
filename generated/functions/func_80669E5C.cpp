#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80669E5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_adde_left_3 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80669E5C;

loc_80669E5C:
{
    r29 = MemoryInline::FlatRead32((r27 + 16904));
    r26 = 1;
    r0 = (r29 * 448);
    r31 = (r27 + r0);
    goto loc_80669F6C;
}

loc_80669E70:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = (r3 & 65535);
}

loc_80669E80:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_80669EA8;
    }
}

loc_80669E84:
{
    r4 = (r30 + 65536);
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + -28660));
    r0 = PPC_Slw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    goto loc_80669EAC;
}

loc_80669EA8:
{
    r0 = 0;
}

loc_80669EAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80669EB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80669F64;
    }
}

loc_80669EB4:
{
    r3 = r30;
    r5 = r29;
    r4 = 0;
    ctx->lr = 0x80669EC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80548E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r27 + 16884));
}

loc_80669ECC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80669F28;
    }
}

loc_80669ED0:
{
    r0 = MemoryInline::FlatRead16((r3 + 80));
    r4 = MemoryInline::FlatRead8((r3 + 82));
    r0 = (r0 * 60);
    r5 = MemoryInline::FlatRead32((r31 + 2512));
    r3 = MemoryInline::FlatRead16((r3 + 84));
}

loc_80669EE8:
{
    r0 = (r4 + r0);
    r0 = (r0 * 1000);
    r3 = (r3 + r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80669F04;
    }
}

loc_80669EF8:
{
    r4 = MemoryInline::FlatRead32((r31 + 2288));
}

loc_80669F00:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80669F0C;
    }
}

loc_80669F04:
{
    r0 = 1;
    goto loc_80669F2C;
}

loc_80669F0C:
{
}

loc_80669F10:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r3))) {
        goto loc_80669F20;
    }
}

loc_80669F18:
{
}

loc_80669F1C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r3))) {
        goto loc_80669F2C;
    }
}

loc_80669F20:
{
    r0 = 1;
    goto loc_80669F2C;
}

loc_80669F28:
{
    r0 = 1;
}

loc_80669F2C:
{
}

loc_80669F30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80669F64;
    }
}

loc_80669F34:
{
    r3 = 0x809C0000u;
    r6 = r29;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r4 = 0;
    r5 = 0;
    r7 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621C3C (15 guest instruction(s))
}

loc_inl0_0x80621C3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621C44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621C48:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621C50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621C54:
{
    r8 = 1;
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r3 + 252), r0);
    MemoryInline::FlatWrite32((r3 + 256), r4);
    MemoryInline::FlatWrite8((r3 + 260), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 264), r6);
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r7));
    goto loc_inl0_cont_80621C3C;
}

loc_inl0_return:
{
}

loc_inl0_cont_80621C3C:
{
    // end of inlined leaf 0x80621C3C
    r0 = 2;
    MemoryInline::FlatWrite32((r27 + 16904), r29);
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_80669F64:
{
    r31 = (r31 + 448);
    r29 = (r29 + 1);
}

loc_80669F6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(32));
}

loc_80669F70:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80669E70;
    }
}

loc_80669F74:
{
    r28 = 1;
    MemoryInline::FlatWrite8((r27 + 16908), static_cast<uint8_t>(r28));
    r3 = (r1 + 64);
    ctx->lr = 0x80669F84u;
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
    r26 = (r30 + 65536);
    r29 = (r1 + 472);
    r30 = 0;
    r31 = 0;
}

loc_80669F94:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = (r3 & 65535);
}

loc_80669FA4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_80669FC8;
    }
}

loc_80669FA8:
{
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r26 + -28660));
    r0 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    goto loc_80669FCC;
}

loc_80669FC8:
{
    r0 = 0;
}

loc_80669FCC:
{
}

loc_80669FD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80669FE0;
    }
}

loc_80669FD4:
{
    MemoryInline::FlatWrite32(r29, r31);
    r29 = (r29 + 4);
    r30 = (r30 + 1);
}

loc_80669FE0:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(32));
}

loc_80669FE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80669F94;
    }
}

loc_80669FEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80669FF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066A000;
    }
}

loc_80669FF4:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066A040;
}

loc_8066A000:
{
    r4 = r30;
    r3 = (r1 + 64);
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
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r1 + 472);
    r3_addr_1 = (r3 + r0);
    r6 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite32((r27 + 16904), r6);
    r4 = 0;
    r5 = 0;
    r7 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621C3C (15 guest instruction(s))
}

loc_inl2_0x80621C3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x80621C44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80621C48:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x80621C50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80621C54:
{
    r8 = 1;
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r3 + 252), r0);
    MemoryInline::FlatWrite32((r3 + 256), r4);
    MemoryInline::FlatWrite8((r3 + 260), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 264), r6);
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r7));
    goto loc_inl2_cont_80621C3C;
}

loc_inl2_return:
{
}

loc_inl2_cont_80621C3C:
{
    // end of inlined leaf 0x80621C3C
    r0 = 2;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
}

loc_8066A040:
{
    r3 = (r1 + 64);
    r4 = -1;
    ctx->lr = 0x8066A04Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066AD88:
{
    r26 = MemoryInline::FlatRead32((r1 + 600));
    r27 = MemoryInline::FlatRead32((r1 + 604));
    r28 = MemoryInline::FlatRead32((r1 + 608));
    r29 = MemoryInline::FlatRead32((r1 + 612));
    r30 = MemoryInline::FlatRead32((r1 + 616));
    r31 = MemoryInline::FlatRead32((r1 + 620));
    r0 = MemoryInline::FlatRead32((r1 + 628));
    ctx->lr = r0;
    r1 = (r1 + 624);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80669E5C func_80669E5C preserves=true fpr_mask=0x00000000
