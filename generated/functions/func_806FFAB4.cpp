#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80632080_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_806FFAB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FFAB4;

loc_806FFAB4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 + -15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(41));
}

loc_806FFAC8:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806FFB3C;
    }
}

loc_806FFAD0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r31 = MemoryInline::FlatRead32((r3 + 16));
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80632080u) && KnownTranslatedCpuCall<0x80632080u>::kAvailable && !KnownTranslatedCpuCall<0x80632080u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80632080u>()) {
        const auto state_free_result_80632080_560 = func_80632080_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80632080_560[0]);
        cr = static_cast<uint32_t>(state_free_result_80632080_560[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80632080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_806FFAE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FFB00;
    }
}

loc_806FFAEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_806FFAF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FFB10;
    }
}

loc_806FFAF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_806FFAF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FFB20;
    }
}

loc_806FFAFC:
{
    goto loc_806FFB98;
}

loc_806FFB00:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    ctx->lr = 0x806FFB0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FBE30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806FFB98;
}

loc_806FFB10:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10408));
    ctx->lr = 0x806FFB1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80718648u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806FFB98;
}

loc_806FFB20:
{
    r0 = (r31 + -50);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_806FFB28:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806FFB98;
    }
}

loc_806FFB2C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10408));
    ctx->lr = 0x806FFB38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80718648u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806FFB98;
}

loc_806FFB3C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
}

loc_806FFB40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FFB98;
    }
}

loc_806FFB44:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r31 = MemoryInline::FlatRead32((r3 + 16));
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80632080u) && KnownTranslatedCpuCall<0x80632080u>::kAvailable && !KnownTranslatedCpuCall<0x80632080u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80632080u>()) {
        const auto state_free_result_80632080_1344 = func_80632080_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80632080_1344[0]);
        cr = static_cast<uint32_t>(state_free_result_80632080_1344[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80632080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_806FFB5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FFB98;
    }
}

loc_806FFB60:
{
    r0 = (r31 + -53);
}

loc_806FFB68:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_806FFB74;
    }
}

loc_806FFB6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(13));
}

loc_806FFB70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FFB98;
    }
}

loc_806FFB74:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_806FFB84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FFB98;
    }
}

loc_806FFB88:
{
    r3 = 0x809C0000u;
    r4 = 539;
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    ctx->lr = 0x806FFB98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCBA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FFB98:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FFAB4 func_806FFAB4 preserves=true fpr_mask=0x00000000
