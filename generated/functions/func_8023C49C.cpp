#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023C49C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8023C49C;

loc_8023C49C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctx->lr = 0x8023C4B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023CCD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 196));
    r4 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8023C4C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023C524;
    }
}

loc_8023C4C8:
{
    r0 = MemoryInline::FlatRead16((r31 + 204));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023C4D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023C518;
    }
}

loc_8023C4D4:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023C4DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023C508;
    }
}

loc_8023C4E0:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023C4E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023C508;
    }
}

loc_8023C4EC:
{
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023C4F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023C508;
    }
}

loc_8023C4F8:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r4 + 24), static_cast<uint16_t>(r0));
    goto loc_8023C524;
}

loc_8023C508:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite16((r4 + 24), static_cast<uint16_t>(r0));
    goto loc_8023C524;
}

loc_8023C518:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite16((r4 + 24), static_cast<uint16_t>(r0));
}

loc_8023C524:
{
    r3 = 0x80380000u;
    r4 = (r31 + 72);
    r3 = (r3 + 17432);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023D840u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r30 = 0;
    goto loc_8023C558;
}

loc_8023C53C:
{
    r3 = MemoryInline::FlatRead32((r31 + 196));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023C54C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023C554;
    }
}

loc_8023C550:
{
    ctx->lr = 0x8023C554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8021C4BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8023C554:
{
    r30 = (r30 + 1);
}

loc_8023C558:
{
    r12 = MemoryInline::FlatRead32((r31 + 180));
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x8023C56Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r3 & 65535);
    r0 = (r30 & 65535);
}

loc_8023C578:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8023C53C;
    }
}

loc_8023C57C:
{
    r3 = MemoryInline::FlatRead32((r31 + 196));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023C588:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023C5A8;
    }
}

loc_8023C58C:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r5 = (r2 + -24452);
    r3 = (r3 + 8);
    r4 = 2;
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead8(r5_addr_1);
    r6 = 0;
    ctx->lr = 0x8023C5A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022A164u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8023C5A8:
{
    r3 = MemoryInline::FlatRead32((r31 + 196));
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8023C5B8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8023C5CC;
    }
}

loc_8023C5BC:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (r0 & 1);
}

loc_8023C5C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023C5CC;
    }
}

loc_8023C5C8:
{
    r4 = 1;
}

loc_8023C5CC:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8023C5D4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8023C618;
    }
}

loc_8023C5D8:
{
}

loc_8023C5DC:
{
    r3 = 0;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8023C5F4;
    }
}

loc_8023C5E4:
{
    r0 = MemoryInline::FlatRead16((r31 + 204));
    r0 = (r0 & 2);
}

loc_8023C5EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023C5F4;
    }
}

loc_8023C5F0:
{
    r3 = 1;
}

loc_8023C5F4:
{
}

loc_8023C5F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8023C60C;
    }
}

loc_8023C5FC:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite16((r5 + 20), static_cast<uint16_t>(r0));
    goto loc_8023C618;
}

loc_8023C60C:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite16((r5 + 20), static_cast<uint16_t>(r0));
}

loc_8023C618:
{
}

loc_8023C61C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8023C650;
    }
}

loc_8023C620:
{
    r0 = MemoryInline::FlatRead16((r31 + 204));
    r3 = MemoryInline::FlatRead32((r31 + 196));
    r0 = (r0 & 2);
}

loc_8023C62C:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8023C644;
    }
}

loc_8023C634:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r3 + 20), static_cast<uint16_t>(r0));
    goto loc_8023C650;
}

loc_8023C644:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite16((r3 + 20), static_cast<uint16_t>(r0));
}

loc_8023C650:
{
    r3 = MemoryInline::FlatRead16((r31 + 204));
    r0 = MemoryInline::FlatRead32((r13 + -27728));
    r3 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023C65C:
{
    r3 = (r0 & -9);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023C668;
    }
}

loc_8023C664:
{
    r3 = (r0 | 8);
}

loc_8023C668:
{
    MemoryInline::FlatWrite32((r13 + -27728), r3);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023C49C func_8023C49C preserves=true fpr_mask=0x00000000
