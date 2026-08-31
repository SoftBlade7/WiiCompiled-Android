#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CBBC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806CBBC4;

loc_806CBBC4:
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
    r0 = MemoryInline::FlatRead8((r3 + 208));
    r31 = 0x808C0000u;
    r30 = r3;
    r7 = 0;
    r31 = (r31 + 17160);
    r5 = 0;
    ctr = r0;
}

loc_806CBBF8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_806CBC68;
    }
}

loc_806CBBFC:
{
    r4 = MemoryInline::FlatRead32((r3 + 224));
    r4_addr_2 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 196));
}

loc_806CBC0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_806CBC5C;
    }
}

loc_806CBC10:
{
    r0 = MemoryInline::FlatRead32((r3 + 308));
}

loc_806CBC18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_806CBC5C;
    }
}

loc_806CBC1C:
{
    r6 = MemoryInline::FlatRead8((r3 + 208));
    r5 = 0;
    r4 = (r7 & 255);
    MemoryInline::FlatWrite32((r3 + 308), r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_806CBC34:
{
    MemoryInline::FlatWrite8((r3 + 312), static_cast<uint8_t>(r7));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806CBC48;
    }
}

loc_806CBC3C:
{
    r0 = (r6 + -1);
    MemoryInline::FlatWrite8((r3 + 313), static_cast<uint8_t>(r0));
    goto loc_806CBC4C;
}

loc_806CBC48:
{
    MemoryInline::FlatWrite8((r3 + 313), static_cast<uint8_t>(r5));
}

loc_806CBC4C:
{
    r3 = MemoryInline::FlatRead32((r3 + 216));
    r4 = 623;
    ctx->lr = 0x806CBC58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8082055Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806CBC68;
}

loc_806CBC5C:
{
    r5 = (r5 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806CBBFC;
    }
}

loc_806CBC68:
{
    r0 = MemoryInline::FlatRead32((r30 + 308));
}

loc_806CBC70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806CBCA4;
    }
}

loc_806CBC74:
{
    r6 = 0;
    r5 = 0;
    r4 = 1;
    goto loc_806CBC98;
}

loc_806CBC84:
{
    r3 = MemoryInline::FlatRead32((r30 + 224));
    r6 = (r6 + 1);
    r3_addr_2 = (r3 + r5);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r5 = (r5 + 4);
    MemoryInline::FlatWrite8((r3 + 210), static_cast<uint8_t>(r4));
}

loc_806CBC98:
{
    r0 = MemoryInline::FlatRead8((r30 + 208));
}

loc_806CBCA0:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_806CBC84;
    }
}

loc_806CBCA4:
{
    r3 = MemoryInline::FlatRead32((r30 + 308));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806CBCAC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806CBE14;
    }
}

loc_806CBCB0:
{
    r0 = MemoryInline::FlatRead32((r31 + 96));
    r28 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r0 = (r28 * r0);
    r0 = (r3 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806CBDA4;
    }
}

loc_806CBCC4:
{
    r0 = MemoryInline::FlatRead8((r30 + 312));
    r0 = (r0 - r28);
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_806CBD30;
    }
}

loc_806CBCD0:
{
    r3 = MemoryInline::FlatRead32((r30 + 224));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_4 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_4);
    r0 = MemoryInline::FlatRead32((r27 + 196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CBCE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806CBD30;
    }
}

loc_806CBCE8:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806CBCFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = 0;
    MemoryInline::FlatWrite32((r27 + 196), r29);
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + -1500));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r27 + 200), r3);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 52));
    MemoryInline::FlatWriteFloat32((r27 + 204), f0.d);
    MemoryInline::FlatWrite8((r27 + 208), static_cast<uint8_t>(r29));
}

loc_806CBD30:
{
    r3 = MemoryInline::FlatRead8((r30 + 312));
    r0 = MemoryInline::FlatRead8((r30 + 208));
    r4 = (r3 + r28);
}

loc_806CBD40:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_806CBDA4;
    }
}

loc_806CBD44:
{
    r3 = MemoryInline::FlatRead32((r30 + 224));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_6 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_6);
    r0 = MemoryInline::FlatRead32((r27 + 196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CBD58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806CBDA4;
    }
}

loc_806CBD5C:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806CBD70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = 0;
    MemoryInline::FlatWrite32((r27 + 196), r29);
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + -1500));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r27 + 200), r3);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 52));
    MemoryInline::FlatWriteFloat32((r27 + 204), f0.d);
    MemoryInline::FlatWrite8((r27 + 208), static_cast<uint8_t>(r29));
}

loc_806CBDA4:
{
    r0 = MemoryInline::FlatRead8((r30 + 313));
    r3 = MemoryInline::FlatRead32((r30 + 224));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    r0 = MemoryInline::FlatRead8((r3 + 209));
}

loc_806CBDBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806CBE00;
    }
}

loc_806CBDC0:
{
    r4 = 0;
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 308), r0);
    r6 = 0;
    r5 = 0;
    MemoryInline::FlatWrite8((r30 + 312), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 313), static_cast<uint8_t>(r4));
    goto loc_806CBDF4;
}

loc_806CBDE0:
{
    r3 = MemoryInline::FlatRead32((r30 + 224));
    r6 = (r6 + 1);
    r3_addr_10 = (r3 + r5);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    r5 = (r5 + 4);
    MemoryInline::FlatWrite8((r3 + 210), static_cast<uint8_t>(r4));
}

loc_806CBDF4:
{
    r0 = MemoryInline::FlatRead8((r30 + 208));
}

loc_806CBDFC:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_806CBDE0;
    }
}

loc_806CBE00:
{
    r3 = MemoryInline::FlatRead32((r30 + 308));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_806CBE08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CBE14;
    }
}

loc_806CBE0C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 308), r0);
}

loc_806CBE14:
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806CBBC4 func_806CBBC4 preserves=true fpr_mask=0x00000000
