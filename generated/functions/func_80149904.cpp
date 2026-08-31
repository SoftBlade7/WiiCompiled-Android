#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80149904(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80149904;

loc_80149904:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x80340000u;
    r5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 4;
    r6 = (r6 + -28872);
    r9 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r7 = MemoryInline::FlatRead16((r4 + 4));
    r7 = (r4 + r7);
    ctr = r0;
}

loc_80149944:
{
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r8 = (r6 + r0);
    r6_addr_2 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_2);
}

loc_80149958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149980;
    }
}

loc_8014995C:
{
    r0 = MemoryInline::FlatRead8((r8 + 16));
}

loc_80149964:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149980;
    }
}

loc_80149968:
{
    r0 = MemoryInline::FlatRead16((r8 + 20));
}

loc_80149970:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149A48;
    }
}

loc_80149974:
{
    r0 = MemoryInline::FlatRead16((r8 + 22));
}

loc_8014997C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149A48;
    }
}

loc_80149980:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r8 = (r6 + r0);
    r6_addr_3 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_3);
}

loc_80149998:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801499C0;
    }
}

loc_8014999C:
{
    r0 = MemoryInline::FlatRead8((r8 + 16));
}

loc_801499A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801499C0;
    }
}

loc_801499A8:
{
    r0 = MemoryInline::FlatRead16((r8 + 20));
}

loc_801499B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149A48;
    }
}

loc_801499B4:
{
    r0 = MemoryInline::FlatRead16((r8 + 22));
}

loc_801499BC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149A48;
    }
}

loc_801499C0:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r8 = (r6 + r0);
    r6_addr_4 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_4);
}

loc_801499D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149A00;
    }
}

loc_801499DC:
{
    r0 = MemoryInline::FlatRead8((r8 + 16));
}

loc_801499E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149A00;
    }
}

loc_801499E8:
{
    r0 = MemoryInline::FlatRead16((r8 + 20));
}

loc_801499F0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149A48;
    }
}

loc_801499F4:
{
    r0 = MemoryInline::FlatRead16((r8 + 22));
}

loc_801499FC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149A48;
    }
}

loc_80149A00:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r8 = (r6 + r0);
    r6_addr_5 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_5);
}

loc_80149A18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149A40;
    }
}

loc_80149A1C:
{
    r0 = MemoryInline::FlatRead8((r8 + 16));
}

loc_80149A24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149A40;
    }
}

loc_80149A28:
{
    r0 = MemoryInline::FlatRead16((r8 + 20));
}

loc_80149A30:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149A48;
    }
}

loc_80149A34:
{
    r0 = MemoryInline::FlatRead16((r8 + 22));
}

loc_80149A3C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149A48;
    }
}

loc_80149A40:
{
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80149944;
    }
}

loc_80149A48:
{
    r0 = (r31 & 255);
}

loc_80149A50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_80149A68;
    }
}

loc_80149A54:
{
    r0 = (r0 * 52);
    r3 = 0x80340000u;
    r3 = (r3 + -28872);
    r9 = (r3 + r0);
    r9 = (r9 + 16);
}

loc_80149A68:
{
}

loc_80149A6C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80149AA4;
    }
}

loc_80149A70:
{
    r3 = 0x80340000u;
    r3 = (r3 + -28872);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80149A80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80149A98;
    }
}

loc_80149A84:
{
    r3 = 1966080;
    r4 = 0x80280000u;
    r3 = (r3 + 1);
    r4 = (r4 + 21616);
    ctx->lr = 0x80149A98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80149A98:
{
    r3 = r30;
    ctx->lr = 0x80149AA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_80149C80;
}

loc_80149AA4:
{
    r7 = MemoryInline::FlatRead8((r7 + 8));
    r6 = MemoryInline::FlatRead16((r4 + 2));
    r3 = MemoryInline::FlatRead16((r4 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(28));
    r0 = (r0_rot_1 & 15);
    r6 = (r6 + -1);
    r8 = (r7 & 15);
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_80149AC4:
{
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r6));
    r7 = (r7 & 3);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149BE8;
    }
}

