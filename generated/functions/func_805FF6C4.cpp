#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FF6C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805FF6C4;

loc_805FF6C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r3 + 108));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_805FF6E8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806000A8;
    }
}

loc_805FF6EC:
{
    r4 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -24272);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x805FF704u:
        goto loc_805FF704;
        break;
    case 0x805FF8A8u:
        goto loc_805FF8A8;
        break;
    case 0x805FF948u:
        goto loc_805FF948;
        break;
    case 0x806000A8u:
        goto loc_806000A8;
        break;
    case 0x80600038u:
        goto loc_80600038;
        break;
    case 0x80600060u:
        goto loc_80600060;
        break;
    case 0x80600068u:
        goto loc_80600068;
        break;
    case 0x80600090u:
        goto loc_80600090;
        break;
    case 0x80600098u:
        goto loc_80600098;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_805FF704:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 784));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805FF718:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FF724;
    }
}

loc_805FF71C:
{
    r29 = 0;
    goto loc_805FF778;
}

loc_805FF724:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7408);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF774;
    }
}

loc_805FF730:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805FF744u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805FF75C;
}

loc_805FF748:
{
}

loc_805FF74C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805FF758;
    }
}

loc_805FF750:
{
    r0 = 1;
    goto loc_805FF768;
}

loc_805FF758:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805FF75C:
{
}

loc_805FF760:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805FF748;
    }
}

loc_805FF764:
{
    r0 = 0;
}

loc_805FF768:
{
}

loc_805FF76C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FF774;
    }
}

loc_805FF770:
{
    goto loc_805FF778;
}

loc_805FF774:
{
    r29 = 0;
}

loc_805FF778:
{
    r0 = MemoryInline::FlatRead32((r29 + 2608));
}

loc_805FF780:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805FF85C;
    }
}

loc_805FF784:
{
    r0 = MemoryInline::FlatRead32((r31 + 104));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805FF78C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FF84C;
    }
}

loc_805FF790:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 784));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805FF7A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FF7B0;
    }
}

loc_805FF7A8:
{
    r29 = 0;
    goto loc_805FF804;
}

loc_805FF7B0:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7408);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF800;
    }
}

loc_805FF7BC:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805FF7D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805FF7E8;
}

loc_805FF7D4:
{
}

loc_805FF7D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805FF7E4;
    }
}

loc_805FF7DC:
{
    r0 = 1;
    goto loc_805FF7F4;
}

loc_805FF7E4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805FF7E8:
{
}

loc_805FF7EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805FF7D4;
    }
}

loc_805FF7F0:
{
    r0 = 0;
}

loc_805FF7F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FF7F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF800;
    }
}

loc_805FF7FC:
{
    goto loc_805FF804;
}

loc_805FF800:
{
    r29 = 0;
}

loc_805FF804:
{
    r3 = (r29 + 656);
    r4 = 7400;
    r5 = 0;
    ctx->lr = 0x805FF814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807E987Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r29 + 1028);
    r4 = 7408;
    r5 = 0;
    ctx->lr = 0x805FF824u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 194;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x805FF840u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 108), r0);
    goto loc_806000A8;
}

loc_805FF84C:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x805FF858u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806003E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FF85C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_805FF870:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(143))) {
        goto loc_805FF87C;
    }
}

loc_805FF874:
{
}

loc_805FF878:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(172))) {
        goto loc_805FF888;
    }
}

loc_805FF87C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 112), r0);
    goto loc_805FF890;
}

loc_805FF888:
{
    r0 = 193;
    MemoryInline::FlatWrite32((r31 + 112), r0);
}

loc_805FF890:
{
    r4 = 0x80890000u;
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 25608));
    r4 = 1;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl0_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl0_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80602494;
    }
}

loc_inl0_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl0_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl0_cont_80602488:
{
    // end of inlined leaf 0x80602488
    goto loc_806000A8;
}

loc_805FF8A8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 784));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805FF8BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FF8C8;
    }
}

