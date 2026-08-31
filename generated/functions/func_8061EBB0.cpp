#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061EBB0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8061EBB0;

loc_8061EBB0:
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
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8061EBCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061F1B8;
    }
}

loc_8061EBD0:
{
    r0 = MemoryInline::FlatRead32((r3 + 104));
}

loc_8061EBD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061EBF8;
    }
}

loc_8061EBDC:
{
}

loc_8061EBE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8061ECC0;
    }
}

loc_8061EBE4:
{
}

loc_8061EBE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8061EEAC;
    }
}

loc_8061EBEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8061EBF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061F0BC;
    }
}

loc_8061EBF4:
{
    goto loc_8061F1B8;
}

loc_8061EBF8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8061EC0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061EC18;
    }
}

loc_8061EC10:
{
    r29 = 0;
    goto loc_8061EC6C;
}

loc_8061EC18:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061EC68;
    }
}

loc_8061EC24:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8061EC38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8061EC50;
}

loc_8061EC3C:
{
}

loc_8061EC40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8061EC4C;
    }
}

loc_8061EC44:
{
    r0 = 1;
    goto loc_8061EC5C;
}

loc_8061EC4C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8061EC50:
{
}

loc_8061EC54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8061EC3C;
    }
}

loc_8061EC58:
{
    r0 = 0;
}

loc_8061EC5C:
{
}

loc_8061EC60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061EC68;
    }
}

loc_8061EC64:
{
    goto loc_8061EC6C;
}

loc_8061EC68:
{
    r29 = 0;
}

loc_8061EC6C:
{
    r0 = MemoryInline::FlatRead32((r29 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061EC74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061F1B8;
    }
}

loc_8061EC78:
{
    r6 = 0x809C0000u;
    r30 = 1;
    r4 = MemoryInline::FlatRead32((r6 + 7736));
    r5 = 0x809C0000u;
    r3 = (r29 + 160);
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 964), r30);
    r4 = MemoryInline::FlatRead32((r6 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + -10424));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r4 + 972), r0);
    ctx->lr = 0x8061ECACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E2198u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r4 = 0;
    // inline leaf 0x805E1800 (8 guest instruction(s))
}

loc_inl0_0x805E1800:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x805E1804:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x805E1814;
    }
}

loc_inl0_0x805E1808:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r3 + 156), r0);
    goto loc_inl0_cont_805E1800;
}

loc_inl0_0x805E1814:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r3 + 156), r0);
}

loc_inl0_cont_805E1800:
{
    // end of inlined leaf 0x805E1800
    MemoryInline::FlatWrite32((r31 + 104), r30);
    goto loc_8061F1B8;
}

loc_8061ECC0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8061ECD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061ECE0;
    }
}

loc_8061ECD8:
{
    r29 = 0;
    goto loc_8061ED34;
}

loc_8061ECE0:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061ED30;
    }
}

loc_8061ECEC:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8061ED00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8061ED18;
}

loc_8061ED04:
{
}

loc_8061ED08:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8061ED14;
    }
}

loc_8061ED0C:
{
    r0 = 1;
    goto loc_8061ED24;
}

loc_8061ED14:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8061ED18:
{
}

loc_8061ED1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8061ED04;
    }
}

loc_8061ED20:
{
    r0 = 0;
}

loc_8061ED24:
{
}

loc_8061ED28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061ED30;
    }
}

loc_8061ED2C:
{
    goto loc_8061ED34;
}

loc_8061ED30:
{
    r29 = 0;
}

loc_8061ED34:
{
    r0 = MemoryInline::FlatRead32((r29 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061ED3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061F1B8;
    }
}

loc_8061ED40:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + -10424));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    ctx->lr = 0x8061ED50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C120u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8061ED54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061EE24;
    }
}

loc_8061ED58:
{
    r29 = MemoryInline::FlatRead32((r30 + -10424));
    r3 = MemoryInline::FlatRead32((r29 + 24));
    ctx->lr = 0x8061ED64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C120u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8061ED68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061ED74;
    }
}

loc_8061ED6C:
{
    r5 = MemoryInline::FlatRead32((r29 + 24));
    goto loc_8061ED78;
}

loc_8061ED74:
{
    r5 = 0;
}

