#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80117040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80117040;

loc_80117040:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011704C:
{
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 64), r28);
    r28 = r5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117074;
    }
}

loc_80117070:
{
    r3 = MemoryInline::FlatRead32((r13 + -26696));
}

loc_80117074:
{
    MemoryInline::FlatWriteRam32((r1 + 32), r4);
    r4 = (r1 + 32);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x80117084u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F00DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117088:
{
    r30 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117098;
    }
}

loc_80117090:
{
    r3 = 0;
    goto loc_801173C4;
}

loc_80117098:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801170A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011718C;
    }
}

loc_801170A4:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801170B0;
    }
}

loc_801170A8:
{
    r5 = 0;
    goto loc_801170C4;
}

loc_801170B0:
{
}

loc_801170B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801170C0;
    }
}

loc_801170B8:
{
    r5 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_801170C4;
}

loc_801170C0:
{
    r5 = (r3 + 16);
}

loc_801170C4:
{
    r4 = MemoryInline::FlatRead32(r28);
    r29 = (r13 + -26712);
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r13 + -26712), r0);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801170E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801170EC;
    }
}

loc_801170E4:
{
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_80117160;
}

loc_801170EC:
{
}

loc_801170F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_80117100;
    }
}

loc_801170F4:
{
    f0.d = MemoryInline::FlatReadFloat64(r29);
    MemoryInline::FlatWriteFloat64((r3 + 16), f0.d);
    goto loc_80117160;
}

loc_80117100:
{
}

loc_80117104:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80117160;
    }
}

loc_80117108:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117110:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80117118;
    }
}

loc_80117114:
{
    ctx->lr = 0x80117118u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80117118:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8011711C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117128;
    }
}

loc_80117120:
{
    r5 = 0;
    goto loc_8011715C;
}

loc_80117128:
{
    r3 = r29;
    ctx->lr = 0x80117130u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F23F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 47;
    r5 = r3;
    goto loc_80117150;
}

loc_8011713C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80117144:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_8011714C;
    }
}

loc_80117148:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
}

loc_8011714C:
{
    r3 = (r3 + 1);
}

loc_80117150:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011713C;
    }
}

loc_8011715C:
{
    MemoryInline::FlatWrite32((r30 + 16), r5);
}

loc_80117160:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80117164:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117170;
    }
}

loc_80117168:
{
    r3 = 0;
    goto loc_801173C4;
}

loc_80117170:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117178:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117184;
    }
}

loc_8011717C:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    goto loc_801173C4;
}

loc_80117184:
{
    r3 = (r30 + 16);
    goto loc_801173C4;
}

loc_8011718C:
{
}

loc_80117190:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8011727C;
    }
}

loc_80117194:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801171A0;
    }
}

loc_80117198:
{
    r4 = 0;
    goto loc_801171B4;
}

loc_801171A0:
{
}

loc_801171A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801171B0;
    }
}

loc_801171A8:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_801171B4;
}

loc_801171B0:
{
    r4 = (r3 + 16);
}

loc_801171B4:
{
    f1.d = MemoryInline::FlatReadFloat64(r28);
    r29 = (r13 + -26704);
    f0.d = MemoryInline::FlatReadFloat64(r4);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r13 + -26704), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801171D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801171E0;
    }
}

loc_801171D4:
{
    r0 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_80117250;
}

loc_801171E0:
{
}

loc_801171E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801171F0;
    }
}

loc_801171E8:
{
    MemoryInline::FlatWriteFloat64((r3 + 16), f0.d);
    goto loc_80117250;
}

loc_801171F0:
{
}

loc_801171F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80117250;
    }
}

loc_801171F8:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117200:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80117208;
    }
}

loc_80117204:
{
    ctx->lr = 0x80117208u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80117208:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8011720C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117218;
    }
}

loc_80117210:
{
    r5 = 0;
    goto loc_8011724C;
}

loc_80117218:
{
    r3 = r29;
    ctx->lr = 0x80117220u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F23F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 47;
    r5 = r3;
    goto loc_80117240;
}

loc_8011722C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80117234:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_8011723C;
    }
}

loc_80117238:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
}

loc_8011723C:
{
    r3 = (r3 + 1);
}

loc_80117240:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011722C;
    }
}

loc_8011724C:
{
    MemoryInline::FlatWrite32((r30 + 16), r5);
}

loc_80117250:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80117254:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117260;
    }
}

loc_80117258:
{
    r3 = 0;
    goto loc_801173C4;
}

loc_80117260:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117268:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117274;
    }
}

loc_8011726C:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    goto loc_801173C4;
}

loc_80117274:
{
    r3 = (r30 + 16);
    goto loc_801173C4;
}

loc_8011727C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80117280:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117288;
    }
}

loc_80117284:
{
    r31 = MemoryInline::FlatRead32((r13 + -26696));
}

loc_80117288:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x80117298u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F00DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011729C:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801172AC;
    }
}

loc_801172A4:
{
    r3 = 0;
    goto loc_801173C4;
}

loc_801172AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801172B8;
    }
}

loc_801172B0:
{
    r29 = 0;
    goto loc_801172D0;
}

loc_801172B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801172C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801172CC;
    }
}

loc_801172C4:
{
    r29 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_801172D0;
}

loc_801172CC:
{
    r29 = (r3 + 16);
}

loc_801172D0:
{
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r31 = r3;
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = (r3 + r31);
    r3 = (r3 + 1);
    ctx->lr = 0x801172F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013224u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80117310:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117320;
    }
}

loc_80117314:
{
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r30 + 16), r0);
    goto loc_80117394;
}

loc_80117320:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80117324:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117334;
    }
}

loc_80117328:
{
    f0.d = MemoryInline::FlatReadFloat64(r31);
    MemoryInline::FlatWriteFloat64((r30 + 16), f0.d);
    goto loc_80117394;
}

loc_80117334:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117338:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117394;
    }
}

loc_8011733C:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117344:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011734C;
    }
}

loc_80117348:
{
    ctx->lr = 0x8011734Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8011734C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80117350:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011735C;
    }
}

loc_80117354:
{
    r5 = 0;
    goto loc_80117390;
}

loc_8011735C:
{
    r3 = r31;
    ctx->lr = 0x80117364u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F23F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 47;
    r5 = r3;
    goto loc_80117384;
}

loc_80117370:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80117378:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80117380;
    }
}

loc_8011737C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
}

loc_80117380:
{
    r3 = (r3 + 1);
}

loc_80117384:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117370;
    }
}

loc_80117390:
{
    MemoryInline::FlatWrite32((r30 + 16), r5);
}

loc_80117394:
{
    r3 = r31;
    ctx->lr = 0x8011739Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801173A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801173AC;
    }
}

loc_801173A4:
{
    r3 = 0;
    goto loc_801173C4;
}

loc_801173AC:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801173B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801173C0;
    }
}

loc_801173B8:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    goto loc_801173C4;
}

loc_801173C0:
{
    r3 = (r30 + 16);
}

loc_801173C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80117040 func_80117040 preserves=true fpr_mask=0x00000000
