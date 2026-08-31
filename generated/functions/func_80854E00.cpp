#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_80854E00(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80854E00;

loc_80854E00:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRam32((r1 + 220), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 216), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 212), r29);
    r29 = r3;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_4F2 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_4F2[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_4F2[1]);
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
}

loc_80854E30:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(-1))) {
        goto loc_80854EB0;
    }
}

loc_80854E34:
{
    r3 = r30;
    // inline leaf 0x8081D028 (13 guest instruction(s))
}

loc_inl0_0x8081D028:
{
    r0 = (r3 + -24);
}

loc_inl0_0x8081D030:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8081D04C;
    }
}

loc_inl0_0x8081D034:
{
    r0 = (r3 + -30);
}

loc_inl0_0x8081D03C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8081D04C;
    }
}

loc_inl0_0x8081D040:
{
    r0 = (r3 + -36);
}

loc_inl0_0x8081D048:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8081D054;
    }
}

loc_inl0_0x8081D04C:
{
    r3 = 1;
    goto loc_inl0_cont_8081D028;
}

loc_inl0_0x8081D054:
{
    r3 = 0;
}

loc_inl0_cont_8081D028:
{
    // end of inlined leaf 0x8081D028
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80854E40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854E60;
    }
}

loc_80854E44:
{
    r0 = 9052;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r3 = (r29 + 1732);
    r5 = (r1 + 8);
    r4 = 8003;
    ctx->lr = 0x80854E5Cu;
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
    goto loc_80854F88;
}

loc_80854E60:
{
    r3 = r30;
    // inline leaf 0x8081D05C (13 guest instruction(s))
}

loc_inl1_0x8081D05C:
{
    r0 = (r3 + -26);
}

loc_inl1_0x8081D064:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl1_0x8081D080;
    }
}

loc_inl1_0x8081D068:
{
    r0 = (r3 + -32);
}

loc_inl1_0x8081D070:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl1_0x8081D080;
    }
}

loc_inl1_0x8081D074:
{
    r0 = (r3 + -38);
}

loc_inl1_0x8081D07C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl1_0x8081D088;
    }
}

loc_inl1_0x8081D080:
{
    r3 = 1;
    goto loc_inl1_cont_8081D05C;
}

loc_inl1_0x8081D088:
{
    r3 = 0;
}

loc_inl1_cont_8081D05C:
{
    // end of inlined leaf 0x8081D05C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80854E6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854E8C;
    }
}

loc_80854E70:
{
    r0 = 9053;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r3 = (r29 + 1732);
    r5 = (r1 + 8);
    r4 = 8003;
    ctx->lr = 0x80854E88u;
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
    goto loc_80854F88;
}

loc_80854E8C:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80854E98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80833774u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r3 = (r29 + 1732);
    r5 = (r1 + 8);
    r4 = 8002;
    ctx->lr = 0x80854EACu;
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
    goto loc_80854F88;
}

loc_80854EB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(-1));
}

loc_80854EB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854F88;
    }
}

loc_80854EB8:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x808334E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(18));
}

loc_80854EC4:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80854F2C;
    }
}

loc_80854ECC:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CB70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80854ED8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854EF0;
    }
}

loc_80854EDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80854EE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854F04;
    }
}

loc_80854EE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80854EE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854F18;
    }
}

loc_80854EEC:
{
    goto loc_80854F88;
}

loc_80854EF0:
{
    r3 = (r29 + 1732);
    r5 = (r1 + 8);
    r4 = 8004;
    ctx->lr = 0x80854F00u;
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
    goto loc_80854F88;
}

loc_80854F04:
{
    r3 = (r29 + 1732);
    r5 = (r1 + 8);
    r4 = 8005;
    ctx->lr = 0x80854F14u;
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
    goto loc_80854F88;
}

loc_80854F18:
{
    r3 = (r29 + 1732);
    r5 = (r1 + 8);
    r4 = 8006;
    ctx->lr = 0x80854F28u;
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
    goto loc_80854F88;
}

loc_80854F2C:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CB70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80854F38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854F50;
    }
}

loc_80854F3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80854F40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854F64;
    }
}

loc_80854F44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80854F48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854F78;
    }
}

loc_80854F4C:
{
    goto loc_80854F88;
}

loc_80854F50:
{
    r3 = (r29 + 1732);
    r5 = (r1 + 8);
    r4 = 8007;
    ctx->lr = 0x80854F60u;
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
    goto loc_80854F88;
}

loc_80854F64:
{
    r3 = (r29 + 1732);
    r5 = (r1 + 8);
    r4 = 8008;
    ctx->lr = 0x80854F74u;
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
    goto loc_80854F88;
}

loc_80854F78:
{
    r3 = (r29 + 1732);
    r5 = (r1 + 8);
    r4 = 8009;
    ctx->lr = 0x80854F88u;
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
}

loc_80854F88:
{
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80854E00 func_80854E00 preserves=true fpr_mask=0x00000000