loc_805FF8C0:
{
    r29 = 0;
    goto loc_805FF91C;
}

loc_805FF8C8:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7408);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF918;
    }
}

loc_805FF8D4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805FF8E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805FF900;
}

loc_805FF8EC:
{
}

loc_805FF8F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805FF8FC;
    }
}

loc_805FF8F4:
{
    r0 = 1;
    goto loc_805FF90C;
}

loc_805FF8FC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805FF900:
{
}

loc_805FF904:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805FF8EC;
    }
}

loc_805FF908:
{
    r0 = 0;
}

loc_805FF90C:
{
}

loc_805FF910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FF918;
    }
}

loc_805FF914:
{
    goto loc_805FF91C;
}

loc_805FF918:
{
    r29 = 0;
}

loc_805FF91C:
{
    r0 = MemoryInline::FlatRead32((r29 + 2608));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FF924:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FF938;
    }
}

loc_805FF928:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x805FF934u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806003E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FF938:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x805FF944u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80600128u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FF948:
{
    r0 = MemoryInline::FlatRead32((r3 + 104));
    r4 = 195;
}

loc_805FF954:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_805FF95C;
    }
}

loc_805FF958:
{
    r4 = 196;
}

loc_805FF95C:
{
    r3 = 0x809C0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805FF978:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FF984;
    }
}

loc_805FF97C:
{
    r29 = 0;
    goto loc_805FF9D8;
}

loc_805FF984:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7412);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF9D4;
    }
}

loc_805FF990:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805FF9A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805FF9BC;
}

loc_805FF9A8:
{
}

loc_805FF9AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805FF9B8;
    }
}

loc_805FF9B0:
{
    r0 = 1;
    goto loc_805FF9C8;
}

loc_805FF9B8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805FF9BC:
{
}

loc_805FF9C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805FF9A8;
    }
}

loc_805FF9C4:
{
    r0 = 0;
}

loc_805FF9C8:
{
}

loc_805FF9CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FF9D4;
    }
}

loc_805FF9D0:
{
    goto loc_805FF9D8;
}

loc_805FF9D4:
{
    r29 = 0;
}

loc_805FF9D8:
{
    r3 = MemoryInline::FlatRead32((r31 + 104));
}

loc_805FF9E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805FFA74;
    }
}

loc_805FF9E4:
{
    r0 = MemoryInline::FlatRead32((r29 + 3816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FF9EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805FFA54;
    }
}

loc_805FF9F0:
{
    MemoryInline::FlatWrite32((r31 + 116), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFA04;
    }
}

loc_805FF9F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805FF9FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFA28;
    }
}

loc_805FFA00:
{
    goto loc_805FFA48;
}

loc_805FFA04:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r3 = (r3 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 13068));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 13068), r0);
    goto loc_805FFA48;
}

loc_805FFA28:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r3 = (r3 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 13068));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 13068), r0);
}

loc_805FFA48:
{
    r3 = r31;
    ctx->lr = 0x805FFA50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFA54:
{
    r4 = 0x80890000u;
    r0 = 192;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 25608));
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 112), r0);
    r4 = 1;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl1_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl1_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x80602494;
    }
}

loc_inl1_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl1_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80602488:
{
    // end of inlined leaf 0x80602488
    goto loc_806000A8;
}

loc_805FFA74:
{
    r0 = MemoryInline::FlatRead32((r29 + 3816));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FFA7C:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_805FFF64;
    }
}

loc_805FFA80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805FFA84:
{
    MemoryInline::FlatWrite32((r31 + 116), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFAB0;
    }
}

loc_805FFA8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_805FFA90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFB18;
    }
}

loc_805FFA94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_805FFA98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFC50;
    }
}

loc_805FFA9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_805FFAA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFE94;
    }
}

loc_805FFAA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_805FFAA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFEFC;
    }
}

loc_805FFAAC:
{
    goto loc_806000A8;
}

