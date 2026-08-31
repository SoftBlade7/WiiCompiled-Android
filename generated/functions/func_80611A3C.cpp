#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80611A3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_10 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r29_addr_7 = 0;
    uint32_t r29_addr_8 = 0;
    uint32_t r29_addr_9 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_28 = 0;
    uint32_t r3_addr_29 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_30 = 0;
    uint32_t r3_addr_31 = 0;
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
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80611A3C;

loc_80611A3C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 3136));
}

loc_80611A58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80611A78;
    }
}

loc_80611A5C:
{
}

loc_80611A60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80611BA4;
    }
}

loc_80611A64:
{
}

loc_80611A68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80611EAC;
    }
}

loc_80611A6C:
{
}

loc_80611A70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80611FF0;
    }
}

loc_80611A74:
{
    goto loc_80612048;
}

loc_80611A78:
{
    r3 = MemoryInline::FlatRead32((r3 + 100));
    r29 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_80611A88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80612048;
    }
}

loc_80611A8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80611A90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80611A9C;
    }
}

loc_80611A94:
{
    r29 = 0;
    goto loc_80611AF0;
}

loc_80611A9C:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7544);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611AEC;
    }
}

loc_80611AA8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80611ABCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80611AD4;
}

loc_80611AC0:
{
}

loc_80611AC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80611AD0;
    }
}

loc_80611AC8:
{
    r0 = 1;
    goto loc_80611AE0;
}

loc_80611AD0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80611AD4:
{
}

loc_80611AD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80611AC0;
    }
}

loc_80611ADC:
{
    r0 = 0;
}

loc_80611AE0:
{
}

loc_80611AE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80611AEC;
    }
}

loc_80611AE8:
{
    goto loc_80611AF0;
}

loc_80611AEC:
{
    r29 = 0;
}

loc_80611AF0:
{
    r0 = MemoryInline::FlatRead32((r29 + 7032));
    MemoryInline::FlatWrite32((r31 + 3128), r0);
    r3 = MemoryInline::FlatRead32((r31 + 100));
    r29 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80611B04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80611B10;
    }
}

loc_80611B08:
{
    r29 = 0;
    goto loc_80611B64;
}

loc_80611B10:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7544);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611B60;
    }
}

loc_80611B1C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80611B30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80611B48;
}

loc_80611B34:
{
}

loc_80611B38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80611B44;
    }
}

loc_80611B3C:
{
    r0 = 1;
    goto loc_80611B54;
}

loc_80611B44:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80611B48:
{
}

loc_80611B4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80611B34;
    }
}

loc_80611B50:
{
    r0 = 0;
}

loc_80611B54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80611B58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611B60;
    }
}

loc_80611B5C:
{
    goto loc_80611B64;
}

loc_80611B60:
{
    r29 = 0;
}

loc_80611B64:
{
    r3 = MemoryInline::FlatRead32((r29 + 7028));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 3132), r3);
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 3148), r0);
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x80611B88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 3136), r0);
    r3 = MemoryInline::FlatRead32((r31 + 100));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWrite32((r31 + 3152), r0);
    goto loc_80612048;
}

loc_80611BA4:
{
    r3 = MemoryInline::FlatRead32((r3 + 100));
    r29 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80611BB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80611BBC;
    }
}

loc_80611BB4:
{
    r29 = 0;
    goto loc_80611C10;
}

loc_80611BBC:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7544);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611C0C;
    }
}

loc_80611BC8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80611BDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80611BF4;
}

loc_80611BE0:
{
}

loc_80611BE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80611BF0;
    }
}

loc_80611BE8:
{
    r0 = 1;
    goto loc_80611C00;
}

loc_80611BF0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80611BF4:
{
}

loc_80611BF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80611BE0;
    }
}

loc_80611BFC:
{
    r0 = 0;
}

loc_80611C00:
{
}

loc_80611C04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80611C0C;
    }
}

loc_80611C08:
{
    goto loc_80611C10;
}

