#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805BDBD4_statefree(uint32_t, uint32_t);

extern "C" void func_80648220(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80648220;

loc_80648220:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 536));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8064824C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648284;
    }
}

loc_80648250:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7880);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648284;
    }
}

loc_8064825C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8064826Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8064827C;
}

loc_80648270:
{
}

loc_80648274:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r31))) {
        goto loc_80648284;
    }
}

loc_80648278:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8064827C:
{
}

loc_80648280:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80648270;
    }
}

loc_80648284:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_80648298:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648348;
    }
}

loc_8064829C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806482E0;
    }
}

loc_806482A0:
{
}

loc_806482A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(94))) {
        goto loc_806482C8;
    }
}

loc_806482A8:
{
}

loc_806482AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(88))) {
        goto loc_806482BC;
    }
}

loc_806482B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(85));
}

loc_806482B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648318;
    }
}

loc_806482B8:
{
    goto loc_80648348;
}

loc_806482BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(91));
}

loc_806482C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648320;
    }
}

loc_806482C4:
{
    goto loc_80648348;
}

loc_806482C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(127));
}

loc_806482CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648348;
    }
}

loc_806482D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648338;
    }
}

loc_806482D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(125));
}

loc_806482D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648330;
    }
}

loc_806482DC:
{
    goto loc_80648348;
}

loc_806482E0:
{
}

loc_806482E4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(161))) {
        goto loc_80648300;
    }
}

loc_806482E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(135));
}

loc_806482EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648340;
    }
}

loc_806482F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648348;
    }
}

loc_806482F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(133));
}

loc_806482F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648348;
    }
}

loc_806482FC:
{
    goto loc_80648328;
}

loc_80648300:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(165));
}

loc_80648304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648328;
    }
}

loc_80648308:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648348;
    }
}

loc_8064830C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(163));
}

loc_80648310:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648348;
    }
}

loc_80648314:
{
    goto loc_80648330;
}

loc_80648318:
{
    r4 = 2033;
    goto loc_8064834C;
}

loc_80648320:
{
    r4 = 2034;
    goto loc_8064834C;
}

loc_80648328:
{
    r4 = 5050;
    goto loc_8064834C;
}

loc_80648330:
{
    r4 = 0;
    goto loc_8064834C;
}

loc_80648338:
{
    r4 = 4003;
    goto loc_8064834C;
}

loc_80648340:
{
    r4 = 6605;
    goto loc_8064834C;
}

loc_80648348:
{
    r4 = 0;
}

loc_8064834C:
{
    r3 = (r30 + 656);
    r5 = 0;
    ctx->lr = 0x80648358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r30 + 1400);
    r4 = 0;
    ctx->lr = 0x80648364u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805BDAF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 2608));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8064836C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064837C;
    }
}

loc_80648370:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80648374:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648394;
    }
}

loc_80648378:
{
    goto loc_806483A8;
}

loc_8064837C:
{
    r3 = (r30 + 1996);
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        const auto state_free_result_805BDBD4_1EF1 = func_805BDBD4_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_805BDBD4_1EF1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 2124), static_cast<uint8_t>(r0));
    goto loc_806483A8;
}

loc_80648394:
{
    r3 = (r30 + 1996);
    r4 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        const auto state_free_result_805BDBD4_23A4 = func_805BDBD4_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_805BDBD4_23A4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 2124), static_cast<uint8_t>(r0));
}

loc_806483A8:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 2612), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80648220 func_80648220 preserves=true fpr_mask=0x00000000
