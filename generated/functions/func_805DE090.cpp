#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DE090(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805DE090;

loc_805DE090:
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
    r4 = 0x809C0000u;
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r31 = MemoryInline::FlatRead32((r3 + 632));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805DE0BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE0C8;
    }
}

loc_805DE0C0:
{
    r31 = 0;
    goto loc_805DE11C;
}

loc_805DE0C8:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7216);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE118;
    }
}

loc_805DE0D4:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE0E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE100;
}

loc_805DE0EC:
{
}

loc_805DE0F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805DE0FC;
    }
}

loc_805DE0F4:
{
    r0 = 1;
    goto loc_805DE10C;
}

loc_805DE0FC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE100:
{
}

loc_805DE104:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE0EC;
    }
}

loc_805DE108:
{
    r0 = 0;
}

loc_805DE10C:
{
}

loc_805DE110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE118;
    }
}

loc_805DE114:
{
    goto loc_805DE11C;
}

loc_805DE118:
{
    r31 = 0;
}

loc_805DE11C:
{
    r0 = MemoryInline::FlatRead8((r29 + 856));
}

loc_805DE124:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805DE134;
    }
}

loc_805DE128:
{
}

loc_805DE12C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805DE17C;
    }
}

loc_805DE130:
{
    goto loc_805DE1C0;
}

loc_805DE134:
{
    r0 = MemoryInline::FlatRead32((r31 + 10996));
}

loc_805DE13C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE15C;
    }
}

loc_805DE140:
{
}

loc_805DE144:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805DE164;
    }
}

loc_805DE148:
{
}

loc_805DE14C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805DE16C;
    }
}

loc_805DE150:
{
}

loc_805DE154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_805DE174;
    }
}

loc_805DE158:
{
    goto loc_805DE1C0;
}

loc_805DE15C:
{
    r30 = 96;
    goto loc_805DE1C0;
}

loc_805DE164:
{
    r30 = 97;
    goto loc_805DE1C0;
}

loc_805DE16C:
{
    r30 = 98;
    goto loc_805DE1C0;
}

loc_805DE174:
{
    r30 = 99;
    goto loc_805DE1C0;
}

loc_805DE17C:
{
    r0 = MemoryInline::FlatRead32((r31 + 10996));
}

loc_805DE184:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE1A4;
    }
}

loc_805DE188:
{
}

loc_805DE18C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805DE1AC;
    }
}

loc_805DE190:
{
}

loc_805DE194:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805DE1B4;
    }
}

loc_805DE198:
{
}

loc_805DE19C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_805DE1BC;
    }
}

loc_805DE1A0:
{
    goto loc_805DE1C0;
}

loc_805DE1A4:
{
    r30 = 100;
    goto loc_805DE1C0;
}

loc_805DE1AC:
{
    r30 = 101;
    goto loc_805DE1C0;
}

loc_805DE1B4:
{
    r30 = 102;
    goto loc_805DE1C0;
}

loc_805DE1BC:
{
    r30 = 103;
}

loc_805DE1C0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r27 = MemoryInline::FlatRead32((r3 + 436));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE1D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE1E0;
    }
}

loc_805DE1D8:
{
    r27 = 0;
    goto loc_805DE234;
}

loc_805DE1E0:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17720);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE230;
    }
}

loc_805DE1EC:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE200u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE218;
}

loc_805DE204:
{
}

loc_805DE208:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE214;
    }
}

loc_805DE20C:
{
    r0 = 1;
    goto loc_805DE224;
}

loc_805DE214:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE218:
{
}

loc_805DE21C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE204;
    }
}

loc_805DE220:
{
    r0 = 0;
}

loc_805DE224:
{
}

loc_805DE228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE230;
    }
}

loc_805DE22C:
{
    goto loc_805DE234;
}

loc_805DE230:
{
    r27 = 0;
}

loc_805DE234:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE238:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE244;
    }
}

loc_805DE23C:
{
    r27 = 0;
    goto loc_805DE298;
}

