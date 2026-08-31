#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80661A5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_ca_0 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80661A5C;

loc_80661A5C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    ctx->lr = 0x80661A84u;
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
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r8 = MemoryInline::FlatRead32((r3 + 8408));
    r3 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + 8456));
    r0 = 6;
    r4 = MemoryInline::FlatRead32((r8 + 10524));
    r31 = -1;
    r9 = MemoryInline::FlatRead32((r3 + -10424));
    r30 = 0;
    r10 = (r4 * 88);
    r11 = 0;
    r12 = 0;
    r4 = 65536;
    r3 = (r8 + r10);
    r5 = 1;
    r7 = MemoryInline::FlatRead32((r3 + 72));
    ctr = r0;
}

loc_80661ACC:
{
    r0 = (r12 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r0 & r7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661B38;
    }
}

loc_80661ADC:
{
    r3 = (r8 + r10);
    r11 = (r11 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_80661AEC:
{
    if ((static_cast<uint32_t>(r12) != static_cast<uint32_t>(r0))) {
        goto loc_80661B24;
    }
}

loc_80661AF0:
{
    r0 = MemoryInline::FlatRead16((r9 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80661AF8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80661B14;
    }
}

loc_80661AFC:
{
    r3 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r3);
    r3 = (r9 + r0);
    r3 = (r3 + 56);
    goto loc_80661B18;
}

loc_80661B14:
{
    r3 = 0;
}

loc_80661B18:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r3 + -28648));
    goto loc_80661B28;
}

loc_80661B24:
{
    r0 = MemoryInline::FlatRead16((r6 + 384));
}

loc_80661B28:
{
}

loc_80661B2C:
{
    r30 = (r30 + r0);
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r31))) {
        goto loc_80661B38;
    }
}

loc_80661B34:
{
    r31 = r0;
}

loc_80661B38:
{
    r12 = (r12 + 1);
    r0 = (r12 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r0 & r7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80661BA8;
    }
}

loc_80661B4C:
{
    r3 = (r8 + r10);
    r11 = (r11 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_80661B5C:
{
    if ((static_cast<uint32_t>(r12) != static_cast<uint32_t>(r0))) {
        goto loc_80661B94;
    }
}

loc_80661B60:
{
    r0 = MemoryInline::FlatRead16((r9 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80661B68:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80661B84;
    }
}

loc_80661B6C:
{
    r3 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r3);
    r3 = (r9 + r0);
    r3 = (r3 + 56);
    goto loc_80661B88;
}

loc_80661B84:
{
    r3 = 0;
}

loc_80661B88:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r3 + -28648));
    goto loc_80661B98;
}

loc_80661B94:
{
    r0 = MemoryInline::FlatRead16((r6 + 576));
}

loc_80661B98:
{
}

loc_80661B9C:
{
    r30 = (r30 + r0);
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r31))) {
        goto loc_80661BA8;
    }
}

loc_80661BA4:
{
    r31 = r0;
}

loc_80661BA8:
{
    r6 = (r6 + 384);
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80661ACC;
    }
}

loc_80661BB4:
{
    r0 = (r11 & 65535);
    r3 = (r1 + 8);
    r30 = PPC_Divwu(static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
    r28 = 1;
    r4 = 100;
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
    r0_addc_right_0 = r0;
    r0 = (r8 + r0_addc_right_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_0 + r6);
    r0 = (r0 + r0_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_80661BDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80661C50;
    }
}

loc_80661BE0:
{
}

loc_80661BE4:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(5300))) {
        goto loc_80661C18;
    }
}

loc_80661BE8:
{
}

loc_80661BEC:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(5700))) {
        goto loc_80661C18;
    }
}

loc_80661BF0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
}

loc_80661BF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80661C00;
    }
}

loc_80661BF8:
{
    r28 = 1;
    goto loc_80661CB8;
}

loc_80661C00:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(70));
}

loc_80661C04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80661C10;
    }
}

loc_80661C08:
{
    r28 = 2;
    goto loc_80661CB8;
}

loc_80661C10:
{
    r28 = 3;
    goto loc_80661CB8;
}

loc_80661C18:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(4800));
}

loc_80661C1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80661CB8;
    }
}

loc_80661C20:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(5200));
}

loc_80661C24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80661CB8;
    }
}

loc_80661C28:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(60));
}

loc_80661C2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80661C38;
    }
}

loc_80661C30:
{
    r28 = 1;
    goto loc_80661CB8;
}

loc_80661C38:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(100));
}

loc_80661C3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80661C48;
    }
}

loc_80661C40:
{
    r28 = 2;
    goto loc_80661CB8;
}

loc_80661C48:
{
    r28 = 3;
    goto loc_80661CB8;
}

loc_80661C50:
{
}

loc_80661C54:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(5000))) {
        goto loc_80661C88;
    }
}

loc_80661C58:
{
}

loc_80661C5C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(5700))) {
        goto loc_80661C88;
    }
}

loc_80661C60:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
}

loc_80661C64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80661C70;
    }
}

loc_80661C68:
{
    r28 = 1;
    goto loc_80661CB8;
}

loc_80661C70:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(70));
}

loc_80661C74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80661C80;
    }
}

loc_80661C78:
{
    r28 = 2;
    goto loc_80661CB8;
}

loc_80661C80:
{
    r28 = 3;
    goto loc_80661CB8;
}

loc_80661C88:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(4500));
}

loc_80661C8C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80661CB8;
    }
}

loc_80661C90:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(5200));
}

loc_80661C94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80661CB8;
    }
}

loc_80661C98:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(60));
}

loc_80661C9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80661CA8;
    }
}

loc_80661CA0:
{
    r28 = 1;
    goto loc_80661CB8;
}

loc_80661CA8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(100));
}

loc_80661CAC:
{
    r28 = 3;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80661CB8;
    }
}

loc_80661CB4:
{
    r28 = 2;
}

loc_80661CB8:
{
    MemoryInline::FlatWrite8((r29 + 63), static_cast<uint8_t>(r28));
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x80661CC8u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x80661A5C func_80661A5C preserves=true fpr_mask=0x00000000
