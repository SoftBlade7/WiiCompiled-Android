#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F4A40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F4A40;

loc_801F4A40:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = (r5 + 65536);
    r9 = MemoryInline::FlatRead32(r4);
}

loc_801F4A60:
{
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = 0;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801F4A80;
    }
}

loc_801F4A78:
{
    r10 = 0;
    goto loc_801F4AE4;
}

loc_801F4A80:
{
    r10 = r9;
}

loc_801F4A84:
{
    r0 = MemoryInline::FlatRead16(r10);
    r0 = (r0 & 1);
}

loc_801F4A8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F4A98;
    }
}

loc_801F4A90:
{
    r10 = 0;
    goto loc_801F4AE4;
}

loc_801F4A98:
{
    r11 = MemoryInline::FlatRead32((r10 + 24));
}

loc_801F4AA0:
{
    if ((static_cast<uint32_t>(r11) > static_cast<uint32_t>(r5))) {
        goto loc_801F4AD4;
    }
}

loc_801F4AA4:
{
    r0 = MemoryInline::FlatRead32((r10 + 20));
    r8 = (r11 + r0);
    r0 = (r8 + -1);
}

loc_801F4AB4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_801F4AD4;
    }
}

loc_801F4AB8:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r3 = (r5 - r11);
    r5 = MemoryInline::FlatRead32((r10 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r10 + 8), r0);
    goto loc_801F4AE4;
}

loc_801F4AD4:
{
    r10 = MemoryInline::FlatRead32((r10 + 32));
}

loc_801F4ADC:
{
    if ((static_cast<uint32_t>(r10) != static_cast<uint32_t>(r9))) {
        goto loc_801F4A84;
    }
}

loc_801F4AE0:
{
    r10 = 0;
}

loc_801F4AE4:
{
}

loc_801F4AE8:
{
    MemoryInline::FlatWrite32(r6, r10);
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_801F4AFC;
    }
}

loc_801F4AF0:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r7, r0);
    goto loc_801F4D0C;
}

loc_801F4AFC:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r7, r0);
    r4 = MemoryInline::FlatRead32(r4);
    r5 = r4;
}

loc_801F4B0C:
{
    r5 = MemoryInline::FlatRead32((r5 + 36));
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 & 1);
}

loc_801F4B18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F4B28;
    }
}

loc_801F4B1C:
{
    MemoryInline::FlatWrite32(r6, r5);
    r3 = 1;
    goto loc_801F4B58;
}

loc_801F4B28:
{
    r3 = MemoryInline::FlatRead32((r5 + 24));
    r0 = (r3 + 65536);
}

loc_801F4B34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801F4B44;
    }
}

loc_801F4B38:
{
    MemoryInline::FlatWrite32(r6, r5);
    r3 = 0;
    goto loc_801F4B58;
}

loc_801F4B44:
{
}

loc_801F4B48:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_801F4B0C;
    }
}

loc_801F4B4C:
{
    r0 = 0;
    r3 = 0;
    MemoryInline::FlatWrite32(r6, r0);
}

loc_801F4B58:
{
}

loc_801F4B5C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801F4BFC;
    }
}

loc_801F4B60:
{
    r4 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F4B68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F4B7C;
    }
}

loc_801F4B6C:
{
    r0 = 0;
    r3 = 30;
    MemoryInline::FlatWrite32(r6, r0);
    goto loc_801F4D70;
}

loc_801F4B7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4BA0;
    }
}

loc_801F4B80:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F4B88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4BA0;
    }
}

loc_801F4B8C:
{
    r3 = MemoryInline::FlatRead32((r4 + 24));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801F4B98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4BA0;
    }
}

loc_801F4B9C:
{
    r31 = 1;
}

loc_801F4BA0:
{
    r3 = r27;
    ctx->lr = 0x801F4BA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F4940u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F4BAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4BBC;
    }
}

loc_801F4BB0:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_801F4D70;
}

loc_801F4BBC:
{
    r4 = MemoryInline::FlatRead32(r30);
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801F4BC8:
{
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 & -3);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r4 + 12), r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4BFC;
    }
}

loc_801F4BE0:
{
    r3 = r27;
    r4 = 1;
    ctx->lr = 0x801F4BECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C5B4u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F4BF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4BFC;
    }
}

loc_801F4BF4:
{
    r3 = 17;
    goto loc_801F4D70;
}

loc_801F4BFC:
{
    r0 = (r29 + 65536);
}

loc_801F4C04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801F4CE8;
    }
}

loc_801F4C08:
{
    r4 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 4);
}

loc_801F4C14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4C5C;
    }
}

loc_801F4C18:
{
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r0 = PPC_Divwu(static_cast<uint32_t>(r29), static_cast<uint32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r29 - r0);
    r0 = (r29 - r0);
    MemoryInline::FlatWrite32((r4 + 24), r0);
    r6 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead8((r27 + 32));
    r4 = MemoryInline::FlatRead32((r6 + 20));
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r3 = PPC_Divwu(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r3 = (r3 * r4);
    r3 = (r29 - r3);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    goto loc_801F4CFC;
}

loc_801F4C5C:
{
    r0 = MemoryInline::FlatRead32((r27 + 28));
}

loc_801F4C64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801F4CA0;
    }
}

loc_801F4C68:
{
    r0 = MemoryInline::FlatRead32((r27 + 48));
}

loc_801F4C70:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_801F4C80;
    }
}

loc_801F4C74:
{
    r0 = MemoryInline::FlatRead32((r27 + 8));
}

loc_801F4C7C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_801F4CA0;
    }
}

loc_801F4C80:
{
    r0 = MemoryInline::FlatRead16((r27 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
}

loc_801F4C88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F4C98;
    }
}

loc_801F4C8C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r4 + 20), r0);
    goto loc_801F4CA0;
}

loc_801F4C98:
{
    r3 = 34;
    goto loc_801F4D70;
}

loc_801F4CA0:
{
    r4 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r0 = PPC_Divwu(static_cast<uint32_t>(r29), static_cast<uint32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r29 - r0);
    r0 = (r29 - r0);
    MemoryInline::FlatWrite32((r4 + 24), r0);
    r6 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead8((r27 + 32));
    r4 = MemoryInline::FlatRead32((r6 + 20));
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r3 = PPC_Divwu(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r3 = (r3 * r4);
    r3 = (r29 - r3);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    goto loc_801F4CFC;
}

loc_801F4CE8:
{
    r3 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r3 + 24), r29);
    r3 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_801F4CFC:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_801F4D0C:
{
    r5 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32(r28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_801F4D18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4D6C;
    }
}

loc_801F4D1C:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_801F4D24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F4D30;
    }
}

loc_801F4D28:
{
    MemoryInline::FlatWrite32(r28, r5);
    goto loc_801F4D6C;
}

loc_801F4D30:
{
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r3 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r0 = MemoryInline::FlatRead32((r5 + 36));
    r3 = MemoryInline::FlatRead32((r5 + 32));
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r4 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWrite32((r5 + 32), r4);
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32((r5 + 36), r0);
    MemoryInline::FlatWrite32((r4 + 36), r5);
    r3 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r3 + 32), r5);
    MemoryInline::FlatWrite32(r28, r5);
}

loc_801F4D6C:
{
    r3 = 0;
}

loc_801F4D70:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F4A40 func_801F4A40 preserves=true fpr_mask=0x00000000
