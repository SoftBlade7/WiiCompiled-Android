#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_805DED24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805DED24;

loc_805DED24:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRam32((r1 + 220), r31);
    r31 = r3;
    r3 = (r3 + 1400);
    MemoryInline::FlatWriteRam32((r1 + 216), r30);
    MemoryInline::FlatWriteRam32((r1 + 212), r29);
    ctx->lr = 0x805DED4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805BDAF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 656);
    r4 = 4003;
    r5 = 0;
    ctx->lr = 0x805DED5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805DED6C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805DED8C;
    }
}

loc_805DED70:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_805DED90;
}

loc_805DED8C:
{
    r3 = 0;
}

loc_805DED90:
{
    r3 = (r3 + 65536);
    r30 = MemoryInline::FlatRead32((r3 + -28020));
}

loc_805DED9C:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(1))) {
        goto loc_805DEDA8;
    }
}

loc_805DEDA0:
{
    r29 = 5015;
    goto loc_805DEE34;
}

loc_805DEDA8:
{
}

loc_805DEDAC:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(101))) {
        goto loc_805DEDD8;
    }
}

loc_805DEDB0:
{
}

loc_805DEDB4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(21))) {
        goto loc_805DEDCC;
    }
}

loc_805DEDB8:
{
}

loc_805DEDBC:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(11))) {
        goto loc_805DEE00;
    }
}

loc_805DEDC0:
{
}

loc_805DEDC4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_805DEDF8;
    }
}

loc_805DEDC8:
{
    goto loc_805DEE30;
}

loc_805DEDCC:
{
}

loc_805DEDD0:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(51))) {
        goto loc_805DEE10;
    }
}

loc_805DEDD4:
{
    goto loc_805DEE08;
}

loc_805DEDD8:
{
}

loc_805DEDDC:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(501))) {
        goto loc_805DEDEC;
    }
}

loc_805DEDE0:
{
}

loc_805DEDE4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(201))) {
        goto loc_805DEE20;
    }
}

loc_805DEDE8:
{
    goto loc_805DEE18;
}

loc_805DEDEC:
{
}

loc_805DEDF0:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(1001))) {
        goto loc_805DEE30;
    }
}

loc_805DEDF4:
{
    goto loc_805DEE28;
}

loc_805DEDF8:
{
    r29 = 5017;
    goto loc_805DEE34;
}

loc_805DEE00:
{
    r29 = 5018;
    goto loc_805DEE34;
}

loc_805DEE08:
{
    r29 = 5019;
    goto loc_805DEE34;
}

loc_805DEE10:
{
    r29 = 5020;
    goto loc_805DEE34;
}

loc_805DEE18:
{
    r29 = 5021;
    goto loc_805DEE34;
}

loc_805DEE20:
{
    r29 = 5022;
    goto loc_805DEE34;
}

loc_805DEE28:
{
    r29 = 5023;
    goto loc_805DEE34;
}

loc_805DEE30:
{
    r29 = 5024;
}

loc_805DEE34:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_13B2 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_13B2[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_13B2[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DEE50:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DEE70;
    }
}

loc_805DEE54:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_805DEE74;
}

loc_805DEE70:
{
    r3 = 0;
}

loc_805DEE74:
{
    r3 = (r3 + 65536);
    r4 = r29;
    r0 = MemoryInline::FlatRead32((r3 + -28016));
    r3 = (r31 + 1028);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = (r1 + 8);
    ctx->lr = 0x805DEE90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 228));
    r31 = MemoryInline::FlatRead32((r1 + 220));
    r30 = MemoryInline::FlatRead32((r1 + 216));
    r29 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFAF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805DED24 func_805DED24 preserves=true fpr_mask=0x00000000
