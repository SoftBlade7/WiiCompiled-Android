#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010A07C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8010A07C;

loc_8010A07C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8010A088:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010A0A8;
    }
}

loc_8010A0A0:
{
    r3 = 1;
    goto loc_8010A160;
}

loc_8010A0A8:
{
}

loc_8010A0AC:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8010A0B8;
    }
}

loc_8010A0B0:
{
    r12 = MemoryInline::FlatRead32((r3 + 40));
    goto loc_8010A0BC;
}

loc_8010A0B8:
{
    r12 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8010A0BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8010A0C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010A0CC;
    }
}

loc_8010A0C4:
{
    r3 = 1;
    goto loc_8010A160;
}

loc_8010A0CC:
{
}

loc_8010A0D0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8010A0DC;
    }
}

loc_8010A0D4:
{
}

loc_8010A0D8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8010A0E4;
    }
}

loc_8010A0DC:
{
    r8 = 0;
    r9 = 0;
}

loc_8010A0E4:
{
    r10 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8010A0EC:
{
    r0 = (r10 + 1);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010A104;
    }
}

loc_8010A0F8:
{
    r3 = MemoryInline::FlatRead32((r4 + 36));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 36), r0);
}

loc_8010A104:
{
    r3 = r30;
    r4 = r31;
    ctr = r12;
    ctx->lr = 0x8010A114u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 28));
}

loc_8010A11C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8010A134;
    }
}

loc_8010A128:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 36), r0);
}

loc_8010A134:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010A13C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010A15C;
    }
}

loc_8010A140:
{
    r0 = MemoryInline::FlatRead32((r30 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010A148:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010A15C;
    }
}

loc_8010A14C:
{
    r3 = r30;
    ctx->lr = 0x8010A154u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8010E110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8010A160;
}

loc_8010A15C:
{
    r3 = 1;
}

loc_8010A160:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8010A07C func_8010A07C preserves=true fpr_mask=0x00000000
