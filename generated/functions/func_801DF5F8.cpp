#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DF5F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DF5F8;

loc_801DF5F8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 196608;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r5 + 7168);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801DF610:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DF628;
    }
}

loc_801DF620:
{
    r3 = -8;
    goto loc_801DF6F0;
}

loc_801DF628:
{
    r31 = (r4 + 16384);
    r4 = (r1 + 12);
    ctx->lr = 0x801DF634u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DFF20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DF638:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DF640;
    }
}

loc_801DF63C:
{
    goto loc_801DF6F0;
}

loc_801DF640:
{
}

loc_801DF644:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801DF678;
    }
}

loc_801DF648:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801DF658:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DF664;
    }
}

loc_801DF65C:
{
    r3 = -6;
    goto loc_801DF6F0;
}

loc_801DF664:
{
    r0 = MemoryInline::FlatRead32((r4 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801DF66C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801DF6EC;
    }
}

loc_801DF670:
{
    r3 = -6;
    goto loc_801DF6F0;
}

loc_801DF678:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_801DF67C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DF6E4;
    }
}

loc_801DF680:
{
    goto loc_801DF6C0;
}

loc_801DF684:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r3 = r30;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x801DF69Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DF708u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DF6A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DF6A8;
    }
}

loc_801DF6A4:
{
    goto loc_801DF6F0;
}

loc_801DF6A8:
{
    r3 = r30;
    r4 = (r1 + 12);
    ctx->lr = 0x801DF6B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DFF20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DF6B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DF6C0;
    }
}

loc_801DF6BC:
{
    goto loc_801DF6F0;
}

loc_801DF6C0:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801DF6D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DF684;
    }
}

loc_801DF6D4:
{
    r0 = MemoryInline::FlatRead32((r4 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801DF6DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DF684;
    }
}

loc_801DF6E0:
{
    goto loc_801DF6EC;
}

loc_801DF6E4:
{
    r3 = -3;
    goto loc_801DF6F0;
}

loc_801DF6EC:
{
    r3 = 0;
}

loc_801DF6F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DF5F8 func_801DF5F8 preserves=true fpr_mask=0x00000000
