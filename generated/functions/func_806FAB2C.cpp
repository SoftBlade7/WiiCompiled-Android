#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FAB2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FAB2C;

loc_806FAB2C:
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
    r6 = 0x809C0000u;
    r7 = 0x808A0000u;
    r6 = MemoryInline::FlatRead32((r6 + 9000));
    r31 = r5;
    r30 = r3;
    r7 = (r7 + 3792);
    r5 = MemoryInline::FlatRead32((r6 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_806FAB60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FAE48;
    }
}

loc_806FAB64:
{
    r5 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_806FAB6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FAB74;
    }
}

loc_806FAB70:
{
    goto loc_806FAE48;
}

loc_806FAB74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FAB80;
    }
}

loc_806FAB78:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_806FAB84;
}

loc_806FAB80:
{
    r0 = -1;
}

loc_806FAB84:
{
}

loc_806FAB88:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(133))) {
        goto loc_806FABC4;
    }
}

loc_806FAB8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(85));
}

loc_806FAB90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FAC0C;
    }
}

loc_806FAB94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FABA4;
    }
}

loc_806FAB98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806FAB9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FAC54;
    }
}

loc_806FABA0:
{
    goto loc_806FAE48;
}

loc_806FABA4:
{
}

loc_806FABA8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(125))) {
        goto loc_806FABB8;
    }
}

loc_806FABAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(123));
}

loc_806FABB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FAC9C;
    }
}

loc_806FABB4:
{
    goto loc_806FAE48;
}

loc_806FABB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(131));
}

loc_806FABBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FACE4;
    }
}

loc_806FABC0:
{
    goto loc_806FAE48;
}

loc_806FABC4:
{
}

loc_806FABC8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(141))) {
        goto loc_806FABEC;
    }
}

loc_806FABCC:
{
}

loc_806FABD0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(137))) {
        goto loc_806FABE0;
    }
}

loc_806FABD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(135));
}

loc_806FABD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FAE48;
    }
}

loc_806FABDC:
{
    goto loc_806FAD2C;
}

loc_806FABE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(139));
}

loc_806FABE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FAE48;
    }
}

loc_806FABE8:
{
    goto loc_806FAD74;
}

loc_806FABEC:
{
}

loc_806FABF0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(145))) {
        goto loc_806FAC00;
    }
}

loc_806FABF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(143));
}

loc_806FABF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FAE48;
    }
}

loc_806FABFC:
{
    goto loc_806FADBC;
}

loc_806FAC00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(147));
}

loc_806FAC04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FAE48;
    }
}

loc_806FAC08:
{
    goto loc_806FAE04;
}

loc_806FAC0C:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_3 & -16);
    r0 = (r7 + 32);
    r27 = (r0 + r4);
    r28 = (r3 + 16);
    r29 = 0;
}

loc_806FAC20:
{
    r0 = MemoryInline::FlatRead32((r30 + 464));
    f1.d = MemoryInline::FlatReadFloat32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FAC2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FAC3C;
    }
}

loc_806FAC30:
{
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x806FAC3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80213E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FAC3C:
{
    r29 = (r29 + 1);
    r28 = (r28 + 28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(4));
}

loc_806FAC48:
{
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FAC20;
    }
}

loc_806FAC50:
{
    goto loc_806FAE48;
}

loc_806FAC54:
{
    r4 = (r4 * 56);
    r0 = (r7 + 80);
    r28 = (r3 + 16);
    r29 = 0;
    r27 = (r0 + r4);
}

loc_806FAC68:
{
    r0 = MemoryInline::FlatRead32((r30 + 464));
    f1.d = MemoryInline::FlatReadFloat32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FAC74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FAC84;
    }
}

loc_806FAC78:
{
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x806FAC84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80213E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FAC84:
{
    r29 = (r29 + 1);
    r28 = (r28 + 28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(14));
}

loc_806FAC90:
{
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FAC68;
    }
}

loc_806FAC98:
{
    goto loc_806FAE48;
}

loc_806FAC9C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r0 = (r7 + 304);
    r27 = (r0 + r4);
    r28 = (r3 + 16);
    r29 = 0;
}

