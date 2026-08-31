#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80832240(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80832240;

loc_80832240:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -464), 0, 472u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -464), r1);
    r1 = (r1 + -464);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 468u, (r1 + 468), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 448u, (r1 + 448), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 432u, (r1 + 432), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 416u, (r1 + 416), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 400u, (r1 + 400), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 384u, (r1 + 384), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 368u, (r1 + 368), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 352u, (r1 + 352), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolved32(guest_range_0, 348u, (r1 + 348), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -13832);
    MemoryInline::WriteResolved32(guest_range_0, 344u, (r1 + 344), r30);
    r30 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 340u, (r1 + 340), r29);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 1048576);
}

loc_808322A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808322B4;
    }
}

loc_808322AC:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
}

loc_808322B4:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808322C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832708;
    }
}

loc_808322C4:
{
    r3 = 0x809C0000u;
    f31.d = MemoryInline::FlatReadFloat32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r4 = 6;
    f28.d = f31.d;
    f30.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    f26.d = f31.d;
    f29.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 440));
    f27.d = MemoryInline::FlatReadFloat32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808322F4:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 16));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832308;
    }
}

loc_808322FC:
{
    r3 = 108;
    ctx->lr = 0x80832304u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808447CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r3 + 2568));
}

loc_80832308:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_8083230C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083232C;
    }
}

loc_80832310:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_80832314:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808323AC;
    }
}

loc_80832318:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_8083231C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832464;
    }
}

loc_80832320:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_80832324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808324EC;
    }
}

loc_80832328:
{
    goto loc_80832570;
}

loc_8083232C:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081CB70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80832338:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80832350;
    }
}

loc_8083233C:
{
}

loc_80832340:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80832358;
    }
}

loc_80832344:
{
}

loc_80832348:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80832360;
    }
}

loc_8083234C:
{
    goto loc_80832364;
}

loc_80832350:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 20));
    goto loc_80832364;
}

loc_80832358:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 16));
    goto loc_80832364;
}

loc_80832360:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 24));
}

loc_80832364:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8083236C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083238C;
    }
}

loc_80832370:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_80832374:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832394;
    }
}

loc_80832378:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(27));
}

loc_8083237C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083239C;
    }
}

loc_80832380:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_80832384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808323A4;
    }
}

loc_80832388:
{
    goto loc_80832570;
}

loc_8083238C:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 28));
    goto loc_80832570;
}

loc_80832394:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 32));
    goto loc_80832570;
}

loc_8083239C:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 36));
    goto loc_80832570;
}

loc_808323A4:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 40));
    goto loc_80832570;
}

loc_808323AC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081CB70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_808323B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808323D0;
    }
}

loc_808323BC:
{
}

loc_808323C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_808323E0;
    }
}

loc_808323C4:
{
}

loc_808323C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_808323F0;
    }
}

loc_808323CC:
{
    goto loc_808323FC;
}

loc_808323D0:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 48));
    goto loc_808323FC;
}

loc_808323E0:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 52));
    goto loc_808323FC;
}

loc_808323F0:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 52));
}

loc_808323FC:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80832404:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832424;
    }
}

loc_80832408:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_8083240C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832434;
    }
}

loc_80832410:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(27));
}

loc_80832414:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832444;
    }
}

loc_80832418:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_8083241C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832454;
    }
}

loc_80832420:
{
    goto loc_80832570;
}

loc_80832424:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 60));
    goto loc_80832570;
}

loc_80832434:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 60));
    goto loc_80832570;
}

loc_80832444:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 68));
    goto loc_80832570;
}

loc_80832454:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 52));
    goto loc_80832570;
}

loc_80832464:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081CB70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80832470:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80832488;
    }
}

loc_80832474:
{
}

loc_80832478:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80832498;
    }
}

loc_8083247C:
{
}

loc_80832480:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_808324A8;
    }
}

loc_80832484:
{
    goto loc_808324B4;
}

loc_80832488:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f31.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f30.d = MemoryInline::FlatReadFloat32((r31 + 76));
    goto loc_808324B4;
}

loc_80832498:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 80));
    f31.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f30.d = MemoryInline::FlatReadFloat32((r31 + 48));
    goto loc_808324B4;
}

loc_808324A8:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 48));
}

loc_808324B4:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_808324BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808324CC;
    }
}

loc_808324C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_808324C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808324DC;
    }
}

loc_808324C8:
{
    goto loc_80832570;
}

loc_808324CC:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 52));
    goto loc_80832570;
}

loc_808324DC:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 52));
    goto loc_80832570;
}