loc_8061ED78:
{
    r3 = 0x809C0000u;
    r4 = (r31 + 112);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x8061ED88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066DD94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8061ED8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061ED9C;
    }
}

loc_8061ED90:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_8061F1B8;
}

loc_8061ED9C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8061EDB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061EDBC;
    }
}

loc_8061EDB4:
{
    r29 = 0;
    goto loc_8061EE10;
}

loc_8061EDBC:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061EE0C;
    }
}

loc_8061EDC8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8061EDDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8061EDF4;
}

loc_8061EDE0:
{
}

loc_8061EDE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8061EDF0;
    }
}

loc_8061EDE8:
{
    r0 = 1;
    goto loc_8061EE00;
}

loc_8061EDF0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8061EDF4:
{
}

loc_8061EDF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8061EDE0;
    }
}

loc_8061EDFC:
{
    r0 = 0;
}

loc_8061EE00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061EE04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061EE0C;
    }
}

loc_8061EE08:
{
    goto loc_8061EE10;
}

loc_8061EE0C:
{
    r29 = 0;
}

loc_8061EE10:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_8061F1B8;
}

loc_8061EE24:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8061EE38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061EE44;
    }
}

loc_8061EE3C:
{
    r29 = 0;
    goto loc_8061EE98;
}

loc_8061EE44:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061EE94;
    }
}

loc_8061EE50:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8061EE64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8061EE7C;
}

loc_8061EE68:
{
}

loc_8061EE6C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8061EE78;
    }
}

loc_8061EE70:
{
    r0 = 1;
    goto loc_8061EE88;
}

loc_8061EE78:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8061EE7C:
{
}

loc_8061EE80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8061EE68;
    }
}

loc_8061EE84:
{
    r0 = 0;
}

loc_8061EE88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061EE8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061EE94;
    }
}

loc_8061EE90:
{
    goto loc_8061EE98;
}

loc_8061EE94:
{
    r29 = 0;
}

loc_8061EE98:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_8061F1B8;
}

loc_8061EEAC:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8061EEBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061F1B8;
    }
}

loc_8061EEC0:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
}

loc_8061EECC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8061EEDC;
    }
}

loc_8061EED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_8061EED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061F034;
    }
}

loc_8061EED8:
{
    goto loc_8061F1B8;
}

loc_8061EEDC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8061EEF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061EEFC;
    }
}

loc_8061EEF4:
{
    r29 = 0;
    goto loc_8061EF50;
}

loc_8061EEFC:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061EF4C;
    }
}

loc_8061EF08:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8061EF1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8061EF34;
}

loc_8061EF20:
{
}

loc_8061EF24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8061EF30;
    }
}

loc_8061EF28:
{
    r0 = 1;
    goto loc_8061EF40;
}

loc_8061EF30:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8061EF34:
{
}

loc_8061EF38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8061EF20;
    }
}

loc_8061EF3C:
{
    r0 = 0;
}

loc_8061EF40:
{
}

loc_8061EF44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061EF4C;
    }
}

loc_8061EF48:
{
    goto loc_8061EF50;
}

loc_8061EF4C:
{
    r29 = 0;
}

loc_8061EF50:
{
    r28 = -1;
    r27 = 0;
    r30 = 0x809C0000u;
    goto loc_8061EFAC;
}

loc_8061EF60:
{
    r4 = r27;
    r3 = (r29 + 160);
    // inline leaf 0x805E2500 (10 guest instruction(s))
}

loc_inl5_0x805E2500:
{
}

loc_inl5_0x805E2504:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl5_0x805E2520;
    }
}

loc_inl5_0x805E2508:
{
    r0 = MemoryInline::FlatRead32((r3 + 608));
}

loc_inl5_0x805E2510:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_inl5_0x805E2520;
    }
}

loc_inl5_0x805E2514:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_inl5_cont_805E2500;
}

loc_inl5_0x805E2520:
{
    r3 = 0;
}

loc_inl5_cont_805E2500:
{
    // end of inlined leaf 0x805E2500
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8061EF74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061EFA8;
    }
}

loc_8061EF78:
{
    r4 = MemoryInline::FlatRead32((r31 + 108));
    r0 = MemoryInline::FlatRead32((r3 + 196));
}

