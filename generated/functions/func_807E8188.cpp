#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80860484_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80860484_statefree_v0(uint32_t, uint32_t);

extern "C" void func_807E8188(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807E8188;

loc_807E8188:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80860484u) && KnownTranslatedCpuCall<0x80860484u>::kAvailable && !KnownTranslatedCpuCall<0x80860484u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80860484u>()) {
        const auto state_free_result_80860484_5A7 = func_80860484_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80860484_5A7[0]);
        r3 = static_cast<uint32_t>(state_free_result_80860484_5A7[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80860484u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r12 = ctx->gpr[12];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807E81B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E8284;
    }
}

loc_807E81B8:
{
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 584));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807E81C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E8284;
    }
}

loc_807E81CC:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_807E81D4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(96))) {
        goto loc_807E81E0;
    }
}

loc_807E81D8:
{
}

loc_807E81DC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(97))) {
        goto loc_807E8200;
    }
}

loc_807E81E0:
{
}

loc_807E81E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_807E81F0;
    }
}

loc_807E81E8:
{
}

loc_807E81EC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(101))) {
        goto loc_807E8200;
    }
}

loc_807E81F0:
{
}

loc_807E81F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(88))) {
        goto loc_807E8200;
    }
}

loc_807E81F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(94));
}

loc_807E81FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807E827C;
    }
}

loc_807E8200:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807E8204:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807E8210;
    }
}

loc_807E8208:
{
    r30 = 0;
    goto loc_807E8264;
}

loc_807E8210:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7968);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E8260;
    }
}

loc_807E821C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x807E8230u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807E8248;
}

loc_807E8234:
{
}

loc_807E8238:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_807E8244;
    }
}

loc_807E823C:
{
    r0 = 1;
    goto loc_807E8254;
}

loc_807E8244:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_807E8248:
{
}

loc_807E824C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807E8234;
    }
}

loc_807E8250:
{
    r0 = 0;
}

loc_807E8254:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807E8258:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E8260;
    }
}

loc_807E825C:
{
    goto loc_807E8264;
}

loc_807E8260:
{
    r30 = 0;
}

loc_807E8264:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80650B40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = (r3 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    goto loc_807E82B8;
}

loc_807E827C:
{
    r3 = 0;
    goto loc_807E82B8;
}

loc_807E8284:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80860484u) && KnownTranslatedCpuCall<0x80860484u>::kAvailable && !KnownTranslatedCpuCall<0x80860484u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80860484u>()) {
        const auto state_free_result_80860484_190E = func_80860484_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80860484_190E[0]);
        r3 = static_cast<uint32_t>(state_free_result_80860484_190E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80860484u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r12 = ctx->gpr[12];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807E829C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807E82B4;
    }
}

loc_807E82A0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r3 = (r0 & 1);
    goto loc_807E82B8;
}

loc_807E82B4:
{
    r3 = 0;
}

loc_807E82B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807E8188 func_807E8188 preserves=true fpr_mask=0x00000000