loc_805FFAB0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_805FFAC0;
    }
}

loc_805FFAB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805FFAB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFAEC;
    }
}

loc_805FFABC:
{
    goto loc_806000A8;
}

loc_805FFAC0:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r4 + 13068), r0);
    ctx->lr = 0x805FFAE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFAEC:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r4 + 13068), r0);
    ctx->lr = 0x805FFB14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFB18:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_805FFB28;
    }
}

loc_805FFB1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805FFB20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFC24;
    }
}

loc_805FFB24:
{
    goto loc_806000A8;
}

loc_805FFB28:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x805FFB34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80671770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805FFB38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFC18;
    }
}

loc_805FFB3C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 804));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805FFB50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FFB5C;
    }
}

loc_805FFB54:
{
    r29 = 0;
    goto loc_805FFBB0;
}

loc_805FFB5C:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFBAC;
    }
}

loc_805FFB68:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805FFB7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805FFB94;
}

loc_805FFB80:
{
}

loc_805FFB84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805FFB90;
    }
}

loc_805FFB88:
{
    r0 = 1;
    goto loc_805FFBA0;
}

loc_805FFB90:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805FFB94:
{
}

loc_805FFB98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805FFB80;
    }
}

loc_805FFB9C:
{
    r0 = 0;
}

loc_805FFBA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FFBA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFBAC;
    }
}

loc_805FFBA8:
{
    goto loc_805FFBB0;
}

loc_805FFBAC:
{
    r29 = 0;
}

loc_805FFBB0:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x805FFBC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r4 = 7300;
    r5 = 0;
    ctx->lr = 0x805FFBD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805BB210u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 4301;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x805FFBF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 199;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x805FFC0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 108), r0);
    goto loc_806000A8;
}

loc_805FFC18:
{
    r3 = r31;
    ctx->lr = 0x805FFC20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80600DC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFC24:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r4 + 13068), r0);
    ctx->lr = 0x805FFC4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFC50:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_805FFC68;
    }
}

loc_805FFC54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805FFC58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFD68;
    }
}

loc_805FFC5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805FFC60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFE68;
    }
}

loc_805FFC64:
{
    goto loc_806000A8;
}

loc_805FFC68:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x805FFC78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80671390u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805FFC7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFD5C;
    }
}

loc_805FFC80:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 804));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805FFC94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FFCA0;
    }
}

loc_805FFC98:
{
    r29 = 0;
    goto loc_805FFCF4;
}

loc_805FFCA0:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFCF0;
    }
}

loc_805FFCAC:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805FFCC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805FFCD8;
}

loc_805FFCC4:
{
}

loc_805FFCC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805FFCD4;
    }
}

loc_805FFCCC:
{
    r0 = 1;
    goto loc_805FFCE4;
}

loc_805FFCD4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805FFCD8:
{
}

loc_805FFCDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805FFCC4;
    }
}

loc_805FFCE0:
{
    r0 = 0;
}

loc_805FFCE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FFCE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFCF0;
    }
}

loc_805FFCEC:
{
    goto loc_805FFCF4;
}

loc_805FFCF0:
{
    r29 = 0;
}

loc_805FFCF4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x805FFD08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r4 = 7300;
    r5 = 0;
    ctx->lr = 0x805FFD18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805BB210u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 4301;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x805FFD34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 199;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x805FFD50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 6;
    MemoryInline::FlatWrite32((r31 + 108), r0);
    goto loc_806000A8;
}

loc_805FFD5C:
{
    r3 = r31;
    ctx->lr = 0x805FFD64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80600DC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFD68:
{
    r3 = 0x809C0000u;
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x805FFD78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80671390u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805FFD7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFE5C;
    }
}

loc_805FFD80:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 804));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805FFD94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FFDA0;
    }
}

loc_805FFD98:
{
    r29 = 0;
    goto loc_805FFDF4;
}

loc_805FFDA0:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFDF0;
    }
}

