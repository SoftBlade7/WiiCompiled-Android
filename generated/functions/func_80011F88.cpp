#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80011F88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80011F88;

loc_80011F88:
{
    r5 = MemoryInline::FlatRead8((r1 + 10));
    r0 = (r5 + 252);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80011F98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80011FB8;
    }
}

loc_80011F9C:
{
    r0 = (r5 + 255);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80011FA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80011FB8;
    }
}

loc_80011FAC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
}

loc_80011FB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80011FC4;
    }
}

loc_80011FB4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800122BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80011FB8:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800122BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80011FC4:
{
    r0 = 8;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800122BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0xC000002B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80011F88 func_80011F88 preserves=true fpr_mask=0x00000000
