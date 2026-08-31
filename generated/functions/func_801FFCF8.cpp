#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FFCF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FFCF8;

loc_801FFCF8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = 0;
    r31 = r6;
    MemoryInline::FlatWrite32(r7, r0);
    r28 = r5;
    r30 = r7;
    r29 = r4;
    r6 = MemoryInline::FlatRead32((r4 + 8));
    r27 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 40));
    r5 = r31;
    r3 = (r6 + 4);
    r6 = (r29 + 36);
    r7 = (r1 + 12);
    ctx->lr = 0x801FFD44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FC3F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_801FFD48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FFD50;
    }
}

loc_801FFD4C:
{
    goto loc_801FFF4C;
}

loc_801FFD50:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_801FFD58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801FFD6C;
    }
}

loc_801FFD5C:
{
    r5 = MemoryInline::FlatRead32((r29 + 36));
    r0 = (r5 + 65536);
}

loc_801FFD68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801FFE1C;
    }
}

loc_801FFD6C:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
}

loc_801FFD74:
{
    r8 = MemoryInline::FlatRead32((r3 + 608));
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801FFD84;
    }
}

loc_801FFD7C:
{
    r4 = 0;
    goto loc_801FFD88;
}

loc_801FFD84:
{
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FFD88:
{
    r3 = MemoryInline::FlatRead16(r4);
    r0 = MemoryInline::FlatRead32((r29 + 32));
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

loc_801FFDCC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801FFDD8;
    }
}

loc_801FFDD0:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r29 + 36), r0);
}

loc_801FFDD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801FFDDC:
{
    MemoryInline::FlatWrite32((r29 + 32), r8);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FFDEC;
    }
}

loc_801FFDE4:
{
    r4 = 0;
    goto loc_801FFDF4;
}

loc_801FFDEC:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FFDF4:
{
    r5 = MemoryInline::FlatRead32((r29 + 32));
    r3 = 28;
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r29 + 40), r0);
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + -1);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    goto loc_801FFF4C;
}

loc_801FFE1C:
{
    r0 = MemoryInline::FlatRead8((r27 + 32));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_801FFE28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FFE30;
    }
}

loc_801FFE2C:
{
    r31 = r0;
}

loc_801FFE30:
{
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r6 = r31;
    r8 = MemoryInline::FlatRead32((r29 + 32));
    r3 = r27;
    r0 = MemoryInline::FlatRead32((r4 + 608));
    r31 = 0;
    r7 = MemoryInline::FlatRead32(r30);
    r9 = 1;
    r0 = (r0 - r8);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4 = (r28 + r7);
    r7 = (r1 + 8);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r8 = (r8_rot_1 & 134217727);
    ctx->lr = 0x801FFE68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020551Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801FFE6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801FFE80;
    }
}

loc_801FFE70:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801FFE78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801FFE80;
    }
}

loc_801FFE7C:
{
    goto loc_801FFF38;
}

loc_801FFE80:
{
}

loc_801FFE84:
{
    r31 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead32((r29 + 36));
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801FFE98;
    }
}

loc_801FFE90:
{
    r4 = 0;
    goto loc_801FFEA0;
}

loc_801FFE98:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FFEA0:
{
    r0 = MemoryInline::FlatRead16((r29 + 44));
    r3 = MemoryInline::FlatRead16(r4);
    r6 = (r0 + r31);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r0 = (r3 + -1);
    r0 = (r0 & r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
    r4 = (r5 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FFECC;
    }
}

loc_801FFEC4:
{
    MemoryInline::FlatWrite32((r29 + 36), r4);
    goto loc_801FFED4;
}

loc_801FFECC:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r29 + 36), r0);
}

loc_801FFED4:
{
    r0 = MemoryInline::FlatRead32((r29 + 32));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r5 = (r0 + r31);
    MemoryInline::FlatWrite32((r29 + 32), r5);
    r0 = MemoryInline::FlatRead32((r3 + 608));
}

loc_801FFEEC:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_801FFEF4;
    }
}

loc_801FFEF0:
{
    MemoryInline::FlatWrite32((r3 + 608), r5);
}

loc_801FFEF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801FFEF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FFF04;
    }
}

loc_801FFEFC:
{
    r5 = 0;
    goto loc_801FFF0C;
}

loc_801FFF04:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r5 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FFF0C:
{
    r6 = MemoryInline::FlatRead32((r29 + 32));
    r3 = r29;
    r0 = MemoryInline::FlatRead8((r5 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r29 + 40), r0);
    r5 = MemoryInline::FlatRead16(r5);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
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

loc_801FFF38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FFF3C:
{
    MemoryInline::FlatWrite32(r30, r31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FFF48;
    }
}

loc_801FFF44:
{
    goto loc_801FFF4C;
}

loc_801FFF48:
{
    r3 = 0;
}

loc_801FFF4C:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
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
// RECOMP_REGISTRATION base 0x801FFCF8 func_801FFCF8 preserves=true fpr_mask=0x00000000