loc_808324EC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081CB70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_808324F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80832510;
    }
}

loc_808324FC:
{
}

loc_80832500:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80832520;
    }
}

loc_80832504:
{
}

loc_80832508:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80832530;
    }
}

loc_8083250C:
{
    goto loc_8083253C;
}

loc_80832510:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f31.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f30.d = MemoryInline::FlatReadFloat32((r31 + 76));
    goto loc_8083253C;
}

loc_80832520:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 80));
    f31.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f30.d = MemoryInline::FlatReadFloat32((r31 + 76));
    goto loc_8083253C;
}

loc_80832530:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 92));
}

loc_8083253C:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80832544:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832554;
    }
}

loc_80832548:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_8083254C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832564;
    }
}

loc_80832550:
{
    goto loc_80832570;
}

loc_80832554:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 96));
    goto loc_80832570;
}

loc_80832564:
{
    f25.d = MemoryInline::FlatReadFloat32((r31 + 100));
    f31.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = MemoryInline::FlatReadFloat32((r31 + 104));
}

loc_80832570:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081CB70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8083257C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083258C;
    }
}

loc_80832580:
{
    r8 = 0x808B0000u;
    r8 = (r8 + -13648);
    goto loc_808325BC;
}

loc_8083258C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80832590:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808325A4;
    }
}

loc_80832594:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -13648);
    r8 = (r3 + 2);
    goto loc_808325BC;
}

loc_808325A4:
{
    r4 = 0x808B0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_808325AC:
{
    r4 = (r4 + -13648);
    r8 = (r4 + 6);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808325BC;
    }
}

loc_808325B8:
{
    r8 = (r4 + 4);
}

loc_808325BC:
{
    r29 = 0x809C0000u;
    r4 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r29 + 6536));
    r4 = (r4 + -13648);
    r3 = (r1 + 72);
    r7 = MemoryInline::FlatRead32((r5 + 24));
    r5 = (r4 + 12);
    r4 = 256;
    r6 = MemoryInline::FlatRead16((r7 + 72));
    r7 = MemoryInline::FlatRead16((r7 + 74));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x808325ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80011938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r5 = (r1 + 72);
    r3 = MemoryInline::FlatRead32((r3 + -10440));
    r4 = 2;
    r6 = 0;
    ctx->lr = 0x80832604u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805411FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80832608:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80832618;
    }
}

loc_8083260C:
{
    r4 = MemoryInline::FlatRead32((r29 + 6536));
    r4 = MemoryInline::FlatRead32((r4 + 24));
    MemoryInline::FlatWrite32((r4 + 84), r3);
}

loc_80832618:
{
    r4 = 1431633920;
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r4 = (r4 + 21846);
    r5 = 0x809C0000u;
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r5 = MemoryInline::FlatRead32((r5 + 6536));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80832634:
{
    r3 = MemoryInline::FlatRead32((r5 + 24));
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 28);
    r29 = (r3 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083266C;
    }
}

loc_80832650:
{
    MemoryInline::FlatWriteFloat32(r29, f25.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f28.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f27.d);
    MemoryInline::FlatWriteFloat32((r29 + 12), f26.d);
    MemoryInline::FlatWriteFloat32((r29 + 16), f31.d);
    MemoryInline::FlatWriteFloat32((r29 + 20), f30.d);
    MemoryInline::FlatWriteFloat32((r29 + 24), f29.d);
}

loc_8083266C:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 108));
    r3 = (r1 + 24);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 12));
    r4 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    r5 = (r29 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    ctx->lr = 0x808326A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 28));
    f1.d = MemoryInline::FlatReadFloat32(r29);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808326B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808326C8;
    }
}

loc_808326B8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x808326C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808326C8:
{
    r30 = MemoryInline::FlatRead32((r30 + 28));
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808326D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832708;
    }
}

loc_808326D8:
{
    r29 = 0;
}

loc_808326DC:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808326E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808326F8;
    }
}

loc_808326EC:
{
    r5 = (r1 + 24);
    r4 = 0;
    ctx->lr = 0x808326F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_808326F8:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(2));
}

loc_80832704:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808326DC;
    }
}

loc_80832708:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 340), 0, 132u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 108u, (r1 + 448));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 92u, (r1 + 432));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 76u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 12u, (r1 + 352));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 348));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 344));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 128u, (r1 + 468));
    r29 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 340));
    ctx->lr = r0;
    r1 = (r1 + 464);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80832240 func_80832240 preserves=false fpr_mask=0xFE000000
