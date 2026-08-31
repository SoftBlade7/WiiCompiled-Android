#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D7EDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801D7EDC;

loc_801D7EDC:
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
    r27 = 0x802A0000u;
    r30 = r3;
    r27 = (r27 + 5312);
    ctx->lr = 0x801D7F00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D9E94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r28 = r3;
    // inline leaf 0x801D9F08 (2 guest instruction(s))
    r3 = (r3 + 2056);
    // end of inlined leaf 0x801D9F08
    r4 = MemoryInline::FlatRead32(r3);
    r3 = r28;
    r28 = MemoryInline::FlatRead32((r4 + 12));
    r31 = MemoryInline::FlatRead32((r28 + 44));
    // inline leaf 0x801D9F10 (2 guest instruction(s))
    r3 = (r3 + 2112);
    // end of inlined leaf 0x801D9F10
    r29 = (r3 + 864);
    r3 = r31;
    r4 = (r30 + 772);
    r5 = 0;
    r6 = 14;
    ctx->lr = 0x801D7F34u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801D3EA8u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D7F38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D7F4C;
    }
}

loc_801D7F3C:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_801D81F4;
}

loc_801D7F4C:
{
    r3 = (r30 + 772);
    r4 = (r13 + -28376);
    r5 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D5500u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D7F60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D7F74;
    }
}

loc_801D7F64:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_801D81F4;
}

loc_801D7F74:
{
    r0 = MemoryInline::FlatRead8((r30 + 780));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_801D7F7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D7F90;
    }
}

loc_801D7F80:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_801D81F4;
}

loc_801D7F90:
{
    r3 = (r30 + 781);
    r4 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D5874u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D7FA0:
{
    MemoryInline::FlatWrite32((r31 + 24), r3);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D7FB8;
    }
}

loc_801D7FA8:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_801D81F4;
}

loc_801D7FB8:
{
    r5 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r6 = (r1 + 12);
    r4 = 12;
    r7 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D39C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D7FD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D7FE8;
    }
}

loc_801D7FD8:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_801D81F4;
}

loc_801D7FE8:
{
    r3 = r31;
    r4 = (r27 + 136);
    r5 = (r1 + 8);
    ctx->lr = 0x801D7FF8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801D4B00u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D7FFC:
{
    MemoryInline::FlatWrite32((r30 + 812), r3);
    r6 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801D8018;
    }
}

loc_801D8008:
{
    r0 = 0;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_801D81F4;
}

loc_801D8018:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(256));
}

loc_801D801C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D8030;
    }
}

loc_801D8020:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_801D81F4;
}

loc_801D8030:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_801D808C;
    }
}

loc_801D8034:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x801D8044u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801D3EA8u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D8048:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D805C;
    }
}

loc_801D804C:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_801D81F4;
}

loc_801D805C:
{
    r4 = MemoryInline::FlatRead32((r30 + 812));
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D5874u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D806C:
{
    MemoryInline::FlatWrite32((r30 + 812), r3);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D8084;
    }
}

loc_801D8074:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_801D81F4;
}

loc_801D8084:
{
    MemoryInline::FlatWrite32((r31 + 12), r3);
    goto loc_801D8094;
}

loc_801D808C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 12), r0);
}

loc_801D8094:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D809C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D80AC;
    }
}

loc_801D80A0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 824), r0);
    goto loc_801D816C;
}

loc_801D80AC:
{
    r3 = r31;
    r4 = (r27 + 152);
    r5 = (r1 + 8);
    ctx->lr = 0x801D80BCu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801D4B00u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D80C0:
{
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D80E0;
    }
}

loc_801D80C8:
{
    r3 = 7;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 824), r0);
    goto loc_801D81F4;
}

loc_801D80E0:
{
    r3 = (r30 + 772);
    r4 = (r27 + 164);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D5500u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801D80F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801D8104;
    }
}

loc_801D80F8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 824), r0);
    goto loc_801D810C;
}

loc_801D8104:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 824), r0);
}

loc_801D810C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(256));
}

loc_801D8110:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801D816C;
    }
}

loc_801D8114:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801D8118:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D816C;
    }
}

loc_801D811C:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r31;
    r6 = (r27 + 176);
    r7 = 0;
    r5 = (r4 + r28);
    ctx->lr = 0x801D8134u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801D3CB8u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D8138:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D8144;
    }
}

loc_801D813C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 824), r0);
}

loc_801D8144:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r31;
    r6 = (r13 + -28316);
    r29 = 0;
    r5 = (r4 + r28);
    r7 = 0;
    ctx->lr = 0x801D8160u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801D3CB8u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D8164:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D816C;
    }
}

loc_801D8168:
{
    MemoryInline::FlatWrite32((r30 + 824), r29);
}

loc_801D816C:
{
    r3 = r31;
    r4 = (r27 + 188);
    r5 = (r1 + 8);
    ctx->lr = 0x801D817Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801D4B00u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D8180:
{
    MemoryInline::FlatWrite32((r30 + 828), r3);
    r0 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801D819C;
    }
}

loc_801D818C:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_801D81F4;
}

loc_801D819C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(256));
}

loc_801D81A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D81B0;
    }
}

loc_801D81A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 828), r0);
    goto loc_801D81E0;
}

loc_801D81B0:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_801D81D8;
    }
}

loc_801D81B4:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r31;
    r6 = (r13 + -28304);
    r7 = 59;
    r5 = (r4 + r0);
    ctx->lr = 0x801D81CCu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801D3CB8u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    goto loc_801D81DC;
}

loc_801D81D8:
{
    r0 = 0;
}

loc_801D81DC:
{
    MemoryInline::FlatWrite32((r30 + 828), r0);
}

loc_801D81E0:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 816), r3);
    r3 = 1;
    MemoryInline::FlatWrite32((r31 + 20), r0);
}

loc_801D81F4:
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

// RECOMP_GUEST_ABI gpr_read=0xFE003FFB gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D7EDC func_801D7EDC preserves=true fpr_mask=0x00000000
