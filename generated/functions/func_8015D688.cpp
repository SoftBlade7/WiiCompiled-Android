#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015D688(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8015D688;

loc_8015D688:
{
    MemoryInline::FlatWriteRam32((r1 + -736), r1);
    r1 = (r1 + -736);
    r0 = ctx->lr;
    r6 = -872415232;
    MemoryInline::FlatWriteRam32((r1 + 740), r0);
    r0 = -41;
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 732), r31);
    r31 = r4;
    r5 = MemoryInline::FlatRead16((r6 + 20490));
    r0 = (r5 & r0);
    r0 = (r0 | 128);
    MemoryInline::FlatWrite16((r6 + 20490), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A1E70u>(ctx);
}

loc_8015D6C4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D40Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015D6CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8015D6C4;
    }
}

loc_8015D6D0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D41Cu>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead32((r13 + -26076));
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 52u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 8));
    r0 = (r0 & 2);
}

loc_8015D6E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015D6F8;
    }
}

loc_8015D6E4:
{
    r0 = (r3 + 590282752);
}

loc_8015D6EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8015D6F8;
    }
}

loc_8015D6F0:
{
    r3 = -590282752;
    r3 = (r3 + 3);
}

loc_8015D6F8:
{
    r4 = -590282752;
    r0 = (r4 + 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8015D704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015D778;
    }
}

loc_8015D708:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015D71C;
    }
}

loc_8015D70C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r4));
}

loc_8015D710:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015D730;
    }
}

loc_8015D714:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015D754;
    }
}

loc_8015D718:
{
    goto loc_8015DA98;
}

loc_8015D71C:
{
    r0 = (r4 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8015D724:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015DA80;
    }
}

loc_8015D728:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015DA98;
    }
}

loc_8015D72C:
{
    goto loc_8015D8E0;
}

loc_8015D730:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r5, r0);
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r12 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8015D744:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015DA98;
    }
}

loc_8015D748:
{
    ctr = r12;
    ctx->lr = 0x8015D750u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8015DA98;
}

loc_8015D754:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r5, r0);
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r12 = MemoryInline::FlatRead32((r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8015D768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015DA98;
    }
}

loc_8015D76C:
{
    ctr = r12;
    ctx->lr = 0x8015D774u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8015DA98;
}

loc_8015D778:
{
    r0 = MemoryInline::FlatRead32((r13 + -26096));
}

loc_8015D780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015D818;
    }
}

loc_8015D784:
{
    r0 = MemoryInline::FlatRead32((r13 + -26092));
}

loc_8015D78C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8015D7D0;
    }
}

loc_8015D790:
{
    r3 = -841940992;
    r3 = (r3 + 3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015D79C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015D7A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015D79C;
    }
}

loc_8015D7A8:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    MemoryInline::FlatWrite32((r13 + -26092), r0);
    MemoryInline::FlatWrite32((r13 + -26096), r0);
    r12 = MemoryInline::FlatRead32((r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8015D7C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015DA98;
    }
}

loc_8015D7C4:
{
    ctr = r12;
    ctx->lr = 0x8015D7CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8015DA98;
}

loc_8015D7D0:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015D7DC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015D7E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015D7DC;
    }
}

loc_8015D7E8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r4 = MemoryInline::FlatRead32((r13 + -26092));
    ctx->lr = 0x8015D7F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015DABCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r4 = 2;
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    r3 = MemoryInline::FlatRead32((r13 + -26092));
    MemoryInline::FlatWrite32((r13 + -26096), r0);
    MemoryInline::FlatWrite32((r13 + -26076), r3);
    MemoryInline::FlatWrite32((r13 + -26092), r0);
    goto loc_8015DA98;
}

loc_8015D818:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r5 + 56));
}

loc_8015D820:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015D8A0;
    }
}

loc_8015D824:
{
    r0 = MemoryInline::FlatRead32((r13 + -26080));
}

loc_8015D82C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8015D864;
    }
}

loc_8015D830:
{
    r3 = -841940992;
    r3 = (r3 + 3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015D83C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015D844:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015D83C;
    }
}

loc_8015D848:
{
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r12 = MemoryInline::FlatRead32((r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8015D854:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015DA98;
    }
}

loc_8015D858:
{
    ctr = r12;
    ctx->lr = 0x8015D860u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8015DA98;
}

loc_8015D864:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015D870:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015D878:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015D870;
    }
}

