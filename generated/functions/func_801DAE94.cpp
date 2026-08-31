#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80208B70_statefree(uint32_t);

extern "C" void func_801DAE94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DAE94;

loc_801DAE94:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(265));
}

loc_801DAEA0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DAEE4;
    }
}

loc_801DAEBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DAED8;
    }
}

loc_801DAEC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(258));
}

loc_801DAEC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DAEEC;
    }
}

loc_801DAEC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DAEF4;
    }
}

loc_801DAECC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(257));
}

loc_801DAED0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DAEE4;
    }
}

loc_801DAED4:
{
    goto loc_801DAEF4;
}

loc_801DAED8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(267));
}

loc_801DAEDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DAEF4;
    }
}

loc_801DAEE0:
{
    goto loc_801DAEEC;
}

loc_801DAEE4:
{
    r31 = (r13 + -28288);
    goto loc_801DAEFC;
}

loc_801DAEEC:
{
    r31 = (r13 + -28284);
    goto loc_801DAEFC;
}

loc_801DAEF4:
{
    r3 = -3;
    goto loc_801DAFA0;
}

loc_801DAEFC:
{
    r3 = r4;
    r4 = r31;
    r5 = 0;
    ctx->lr = 0x801DAF0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208694u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DAF10:
{
    MemoryInline::FlatWrite32((r29 + 152), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DAF9C;
    }
}

loc_801DAF18:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80208B70u) && KnownTranslatedCpuCall<0x80208B70u>::kAvailable && !KnownTranslatedCpuCall<0x80208B70u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80208B70u>()) {
        const auto state_free_result_80208B70_D38 = func_80208B70_statefree(r13);
        r3 = static_cast<uint32_t>(state_free_result_80208B70_D38);
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
        InvokeDirectCpu<0x80208B70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_801DAF20:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(265))) {
        goto loc_801DAF2C;
    }
}

loc_801DAF24:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24404), r0);
}

loc_801DAF2C:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801DAF34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(114))) {
        goto loc_801DAF48;
    }
}

loc_801DAF38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_801DAF3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DAF48;
    }
}

loc_801DAF40:
{
    r3 = -20;
    goto loc_801DAFA0;
}

loc_801DAF48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DAF4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DAF94;
    }
}

loc_801DAF50:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DAF58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DAF5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DAF7C;
    }
}

loc_801DAF60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DAF70;
    }
}

loc_801DAF64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DAF68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DAF7C;
    }
}

loc_801DAF6C:
{
    goto loc_801DAF8C;
}

loc_801DAF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DAF74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DAF8C;
    }
}

loc_801DAF78:
{
    goto loc_801DAF84;
}

loc_801DAF7C:
{
    r3 = -46;
    goto loc_801DAFA0;
}

loc_801DAF84:
{
    r3 = -38;
    goto loc_801DAFA0;
}

loc_801DAF8C:
{
    r3 = -16;
    goto loc_801DAFA0;
}

loc_801DAF94:
{
    r3 = -16;
    goto loc_801DAFA0;
}

loc_801DAF9C:
{
    r3 = 0;
}

loc_801DAFA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DAE94 func_801DAE94 preserves=true fpr_mask=0x00000000