loc_80149AD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80149AF0;
    }
}

loc_80149AD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80149ADC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149B2C;
    }
}

loc_80149AE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80149C78;
    }
}

loc_80149AE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80149AE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80149AFC;
    }
}

loc_80149AEC:
{
    goto loc_80149C78;
}

loc_80149AF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_80149AF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80149C78;
    }
}

loc_80149AF8:
{
    goto loc_80149C30;
}

loc_80149AFC:
{
    r4 = 0x80340000u;
    r5 = r8;
    r4 = (r4 + -28872);
    r3 = (r31 & 255);
    r12 = MemoryInline::FlatRead32((r4 + 832));
    r4 = 7;
    r6 = 0;
    ctr = r12;
    ctx->lr = 0x80149B20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x80149B28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_80149C80;
}

loc_80149B2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(5));
}

loc_80149B30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149B38;
    }
}

loc_80149B34:
{
    goto loc_80149BDC;
}

loc_80149B38:
{
    r3 = 0x80340000u;
    r4 = (r31 & 255);
    r3 = (r3 + -28872);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
    r4 = (r4 * 52);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80149B50:
{
    r29 = (r3 + r4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80149B6C;
    }
}

loc_80149B58:
{
    r3 = 1966080;
    r4 = 0x80280000u;
    r3 = (r3 + 3);
    r4 = (r4 + 20732);
    ctx->lr = 0x80149B6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80149B6C:
{
    r0 = MemoryInline::FlatRead16((r29 + 20));
}

loc_80149B74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80149B84;
    }
}

loc_80149B78:
{
    r0 = MemoryInline::FlatRead16((r29 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80149B80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149BB0;
    }
}

loc_80149B84:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r29 + 16), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r29 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80149B94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149B9C;
    }
}

loc_80149B98:
{
    ctx->lr = 0x80149B9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014A7D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80149B9C:
{
    r3 = MemoryInline::FlatRead16((r29 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80149BA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149BB8;
    }
}

loc_80149BA8:
{
    ctx->lr = 0x80149BACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014A7D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80149BB8;
}

loc_80149BB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 16), static_cast<uint8_t>(r0));
}

loc_80149BB8:
{
    r5 = 0x80340000u;
    r3 = (r31 & 255);
    r5 = (r5 + -28872);
    r4 = 8;
    r12 = MemoryInline::FlatRead32((r5 + 832));
    r5 = 0;
    r6 = 0;
    ctr = r12;
    ctx->lr = 0x80149BDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80149BDC:
{
    r3 = r30;
    ctx->lr = 0x80149BE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_80149C80;
}

loc_80149BE8:
{
    r3 = (r31 & 255);
    r6 = 0x80340000u;
    r0 = (r3 * 52);
    r4 = 5;
    r6 = (r6 + -28872);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 22));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80149C08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80149C10;
    }
}

loc_80149C0C:
{
    r4 = 3;
}

loc_80149C10:
{
    r6 = 0x80340000u;
    r5 = r7;
    r6 = (r6 + -28872);
    r12 = MemoryInline::FlatRead32((r6 + 832));
    r6 = r30;
    ctr = r12;
    ctx->lr = 0x80149C2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80149C80;
}

loc_80149C30:
{
    r3 = (r31 & 255);
    r6 = 0x80340000u;
    r0 = (r3 * 52);
    r4 = 6;
    r6 = (r6 + -28872);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 22));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80149C50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80149C58;
    }
}

loc_80149C54:
{
    r4 = 4;
}

loc_80149C58:
{
    r6 = 0x80340000u;
    r5 = r7;
    r6 = (r6 + -28872);
    r12 = MemoryInline::FlatRead32((r6 + 832));
    r6 = r30;
    ctr = r12;
    ctx->lr = 0x80149C74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80149C80;
}

loc_80149C78:
{
    r3 = r30;
    ctx->lr = 0x80149C80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80149C80:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80149904 func_80149904 preserves=true fpr_mask=0x00000000
