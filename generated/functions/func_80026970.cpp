#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80026970(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_11 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80026970;

loc_80026970:
{
    MemoryInline::FlatWriteRam32((r1 + -4128), r1);
    r1 = (r1 + -4128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 4132), r0);
    r11 = (r1 + 4128);
    // inline leaf 0x8002159C (7 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -24), r26);
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x8002159C
}

loc_80026988:
{
    r30 = r3;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800269EC;
    }
}

loc_80026990:
{
    r28 = 0;
    goto loc_800269D0;
}

loc_80026998:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
}

loc_800269A4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800269D0;
    }
}

loc_800269A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r3 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800269B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800269BC;
    }
}

loc_800269B4:
{
    r0 = (r3 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800269B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800269D0;
    }
}

loc_800269BC:
{
    r12 = MemoryInline::FlatRead32((r28 + 28));
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x800269D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800269D0:
{
    r4 = r28;
    r3 = (r30 + 36);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl1_0x800AF180:
{
}

loc_inl1_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AF190;
    }
}

loc_inl1_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_800AF180;
}

loc_inl1_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800269E0:
{
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80026998;
    }
}

loc_800269E8:
{
    goto loc_80026D40;
}

loc_800269EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800269F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80026D40;
    }
}

loc_800269F8:
{
    r29 = 0;
    r28 = 0;
    goto loc_80026A50;
}

loc_80026A04:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
}

loc_80026A10:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80026A24;
    }
}

loc_80026A14:
{
    r0 = MemoryInline::FlatRead32((r3 + 180));
}

loc_80026A1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80026A24;
    }
}

loc_80026A20:
{
    MemoryInline::FlatWrite32((r3 + 180), r28);
}

loc_80026A24:
{
    r31 = 0;
    goto loc_80026A38;
}

loc_80026A2C:
{
    r3 = r31;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80035340u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_80026A38:
{
    r4 = r31;
    r3 = (r29 + 192);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl2_0x800AF180:
{
}

loc_inl2_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800AF190;
    }
}

loc_inl2_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_800AF180;
}

loc_inl2_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80026A48:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80026A2C;
    }
}

loc_80026A50:
{
    r4 = r29;
    r3 = (r30 + 36);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl3_0x800AF180:
{
}

loc_inl3_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800AF190;
    }
}

loc_inl3_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl3_cont_800AF180;
}

loc_inl3_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
}

loc_80026A60:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80026A04;
    }
}

loc_80026A68:
{
    r0 = MemoryInline::FlatRead32((r30 + 80));
    r31 = (r1 + 8);
    r29 = 0;
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r30 + 80), r0);
    goto loc_80026CC8;
}

loc_80026A80:
{
    r0 = MemoryInline::FlatRead32((r30 + 80));
    r0 = (r0 & -65537);
    MemoryInline::FlatWrite32((r30 + 80), r0);
}

loc_80026A8C:
{
    r5 = MemoryInline::FlatRead16((r30 + 44));
    r3 = (r30 + 36);
    r4 = (r1 + 8);
    ctx->lr = 0x80026A9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800365D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r28 = (r3 & 65535);
    r27 = 0;
    goto loc_80026AC4;
}

loc_80026AA8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 262140);
    r31_addr_4 = (r31 + r0);
    r3 = MemoryInline::FlatRead32(r31_addr_4);
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80026AC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = (r27 + 1);
}

loc_80026AC4:
{
    r0 = (r27 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
}

loc_80026ACC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80026AA8;
    }
}

loc_80026AD0:
{
    r27 = 0;
    goto loc_80026B10;
}

loc_80026AD8:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
}

loc_80026AE4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80026B10;
    }
}

loc_80026AE8:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r3 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80026AF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80026AFC;
    }
}

loc_80026AF4:
{
    r0 = (r3 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80026AF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80026B10;
    }
}

loc_80026AFC:
{
    r12 = MemoryInline::FlatRead32((r27 + 28));
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80026B10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80026B10:
{
    r4 = r27;
    r3 = (r30 + 36);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl4_0x800AF180:
{
}

loc_inl4_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800AF190;
    }
}

loc_inl4_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl4_cont_800AF180;
}

loc_inl4_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl4_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80026B20:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80026AD8;
    }
}

loc_80026B28:
{
    r5 = MemoryInline::FlatRead16((r30 + 44));
    r3 = (r30 + 36);
    r4 = (r1 + 8);
    ctx->lr = 0x80026B38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800365D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r28 = (r3 & 65535);
    r27 = 0;
    goto loc_80026B94;
}

loc_80026B44:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 262140);
    r31_addr_6 = (r31 + r0);
    r26 = MemoryInline::FlatRead32(r31_addr_6);
    r0 = MemoryInline::FlatRead32((r26 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80026B54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80026B64;
    }
}

loc_80026B58:
{
    r3 = MemoryInline::FlatRead32((r26 + 228));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 228), r0);
}