loc_8061EF84:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8061EFA8;
    }
}

loc_8061EF88:
{
    r4 = MemoryInline::FlatRead32((r30 + 7736));
    r5 = MemoryInline::FlatRead32((r3 + 184));
    r3 = MemoryInline::FlatRead32((r4 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 968));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8061EF9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061EFA8;
    }
}

loc_8061EFA0:
{
    r28 = r27;
    goto loc_8061EFB8;
}

loc_8061EFA8:
{
    r27 = (r27 + 1);
}

loc_8061EFAC:
{
    r0 = MemoryInline::FlatRead32((r29 + 768));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_8061EFB4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8061EF60;
    }
}

loc_8061EFB8:
{
    r4 = r28;
    r3 = (r29 + 160);
    ctx->lr = 0x8061EFC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E2610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8061EFD4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8061EFF4;
    }
}

loc_8061EFD8:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_8061EFF8;
}

loc_8061EFF4:
{
    r3 = 0;
}

loc_8061EFF8:
{
    r5 = (r3 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r5 + -27996));
    r0 = (r3 + -31073);
}

loc_8061F00C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8061F018;
    }
}

loc_8061F010:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + -27996), r0);
}

loc_8061F018:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl6_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl6_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl6_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl6_cont_80621410;
}

loc_inl6_return:
{
}

loc_inl6_cont_80621410:
{
    // end of inlined leaf 0x80621410
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_8061F1B8;
}

loc_8061F034:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8061F048:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061F054;
    }
}

loc_8061F04C:
{
    r29 = 0;
    goto loc_8061F0A8;
}

loc_8061F054:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061F0A4;
    }
}

loc_8061F060:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8061F074u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8061F08C;
}

loc_8061F078:
{
}

loc_8061F07C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8061F088;
    }
}

loc_8061F080:
{
    r0 = 1;
    goto loc_8061F098;
}

loc_8061F088:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8061F08C:
{
}

loc_8061F090:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8061F078;
    }
}

loc_8061F094:
{
    r0 = 0;
}

loc_8061F098:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061F09C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061F0A4;
    }
}

loc_8061F0A0:
{
    goto loc_8061F0A8;
}

loc_8061F0A4:
{
    r29 = 0;
}

loc_8061F0A8:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_8061F1B8;
}

loc_8061F0BC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8061F0D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061F0DC;
    }
}

loc_8061F0D4:
{
    r29 = 0;
    goto loc_8061F130;
}

loc_8061F0DC:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061F12C;
    }
}

loc_8061F0E8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8061F0FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8061F114;
}

loc_8061F100:
{
}

loc_8061F104:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8061F110;
    }
}

loc_8061F108:
{
    r0 = 1;
    goto loc_8061F120;
}

loc_8061F110:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8061F114:
{
}

loc_8061F118:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8061F100;
    }
}

loc_8061F11C:
{
    r0 = 0;
}

loc_8061F120:
{
}

loc_8061F124:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061F12C;
    }
}

loc_8061F128:
{
    goto loc_8061F130;
}

loc_8061F12C:
{
    r29 = 0;
}

loc_8061F130:
{
    r0 = MemoryInline::FlatRead32((r29 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061F138:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061F1B8;
    }
}

loc_8061F13C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8061F150:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061F15C;
    }
}

loc_8061F154:
{
    r29 = 0;
    goto loc_8061F1B0;
}

loc_8061F15C:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061F1AC;
    }
}

loc_8061F168:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8061F17Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8061F194;
}

loc_8061F180:
{
}

loc_8061F184:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8061F190;
    }
}

loc_8061F188:
{
    r0 = 1;
    goto loc_8061F1A0;
}

loc_8061F190:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8061F194:
{
}

loc_8061F198:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8061F180;
    }
}

loc_8061F19C:
{
    r0 = 0;
}

loc_8061F1A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061F1A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061F1AC;
    }
}

loc_8061F1A8:
{
    goto loc_8061F1B0;
}

loc_8061F1AC:
{
    r29 = 0;
}

loc_8061F1B0:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
}

loc_8061F1B8:
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
    ctx->gpr[6] = r6;
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
// RECOMP_REGISTRATION base 0x8061EBB0 func_8061EBB0 preserves=true fpr_mask=0x00000000
