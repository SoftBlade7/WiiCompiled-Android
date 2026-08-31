#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80725C1C_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80725E4C_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80725C1C_statefree_v0(uint32_t, uint32_t);

extern "C" void func_80721EC0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80721EC0;

loc_80721EC0:
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
    ctx->lr = 0x80721EECu;
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

loc_80721EF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80721EFC;
    }
}

loc_80721EF4:
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

loc_80721EFC:
{
    MemoryInline::FlatWrite32((r30 + 500), r3);
    r3 = 8;
    ctx->lr = 0x80721F08u;
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

loc_80721F0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80721F18;
    }
}

loc_80721F10:
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

loc_80721F18:
{
    MemoryInline::FlatWrite32((r30 + 504), r3);
    r3 = 8;
    ctx->lr = 0x80721F24u;
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

loc_80721F28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80721F34;
    }
}

loc_80721F2C:
{
    r4 = (r31 & 255);
    // inline leaf 0x80725DD8 (8 guest instruction(s))
    r5 = 0x808D0000u;
    r0 = 0;
    r5 = (r5 + -26524);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32(r3, r5);
    // end of inlined leaf 0x80725DD8
}

loc_80721F34:
{
    MemoryInline::FlatWrite32((r30 + 508), r3);
    r3 = 12;
    ctx->lr = 0x80721F40u;
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

loc_80721F44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80721F50;
    }
}

loc_80721F48:
{
    r4 = (r31 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80725C1Cu) && KnownTranslatedCpuCall<0x80725C1Cu>::kAvailable && !KnownTranslatedCpuCall<0x80725C1Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80725C1Cu>()) {
        const auto state_free_result_80725C1C_1691 = func_80725C1C_statefree_v0(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80725C1C_1691);
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

loc_80721F50:
{
    MemoryInline::FlatWrite32((r30 + 512), r3);
    r3 = 8;
    ctx->lr = 0x80721F5Cu;
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

loc_80721F60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80721F6C;
    }
}

loc_80721F64:
{
    r4 = (r31 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80725E4Cu) && KnownTranslatedCpuCall<0x80725E4Cu>::kAvailable && !KnownTranslatedCpuCall<0x80725E4Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80725E4Cu>()) {
        const auto state_free_result_80725E4C_1D32 = func_80725E4C_statefree(r3, r4);
        r5 = static_cast<uint32_t>(state_free_result_80725E4C_1D32);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80725E4Cu>(ctx);
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

loc_80721F6C:
{
    MemoryInline::FlatWrite32((r30 + 516), r3);
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
// RECOMP_REGISTRATION base 0x80721EC0 func_80721EC0 preserves=true fpr_mask=0x00000000