loc_80026B64:
{
    r12 = MemoryInline::FlatRead32((r26 + 28));
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80026B78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r26 + 180));
}

loc_80026B80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80026B90;
    }
}

loc_80026B84:
{
    r3 = MemoryInline::FlatRead32((r26 + 228));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r26 + 228), r0);
}

loc_80026B90:
{
    r27 = (r27 + 1);
}

loc_80026B94:
{
    r0 = (r27 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
}

loc_80026B9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80026B44;
    }
}

loc_80026BA0:
{
    r5 = MemoryInline::FlatRead16((r30 + 44));
    r3 = (r30 + 36);
    r4 = (r1 + 8);
    ctx->lr = 0x80026BB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800365D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r28 = (r3 & 65535);
    r26 = 0;
    goto loc_80026BD8;
}

loc_80026BBC:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 262140);
    r31_addr_8 = (r31 + r0);
    r3 = MemoryInline::FlatRead32(r31_addr_8);
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80026BD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
}

loc_80026BD8:
{
    r0 = (r26 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
}

loc_80026BE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80026BBC;
    }
}

loc_80026BE4:
{
    r5 = MemoryInline::FlatRead16((r30 + 44));
    r3 = (r30 + 36);
    r4 = (r1 + 8);
    ctx->lr = 0x80026BF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800365D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r28 = (r3 & 65535);
    r26 = 0;
    goto loc_80026C1C;
}

loc_80026C00:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & 262140);
    r31_addr_10 = (r31 + r0);
    r3 = MemoryInline::FlatRead32(r31_addr_10);
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80026C18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
}

loc_80026C1C:
{
    r0 = (r26 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
}

loc_80026C24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80026C00;
    }
}

loc_80026C28:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r3 + 16);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80026C34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80026C40;
    }
}

loc_80026C38:
{
    ctx->lr = 0x80026C3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80037EF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80026A8C;
}

loc_80026C40:
{
    r0 = MemoryInline::FlatRead32((r30 + 80));
    r0 = (r0 & 65536);
}

loc_80026C48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80026CC8;
    }
}

loc_80026C4C:
{
    r26 = 0;
    goto loc_80026CB0;
}

loc_80026C54:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80026C5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80026C84;
    }
}

loc_80026C60:
{
    r4 = MemoryInline::FlatRead16((r3 + 232));
}

loc_80026C68:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80026C84;
    }
}

loc_80026C6C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 232), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 180));
}

loc_80026C7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80026C84;
    }
}

loc_80026C80:
{
    MemoryInline::FlatWrite32((r3 + 180), r29);
}

loc_80026C84:
{
    r27 = 0;
    goto loc_80026C98;
}

loc_80026C8C:
{
    r3 = r27;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80035340u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_80026C98:
{
    r4 = r27;
    r3 = (r26 + 192);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl5_0x800AF180:
{
}

loc_inl5_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800AF190;
    }
}

loc_inl5_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl5_cont_800AF180;
}

loc_inl5_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl5_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80026CA8:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80026C8C;
    }
}

loc_80026CB0:
{
    r4 = r26;
    r3 = (r30 + 36);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl6_0x800AF180:
{
}

loc_inl6_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800AF190;
    }
}

loc_inl6_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl6_cont_800AF180;
}

loc_inl6_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl6_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
}

loc_80026CC0:
{
    r26 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80026C54;
    }
}

loc_80026CC8:
{
    r0 = MemoryInline::FlatRead32((r30 + 80));
    r0 = (r0 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80026CD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80026A80;
    }
}

loc_80026CD4:
{
    r26 = 0;
    r31 = 1;
    goto loc_80026D28;
}

loc_80026CE0:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
}

loc_80026CEC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80026D00;
    }
}

loc_80026CF0:
{
    r0 = MemoryInline::FlatRead32((r3 + 180));
}

loc_80026CF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80026D00;
    }
}

loc_80026CFC:
{
    MemoryInline::FlatWrite32((r3 + 180), r31);
}

loc_80026D00:
{
    r27 = 0;
    goto loc_80026D10;
}

loc_80026D08:
{
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800353B0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_80026D10:
{
    r4 = r27;
    r3 = (r26 + 192);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl7_0x800AF180:
{
}

loc_inl7_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x800AF190;
    }
}

loc_inl7_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl7_cont_800AF180;
}

loc_inl7_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl7_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80026D20:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80026D08;
    }
}

loc_80026D28:
{
    r4 = r26;
    r3 = (r30 + 36);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl8_0x800AF180:
{
}

loc_inl8_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x800AF190;
    }
}

loc_inl8_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl8_cont_800AF180;
}

loc_inl8_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl8_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80026D38:
{
    r26 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80026CE0;
    }
}

loc_80026D40:
{
    r11 = (r1 + 4128);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 4132));
    ctx->lr = r0;
    r1 = (r1 + 4128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
// RECOMP_REGISTRATION base 0x80026970 func_80026970 preserves=true fpr_mask=0x00000000
