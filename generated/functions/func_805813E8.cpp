#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805813E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805813E8;

loc_805813E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x80890000u;
    r30 = (r30 + 6656);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80581418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805814DC;
    }
}

loc_8058141C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 352));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80581428:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8058144C;
    }
}

loc_80581430:
{
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 426;
    f1.d = MemoryInline::FlatReadFloat32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 228));
    ctr = r12;
    ctx->lr = 0x8058144Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8058144C:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 352));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 200));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 352), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80581464:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80581474;
    }
}

loc_80581468:
{
    MemoryInline::FlatWriteFloat32((r31 + 352), f0.d);
    r0 = 1;
    goto loc_80581478;
}

loc_80581474:
{
    r0 = 0;
}

loc_80581478:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058147C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805814DC;
    }
}

loc_80581480:
{
    r5 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & -262145);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    ctx->lr = 0x805814A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80590A8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 | 524288);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    ctx->lr = 0x805814DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80798848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805814DC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r4 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805814EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805815F4;
    }
}

loc_805814F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805814F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805815F4;
    }
}

loc_805814FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 24576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80581504:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805815F4;
    }
}

loc_80581508:
{
    r0 = (r4 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058150C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805815F4;
    }
}

loc_80581510:
{
    r3 = 0x808B0000u;
    r4 = MemoryInline::FlatRead16((r31 + 540));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16((r3 + 23496));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -90);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80581524:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80581534;
    }
}

loc_80581528:
{
    r3 = r31;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80591784u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_80581534:
{
    r4 = MemoryInline::FlatRead16((r31 + 540));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = 0x808B0000u;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r31 + 540), static_cast<uint16_t>(r0));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r3 + 23496));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80581550:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805815F4;
    }
}

loc_80581554:
{
    r5 = MemoryInline::FlatRead32(r31);
    r3 = -196608;
    r0 = (r3 + -513);
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    MemoryInline::FlatWrite16((r31 + 540), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80581588:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805815F4;
    }
}

loc_8058158C:
{
    MemoryInline::FlatWrite16((r31 + 564), static_cast<uint16_t>(r4));
    r3 = r31;
    r5 = MemoryInline::FlatRead32(r31);
    r4 = 26;
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = MemoryInline::FlatRead32(r31);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805815BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805815C4;
    }
}

loc_805815C0:
{
    r4 = 27;
}

loc_805815C4:
{
    ctx->lr = 0x805815C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805907B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // inline leaf 0x80595CB4 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    // end of inlined leaf 0x80595CB4
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r3 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805815E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805815F4;
    }
}

loc_805815E8:
{
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 20), r0);
}

loc_805815F4:
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
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805813E8 func_805813E8 preserves=true fpr_mask=0x00000000
