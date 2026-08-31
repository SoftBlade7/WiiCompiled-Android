#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F7834(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F7834;

loc_800F7834:
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
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r30 = r4;
    r31 = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r6));
}

loc_800F7860:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F78AC;
    }
}

loc_800F7864:
{
    r28 = (r6 + 1024);
    r3 = MemoryInline::FlatRead32(r3);
    r4 = r28;
    ctx->lr = 0x800F7874u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F7878:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7884;
    }
}

loc_800F787C:
{
    r0 = 0;
    goto loc_800F789C;
}

loc_800F7884:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F788C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7894;
    }
}

loc_800F7890:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F7894:
{
    MemoryInline::FlatWrite32((r29 + 8), r28);
    r0 = 1;
}

loc_800F789C:
{
}

loc_800F78A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F78AC;
    }
}

loc_800F78A4:
{
    r5 = 0;
    goto loc_800F78CC;
}

loc_800F78AC:
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

loc_800F78CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F78D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F7B9C;
    }
}

loc_800F78D4:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F78E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F792C;
    }
}

loc_800F78E4:
{
    r28 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r28;
    ctx->lr = 0x800F78F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F78F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7904;
    }
}

loc_800F78FC:
{
    r0 = 0;
    goto loc_800F791C;
}

loc_800F7904:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F790C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7914;
    }
}

loc_800F7910:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F7914:
{
    MemoryInline::FlatWrite32((r29 + 8), r28);
    r0 = 1;
}

loc_800F791C:
{
}

loc_800F7920:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F792C;
    }
}

loc_800F7924:
{
    r5 = 0;
    goto loc_800F794C;
}

loc_800F792C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 47;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F794C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F7950:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F7B9C;
    }
}

loc_800F7954:
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

loc_800F7960:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F79BC;
    }
}

loc_800F7968:
{
    r3 = 1;
    goto loc_800F79F0;
}

loc_800F7974:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F7984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F7988:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7994;
    }
}

loc_800F798C:
{
    r0 = 0;
    goto loc_800F79AC;
}

loc_800F7994:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F799C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F79A4;
    }
}

loc_800F79A0:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F79A4:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F79AC:
{
}

loc_800F79B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F79BC;
    }
}

loc_800F79B4:
{
    r3 = 0;
    goto loc_800F79F0;
}

loc_800F79BC:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F79CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F7974;
    }
}

loc_800F79D0:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r30;
    r3 = (r0 + r5);
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
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F79F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F79F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F7B9C;
    }
}

loc_800F79F8:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F7A04:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F7A50;
    }
}

loc_800F7A08:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F7A18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F7A1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7A28;
    }
}

loc_800F7A20:
{
    r0 = 0;
    goto loc_800F7A40;
}

loc_800F7A28:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F7A30:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7A38;
    }
}

loc_800F7A34:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F7A38:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F7A40:
{
}

loc_800F7A44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F7A50;
    }
}

loc_800F7A48:
{
    r5 = 0;
    goto loc_800F7A70;
}

loc_800F7A50:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F7A70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F7A74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F7B9C;
    }
}

loc_800F7A78:
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

loc_800F7A84:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7AE0;
    }
}

loc_800F7A8C:
{
    r3 = 1;
    goto loc_800F7B14;
}

loc_800F7A98:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F7AA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F7AAC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7AB8;
    }
}

loc_800F7AB0:
{
    r0 = 0;
    goto loc_800F7AD0;
}

loc_800F7AB8:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F7AC0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7AC8;
    }
}

loc_800F7AC4:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F7AC8:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F7AD0:
{
}

loc_800F7AD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F7AE0;
    }
}

loc_800F7AD8:
{
    r3 = 0;
    goto loc_800F7B14;
}

loc_800F7AE0:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r30));
}

loc_800F7AF0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F7A98;
    }
}

loc_800F7AF4:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r31;
    r3 = (r0 + r5);
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
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F7B14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F7B18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F7B9C;
    }
}

loc_800F7B1C:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F7B28:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F7B74;
    }
}

loc_800F7B2C:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F7B3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F7B40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F7B4C;
    }
}

loc_800F7B44:
{
    r0 = 0;
    goto loc_800F7B64;
}

loc_800F7B4C:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F7B54:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F7B5C;
    }
}

loc_800F7B58:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F7B5C:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F7B64:
{
}

loc_800F7B68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F7B74;
    }
}

loc_800F7B6C:
{
    r5 = 0;
    goto loc_800F7B94;
}

loc_800F7B74:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_7 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F7B94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F7B98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F7BA4;
    }
}

loc_800F7B9C:
{
    r3 = 0;
    goto loc_800F7BA8;
}

loc_800F7BA4:
{
    r3 = 1;
}

loc_800F7BA8:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xF80019FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F7834 func_800F7834 preserves=true fpr_mask=0x00000000