loc_805FFDAC:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805FFDC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805FFDD8;
}

loc_805FFDC4:
{
}

loc_805FFDC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805FFDD4;
    }
}

loc_805FFDCC:
{
    r0 = 1;
    goto loc_805FFDE4;
}

loc_805FFDD4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805FFDD8:
{
}

loc_805FFDDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805FFDC4;
    }
}

loc_805FFDE0:
{
    r0 = 0;
}

loc_805FFDE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FFDE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFDF0;
    }
}

loc_805FFDEC:
{
    goto loc_805FFDF4;
}

loc_805FFDF0:
{
    r29 = 0;
}

loc_805FFDF4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x805FFE08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r4 = 7300;
    r5 = 0;
    ctx->lr = 0x805FFE18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805BB210u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 4301;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x805FFE34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 199;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x805FFE50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 6;
    MemoryInline::FlatWrite32((r31 + 108), r0);
    goto loc_806000A8;
}

loc_805FFE5C:
{
    r3 = r31;
    ctx->lr = 0x805FFE64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80600DC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFE68:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r4 + 13068), r0);
    ctx->lr = 0x805FFE90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFE94:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_805FFEA4;
    }
}

loc_805FFE98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805FFE9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFED0;
    }
}

loc_805FFEA0:
{
    goto loc_806000A8;
}

loc_805FFEA4:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r4 + 13068), r0);
    ctx->lr = 0x805FFECCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFED0:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32((r4 + 13068), r0);
    ctx->lr = 0x805FFEF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFEFC:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_805FFF0C;
    }
}

loc_805FFF00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805FFF04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFF38;
    }
}

loc_805FFF08:
{
    goto loc_806000A8;
}

loc_805FFF0C:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r4 + 13068), r0);
    ctx->lr = 0x805FFF34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFF38:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite32((r4 + 13068), r0);
    ctx->lr = 0x805FFF60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_805FFF64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_805FFF68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80600028;
    }
}

loc_805FFF6C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 784));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805FFF80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FFF8C;
    }
}

loc_805FFF84:
{
    r29 = 0;
    goto loc_805FFFE0;
}

loc_805FFF8C:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7408);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFFDC;
    }
}

loc_805FFF98:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805FFFACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805FFFC4;
}

loc_805FFFB0:
{
}

loc_805FFFB4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805FFFC0;
    }
}

loc_805FFFB8:
{
    r0 = 1;
    goto loc_805FFFD0;
}

loc_805FFFC0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805FFFC4:
{
}

loc_805FFFC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805FFFB0;
    }
}

loc_805FFFCC:
{
    r0 = 0;
}

loc_805FFFD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FFFD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FFFDC;
    }
}

loc_805FFFD8:
{
    goto loc_805FFFE0;
}

loc_805FFFDC:
{
    r29 = 0;
}

loc_805FFFE0:
{
    r3 = (r29 + 656);
    r4 = 7400;
    r5 = 0;
    ctx->lr = 0x805FFFF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807E987Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r29 + 1028);
    r4 = 7408;
    r5 = 0;
    ctx->lr = 0x80600000u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 194;
    r5 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8060001Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 108), r0);
    goto loc_806000A8;
}

loc_80600028:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80600034u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80600128u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_80600038:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r4 + 13068), r0);
    ctx->lr = 0x8060005Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_80600060:
{
    ctx->lr = 0x80600064u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80600DC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_80600068:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r4 + 13068), r0);
    ctx->lr = 0x8060008Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806009FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_80600090:
{
    ctx->lr = 0x80600094u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80600DC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806000A8;
}

loc_80600098:
{
    r5 = 0x80890000u;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 25608));
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl2_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl2_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x80602494;
    }
}

loc_inl2_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl2_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl2_cont_80602488:
{
    // end of inlined leaf 0x80602488
}

loc_806000A8:
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
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x805FF6C4 func_805FF6C4 preserves=true fpr_mask=0x00000000
