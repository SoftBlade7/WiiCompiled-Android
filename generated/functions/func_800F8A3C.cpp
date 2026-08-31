#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F8A3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F8A3C;

loc_800F8A3C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = r6;
    r3 = (r1 + 8);
    r4 = (r13 + -31512);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800F8A70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F8A7C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F8AC8;
    }
}

loc_800F8A80:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F8A90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F8A94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8AA0;
    }
}

loc_800F8A98:
{
    r0 = 0;
    goto loc_800F8AB8;
}

loc_800F8AA0:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F8AA8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8AB0;
    }
}

loc_800F8AAC:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F8AB0:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F8AB8:
{
}

loc_800F8ABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8AC8;
    }
}

loc_800F8AC0:
{
    r5 = 0;
    goto loc_800F8AE8;
}

loc_800F8AC8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F8AE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F8AEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F8D38;
    }
}

loc_800F8AF0:
{
    r3 = r30;
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
}

loc_800F8AFC:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8B58;
    }
}

loc_800F8B04:
{
    r3 = 1;
    goto loc_800F8B8C;
}

loc_800F8B10:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F8B20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F8B24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8B30;
    }
}

loc_800F8B28:
{
    r0 = 0;
    goto loc_800F8B48;
}

loc_800F8B30:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F8B38:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8B40;
    }
}

loc_800F8B3C:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F8B40:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F8B48:
{
}

loc_800F8B4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8B58;
    }
}

loc_800F8B50:
{
    r3 = 0;
    goto loc_800F8B8C;
}

loc_800F8B58:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F8B68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F8B10;
    }
}

loc_800F8B6C:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r30;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F8B8C:
{
}

loc_800F8B90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F8D38;
    }
}

loc_800F8B94:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F8BA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F8BEC;
    }
}

loc_800F8BA4:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F8BB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F8BB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8BC4;
    }
}

loc_800F8BBC:
{
    r0 = 0;
    goto loc_800F8BDC;
}

loc_800F8BC4:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F8BCC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8BD4;
    }
}

loc_800F8BD0:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F8BD4:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F8BDC:
{
}

loc_800F8BE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8BEC;
    }
}

loc_800F8BE4:
{
    r5 = 0;
    goto loc_800F8C0C;
}

loc_800F8BEC:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F8C0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F8C10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F8D38;
    }
}

loc_800F8C14:
{
    r3 = r31;
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
}

loc_800F8C20:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8C7C;
    }
}

loc_800F8C28:
{
    r3 = 1;
    goto loc_800F8CB0;
}

loc_800F8C34:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F8C44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F8C48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8C54;
    }
}

loc_800F8C4C:
{
    r0 = 0;
    goto loc_800F8C6C;
}

loc_800F8C54:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F8C5C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8C64;
    }
}

loc_800F8C60:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F8C64:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F8C6C:
{
}

loc_800F8C70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8C7C;
    }
}

loc_800F8C74:
{
    r3 = 0;
    goto loc_800F8CB0;
}

loc_800F8C7C:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F8C8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F8C34;
    }
}

loc_800F8C90:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r31;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F8CB0:
{
}

loc_800F8CB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F8D38;
    }
}

loc_800F8CB8:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F8CC4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F8D10;
    }
}

loc_800F8CC8:
{
    r28 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r28;
    ctx->lr = 0x800F8CD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F8CDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8CE8;
    }
}

loc_800F8CE0:
{
    r0 = 0;
    goto loc_800F8D00;
}

loc_800F8CE8:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F8CF0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8CF8;
    }
}

loc_800F8CF4:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F8CF8:
{
    MemoryInline::FlatWrite32((r29 + 8), r28);
    r0 = 1;
}

loc_800F8D00:
{
}

loc_800F8D04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8D10;
    }
}

loc_800F8D08:
{
    r5 = 0;
    goto loc_800F8D30;
}

loc_800F8D10:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F8D30:
{
}

loc_800F8D34:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800F8D40;
    }
}

loc_800F8D38:
{
    r0 = 0;
    goto loc_800F8D44;
}

loc_800F8D40:
{
    r0 = 1;
}

loc_800F8D44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F8D48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F914C;
    }
}

loc_800F8D4C:
{
    r3 = (r1 + 8);
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
}

loc_800F8D58:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8DB4;
    }
}

loc_800F8D60:
{
    r3 = 1;
    goto loc_800F8DE8;
}

loc_800F8D6C:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F8D7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F8D80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8D8C;
    }
}

loc_800F8D84:
{
    r0 = 0;
    goto loc_800F8DA4;
}

loc_800F8D8C:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F8D94:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8D9C;
    }
}

loc_800F8D98:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F8D9C:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F8DA4:
{
}

loc_800F8DA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8DB4;
    }
}