loc_806FACB0:
{
    r0 = MemoryInline::FlatRead32((r30 + 464));
    f1.d = MemoryInline::FlatReadFloat32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FACBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FACCC;
    }
}

loc_806FACC0:
{
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x806FACCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80213E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FACCC:
{
    r29 = (r29 + 1);
    r28 = (r28 + 28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
}

loc_806FACD8:
{
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FACB0;
    }
}

loc_806FACE0:
{
    goto loc_806FAE48;
}

loc_806FACE4:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & -8);
    r0 = (r7 + 320);
    r27 = (r0 + r4);
    r28 = (r3 + 16);
    r29 = 0;
}

loc_806FACF8:
{
    r0 = MemoryInline::FlatRead32((r30 + 464));
    f1.d = MemoryInline::FlatReadFloat32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FAD04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FAD14;
    }
}

loc_806FAD08:
{
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x806FAD14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80213E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FAD14:
{
    r29 = (r29 + 1);
    r28 = (r28 + 28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
}

loc_806FAD20:
{
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FACF8;
    }
}

loc_806FAD28:
{
    goto loc_806FAE48;
}

loc_806FAD2C:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_4 & -16);
    r0 = (r7 + 336);
    r27 = (r0 + r4);
    r28 = (r3 + 16);
    r29 = 0;
}

loc_806FAD40:
{
    r0 = MemoryInline::FlatRead32((r30 + 464));
    f1.d = MemoryInline::FlatReadFloat32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FAD4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FAD5C;
    }
}

loc_806FAD50:
{
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x806FAD5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80213E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FAD5C:
{
    r29 = (r29 + 1);
    r28 = (r28 + 28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(4));
}

loc_806FAD68:
{
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FAD40;
    }
}

loc_806FAD70:
{
    goto loc_806FAE48;
}

loc_806FAD74:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_5 & -8);
    r0 = (r7 + 384);
    r27 = (r0 + r4);
    r28 = (r3 + 16);
    r29 = 0;
}

loc_806FAD88:
{
    r0 = MemoryInline::FlatRead32((r30 + 464));
    f1.d = MemoryInline::FlatReadFloat32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FAD94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FADA4;
    }
}

loc_806FAD98:
{
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x806FADA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80213E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FADA4:
{
    r29 = (r29 + 1);
    r28 = (r28 + 28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
}

loc_806FADB0:
{
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FAD88;
    }
}

loc_806FADB8:
{
    goto loc_806FAE48;
}

loc_806FADBC:
{
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_6 & -8);
    r0 = (r7 + 400);
    r27 = (r0 + r4);
    r28 = (r3 + 16);
    r29 = 0;
}

loc_806FADD0:
{
    r0 = MemoryInline::FlatRead32((r30 + 464));
    f1.d = MemoryInline::FlatReadFloat32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FADDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FADEC;
    }
}

loc_806FADE0:
{
    r3 = r28;
    r4 = r31;
    ctx->lr = 0x806FADECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80213E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FADEC:
{
    r29 = (r29 + 1);
    r28 = (r28 + 28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
}

loc_806FADF8:
{
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FADD0;
    }
}

loc_806FAE00:
{
    goto loc_806FAE48;
}

loc_806FAE04:
{
    r4 = (r4 * 12);
    r0 = (r7 + 416);
    r27 = (r3 + 16);
    r29 = 0;
    r28 = (r0 + r4);
}

loc_806FAE18:
{
    r0 = MemoryInline::FlatRead32((r30 + 464));
    f1.d = MemoryInline::FlatReadFloat32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FAE24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FAE34;
    }
}

loc_806FAE28:
{
    r3 = r27;
    r4 = r31;
    ctx->lr = 0x806FAE34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80213E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FAE34:
{
    r29 = (r29 + 1);
    r27 = (r27 + 28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
}

loc_806FAE40:
{
    r28 = (r28 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FAE18;
    }
}

loc_806FAE48:
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
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FAB2C func_806FAB2C preserves=true fpr_mask=0x00000000
