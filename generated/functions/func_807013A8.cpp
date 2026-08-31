#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_807013A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807013A8;

loc_807013A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    r29 = r3;
    r3 = (r3 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_5EA = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_5EA[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_5EA[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x807028E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807013E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807013EC;
    }
}

loc_807013E4:
{
    r3 = 0;
    goto loc_807014C8;
}

loc_807013EC:
{
    r4 = MemoryInline::FlatRead32((r29 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807013F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070141C;
    }
}

loc_807013FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701408;
    }
}

loc_80701400:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070140C;
}

loc_80701408:
{
    r0 = -1;
}

loc_8070140C:
{
}

loc_80701410:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_8070141C;
    }
}

loc_80701414:
{
    r3 = (r29 + 128);
    goto loc_8070149C;
}

loc_8070141C:
{
    r4 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80701424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701448;
    }
}

loc_80701428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701434;
    }
}

loc_8070142C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80701438;
}

loc_80701434:
{
    r0 = -1;
}

loc_80701438:
{
}

loc_8070143C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80701448;
    }
}

loc_80701440:
{
    r3 = (r29 + 132);
    goto loc_8070149C;
}

loc_80701448:
{
    r4 = MemoryInline::FlatRead32((r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80701450:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701474;
    }
}

loc_80701454:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80701460;
    }
}

loc_80701458:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80701464;
}

loc_80701460:
{
    r0 = -1;
}

loc_80701464:
{
}

loc_80701468:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80701474;
    }
}

loc_8070146C:
{
    r3 = (r29 + 136);
    goto loc_8070149C;
}

loc_80701474:
{
    r4 = MemoryInline::FlatRead32((r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070147C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070149C;
    }
}

loc_80701480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070148C;
    }
}

loc_80701484:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80701490;
}

loc_8070148C:
{
    r0 = -1;
}

loc_80701490:
{
}

loc_80701494:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_8070149C;
    }
}

loc_80701498:
{
    r3 = (r29 + 140);
}

loc_8070149C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807014A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807014C4;
    }
}

loc_807014A4:
{
    r12 = MemoryInline::FlatRead32(r29);
    f1.d = f31.d;
    r3 = r29;
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x807014C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = r3;
}

loc_807014C4:
{
    r3 = r31;
}

loc_807014C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807013A8 func_807013A8 preserves=false fpr_mask=0x80000000
