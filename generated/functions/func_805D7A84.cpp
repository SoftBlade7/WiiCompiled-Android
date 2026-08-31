#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D7A84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805D7A84;

loc_805D7A84:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->lr = 0x805D7AB8u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805D2A50u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r29 + 7736));
    r3 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    r4 = MemoryInline::FlatRead32((r4 + 1288));
    // inline leaf 0x805D28C8 (14 guest instruction(s))
}

loc_inl0_0x805D28C8:
{
}

loc_inl0_0x805D28CC:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl0_0x805D28F8;
    }
}

loc_inl0_0x805D28D0:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x805D28F0;
    }
}

loc_inl0_0x805D28E8:
{
    r3 = MemoryInline::FlatRead32((r4 + 464));
    goto loc_inl0_cont_805D28C8;
}

loc_inl0_0x805D28F0:
{
    r3 = -1;
    goto loc_inl0_cont_805D28C8;
}

loc_inl0_0x805D28F8:
{
    r3 = -1;
}

loc_inl0_cont_805D28C8:
{
    // end of inlined leaf 0x805D28C8
    r0 = (r3 + -21);
    r30 = r3;
}

loc_805D7ADC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D7B84;
    }
}

loc_805D7AE0:
{
}

loc_805D7AE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_805D7C84;
    }
}

loc_805D7AE8:
{
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 628));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805D7AF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D7B04;
    }
}

loc_805D7AFC:
{
    r30 = 0;
    goto loc_805D7B58;
}

loc_805D7B04:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7228);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D7B54;
    }
}

loc_805D7B10:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805D7B24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805D7B3C;
}

loc_805D7B28:
{
}

loc_805D7B2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805D7B38;
    }
}

loc_805D7B30:
{
    r0 = 1;
    goto loc_805D7B48;
}

loc_805D7B38:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805D7B3C:
{
}

loc_805D7B40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805D7B28;
    }
}

loc_805D7B44:
{
    r0 = 0;
}

loc_805D7B48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D7B4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D7B54;
    }
}

loc_805D7B50:
{
    goto loc_805D7B58;
}

loc_805D7B54:
{
    r30 = 0;
}

loc_805D7B58:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x805DE088 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 848), r4);
    // end of inlined leaf 0x805DE088
    r3 = 0x809C0000u;
    r0 = 155;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = MemoryInline::FlatRead32((r3 + 1288));
    MemoryInline::FlatWrite32((r30 + 852), r3);
    MemoryInline::FlatWrite32((r31 + 84), r0);
    goto loc_805D7D34;
}

loc_805D7B84:
{
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r28 = MemoryInline::FlatRead32((r3 + 580));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805D7B94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D7BA0;
    }
}

loc_805D7B98:
{
    r28 = 0;
    goto loc_805D7BF4;
}

loc_805D7BA0:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7488);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D7BF0;
    }
}

loc_805D7BAC:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805D7BC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805D7BD8;
}

loc_805D7BC4:
{
}

loc_805D7BC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805D7BD4;
    }
}

loc_805D7BCC:
{
    r0 = 1;
    goto loc_805D7BE4;
}

loc_805D7BD4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805D7BD8:
{
}

loc_805D7BDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805D7BC4;
    }
}

loc_805D7BE0:
{
    r0 = 0;
}

loc_805D7BE4:
{
}

loc_805D7BE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D7BF0;
    }
}

loc_805D7BEC:
{
    goto loc_805D7BF4;
}

loc_805D7BF0:
{
    r28 = 0;
}

loc_805D7BF4:
{
    r3 = 0x809C0000u;
    r0 = (r30 + -21);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_805D7C04:
{
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 1288));
    MemoryInline::FlatWrite32((r28 + 7420), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D7C24;
    }
}

loc_805D7C14:
{
    r0 = (r30 + -23);
}

loc_805D7C1C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_805D7C30;
    }
}

loc_805D7C20:
{
    goto loc_805D7C38;
}