loc_80611C0C:
{
    r29 = 0;
}

loc_80611C10:
{
    r3 = MemoryInline::FlatRead32((r31 + 3128));
    r0 = MemoryInline::FlatRead32((r29 + 7032));
}

loc_80611C1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80611C9C;
    }
}

loc_80611C20:
{
    r3 = MemoryInline::FlatRead32((r31 + 100));
    r29 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80611C2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80611C38;
    }
}

loc_80611C30:
{
    r29 = 0;
    goto loc_80611C8C;
}

loc_80611C38:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7544);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611C88;
    }
}

loc_80611C44:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80611C58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80611C70;
}

loc_80611C5C:
{
}

loc_80611C60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80611C6C;
    }
}

loc_80611C64:
{
    r0 = 1;
    goto loc_80611C7C;
}

loc_80611C6C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80611C70:
{
}

loc_80611C74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80611C5C;
    }
}

loc_80611C78:
{
    r0 = 0;
}

loc_80611C7C:
{
}

loc_80611C80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80611C88;
    }
}

loc_80611C84:
{
    goto loc_80611C8C;
}

loc_80611C88:
{
    r29 = 0;
}

loc_80611C8C:
{
    r3 = MemoryInline::FlatRead32((r29 + 7028));
    r0 = MemoryInline::FlatRead32((r31 + 3132));
}

loc_80611C98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_80611CE8;
    }
}

loc_80611C9C:
{
    r30 = 0;
    r29 = 0;
    goto loc_80611CD0;
}

loc_80611CA8:
{
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r3_addr_19 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_19);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80611CB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611CC8;
    }
}

loc_80611CB8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x80611CC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80611CC8:
{
    r29 = (r29 + 4);
    r30 = (r30 + 1);
}

loc_80611CD0:
{
    r0 = MemoryInline::FlatRead32((r31 + 3144));
}

loc_80611CD8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80611CA8;
    }
}

loc_80611CDC:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 3136), r0);
    goto loc_80612048;
}

loc_80611CE8:
{
    r5 = MemoryInline::FlatRead32((r31 + 3144));
    r4 = 0;
    ctr = r5;
}

loc_80611CF8:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80611D30;
    }
}

loc_80611CFC:
{
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r3_addr_4 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
}

loc_80611D08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80611D28;
    }
}

loc_80611D0C:
{
    r0 = MemoryInline::FlatRead32((r3 + 384));
}

loc_80611D14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80611D20;
    }
}

loc_80611D18:
{
}

loc_80611D1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80611D28;
    }
}

loc_80611D20:
{
    r0 = 1;
    goto loc_80611D34;
}

loc_80611D28:
{
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80611CFC;
    }
}

loc_80611D30:
{
    r0 = 0;
}

loc_80611D34:
{
}

loc_80611D38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80611D88;
    }
}

loc_80611D3C:
{
    r30 = 0;
    r29 = 0;
    goto loc_80611D70;
}

loc_80611D48:
{
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r3_addr_8 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80611D54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611D68;
    }
}

loc_80611D58:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80611D68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80611D68:
{
    r29 = (r29 + 4);
    r30 = (r30 + 1);
}

loc_80611D70:
{
    r0 = MemoryInline::FlatRead32((r31 + 3144));
}

loc_80611D78:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80611D48;
    }
}

loc_80611D7C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 3136), r0);
    goto loc_80612048;
}

loc_80611D88:
{
    r4 = 0;
    ctr = r5;
}

loc_80611D94:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80611DC4;
    }
}

loc_80611D98:
{
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r3_addr_10 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
}

loc_80611DA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80611DBC;
    }
}

loc_80611DA8:
{
    r0 = MemoryInline::FlatRead32((r3 + 384));
}

loc_80611DB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80611DBC;
    }
}

loc_80611DB4:
{
    r0 = 1;
    goto loc_80611DC8;
}

loc_80611DBC:
{
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80611D98;
    }
}

loc_80611DC4:
{
    r0 = 0;
}

loc_80611DC8:
{
}

