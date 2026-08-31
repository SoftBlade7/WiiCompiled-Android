#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DD418(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805DD418;

loc_805DD418:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(91));
}

loc_805DD440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DD48C;
    }
}

loc_805DD444:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805DD46C;
    }
}

loc_805DD448:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(86));
}

loc_805DD44C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DD498;
    }
}

loc_805DD450:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805DD460;
    }
}

loc_805DD454:
{
}

loc_805DD458:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(85))) {
        goto loc_805DD48C;
    }
}

loc_805DD45C:
{
    goto loc_805DD4CC;
}

loc_805DD460:
{
}

loc_805DD464:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(88))) {
        goto loc_805DD4CC;
    }
}

loc_805DD468:
{
    goto loc_805DD48C;
}

loc_805DD46C:
{
}

loc_805DD470:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(131))) {
        goto loc_805DD484;
    }
}

loc_805DD474:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(93));
}

loc_805DD478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DD48C;
    }
}

loc_805DD47C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805DD4CC;
    }
}

loc_805DD480:
{
    goto loc_805DD498;
}

loc_805DD484:
{
}

loc_805DD488:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(133))) {
        goto loc_805DD4CC;
    }
}

loc_805DD48C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 848), r0);
    goto loc_805DD4CC;
}

loc_805DD498:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 8408));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 89));
}

loc_805DD4B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805DD4C4;
    }
}

loc_805DD4B8:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 848), r0);
    goto loc_805DD4CC;
}

loc_805DD4C4:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 848), r0);
}

loc_805DD4CC:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_805DD4E0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(85))) {
        goto loc_805DD4EC;
    }
}

loc_805DD4E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(87));
}

loc_805DD4E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805DD50C;
    }
}

loc_805DD4EC:
{
}

loc_805DD4F0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(91))) {
        goto loc_805DD4FC;
    }
}

loc_805DD4F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(93));
}

loc_805DD4F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805DD518;
    }
}

loc_805DD4FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(131));
}

loc_805DD500:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DD520;
    }
}

loc_805DD504:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(132));
}

loc_805DD508:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805DD520;
    }
}

loc_805DD50C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 856), static_cast<uint8_t>(r0));
    goto loc_805DD520;
}

loc_805DD518:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 856), static_cast<uint8_t>(r0));
}

loc_805DD520:
{
    r3 = (r3 + 68);
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805DD538u;
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r31 + 68);
    // inline leaf 0x80602474 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x80602474
    r3 = r31;
    r4 = 2;
    ctx->lr = 0x805DD550u;
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
    InvokeDirectCpu<0x8060245Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r5 = (r31 + 84);
    r4 = 0;
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r4 = 0x80890000u;
    r3 = (r31 + 84);
    r4 = (r4 + 19268);
    r4 = (r4 + 939);
    ctx->lr = 0x805DD578u;
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
    InvokeDirectCpu<0x80607E2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r5 = (r31 + 456);
    r4 = 1;
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = (r31 + 456);
    r4 = (r31 + 836);
    ctx->lr = 0x805DD598u;
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
    InvokeDirectCpu<0x805C3D70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
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
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805DD418 func_805DD418 preserves=true fpr_mask=0x00000000
