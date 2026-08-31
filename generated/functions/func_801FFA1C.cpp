#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FFA1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FFA1C;

loc_801FFA1C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r8;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWrite32(r8, r0);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801FFA5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FFA68;
    }
}

loc_801FFA60:
{
    r3 = 0;
    goto loc_801FFCD8;
}

loc_801FFA68:
{
    r3 = MemoryInline::FlatRead16(r3);
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r3 - r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_801FFA78:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801FFA84;
    }
}

loc_801FFA7C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_801FFA80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FFA8C;
    }
}

loc_801FFA84:
{
    r3 = 26;
    goto loc_801FFCD8;
}

loc_801FFA8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801FFA90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FFAD4;
    }
}

loc_801FFA94:
{
    r3 = r30;
    r4 = r7;
    r5 = (r1 + 8);
    r6 = (r1 + 16);
    ctx->lr = 0x801FFAA8u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F63A0u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FFAAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FFAB4;
    }
}

loc_801FFAB0:
{
    goto loc_801FFCD8;
}

loc_801FFAB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FFABC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FFAC8;
    }
}

loc_801FFAC0:
{
    r3 = 0;
    goto loc_801FFCD8;
}

loc_801FFAC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r30 + 36), r0);
    goto loc_801FFBC8;
}

loc_801FFAD4:
{
    r3 = MemoryInline::FlatRead32((r4 + 36));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FFAE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FFBC8;
    }
}

loc_801FFAE4:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r6 = (r30 + 36);
    r4 = MemoryInline::FlatRead32((r4 + 40));
    r5 = 0;
    r3 = (r3 + 4);
    ctx->lr = 0x801FFAFCu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FC29Cu>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FFB00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FFB08;
    }
}

loc_801FFB04:
{
    goto loc_801FFCD8;
}

loc_801FFB08:
{
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FFB14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FFBC8;
    }
}

loc_801FFB18:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
}

loc_801FFB20:
{
    r8 = MemoryInline::FlatRead32((r3 + 608));
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801FFB30;
    }
}

loc_801FFB28:
{
    r4 = 0;
    goto loc_801FFB34;
}

loc_801FFB30:
{
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FFB34:
{
    r3 = MemoryInline::FlatRead16(r4);
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r3 + -1);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r7 = (r0 & r3);
    r5 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r8 & r3);
    r6 = (0 - r7);
    r4 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r6 = (r6 | r7);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
}

loc_801FFB78:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801FFB84;
    }
}

loc_801FFB7C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 36), r0);
}

loc_801FFB84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801FFB88:
{
    MemoryInline::FlatWrite32((r30 + 32), r8);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FFB98;
    }
}

loc_801FFB90:
{
    r4 = 0;
    goto loc_801FFBA0;
}

loc_801FFB98:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FFBA0:
{
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r3 = 28;
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r30 + 40), r0);
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + -1);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    goto loc_801FFCD8;
}

loc_801FFBC8:
{
    r5 = MemoryInline::FlatRead32((r30 + 8));
    r3 = r28;
    r6 = MemoryInline::FlatRead32((r30 + 32));
    r4 = r29;
    r0 = MemoryInline::FlatRead32((r5 + 608));
    r8 = (r1 + 12);
    r5 = MemoryInline::FlatRead32((r30 + 36));
    r10 = 1;
    r0 = (r0 - r6);
    r6 = MemoryInline::FlatRead16((r30 + 44));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r7 = MemoryInline::FlatRead32((r1 + 8));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r9 = (r9_rot_1 & 134217727);
    ctx->lr = 0x801FFC00u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802053D4u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801FFC04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801FFC18;
    }
}

loc_801FFC08:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FFC10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FFC18;
    }
}

loc_801FFC14:
{
    goto loc_801FFCD8;
}

loc_801FFC18:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_801FFC20:
{
    MemoryInline::FlatWrite32(r31, r0);
    r6 = MemoryInline::FlatRead32((r30 + 36));
    r5 = MemoryInline::FlatRead32((r1 + 12));
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801FFC38;
    }
}

loc_801FFC30:
{
    r4 = 0;
    goto loc_801FFC40;
}

loc_801FFC38:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FFC40:
{
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r3 = MemoryInline::FlatRead16(r4);
    r7 = (r0 + r5);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r0 = (r3 + -1);
    r0 = (r0 & r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
    r4 = (r6 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FFC6C;
    }
}

loc_801FFC64:
{
    MemoryInline::FlatWrite32((r30 + 36), r4);
    goto loc_801FFC74;
}

loc_801FFC6C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 36), r0);
}

loc_801FFC74:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r5 = (r0 + r5);
    MemoryInline::FlatWrite32((r30 + 32), r5);
    r0 = MemoryInline::FlatRead32((r3 + 608));
}

loc_801FFC8C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_801FFC94;
    }
}

loc_801FFC90:
{
    MemoryInline::FlatWrite32((r3 + 608), r5);
}

loc_801FFC94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801FFC98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FFCA4;
    }
}

loc_801FFC9C:
{
    r5 = 0;
    goto loc_801FFCAC;
}

loc_801FFCA4:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r5 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FFCAC:
{
    r6 = MemoryInline::FlatRead32((r30 + 32));
    r3 = r30;
    r0 = MemoryInline::FlatRead8((r5 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r30 + 40), r0);
    r5 = MemoryInline::FlatRead16(r5);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F62D4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = 0;
}

loc_801FFCD8:
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FFA1C func_801FFA1C preserves=true fpr_mask=0x00000000