loc_805DE244:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17780);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE294;
    }
}

loc_805DE250:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE27C;
}

loc_805DE268:
{
}

loc_805DE26C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE278;
    }
}

loc_805DE270:
{
    r0 = 1;
    goto loc_805DE288;
}

loc_805DE278:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE27C:
{
}

loc_805DE280:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE268;
    }
}

loc_805DE284:
{
    r0 = 0;
}

loc_805DE288:
{
}

loc_805DE28C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE294;
    }
}

loc_805DE290:
{
    goto loc_805DE298;
}

loc_805DE294:
{
    r27 = 0;
}

loc_805DE298:
{
}

loc_805DE29C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_805DE2AC;
    }
}

loc_805DE2A0:
{
    r0 = (r29 + 836);
    MemoryInline::FlatWrite32((r27 + 2316), r0);
    MemoryInline::FlatWrite32((r27 + 2120), r0);
}

loc_805DE2AC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r27 = MemoryInline::FlatRead32((r3 + 440));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE2C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE2CC;
    }
}

loc_805DE2C4:
{
    r27 = 0;
    goto loc_805DE320;
}

loc_805DE2CC:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17720);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE31C;
    }
}

loc_805DE2D8:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE2ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE304;
}

loc_805DE2F0:
{
}

loc_805DE2F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE300;
    }
}

loc_805DE2F8:
{
    r0 = 1;
    goto loc_805DE310;
}

loc_805DE300:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE304:
{
}

loc_805DE308:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE2F0;
    }
}

loc_805DE30C:
{
    r0 = 0;
}

loc_805DE310:
{
}

loc_805DE314:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE31C;
    }
}

loc_805DE318:
{
    goto loc_805DE320;
}

loc_805DE31C:
{
    r27 = 0;
}

loc_805DE320:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE324:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE330;
    }
}

loc_805DE328:
{
    r27 = 0;
    goto loc_805DE384;
}

loc_805DE330:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17848);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE380;
    }
}

loc_805DE33C:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE350u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE368;
}

loc_805DE354:
{
}

loc_805DE358:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE364;
    }
}

loc_805DE35C:
{
    r0 = 1;
    goto loc_805DE374;
}

loc_805DE364:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE368:
{
}

loc_805DE36C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE354;
    }
}

loc_805DE370:
{
    r0 = 0;
}

loc_805DE374:
{
}

loc_805DE378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE380;
    }
}

loc_805DE37C:
{
    goto loc_805DE384;
}

loc_805DE380:
{
    r27 = 0;
}

loc_805DE384:
{
}

loc_805DE388:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_805DE394;
    }
}

loc_805DE38C:
{
    r0 = (r29 + 836);
    MemoryInline::FlatWrite32((r27 + 1776), r0);
}

loc_805DE394:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r27 = MemoryInline::FlatRead32((r3 + 524));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE3A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE3B4;
    }
}

loc_805DE3AC:
{
    r27 = 0;
    goto loc_805DE408;
}

loc_805DE3B4:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17720);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE404;
    }
}

loc_805DE3C0:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE3D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE3EC;
}

loc_805DE3D8:
{
}

loc_805DE3DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE3E8;
    }
}

loc_805DE3E0:
{
    r0 = 1;
    goto loc_805DE3F8;
}

loc_805DE3E8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE3EC:
{
}

loc_805DE3F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE3D8;
    }
}

loc_805DE3F4:
{
    r0 = 0;
}

loc_805DE3F8:
{
}

loc_805DE3FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE404;
    }
}

loc_805DE400:
{
    goto loc_805DE408;
}

loc_805DE404:
{
    r27 = 0;
}

loc_805DE408:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE40C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE418;
    }
}

loc_805DE410:
{
    r27 = 0;
    goto loc_805DE46C;
}

loc_805DE418:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17864);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE468;
    }
}

loc_805DE424:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE438u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE450;
}

loc_805DE43C:
{
}

