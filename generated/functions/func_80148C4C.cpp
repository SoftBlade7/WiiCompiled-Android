#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80148C4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80148C4C;

loc_80148C4C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 4;
    r5 = (r5 + -28872);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    ctr = r0;
}

loc_80148C88:
{
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r4 = (r5 + r0);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_80148C9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148CC4;
    }
}

loc_80148CA0:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80148CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148CC4;
    }
}

loc_80148CAC:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_80148CB4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148D8C;
    }
}

loc_80148CB8:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80148CC0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148D8C;
    }
}

loc_80148CC4:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r4 = (r5 + r0);
    r5_addr_3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_3);
}

loc_80148CDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148D04;
    }
}

loc_80148CE0:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80148CE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148D04;
    }
}

loc_80148CEC:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_80148CF4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148D8C;
    }
}

loc_80148CF8:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80148D00:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148D8C;
    }
}

loc_80148D04:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r4 = (r5 + r0);
    r5_addr_4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_4);
}

loc_80148D1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148D44;
    }
}

loc_80148D20:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80148D28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148D44;
    }
}

loc_80148D2C:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_80148D34:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148D8C;
    }
}

loc_80148D38:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80148D40:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148D8C;
    }
}

loc_80148D44:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r4 = (r5 + r0);
    r5_addr_5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_5);
}

loc_80148D5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148D84;
    }
}

loc_80148D60:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80148D68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148D84;
    }
}

loc_80148D6C:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_80148D74:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148D8C;
    }
}

loc_80148D78:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80148D80:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148D8C;
    }
}

loc_80148D84:
{
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80148C88;
    }
}

loc_80148D8C:
{
    r0 = (r31 & 255);
}

loc_80148D94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_80148DAC;
    }
}

loc_80148D98:
{
    r0 = (r0 * 52);
    r3 = 0x80340000u;
    r3 = (r3 + -28872);
    r30 = (r3 + r0);
    r30 = (r30 + 16);
}

loc_80148DAC:
{
}

loc_80148DB0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80148DE4;
    }
}

loc_80148DB4:
{
    r3 = 0x80340000u;
    r3 = (r3 + -28872);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80148DC4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80148ED4;
    }
}

loc_80148DC8:
{
    r3 = 1966080;
    r4 = 0x80280000u;
    r5 = r28;
    r3 = (r3 + 1);
    r4 = (r4 + 21204);
    ctx->lr = 0x80148DE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80148ED4;
}

loc_80148DE4:
{
    r3 = 0x80340000u;
    r3 = (r3 + -28872);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80148DF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80148E10;
    }
}

loc_80148DF8:
{
    r3 = 1966080;
    r4 = 0x80280000u;
    r5 = r28;
    r3 = (r3 + 3);
    r4 = (r4 + 21248);
    ctx->lr = 0x80148E10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80148E10:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80148E18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80148E28;
    }
}

loc_80148E1C:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(640));
}

loc_80148E24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80148E34;
    }
}

loc_80148E28:
{
    r0 = 640;
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    goto loc_80148E38;
}

loc_80148E34:
{
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
}

loc_80148E38:
{
    r0 = 0;
    r3 = r28;
    MemoryInline::FlatWrite8((r29 + 32), static_cast<uint8_t>(r0));
    r4 = r29;
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    ctx->lr = 0x80148E54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014A708u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_80148E5C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80148E70;
    }
}

loc_80148E60:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    goto loc_80148E7C;
}

loc_80148E70:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
}

loc_80148E7C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (r0 & 30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_80148E88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80148ED4;
    }
}

loc_80148E8C:
{
    r0 = MemoryInline::FlatRead8(r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80148E94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80148ED4;
    }
}

loc_80148E98:
{
    r3 = (r31 & 255);
    r4 = 4;
    r0 = (r3 * 52);
    r6 = 0x80340000u;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r4));
    r5 = 1;
    r6 = (r6 + -28872);
    r4 = (r6 + r0);
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r5));
    r4 = 0;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r6 + 832));
    r6 = 0;
    ctr = r12;
    ctx->lr = 0x80148ED4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80148ED4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x80148C4C func_80148C4C preserves=true fpr_mask=0x00000000
