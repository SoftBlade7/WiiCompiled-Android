#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A6328(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807A6328;

loc_807A6328:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r8 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r8 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A6344:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A6350;
    }
}

loc_807A6348:
{
    r3 = 2;
    goto loc_807A64DC;
}

loc_807A6350:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807A6354:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A640C;
    }
}

loc_807A6358:
{
    r7 = MemoryInline::FlatRead32((r3 + 124));
    r5 = 0;
    r6 = 0;
    r0 = (r7 & 32);
}

loc_807A6368:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6390;
    }
}

loc_807A636C:
{
    r0 = (r7 & 1);
}

loc_807A6370:
{
    r4 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6380;
    }
}

loc_807A6378:
{
    r0 = (r8 & 939524096);
}

loc_807A637C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6384;
    }
}

loc_807A6380:
{
    r4 = 1;
}

loc_807A6384:
{
}

loc_807A6388:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807A6390;
    }
}

loc_807A638C:
{
    r6 = 1;
}

loc_807A6390:
{
}

loc_807A6394:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_807A63A4;
    }
}

loc_807A6398:
{
    r0 = (r7 & 18);
}

loc_807A639C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A63A4;
    }
}

loc_807A63A0:
{
    r5 = 1;
}

loc_807A63A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807A63A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A640C;
    }
}

loc_807A63AC:
{
    r0 = (r8 & 14680064);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A63B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A63BC;
    }
}

loc_807A63B4:
{
    r3 = 2;
    goto loc_807A64DC;
}

loc_807A63BC:
{
    r4 = MemoryInline::FlatRead32((r3 + 120));
    r5 = 0x80240000u;
    r0 = MemoryInline::FlatRead32((r3 + 176));
    r4 = (r4 | 2097152);
    MemoryInline::FlatWrite32((r3 + 120), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A63D4:
{
    r5 = (r5 + 28832);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r3 + 364), r0);
    MemoryInline::FlatWrite32((r3 + 360), r4);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r3 + 368), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A6404;
    }
}

loc_807A63F0:
{
    r3 = r31;
    ctx->lr = 0x807A63F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079EECCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r0 | 33554432);
    MemoryInline::FlatWrite32((r31 + 124), r0);
}

loc_807A6404:
{
    r3 = 1;
    goto loc_807A64DC;
}

loc_807A640C:
{
    r0 = 20;
    MemoryInline::FlatWrite32((r3 + 412), r0);
    r3 = r31;
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x807A6428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807A642C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A6438;
    }
}

loc_807A6430:
{
    r3 = 2;
    goto loc_807A64DC;
}

loc_807A6438:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_807A643C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A6448;
    }
}

loc_807A6440:
{
    r3 = 0;
    goto loc_807A64DC;
}

loc_807A6448:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 21));
}

loc_807A6464:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A6484;
    }
}

loc_807A6468:
{
    r4 = 0x808D0000u;
    r4 = (r4 + 7224);
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r31 + 364), r0);
    MemoryInline::FlatWrite32((r31 + 360), r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r31 + 368), r0);
}

loc_807A6484:
{
    r5 = 0x808D0000u;
    r0 = MemoryInline::FlatRead32((r31 + 176));
    r5 = (r5 + 7236);
    r4 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A6494:
{
    r3 = MemoryInline::FlatRead32((r31 + 116));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r31 + 376), r0);
    r3 = (r3 | 1);
    r0 = MemoryInline::FlatRead32((r31 + 120));
    MemoryInline::FlatWrite32((r31 + 372), r4);
    r0 = (r0 | 64);
    r4 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r31 + 380), r4);
    MemoryInline::FlatWrite32((r31 + 116), r3);
    MemoryInline::FlatWrite32((r31 + 120), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A64D8;
    }
}

loc_807A64C4:
{
    r3 = r31;
    ctx->lr = 0x807A64CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079EECCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r31 + 124), r0);
}

loc_807A64D8:
{
    r3 = 0;
}

loc_807A64DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A6328 func_807A6328 preserves=true fpr_mask=0x00000000