loc_805DE440:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE44C;
    }
}

loc_805DE444:
{
    r0 = 1;
    goto loc_805DE45C;
}

loc_805DE44C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE450:
{
}

loc_805DE454:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE43C;
    }
}

loc_805DE458:
{
    r0 = 0;
}

loc_805DE45C:
{
}

loc_805DE460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE468;
    }
}

loc_805DE464:
{
    goto loc_805DE46C;
}

loc_805DE468:
{
    r27 = 0;
}

loc_805DE46C:
{
}

loc_805DE470:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_805DE47C;
    }
}

loc_805DE474:
{
    r0 = (r29 + 836);
    MemoryInline::FlatWrite32((r27 + 1732), r0);
}

loc_805DE47C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r27 = MemoryInline::FlatRead32((r3 + 480));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE490:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE49C;
    }
}

loc_805DE494:
{
    r27 = 0;
    goto loc_805DE4F0;
}

loc_805DE49C:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17720);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE4EC;
    }
}

loc_805DE4A8:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE4BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE4D4;
}

loc_805DE4C0:
{
}

loc_805DE4C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE4D0;
    }
}

loc_805DE4C8:
{
    r0 = 1;
    goto loc_805DE4E0;
}

loc_805DE4D0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE4D4:
{
}

loc_805DE4D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE4C0;
    }
}

loc_805DE4DC:
{
    r0 = 0;
}

loc_805DE4E0:
{
}

loc_805DE4E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE4EC;
    }
}

loc_805DE4E8:
{
    goto loc_805DE4F0;
}

loc_805DE4EC:
{
    r27 = 0;
}

loc_805DE4F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE4F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE500;
    }
}

loc_805DE4F8:
{
    r27 = 0;
    goto loc_805DE554;
}

loc_805DE500:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17744);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE550;
    }
}

loc_805DE50C:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE520u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE538;
}

loc_805DE524:
{
}

loc_805DE528:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE534;
    }
}

loc_805DE52C:
{
    r0 = 1;
    goto loc_805DE544;
}

loc_805DE534:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE538:
{
}

loc_805DE53C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE524;
    }
}

loc_805DE540:
{
    r0 = 0;
}

loc_805DE544:
{
}

loc_805DE548:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE550;
    }
}

loc_805DE54C:
{
    goto loc_805DE554;
}

loc_805DE550:
{
    r27 = 0;
}

loc_805DE554:
{
}

loc_805DE558:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_805DE564;
    }
}

loc_805DE55C:
{
    r0 = (r29 + 836);
    MemoryInline::FlatWrite32((r27 + 1736), r0);
}

loc_805DE564:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r27 = MemoryInline::FlatRead32((r3 + 444));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE578:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE584;
    }
}

loc_805DE57C:
{
    r27 = 0;
    goto loc_805DE5D8;
}

loc_805DE584:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17720);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE5D4;
    }
}

loc_805DE590:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE5A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE5BC;
}

loc_805DE5A8:
{
}

loc_805DE5AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE5B8;
    }
}

loc_805DE5B0:
{
    r0 = 1;
    goto loc_805DE5C8;
}

loc_805DE5B8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE5BC:
{
}

loc_805DE5C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE5A8;
    }
}

loc_805DE5C4:
{
    r0 = 0;
}

loc_805DE5C8:
{
}

loc_805DE5CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE5D4;
    }
}

loc_805DE5D0:
{
    goto loc_805DE5D8;
}

loc_805DE5D4:
{
    r27 = 0;
}

loc_805DE5D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE5DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE5E8;
    }
}

loc_805DE5E0:
{
    r27 = 0;
    goto loc_805DE63C;
}

loc_805DE5E8:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17896);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE638;
    }
}

loc_805DE5F4:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE608u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE620;
}

loc_805DE60C:
{
}

loc_805DE610:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE61C;
    }
}

loc_805DE614:
{
    r0 = 1;
    goto loc_805DE62C;
}

loc_805DE61C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE620:
{
}

