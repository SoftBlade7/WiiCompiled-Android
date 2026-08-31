#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631588_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_805F5230(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F5230;

loc_805F5230:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80890000u;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 4;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24728));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x809C0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 84), 0, 61u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 84), r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 88), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 92), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 93), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 96), r5);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 100), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 104), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 105), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 108), r5);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 112), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 116), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r3 + 117), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 120), r5);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 124), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r3 + 128), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r3 + 129), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 136), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r3 + 144), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80631588u) && KnownTranslatedCpuCall<0x80631588u>::kAvailable && !KnownTranslatedCpuCall<0x80631588u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631588u>()) {
        const auto state_free_result_80631588_EC9 = func_80631588_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631588_EC9[0]);
        cr = static_cast<uint32_t>(state_free_result_80631588_EC9[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80631588u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805F52B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5314;
    }
}

loc_805F52BC:
{
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80631588u) && KnownTranslatedCpuCall<0x80631588u>::kAvailable && !KnownTranslatedCpuCall<0x80631588u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631588u>()) {
        const auto state_free_result_80631588_14A4 = func_80631588_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631588_14A4[0]);
        cr = static_cast<uint32_t>(state_free_result_80631588_14A4[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80631588u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_805F52D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5314;
    }
}

loc_805F52D4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 144), static_cast<uint8_t>(r0));
    r3 = (r31 + 68);
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r31 + 68));
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805F52F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r31 + 68);
    // inline leaf 0x80602474 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x80602474
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x805F5310u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8060245Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805F54EC;
}

loc_805F5314:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 6536));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F5320:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F54B0;
    }
}

loc_805F5324:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_805F5338:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5400;
    }
}

loc_805F533C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5398;
    }
}

loc_805F5340:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(78));
}

loc_805F5344:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F53F0;
    }
}

loc_805F5348:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F537C;
    }
}

loc_805F534C:
{
}

loc_805F5350:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(72))) {
        goto loc_805F5368;
    }
}

loc_805F5354:
{
}

loc_805F5358:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(63))) {
        goto loc_805F5400;
    }
}

loc_805F535C:
{
}

loc_805F5360:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(61))) {
        goto loc_805F53E8;
    }
}

loc_805F5364:
{
    goto loc_805F5400;
}

loc_805F5368:
{
}

loc_805F536C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(77))) {
        goto loc_805F53E8;
    }
}

loc_805F5370:
{
}

loc_805F5374:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(75))) {
        goto loc_805F53F8;
    }
}

loc_805F5378:
{
    goto loc_805F53E8;
}

loc_805F537C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(84));
}

loc_805F5380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F53F8;
    }
}

loc_805F5384:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F53E8;
    }
}

loc_805F5388:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(80));
}

loc_805F538C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F53F0;
    }
}

loc_805F5390:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5400;
    }
}

loc_805F5394:
{
    goto loc_805F53E8;
}

loc_805F5398:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_805F539C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5400;
    }
}

loc_805F53A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F53CC;
    }
}

loc_805F53A4:
{
}

loc_805F53A8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(104))) {
        goto loc_805F53C0;
    }
}

loc_805F53AC:
{
}

loc_805F53B0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(100))) {
        goto loc_805F53F0;
    }
}

loc_805F53B4:
{
}

loc_805F53B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(96))) {
        goto loc_805F53E8;
    }
}

loc_805F53BC:
{
    goto loc_805F53F0;
}

loc_805F53C0:
{
}

loc_805F53C4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(127))) {
        goto loc_805F53F0;
    }
}

loc_805F53C8:
{
    goto loc_805F5400;
}

loc_805F53CC:
{
}

loc_805F53D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(144))) {
        goto loc_805F53E0;
    }
}

loc_805F53D4:
{
}

loc_805F53D8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(135))) {
        goto loc_805F5400;
    }
}

loc_805F53DC:
{
    goto loc_805F53E8;
}

loc_805F53E0:
{
}

loc_805F53E4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(148))) {
        goto loc_805F5400;
    }
}

loc_805F53E8:
{
    r3 = 1;
    goto loc_805F5404;
}

loc_805F53F0:
{
    r3 = 2;
    goto loc_805F5404;
}

loc_805F53F8:
{
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    goto loc_805F5404;
}

loc_805F5400:
{
    r3 = 0;
}

loc_805F5404:
{
    MemoryInline::FlatWrite8((r31 + 132), static_cast<uint8_t>(r3));
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl2_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl2_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl2_cont_8051BED0;
}

loc_inl2_return:
{
}

loc_inl2_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r4 = 0;
    r3 = (r3 + 3220);
    ctx->lr = 0x805F5418u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80009BC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl3_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl3_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl3_cont_8051BED0;
}

loc_inl3_return:
{
}

loc_inl3_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r4 = 3;
    r3 = (r3 + 3220);
    ctx->lr = 0x805F5428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80009BC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(127));
}

loc_805F543C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F5460;
    }
}

loc_805F5440:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(129));
}

loc_805F5444:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F5460;
    }
}

loc_805F5448:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r31 + 132));
    r3 = MemoryInline::FlatRead32((r3 + -10440));
    r5 = 0;
    ctx->lr = 0x805F545Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805422CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805F5474;
}

loc_805F5460:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r31 + 132));
    r3 = MemoryInline::FlatRead32((r3 + -10440));
    r5 = 1;
    ctx->lr = 0x805F5474u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805422CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F5474:
{
    r3 = 0x809C0000u;
    r5 = 0x805F0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6536));
    r5 = (r5 + 23700);
    r4 = MemoryInline::FlatRead8((r31 + 132));
    ctx->lr = 0x805F548Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8059E250u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl4_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl4_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl4_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl4_cont_8051BED0;
}

loc_inl4_return:
{
}

loc_inl4_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r4 = 0;
    r3 = (r3 + 3220);
    ctx->lr = 0x805F549Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80009BC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl5_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl5_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl5_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl5_cont_8051BED0;
}

loc_inl5_return:
{
}

loc_inl5_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r4 = 6;
    r3 = (r3 + 3220);
    ctx->lr = 0x805F54ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80009BC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_805F54B8;
}

loc_805F54B0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 144), static_cast<uint8_t>(r0));
}

loc_805F54B8:
{
    r12 = MemoryInline::FlatRead32((r31 + 68));
    r3 = (r31 + 68);
    r4 = 0;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805F54D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r31 + 68);
    // inline leaf 0x80602474 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x80602474
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x805F54ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8060245Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805F54EC:
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFCF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805F5230 func_805F5230 preserves=true fpr_mask=0x00000000
