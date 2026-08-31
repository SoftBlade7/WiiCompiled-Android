#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805CF7E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805CF7E4;

loc_805CF7E4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r4;
    r6 = MemoryInline::FlatRead32((r3 + 4));
}

loc_805CF810:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r6))) {
        goto loc_805CF820;
    }
}

loc_805CF814:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_805CF81C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805CFBBC;
    }
}

loc_805CF820:
{
}

loc_805CF824:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r6))) {
        goto loc_805CF8B4;
    }
}

loc_805CF828:
{
}

loc_805CF82C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805CF83C;
    }
}

loc_805CF830:
{
}

loc_805CF834:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_805CF878;
    }
}

loc_805CF838:
{
    goto loc_805CF8B0;
}

loc_805CF83C:
{
    r3 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801722A8u>(ctx);
    r3 = 0;
    r4 = 4;
    r5 = 6;
    r6 = 8;
    r7 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = 0;
    r4 = 2;
    r5 = 3;
    r6 = 4;
    r7 = 7;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171D20u>(ctx);
    goto loc_805CF8B0;
}

loc_805CF878:
{
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801722A8u>(ctx);
    r3 = 0;
    r4 = 15;
    r5 = 8;
    r6 = 2;
    r7 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = 0;
    r4 = 7;
    r5 = 4;
    r6 = 1;
    r7 = 7;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171D20u>(ctx);
}

loc_805CF8B0:
{
    MemoryInline::FlatWrite32((r30 + 4), r29);
}

loc_805CF8B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805CF8B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805CFBBC;
    }
}

loc_805CF8BC:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_805CF8C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805CFBBC;
    }
}

loc_805CF8C8:
{
    r3 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x805CF8DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead16((r3 + 16));
    r4 = (r1 + 40);
    r0 = MemoryInline::FlatRead16((r3 + 18));
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead16((r3 + 20));
    r0 = MemoryInline::FlatRead16((r3 + 22));
    r3 = (r1 + 20);
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E7B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r7 = MemoryInline::FlatRead8((r1 + 20));
    r4 = (r1 + 24);
    r6 = MemoryInline::FlatRead8((r1 + 21));
    r3 = 2;
    r5 = MemoryInline::FlatRead8((r1 + 22));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171E10u>(ctx);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805CF938:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805CF9AC;
    }
}

loc_805CF93C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x805CF950u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead16((r3 + 24));
    r4 = (r1 + 32);
    r0 = MemoryInline::FlatRead16((r3 + 26));
    MemoryInline::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead16((r3 + 28));
    r0 = MemoryInline::FlatRead16((r3 + 30));
    r3 = (r1 + 12);
    MemoryInline::FlatWriteRam16((r1 + 38), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E7B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r7 = MemoryInline::FlatRead8((r1 + 12));
    r4 = (r1 + 16);
    r6 = MemoryInline::FlatRead8((r1 + 13));
    r3 = 3;
    r5 = MemoryInline::FlatRead8((r1 + 14));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171E10u>(ctx);
    goto loc_805CFBB8;
}

loc_805CF9AC:
{
    r6 = 0x80890000u;
    r6 = (r6 + 16436);
    r5 = MemoryInline::FlatRead8(r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(64));
}

loc_805CF9B8:
{
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805CFB94;
    }
}

loc_805CF9D8:
{
    r3 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -31112);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x805CFB94u:
        goto loc_805CFB94;
        break;
    case 0x805CF9F0u:
        goto loc_805CF9F0;
        break;
    case 0x805CFA08u:
        goto loc_805CFA08;
        break;
    case 0x805CFA20u:
        goto loc_805CFA20;
        break;
    case 0x805CFA3Cu:
        goto loc_805CFA3C;
        break;
    case 0x805CFA58u:
        goto loc_805CFA58;
        break;
    case 0x805CFA74u:
        goto loc_805CFA74;
        break;
    case 0x805CFA90u:
        goto loc_805CFA90;
        break;
    case 0x805CFAACu:
        goto loc_805CFAAC;
        break;
    case 0x805CFAC8u:
        goto loc_805CFAC8;
        break;
    case 0x805CFAE0u:
        goto loc_805CFAE0;
        break;
    case 0x805CFAF8u:
        goto loc_805CFAF8;
        break;
    case 0x805CFB14u:
        goto loc_805CFB14;
        break;
    case 0x805CFB2Cu:
        goto loc_805CFB2C;
        break;
    case 0x805CFB48u:
        goto loc_805CFB48;
        break;
    case 0x805CFB60u:
        goto loc_805CFB60;
        break;
    case 0x805CFB78u:
        goto loc_805CFB78;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_805CF9F0:
{
    r0 = 0;
    r3 = 255;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFA08:
{
    r3 = 255;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFA20:
{
    r4 = 255;
    r3 = 218;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFA3C:
{
    r4 = 255;
    r3 = 182;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFA58:
{
    r4 = 255;
    r3 = 145;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFA74:
{
    r4 = 255;
    r3 = 109;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFA90:
{
    r4 = 255;
    r3 = 73;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFAAC:
{
    r4 = 255;
    r3 = 36;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFAC8:
{
    r0 = 0;
    r3 = 255;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFAE0:
{
    r0 = 70;
    r3 = 255;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFAF8:
{
    r4 = 100;
    r3 = 180;
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFB14:
{
    r3 = 255;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFB2C:
{
    r4 = 0;
    r3 = 111;
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFB48:
{
    r0 = 0;
    r3 = 255;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFB60:
{
    r3 = 0;
    r0 = 186;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r3));
    goto loc_805CFBA4;
}

loc_805CFB78:
{
    r4 = 234;
    r3 = 117;
    r0 = 125;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    goto loc_805CFBA4;
}

loc_805CFB94:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
}

loc_805CFBA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171E10u>(ctx);
}

loc_805CFBB8:
{
    MemoryInline::FlatWrite32((r30 + 8), r31);
}

loc_805CFBBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
// RECOMP_REGISTRATION base 0x805CF7E4 func_805CF7E4 preserves=true fpr_mask=0x00000000
