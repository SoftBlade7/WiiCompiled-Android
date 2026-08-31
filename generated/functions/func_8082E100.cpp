#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082E100(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8082E100;

loc_8082E100:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    r11 = (r1 + 240);
    // inline leaf 0x8002159C (7 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -24), r26);
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x8002159C
    r31 = r3;
    r26 = r4;
    r29 = 0x808B0000u;
    r3 = (r1 + 84);
    r5 = r26;
    r4 = (r31 + 48);
    r29 = (r29 + -14200);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r0 = MemoryInline::FlatRead16((r31 + 44));
    r28 = r31;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r27 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::FlatWriteFloat32((r31 + 48), f2.d);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
}

loc_8082E160:
{
    r3 = MemoryInline::FlatRead32((r28 + 184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082E168:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082E1DC;
    }
}

loc_8082E16C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 180));
    ctr = r12;
    ctx->lr = 0x8082E17Cu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r30 = r3;
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 180));
    ctr = r12;
    ctx->lr = 0x8082E194u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r30;
    r5 = (r1 + 108);
    ctx->lr = 0x8082E1A0u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80834348u>(ctx);
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
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8082E1A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082E1DC;
    }
}

loc_8082E1A8:
{
    r3 = (r1 + 72);
    r4 = (r31 + 48);
    r5 = (r1 + 108);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r0 = MemoryInline::FlatRead16((r31 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 76));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteFloat32((r31 + 48), f2.d);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
}

loc_8082E1DC:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(2));
}

loc_8082E1E8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8082E160;
    }
}

loc_8082E1EC:
{
    r3 = (r1 + 96);
    r4 = (r31 + 48);
    r5 = (r31 + 192);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8082E220u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r30 = 0x808E0000u;
    f0.d = MemoryInline::FlatReadFloat32((r30 + -30624));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8082E22C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8082E29C;
    }
}

loc_8082E230:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 96));
    r3 = (r1 + 96);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    ctx->lr = 0x8082E258u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r30 + -30624));
    r3 = (r1 + 60);
    r4 = (r1 + 96);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 48);
    r4 = (r31 + 192);
    r5 = (r1 + 60);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r0 = MemoryInline::FlatRead16((r31 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r31 + 48), f2.d);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
}

loc_8082E29C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    r4 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    r0 = 0;
    r5 = MemoryInline::FlatRead16((r31 + 44));
    r3 = (r1 + 36);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r29);
    r5 = (r5 | 1);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r5));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 36));
    r4 = (r4 + 16688);
    MemoryInline::FlatWriteFloat32((r31 + 52), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 208), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 24);
    r4 = (r31 + 48);
    r5 = (r1 + 36);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = 0x809C0000u;
    r6 = 1625882624;
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r4 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 36));
    r5 = (r31 + 48);
    r6 = (r6 + -8193);
    r7 = (r1 + 120);
    r8 = (r1 + 8);
    r9 = 0;
    ctx->lr = 0x8082E330u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8078F784u>(ctx);
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
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082E334:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082E3D8;
    }
}

loc_8082E338:
{
    r3 = (r1 + 12);
    r4 = (r31 + 48);
    r5 = (r1 + 144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80514838u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead16((r31 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r0 = (r0 | 1);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 108));
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 52), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8082E378:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8082E380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082E398;
    }
}

loc_8082E384:
{
    r5 = 0x802A0000u;
    r3 = r31;
    r4 = (r1 + 156);
    r5 = (r5 + 16712);
    ctx->lr = 0x8082E398u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821910u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8082E398:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8082E3A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082E3D8;
    }
}

loc_8082E3A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8082E3AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082E3BC;
    }
}

loc_8082E3B0:
{
    r3 = (r1 + 8);
    r4 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8082E3BC:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 15324));
    r3 = MemoryInline::FlatRead32((r3 + 64));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 7);
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r0));
}

loc_8082E3D8:
{
    r11 = (r1 + 240);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
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
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8082E100 func_8082E100 preserves=true fpr_mask=0x00000000
