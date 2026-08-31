#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808646F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808646F0;

loc_808646F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead8((r3 + 1791));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864718:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80864724;
    }
}

loc_8086471C:
{
    r3 = 0;
    goto loc_808648F8;
}

loc_80864724:
{
    r0 = (r4 + -11);
    r29 = 60;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
}

loc_80864730:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_808648EC;
    }
}

loc_80864734:
{
    r4 = 0x808E0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -17552);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x808648C4u:
        goto loc_808648C4;
        break;
    case 0x808648D0u:
        goto loc_808648D0;
        break;
    case 0x808648ECu:
        goto loc_808648EC;
        break;
    case 0x80864854u:
        goto loc_80864854;
        break;
    case 0x80864874u:
        goto loc_80864874;
        break;
    case 0x8086474Cu:
        goto loc_8086474C;
        break;
    case 0x808647C8u:
        goto loc_808647C8;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8086474C:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 10232));
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8086475C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(27))) {
        goto loc_80864764;
    }
}

loc_80864760:
{
    r29 = 20;
}

loc_80864764:
{
    r0 = MemoryInline::FlatRead8((r3 + 1792));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086476C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086477C;
    }
}

loc_80864770:
{
    r0 = MemoryInline::FlatRead32((r3 + 1736));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(23));
}

loc_80864778:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80864780;
    }
}

loc_8086477C:
{
    r31 = 27;
}

loc_80864780:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 5;
    r12 = MemoryInline::FlatRead32((r12 + 308));
    ctr = r12;
    ctx->lr = 0x80864798u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_808647A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808647B8;
    }
}

loc_808647A4:
{
    r3 = r30;
    r5 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80865DE8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808647B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808647C0;
    }
}

loc_808647B8:
{
    MemoryInline::FlatWrite32((r30 + 252), r31);
    MemoryInline::FlatWrite32((r30 + 256), r29);
}

loc_808647C0:
{
    r3 = 1;
    goto loc_808648F8;
}

loc_808647C8:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 10232));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(27));
}

loc_808647D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808647EC;
    }
}

loc_808647DC:
{
    r0 = 27;
    MemoryInline::FlatWrite32((r3 + 1736), r0);
    r3 = 0;
    goto loc_808648F8;
}

loc_808647EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1792));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808647F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80864808;
    }
}

loc_808647F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 1736));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(23));
}

loc_80864800:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864808;
    }
}

loc_80864804:
{
    r31 = 26;
}

loc_80864808:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 5;
    r12 = MemoryInline::FlatRead32((r12 + 308));
    ctr = r12;
    ctx->lr = 0x80864820u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80864828:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864840;
    }
}

loc_8086482C:
{
    r3 = r30;
    r5 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80865DE8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8086483C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086484C;
    }
}

loc_80864840:
{
    r0 = 60;
    MemoryInline::FlatWrite32((r30 + 252), r31);
    MemoryInline::FlatWrite32((r30 + 256), r0);
}

loc_8086484C:
{
    r3 = 1;
    goto loc_808648F8;
}

loc_80864854:
{
    r3 = MemoryInline::FlatRead32((r3 + 1736));
    r0 = (r3 + -22);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80864860:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086486C;
    }
}

loc_80864864:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(25));
}

loc_80864868:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808648EC;
    }
}

loc_8086486C:
{
    r3 = 0;
    goto loc_808648F8;
}

loc_80864874:
{
    r4 = MemoryInline::FlatRead32((r3 + 1736));
    r0 = (r4 + -22);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80864880:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086488C;
    }
}

loc_80864884:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(25));
}

loc_80864888:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80864894;
    }
}

loc_8086488C:
{
    r3 = 0;
    goto loc_808648F8;
}

loc_80864894:
{
    r4 = MemoryInline::FlatRead32((r3 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_8086489C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808648B0;
    }
}

loc_808648A0:
{
    r5 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80865DE8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808648AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808648BC;
    }
}

loc_808648B0:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r30 + 252), r31);
    MemoryInline::FlatWrite32((r30 + 256), r0);
}

loc_808648BC:
{
    r3 = 1;
    goto loc_808648F8;
}

loc_808648C4:
{
    r4 = 1;
    ctx->lr = 0x808648CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80866628u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808648EC;
}

loc_808648D0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(29));
}

loc_808648E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808648EC;
    }
}

loc_808648E4:
{
    r3 = 0;
    goto loc_808648F8;
}

loc_808648EC:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x808648F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80864914u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808648F8:
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x808646F0 func_808646F0 preserves=true fpr_mask=0x00000000
