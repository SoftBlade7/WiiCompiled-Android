#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_80704A94(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80704A94;

loc_80704A94:
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
    r3 = (r3 + 140);
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

loc_80704ACC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704AD8;
    }
}

loc_80704AD0:
{
    r3 = 0;
    goto loc_80704B5C;
}

loc_80704AD8:
{
    r4 = MemoryInline::FlatRead32((r29 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80704AE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704B08;
    }
}

loc_80704AE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704AF4;
    }
}

loc_80704AEC:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80704AF8;
}

loc_80704AF4:
{
    r0 = -1;
}

loc_80704AF8:
{
}

loc_80704AFC:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80704B08;
    }
}

loc_80704B00:
{
    r3 = (r29 + 128);
    goto loc_80704B30;
}

loc_80704B08:
{
    r4 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80704B10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704B30;
    }
}

loc_80704B14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704B20;
    }
}

loc_80704B18:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80704B24;
}

loc_80704B20:
{
    r0 = -1;
}

loc_80704B24:
{
}

loc_80704B28:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80704B30;
    }
}

loc_80704B2C:
{
    r3 = (r29 + 132);
}

loc_80704B30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80704B34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80704B58;
    }
}

loc_80704B38:
{
    r12 = MemoryInline::FlatRead32(r29);
    f1.d = f31.d;
    r3 = r29;
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x80704B54u;
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

loc_80704B58:
{
    r3 = r31;
}

loc_80704B5C:
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
// RECOMP_REGISTRATION base 0x80704A94 func_80704A94 preserves=false fpr_mask=0x80000000