loc_805DE624:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE60C;
    }
}

loc_805DE628:
{
    r0 = 0;
}

loc_805DE62C:
{
}

loc_805DE630:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE638;
    }
}

loc_805DE634:
{
    goto loc_805DE63C;
}

loc_805DE638:
{
    r27 = 0;
}

loc_805DE63C:
{
}

loc_805DE640:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_805DE650;
    }
}

loc_805DE644:
{
    r0 = (r29 + 836);
    MemoryInline::FlatWrite32((r27 + 1732), r0);
    MemoryInline::FlatWrite32((r27 + 1736), r30);
}

loc_805DE650:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r27 = MemoryInline::FlatRead32((r3 + 528));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE664:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE670;
    }
}

loc_805DE668:
{
    r27 = 0;
    goto loc_805DE6C4;
}

loc_805DE670:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17720);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE6C0;
    }
}

loc_805DE67C:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE690u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE6A8;
}

loc_805DE694:
{
}

loc_805DE698:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE6A4;
    }
}

loc_805DE69C:
{
    r0 = 1;
    goto loc_805DE6B4;
}

loc_805DE6A4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE6A8:
{
}

loc_805DE6AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE694;
    }
}

loc_805DE6B0:
{
    r0 = 0;
}

loc_805DE6B4:
{
}

loc_805DE6B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE6C0;
    }
}

loc_805DE6BC:
{
    goto loc_805DE6C4;
}

loc_805DE6C0:
{
    r27 = 0;
}

loc_805DE6C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE6C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DE6D4;
    }
}

loc_805DE6CC:
{
    r27 = 0;
    goto loc_805DE728;
}

loc_805DE6D4:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 17872);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE724;
    }
}

loc_805DE6E0:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DE6F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DE70C;
}

loc_805DE6F8:
{
}

loc_805DE6FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_805DE708;
    }
}

loc_805DE700:
{
    r0 = 1;
    goto loc_805DE718;
}

loc_805DE708:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DE70C:
{
}

loc_805DE710:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DE6F8;
    }
}

loc_805DE714:
{
    r0 = 0;
}

loc_805DE718:
{
}

loc_805DE71C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DE724;
    }
}

loc_805DE720:
{
    goto loc_805DE728;
}

loc_805DE724:
{
    r27 = 0;
}

loc_805DE728:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805DE72C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DE73C;
    }
}

loc_805DE730:
{
    r0 = (r29 + 836);
    MemoryInline::FlatWrite32((r27 + 1732), r0);
    MemoryInline::FlatWrite32((r27 + 1740), r30);
}

loc_805DE73C:
{
    r4 = 0x80890000u;
    r3 = (r29 + 836);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 19260));
    // inline leaf 0x805C3C2C (6 guest instruction(s))
    r4 = 0;
    r0 = -1;
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x805C3C2C
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 840), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = 107;
    r12 = MemoryInline::FlatRead32(r29);
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x805DE770u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 720);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E3BA8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r4 = 0;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 104), r4);
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 108), r4);
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 112), r0);
    r0 = MemoryInline::FlatRead32((r31 + 10996));
}

loc_805DE7B8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805DE7C4;
    }
}

loc_805DE7BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805DE7C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805DE7D8;
    }
}

loc_805DE7C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805DE7C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DE820;
    }
}

loc_805DE7CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805DE7D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805DE7FC;
    }
}

loc_805DE7D4:
{
    goto loc_805DE820;
}

loc_805DE7D8:
{
    r4 = MemoryInline::FlatRead32((r29 + 7736));
    r5 = 4;
    r3 = 0x809C0000u;
    r0 = 7;
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 100), r5);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    goto loc_805DE820;
}

loc_805DE7FC:
{
    r3 = 0x809C0000u;
    r5 = 2;
    r4 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = 0x809C0000u;
    r0 = 10;
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 100), r5);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
}

loc_805DE820:
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805DE090 func_805DE090 preserves=true fpr_mask=0x00000000