loc_80611DCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80611E98;
    }
}

loc_80611DD0:
{
    r3 = MemoryInline::FlatRead32((r31 + 100));
    r4 = MemoryInline::FlatRead32((r31 + 3152));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 - r4);
}

loc_80611DE8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(180))) {
        goto loc_80611E98;
    }
}

loc_80611DEC:
{
    r30 = 0;
    r29 = 0;
    goto loc_80611E20;
}

loc_80611DF8:
{
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r3_addr_14 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_14);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80611E04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611E18;
    }
}

loc_80611E08:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80611E18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80611E18:
{
    r29 = (r29 + 4);
    r30 = (r30 + 1);
}

loc_80611E20:
{
    r0 = MemoryInline::FlatRead32((r31 + 3144));
}

loc_80611E28:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80611DF8;
    }
}

loc_80611E2C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 3136), r0);
    goto loc_80612048;
}

loc_80611E3C:
{
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_16 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80611E4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611E8C;
    }
}

loc_80611E50:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80617224u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80611E58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80612048;
    }
}

loc_80611E5C:
{
    r0 = MemoryInline::FlatRead32((r31 + 3148));
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_17 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_17);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x80611E7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 3148));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 3148), r0);
    goto loc_80611E98;
}

loc_80611E8C:
{
    r3 = MemoryInline::FlatRead32((r31 + 3148));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 3148), r0);
}

loc_80611E98:
{
    r4 = MemoryInline::FlatRead32((r31 + 3148));
    r0 = MemoryInline::FlatRead32((r31 + 3144));
}

loc_80611EA4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80611E3C;
    }
}

loc_80611EA8:
{
    goto loc_80612048;
}

loc_80611EAC:
{
    r3 = MemoryInline::FlatRead32((r3 + 100));
    r29 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80611EB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80611EC4;
    }
}

loc_80611EBC:
{
    r29 = 0;
    goto loc_80611F18;
}

loc_80611EC4:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7544);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611F14;
    }
}

loc_80611ED0:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80611EE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80611EFC;
}

loc_80611EE8:
{
}

loc_80611EEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80611EF8;
    }
}

loc_80611EF0:
{
    r0 = 1;
    goto loc_80611F08;
}

loc_80611EF8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80611EFC:
{
}

loc_80611F00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80611EE8;
    }
}

loc_80611F04:
{
    r0 = 0;
}

loc_80611F08:
{
}

loc_80611F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80611F14;
    }
}

loc_80611F10:
{
    goto loc_80611F18;
}

loc_80611F14:
{
    r29 = 0;
}

loc_80611F18:
{
    r3 = MemoryInline::FlatRead32((r31 + 3128));
    r0 = MemoryInline::FlatRead32((r29 + 7032));
}

loc_80611F24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80611FA4;
    }
}

loc_80611F28:
{
    r3 = MemoryInline::FlatRead32((r31 + 100));
    r29 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80611F34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80611F40;
    }
}

loc_80611F38:
{
    r29 = 0;
    goto loc_80611F94;
}

loc_80611F40:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7544);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611F90;
    }
}

loc_80611F4C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80611F60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80611F78;
}

loc_80611F64:
{
}

loc_80611F68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80611F74;
    }
}

loc_80611F6C:
{
    r0 = 1;
    goto loc_80611F84;
}

loc_80611F74:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80611F78:
{
}

loc_80611F7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80611F64;
    }
}

loc_80611F80:
{
    r0 = 0;
}

loc_80611F84:
{
}

loc_80611F88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80611F90;
    }
}

loc_80611F8C:
{
    goto loc_80611F94;
}

loc_80611F90:
{
    r29 = 0;
}

loc_80611F94:
{
    r3 = MemoryInline::FlatRead32((r29 + 7028));
    r0 = MemoryInline::FlatRead32((r31 + 3132));
}

loc_80611FA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_80612048;
    }
}

loc_80611FA4:
{
    r30 = 0;
    r29 = 0;
    goto loc_80611FD8;
}

