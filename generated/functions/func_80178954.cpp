#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801773AC_statefree(uint32_t);

extern "C" void func_80178954(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80178954;

loc_80178954:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80250000u;
    r31 = (r31 + 10112);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80178980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80178994;
    }
}

loc_80178984:
{
    r3 = 0;
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x80178994u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80178994:
{
    // inline leaf 0x801265F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r13 + -26396));
    // end of inlined leaf 0x801265F0
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 1492), 0, 368u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r30 + 1492), static_cast<uint16_t>(r3));
    // inline leaf 0x801265F8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r13 + -26398));
    // end of inlined leaf 0x801265F8
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r30 + 1494), static_cast<uint16_t>(r3));
    // inline leaf 0x80126600 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r13 + -26400));
    // end of inlined leaf 0x80126600
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r30 + 1496), static_cast<uint16_t>(r3));
    r3 = (r30 + 1500);
    r4 = (r30 + 1504);
    // inline leaf 0x8012E550 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -29688));
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r13 + -29684));
    MemoryInline::FlatWrite32(r4, r0);
    // end of inlined leaf 0x8012E550
    r3 = (r30 + 1860);
    r4 = (r30 + 1864);
    // inline leaf 0x80125B70 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -26416));
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r13 + -26428));
    MemoryInline::FlatWrite32(r4, r0);
    // end of inlined leaf 0x80125B70
    r3 = 0x80170000u;
    r4 = 0x80170000u;
    r3 = (r3 + 29616);
    r4 = (r4 + 29632);
    // inline leaf 0x8012E544 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -29688), r3);
    MemoryInline::FlatWrite32((r13 + -29684), r4);
    // end of inlined leaf 0x8012E544
    f3.d = MemoryInline::FlatReadFloat32((r31 + 744));
    r3 = (r30 + 1508);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 800));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 804));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 748));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 360u, (r30 + 1852), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 352u, (r30 + 1844), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 344u, (r30 + 1836), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 356u, (r30 + 1848), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 364u, (r30 + 1856), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 348u, (r30 + 1840), f0.d);
    ctx->lr = 0x80178A08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8012802Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x80130000u;
    r4 = (r30 + 1508);
    r3 = (r3 + -32588);
    ctx->lr = 0x80178A18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80125A44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 65536;
    r0 = (r3 + -32768);
    r3 = (r0 & 65535);
    // inline leaf 0x80126620 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26396), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126620
    r3 = 0;
    // inline leaf 0x80126628 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26398), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126628
    r3 = 0;
    // inline leaf 0x80126630 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26400), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126630
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r12 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80178A44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80178A58;
    }
}

loc_80178A48:
{
    r3 = 1;
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x80178A58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80178A58:
{
    ctx->lr = 0x80178A5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B1E2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r3 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801773ACu) && KnownTranslatedCpuCall<0x801773ACu>::kAvailable && !KnownTranslatedCpuCall<0x801773ACu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801773ACu>()) {
        const auto state_free_result_801773AC_2048 = func_801773AC_statefree(r3);
        r4 = static_cast<uint32_t>(state_free_result_801773AC_2048);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801773ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 147), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80178954 func_80178954 preserves=true fpr_mask=0x00000000