loc_800F8DAC:
{
    r3 = 0;
    goto loc_800F8DE8;
}

loc_800F8DB4:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F8DC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F8D6C;
    }
}

loc_800F8DC8:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 8);
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F8DE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F8DEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F914C;
    }
}

loc_800F8DF0:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F8DFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F8E48;
    }
}

loc_800F8E00:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F8E10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F8E14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8E20;
    }
}

loc_800F8E18:
{
    r0 = 0;
    goto loc_800F8E38;
}

loc_800F8E20:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F8E28:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8E30;
    }
}

loc_800F8E2C:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F8E30:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F8E38:
{
}

loc_800F8E3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8E48;
    }
}

loc_800F8E40:
{
    r5 = 0;
    goto loc_800F8E68;
}

loc_800F8E48:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_9 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_9, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F8E68:
{
}

loc_800F8E6C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800F9138;
    }
}

loc_800F8E70:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F8E7C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F8EC8;
    }
}

loc_800F8E80:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F8E90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F8E94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8EA0;
    }
}

loc_800F8E98:
{
    r0 = 0;
    goto loc_800F8EB8;
}

loc_800F8EA0:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F8EA8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8EB0;
    }
}

loc_800F8EAC:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F8EB0:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F8EB8:
{
}

loc_800F8EBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8EC8;
    }
}

loc_800F8EC0:
{
    r5 = 0;
    goto loc_800F8EE8;
}

loc_800F8EC8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 47;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_11 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_11, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F8EE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F8EEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F9138;
    }
}

loc_800F8EF0:
{
    r3 = r30;
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
}

loc_800F8EFC:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8F58;
    }
}

loc_800F8F04:
{
    r3 = 1;
    goto loc_800F8F8C;
}

loc_800F8F10:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F8F20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F8F24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8F30;
    }
}

loc_800F8F28:
{
    r0 = 0;
    goto loc_800F8F48;
}

loc_800F8F30:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F8F38:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8F40;
    }
}

loc_800F8F3C:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F8F40:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F8F48:
{
}

loc_800F8F4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8F58;
    }
}

loc_800F8F50:
{
    r3 = 0;
    goto loc_800F8F8C;
}

loc_800F8F58:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F8F68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F8F10;
    }
}

loc_800F8F6C:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r30;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F8F8C:
{
}

loc_800F8F90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F9138;
    }
}

loc_800F8F94:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F8FA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F8FEC;
    }
}

loc_800F8FA4:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F8FB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F8FB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8FC4;
    }
}

loc_800F8FBC:
{
    r0 = 0;
    goto loc_800F8FDC;
}

loc_800F8FC4:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F8FCC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8FD4;
    }
}

loc_800F8FD0:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F8FD4:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F8FDC:
{
}

loc_800F8FE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8FEC;
    }
}

loc_800F8FE4:
{
    r5 = 0;
    goto loc_800F900C;
}

loc_800F8FEC:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_13 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_13, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F900C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F9010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F9138;
    }
}

loc_800F9014:
{
    r3 = r31;
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
}

loc_800F9020:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F907C;
    }
}

loc_800F9028:
{
    r3 = 1;
    goto loc_800F90B0;
}

loc_800F9034:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F9044u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9048:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9054;
    }
}

loc_800F904C:
{
    r0 = 0;
    goto loc_800F906C;
}

loc_800F9054:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F905C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9064;
    }
}

loc_800F9060:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F9064:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F906C:
{
}

loc_800F9070:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F907C;
    }
}

loc_800F9074:
{
    r3 = 0;
    goto loc_800F90B0;
}

loc_800F907C:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r30));
}

loc_800F908C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F9034;
    }
}

loc_800F9090:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r31;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F90B0:
{
}

loc_800F90B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F9138;
    }
}

loc_800F90B8:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F90C4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F9110;
    }
}

loc_800F90C8:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F90D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F90DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F90E8;
    }
}

loc_800F90E0:
{
    r0 = 0;
    goto loc_800F9100;
}

loc_800F90E8:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F90F0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F90F8;
    }
}

loc_800F90F4:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F90F8:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F9100:
{
}

loc_800F9104:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9110;
    }
}

loc_800F9108:
{
    r5 = 0;
    goto loc_800F9130;
}

loc_800F9110:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_15 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_15, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F9130:
{
}

loc_800F9134:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800F9140;
    }
}

loc_800F9138:
{
    r0 = 0;
    goto loc_800F9144;
}

loc_800F9140:
{
    r0 = 1;
}

loc_800F9144:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F9148:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F9154;
    }
}

loc_800F914C:
{
    r3 = 0;
    goto loc_800F9158;
}

loc_800F9154:
{
    r3 = 1;
}

loc_800F9158:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F8A3C func_800F8A3C preserves=true fpr_mask=0x00000000