loc_805D7C24:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 7412), r0);
    goto loc_805D7C38;
}

loc_805D7C30:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r28 + 7412), r0);
}

loc_805D7C38:
{
}

loc_805D7C3C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(21))) {
        goto loc_805D7C5C;
    }
}

loc_805D7C40:
{
}

loc_805D7C44:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(23))) {
        goto loc_805D7C5C;
    }
}

loc_805D7C48:
{
}

loc_805D7C4C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(22))) {
        goto loc_805D7C6C;
    }
}

loc_805D7C50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(24));
}

loc_805D7C54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D7C6C;
    }
}

loc_805D7C58:
{
    goto loc_805D7C78;
}

loc_805D7C5C:
{
    r3 = r28;
    r4 = 0;
    // inline leaf 0x80609CB8 (16 guest instruction(s))
}

loc_inl2_0x80609CB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl2_0x80609CBC:
{
    MemoryInline::FlatWrite32((r3 + 7416), r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x80609CD0;
    }
}

loc_inl2_0x80609CC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_inl2_0x80609CC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x80609CE4;
    }
}

loc_inl2_0x80609CCC:
{
    goto loc_inl2_cont_80609CB8;
}

loc_inl2_0x80609CD0:
{
    r3 = 0x809C0000u;
    r0 = 8;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    goto loc_inl2_cont_80609CB8;
}

loc_inl2_0x80609CE4:
{
    r3 = 0x809C0000u;
    r0 = 9;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
}

loc_inl2_cont_80609CB8:
{
    // end of inlined leaf 0x80609CB8
    goto loc_805D7C78;
}

loc_805D7C6C:
{
    r3 = r28;
    r4 = 1;
    // inline leaf 0x80609CB8 (16 guest instruction(s))
}

loc_inl3_0x80609CB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl3_0x80609CBC:
{
    MemoryInline::FlatWrite32((r3 + 7416), r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_0x80609CD0;
    }
}

loc_inl3_0x80609CC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_inl3_0x80609CC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_0x80609CE4;
    }
}

loc_inl3_0x80609CCC:
{
    goto loc_inl3_cont_80609CB8;
}

loc_inl3_0x80609CD0:
{
    r3 = 0x809C0000u;
    r0 = 8;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    goto loc_inl3_cont_80609CB8;
}

loc_inl3_0x80609CE4:
{
    r3 = 0x809C0000u;
    r0 = 9;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
}

loc_inl3_cont_80609CB8:
{
    // end of inlined leaf 0x80609CB8
}

loc_805D7C78:
{
    r0 = 143;
    MemoryInline::FlatWrite32((r31 + 84), r0);
    goto loc_805D7D34;
}

loc_805D7C84:
{
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r28 = MemoryInline::FlatRead32((r3 + 332));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805D7C94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D7CA0;
    }
}

loc_805D7C98:
{
    r28 = 0;
    goto loc_805D7CF4;
}

loc_805D7CA0:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7352);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D7CF0;
    }
}

loc_805D7CAC:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805D7CC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805D7CD8;
}

loc_805D7CC4:
{
}

loc_805D7CC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805D7CD4;
    }
}

loc_805D7CCC:
{
    r0 = 1;
    goto loc_805D7CE4;
}

loc_805D7CD4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805D7CD8:
{
}

loc_805D7CDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805D7CC4;
    }
}

loc_805D7CE0:
{
    r0 = 0;
}

loc_805D7CE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D7CE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D7CF0;
    }
}

loc_805D7CEC:
{
    goto loc_805D7CF4;
}

loc_805D7CF0:
{
    r28 = 0;
}

loc_805D7CF4:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x805D7D08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = 4022;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x805D7D24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 150;
    MemoryInline::FlatWrite32((r28 + 1540), r0);
    r0 = 81;
    MemoryInline::FlatWrite32((r31 + 84), r0);
}

loc_805D7D34:
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
// RECOMP_REGISTRATION base 0x805D7A84 func_805D7A84 preserves=true fpr_mask=0x00000000