loc_8015D87C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r4 = MemoryInline::FlatRead32((r13 + -26080));
    ctx->lr = 0x8015D888u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015DABCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r0 = 2;
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r13 + -26080));
    MemoryInline::FlatWrite32((r13 + -26076), r0);
    goto loc_8015DA98;
}

loc_8015D8A0:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015D8AC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015D8B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015D8AC;
    }
}

loc_8015D8B8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r4 = MemoryInline::FlatRead32((r3 + 56));
    ctx->lr = 0x8015D8C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015DABCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r0 = 2;
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r0 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWrite32((r13 + -26076), r0);
    goto loc_8015DA98;
}

loc_8015D8E0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26096));
}

loc_8015D8E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015D960;
    }
}

loc_8015D8EC:
{
    r0 = MemoryInline::FlatRead32((r13 + -26092));
}

loc_8015D8F4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8015D954;
    }
}

loc_8015D8F8:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r5 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8015D900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015D910;
    }
}

loc_8015D904:
{
    r3 = r5;
    ctr = r12;
    ctx->lr = 0x8015D910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8015D910:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015D91C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015D924:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015D91C;
    }
}

loc_8015D928:
{
    r4 = MemoryInline::FlatRead32((r13 + -26092));
    r3 = 0;
    ctx->lr = 0x8015D934u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015DABCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015DE88u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r13 + -26092));
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26096), r0);
    MemoryInline::FlatWrite32((r13 + -26076), r3);
    MemoryInline::FlatWrite32((r13 + -26092), r0);
    goto loc_8015DA98;
}

loc_8015D954:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26092), r0);
    MemoryInline::FlatWrite32((r13 + -26096), r0);
}

loc_8015D960:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r5 + 56));
}

loc_8015D968:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015DA1C;
    }
}

loc_8015D96C:
{
    r0 = MemoryInline::FlatRead32((r13 + -26080));
}

loc_8015D974:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8015D9C0;
    }
}

loc_8015D978:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r5 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8015D980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015D990;
    }
}

loc_8015D984:
{
    r3 = r5;
    ctr = r12;
    ctx->lr = 0x8015D990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8015D990:
{
    r3 = -841940992;
    r3 = (r3 + 2);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015D99C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015D9A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015D99C;
    }
}

loc_8015D9A8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r0 = 3;
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015DE88u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    goto loc_8015DA98;
}

loc_8015D9C0:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r5 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8015D9C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015D9D8;
    }
}

loc_8015D9CC:
{
    r3 = r5;
    ctr = r12;
    ctx->lr = 0x8015D9D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8015D9D8:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015D9E4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015D9EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015D9E4;
    }
}

loc_8015D9F0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26076));
    r0 = 3;
    r3 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    r4 = MemoryInline::FlatRead32((r13 + -26080));
    ctx->lr = 0x8015DA08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015DABCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26080));
    r3 = MemoryInline::FlatRead32((r13 + -26084));
    MemoryInline::FlatWrite32((r13 + -26076), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015DE88u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    goto loc_8015DA98;
}

loc_8015DA1C:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r5 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8015DA24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015DA34;
    }
}

loc_8015DA28:
{
    r3 = r5;
    ctr = r12;
    ctx->lr = 0x8015DA34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8015DA34:
{
    r3 = -841940992;
    r3 = (r3 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DA40:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015DA48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015DA40;
    }
}

loc_8015DA4C:
{
    r4 = MemoryInline::FlatRead32((r13 + -26076));
    r0 = 3;
    r3 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    r4 = MemoryInline::FlatRead32((r13 + -26076));
    r4 = MemoryInline::FlatRead32((r4 + 56));
    ctx->lr = 0x8015DA68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015DABCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r13 + -26076));
    r3 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWrite32((r13 + -26076), r3);
    r3 = MemoryInline::FlatRead32((r3 + 60));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015DE88u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    goto loc_8015DA98;
}

loc_8015DA80:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r5 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8015DA88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015DA98;
    }
}

loc_8015DA8C:
{
    r3 = r5;
    ctr = r12;
    ctx->lr = 0x8015DA98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8015DA98:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A1E70u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 740));
    r31 = MemoryInline::FlatRead32((r1 + 732));
    ctx->lr = r0;
    r1 = (r1 + 736);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8015D688 func_8015D688 preserves=true fpr_mask=0x00000000
