#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FEF94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

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

    goto loc_801FEF94;

loc_801FEF94:
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
    r29 = r5;
    MemoryInline::FlatWrite32(r7, r0);
    r27 = r3;
    r28 = r4;
    r30 = r6;
    r5 = MemoryInline::FlatRead16((r4 + 44));
    r31 = r7;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801FEFCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FEFD8;
    }
}

loc_801FEFD0:
{
    r3 = 0;
    goto loc_801FF214;
}

loc_801FEFD8:
{
    r0 = MemoryInline::FlatRead16(r3);
    r7 = (r0 - r5);
}

loc_801FEFE4:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r7))) {
        goto loc_801FEFEC;
    }
}

loc_801FEFE8:
{
    r30 = r7;
}

loc_801FEFEC:
{
    r6 = MemoryInline::FlatRead32((r4 + 8));
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r5 = MemoryInline::FlatRead32((r6 + 608));
    r0 = (r3 + r30);
}

loc_801FF000:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r5))) {
        goto loc_801FF018;
    }
}

loc_801FF004:
{
    r30 = (r5 - r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r7));
}

loc_801FF00C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FF018;
    }
}

loc_801FF010:
{
    r3 = 0;
    goto loc_801FF214;
}

loc_801FF018:
{
    r5 = MemoryInline::FlatRead32((r4 + 36));
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FF024:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF1C4;
    }
}

loc_801FF028:
{
    r4 = MemoryInline::FlatRead32((r4 + 40));
    r3 = (r6 + 4);
    r6 = (r28 + 36);
    r5 = 0;
    ctx->lr = 0x801FF03Cu;
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

loc_801FF040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FF048;
    }
}

loc_801FF044:
{
    goto loc_801FF214;
}

loc_801FF048:
{
    r5 = MemoryInline::FlatRead32((r28 + 36));
    r0 = (r5 + 65536);
}

loc_801FF054:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801FF108;
    }
}

loc_801FF058:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
}

loc_801FF060:
{
    r8 = MemoryInline::FlatRead32((r3 + 608));
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_801FF070;
    }
}

loc_801FF068:
{
    r4 = 0;
    goto loc_801FF074;
}

loc_801FF070:
{
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF074:
{
    r3 = MemoryInline::FlatRead16(r4);
    r0 = MemoryInline::FlatRead32((r28 + 32));
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

loc_801FF0B8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801FF0C4;
    }
}

loc_801FF0BC:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r28 + 36), r0);
}

loc_801FF0C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801FF0C8:
{
    MemoryInline::FlatWrite32((r28 + 32), r8);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF0D8;
    }
}

loc_801FF0D0:
{
    r4 = 0;
    goto loc_801FF0E0;
}

loc_801FF0D8:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF0E0:
{
    r5 = MemoryInline::FlatRead32((r28 + 32));
    r3 = 28;
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r28 + 40), r0);
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + -1);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    goto loc_801FF214;
}

loc_801FF108:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r6 = MemoryInline::FlatRead32((r28 + 32));
    r8 = MemoryInline::FlatRead32((r3 + 608));
    r0 = (r6 + r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
}

loc_801FF11C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FF1C4;
    }
}

loc_801FF120:
{
}

loc_801FF124:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_801FF130;
    }
}

loc_801FF128:
{
    r4 = 0;
    goto loc_801FF134;
}

loc_801FF130:
{
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF134:
{
    r3 = MemoryInline::FlatRead16(r4);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r0 = (r3 + -1);
    r7 = (r6 & r0);
    r5 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
    r3 = (r8 & r0);
    r4 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r4));
    r6 = (0 - r7);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r6 = (r6 | r7);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
}

loc_801FF174:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801FF180;
    }
}

loc_801FF178:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r28 + 36), r0);
}

loc_801FF180:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801FF184:
{
    MemoryInline::FlatWrite32((r28 + 32), r8);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF194;
    }
}

loc_801FF18C:
{
    r4 = 0;
    goto loc_801FF19C;
}

loc_801FF194:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FF19C:
{
    r5 = MemoryInline::FlatRead32((r28 + 32));
    r3 = 27;
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r28 + 40), r0);
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + -1);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    goto loc_801FF214;
}

loc_801FF1C4:
{
    r6 = MemoryInline::FlatRead16((r28 + 44));
    r3 = r27;
    r4 = r29;
    r7 = r30;
    r8 = (r1 + 8);
    r9 = 1;
    ctx->lr = 0x801FF1E0u;
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
    InvokeDirectCpu<0x80205058u>(ctx);
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

loc_801FF1E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FF1F8;
    }
}

loc_801FF1E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FF1F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FF1F8;
    }
}

loc_801FF1F4:
{
    goto loc_801FF214;
}

loc_801FF1F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r28;
    MemoryInline::FlatWrite32(r31, r0);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead32((r28 + 36));
    ctx->lr = 0x801FF210u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FEE78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = 0;
}

loc_801FF214:
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
// RECOMP_REGISTRATION base 0x801FEF94 func_801FEF94 preserves=true fpr_mask=0x00000000
