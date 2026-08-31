#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80725C1C_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80725DD8_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80725C1C_statefree_v1(uint32_t, uint32_t);

extern "C" void func_80722054(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80722054;

loc_80722054:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 460));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r31 = r3;
    r3 = 8;
    ctx->lr = 0x80722080u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80722084:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80722090;
    }
}

loc_80722088:
{
    r4 = (r31 & 255);
    // inline leaf 0x80725A78 (8 guest instruction(s))
    r5 = 0x808D0000u;
    r0 = 0;
    r5 = (r5 + -26464);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32(r3, r5);
    // end of inlined leaf 0x80725A78
}

loc_80722090:
{
    MemoryInline::FlatWrite32((r30 + 500), r3);
    r3 = 8;
    ctx->lr = 0x8072209Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807220A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807220AC;
    }
}

loc_807220A4:
{
    r4 = (r31 & 255);
    // inline leaf 0x80725B48 (8 guest instruction(s))
    r5 = 0x808D0000u;
    r0 = 0;
    r5 = (r5 + -26484);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32(r3, r5);
    // end of inlined leaf 0x80725B48
}

loc_807220AC:
{
    MemoryInline::FlatWrite32((r30 + 504), r3);
    r3 = 8;
    ctx->lr = 0x807220B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807220BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807220C8;
    }
}

loc_807220C0:
{
    r4 = (r31 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80725DD8u) && KnownTranslatedCpuCall<0x80725DD8u>::kAvailable && !KnownTranslatedCpuCall<0x80725DD8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80725DD8u>()) {
        const auto state_free_result_80725DD8_11F8 = func_80725DD8_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80725DD8_11F8);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80725DD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_807220C8:
{
    MemoryInline::FlatWrite32((r30 + 508), r3);
    r3 = 12;
    ctx->lr = 0x807220D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807220D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807220E4;
    }
}

loc_807220DC:
{
    r4 = (r31 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80725C1Cu) && KnownTranslatedCpuCall<0x80725C1Cu>::kAvailable && !KnownTranslatedCpuCall<0x80725C1Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80725C1Cu>()) {
        const auto state_free_result_80725C1C_1897 = func_80725C1C_statefree_v1(r3, r4);
        r5 = static_cast<uint32_t>(state_free_result_80725C1C_1897);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80725C1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_807220E4:
{
    MemoryInline::FlatWrite32((r30 + 512), r3);
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80722054 func_80722054 preserves=true fpr_mask=0x00000000
