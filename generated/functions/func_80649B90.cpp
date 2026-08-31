#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);
extern "C" MkwStateFreeResult2 func_80623054_statefree(uint32_t);
extern "C" MkwStateFreeResult2 func_80649DA4_statefree(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void func_80623054_statefree_v1(uint32_t);

extern "C" void func_80649B90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80649B90;

loc_80649B90:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 220), r31);
    r31 = r3;
    MemoryInline::FlatWrite8((r3 + 900), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(121));
}

loc_80649BC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649BE0;
    }
}

loc_80649BC4:
{
    r3 = r5;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80623054u) && KnownTranslatedCpuCall<0x80623054u>::kAvailable && !KnownTranslatedCpuCall<0x80623054u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80623054u>()) {
        func_80623054_statefree_v1(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80623054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 400);
    r4 = 4018;
    r5 = 0;
    ctx->lr = 0x80649BDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80649D04;
}

loc_80649BE0:
{
}

loc_80649BE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(120))) {
        goto loc_80649BF0;
    }
}

loc_80649BE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(152));
}

loc_80649BEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649C1C;
    }
}

loc_80649BF0:
{
    r5 = MemoryInline::FlatRead32((r4 + 152));
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 1280));
    MemoryInline::FlatWrite32((r3 + 392), r0);
    r0 = MemoryInline::FlatRead32((r5 + 1284));
    MemoryInline::FlatWrite32((r3 + 396), r0);
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 1280);
    // inline leaf 0x805E3F4C (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x805E3F4C
    goto loc_80649C38;
}

loc_80649C1C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    ctx->lr = 0x80649C28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806569B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWrite32((r31 + 392), r3);
    MemoryInline::FlatWrite32((r31 + 396), r4);
}

loc_80649C38:
{
    r0 = MemoryInline::FlatRead32((r31 + 392));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80649C40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80649C60;
    }
}

loc_80649C44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80649C48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80649C98;
    }
}

loc_80649C4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80649C50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80649CBC;
    }
}

loc_80649C54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80649C58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80649CE0;
    }
}

loc_80649C5C:
{
    goto loc_80649D04;
}

loc_80649C60:
{
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_15D3 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_15D3[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_15D3[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r31 + 396));
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    ctx->gpr[1] = r1;
    if (false) {
        const auto state_free_result_80649DA4_1914 = func_80649DA4_statefree(r0, r3, r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80649DA4_1914[0]);
        cr = static_cast<uint32_t>(state_free_result_80649DA4_1914[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80649DA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = (r31 + 400);
    r5 = (r1 + 16);
    ctx->lr = 0x80649C84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80623054u) && KnownTranslatedCpuCall<0x80623054u>::kAvailable && !KnownTranslatedCpuCall<0x80623054u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80623054u>()) {
        const auto state_free_result_80623054_1F13 = func_80623054_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_80623054_1F13[0]);
        r3 = static_cast<uint32_t>(state_free_result_80623054_1F13[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80623054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80649D04;
}

loc_80649C98:
{
    r3 = (r31 + 400);
    r4 = 4016;
    r5 = 0;
    ctx->lr = 0x80649CA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80623054u) && KnownTranslatedCpuCall<0x80623054u>::kAvailable && !KnownTranslatedCpuCall<0x80623054u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80623054u>()) {
        const auto state_free_result_80623054_252A = func_80623054_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_80623054_252A[0]);
        r3 = static_cast<uint32_t>(state_free_result_80623054_252A[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80623054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80649D04;
}

loc_80649CBC:
{
    r3 = (r31 + 400);
    r4 = 2072;
    r5 = 0;
    ctx->lr = 0x80649CCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80623054u) && KnownTranslatedCpuCall<0x80623054u>::kAvailable && !KnownTranslatedCpuCall<0x80623054u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80623054u>()) {
        const auto state_free_result_80623054_2B41 = func_80623054_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_80623054_2B41[0]);
        r3 = static_cast<uint32_t>(state_free_result_80623054_2B41[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80623054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80649D04;
}

loc_80649CE0:
{
    r3 = (r31 + 400);
    r4 = 2052;
    r5 = 0;
    ctx->lr = 0x80649CF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 900), static_cast<uint8_t>(r0));
    r3 = (r31 + 68);
    r4 = 0;
    // inline leaf 0x805EEC50 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 8), r4);
    // end of inlined leaf 0x805EEC50
}

loc_80649D04:
{
    r0 = MemoryInline::FlatRead32((r1 + 228));
    r31 = MemoryInline::FlatRead32((r1 + 220));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80649B90 func_80649B90 preserves=true fpr_mask=0x00000000
