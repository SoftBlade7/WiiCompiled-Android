#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023DC34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023DC34;

loc_8023DC34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DC4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DC58;
    }
}

loc_8023DC50:
{
    r3 = 1;
    goto loc_8023DDB4;
}

loc_8023DC58:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023DC60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DDB0;
    }
}

loc_8023DC64:
{
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DC6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DC78;
    }
}

loc_8023DC70:
{
    r3 = 1;
    goto loc_8023DDB4;
}

loc_8023DC78:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023DC80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DDA8;
    }
}

loc_8023DC84:
{
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DC8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DC98;
    }
}

loc_8023DC90:
{
    r3 = 1;
    goto loc_8023DDB4;
}

loc_8023DC98:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023DCA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DDA0;
    }
}

loc_8023DCA4:
{
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DCAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DCB8;
    }
}

loc_8023DCB0:
{
    r3 = 1;
    goto loc_8023DDB4;
}

loc_8023DCB8:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023DCC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DD98;
    }
}

loc_8023DCC4:
{
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DCCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DCD8;
    }
}

loc_8023DCD0:
{
    r3 = 1;
    goto loc_8023DDB4;
}

loc_8023DCD8:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023DCE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DD90;
    }
}

loc_8023DCE4:
{
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DCEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DCF8;
    }
}

loc_8023DCF0:
{
    r3 = 1;
    goto loc_8023DDB4;
}

loc_8023DCF8:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023DD00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DD88;
    }
}

loc_8023DD04:
{
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DD0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DD18;
    }
}

loc_8023DD10:
{
    r3 = 1;
    goto loc_8023DDB4;
}

loc_8023DD18:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023DD20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DD80;
    }
}

loc_8023DD24:
{
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DD2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DD38;
    }
}

loc_8023DD30:
{
    r3 = 1;
    goto loc_8023DDB4;
}

loc_8023DD38:
{
    r31 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8023DD40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DD78;
    }
}

loc_8023DD44:
{
    r3 = r31;
    // inline leaf 0x8023DDC8 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8023DDC8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023DD50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DD5C;
    }
}

loc_8023DD54:
{
    r3 = 1;
    goto loc_8023DDB4;
}

loc_8023DD5C:
{
    r3 = MemoryInline::FlatRead32((r31 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023DD64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DD70;
    }
}

loc_8023DD68:
{
    ctx->lr = 0x8023DD6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023DC34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8023DDB4;
}

loc_8023DD70:
{
    r3 = 0;
    goto loc_8023DDB4;
}

loc_8023DD78:
{
    r3 = 0;
    goto loc_8023DDB4;
}

loc_8023DD80:
{
    r3 = 0;
    goto loc_8023DDB4;
}

loc_8023DD88:
{
    r3 = 0;
    goto loc_8023DDB4;
}

loc_8023DD90:
{
    r3 = 0;
    goto loc_8023DDB4;
}

loc_8023DD98:
{
    r3 = 0;
    goto loc_8023DDB4;
}

loc_8023DDA0:
{
    r3 = 0;
    goto loc_8023DDB4;
}

loc_8023DDA8:
{
    r3 = 0;
    goto loc_8023DDB4;
}

loc_8023DDB0:
{
    r3 = 0;
}

loc_8023DDB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800007FB gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023DC34 func_8023DC34 preserves=true fpr_mask=0x00000000