loc_80611FB0:
{
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r3_addr_2 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80611FBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80611FD0;
    }
}

loc_80611FC0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x80611FD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80611FD0:
{
    r29 = (r29 + 4);
    r30 = (r30 + 1);
}

loc_80611FD8:
{
    r0 = MemoryInline::FlatRead32((r31 + 3144));
}

loc_80611FE0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80611FB0;
    }
}

loc_80611FE4:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 3136), r0);
    goto loc_80612048;
}

loc_80611FF0:
{
    r0 = MemoryInline::FlatRead32((r3 + 3144));
    r5 = 0;
    ctr = r0;
}

loc_80612000:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80612030;
    }
}

loc_80612004:
{
    r4 = MemoryInline::FlatRead32((r3 + 3140));
    r4_addr_2 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_80612010:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80612028;
    }
}

loc_80612014:
{
    r0 = MemoryInline::FlatRead32((r4 + 384));
}

loc_8061201C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80612028;
    }
}

loc_80612020:
{
    r0 = 1;
    goto loc_80612034;
}

loc_80612028:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80612004;
    }
}

loc_80612030:
{
    r0 = 0;
}

loc_80612034:
{
}

loc_80612038:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80612048;
    }
}

loc_8061203C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 3136), r0);
    MemoryInline::FlatWrite32((r3 + 3148), r0);
}

loc_80612048:
{
    r28 = 0;
    r29 = 0;
    goto loc_806120B0;
}

loc_80612054:
{
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r3_addr_22 = (r3 + r29);
    r0 = MemoryInline::FlatRead32(r3_addr_22);
}

loc_80612060:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806120A8;
    }
}

loc_80612064:
{
    r27 = (r28 + 1);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r30 = (r30_rot_2 & -4);
    goto loc_8061209C;
}

loc_80612070:
{
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r3_addr_24 = (r3 + r30);
    r4 = MemoryInline::FlatRead32(r3_addr_24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8061207C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80612094;
    }
}

loc_80612080:
{
    r29_addr_3 = (r29 + r3);
    r3 = MemoryInline::FlatRead32(r29_addr_3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x80612094u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80612094:
{
    r30 = (r30 + 4);
    r27 = (r27 + 1);
}

loc_8061209C:
{
    r0 = MemoryInline::FlatRead32((r31 + 3144));
}

loc_806120A4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_80612070;
    }
}

loc_806120A8:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_806120B0:
{
    r4 = MemoryInline::FlatRead32((r31 + 3144));
    r0 = (r4 + -1);
}

loc_806120BC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_80612054;
    }
}

loc_806120C0:
{
    r27 = 0;
    r29 = 0;
    goto loc_80612130;
}

loc_806120CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r3_addr_27 = (r3 + r29);
    r0 = MemoryInline::FlatRead32(r3_addr_27);
}

loc_806120D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80612128;
    }
}

loc_806120DC:
{
    r28 = 0;
    r30 = 0;
    goto loc_8061211C;
}

loc_806120E8:
{
}

loc_806120EC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(r28))) {
        goto loc_80612114;
    }
}

loc_806120F0:
{
    r3 = MemoryInline::FlatRead32((r31 + 3140));
    r3_addr_29 = (r3 + r30);
    r4 = MemoryInline::FlatRead32(r3_addr_29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806120FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80612114;
    }
}

loc_80612100:
{
    r29_addr_8 = (r29 + r3);
    r3 = MemoryInline::FlatRead32(r29_addr_8);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x80612114u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80612114:
{
    r30 = (r30 + 4);
    r28 = (r28 + 1);
}

loc_8061211C:
{
    r4 = MemoryInline::FlatRead32((r31 + 3144));
}

loc_80612124:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r4))) {
        goto loc_806120E8;
    }
}

loc_80612128:
{
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_80612130:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r4));
}

loc_80612134:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806120CC;
    }
}

loc_80612138:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80611A3C func_80611A3C preserves=true fpr_mask=0x00000000
