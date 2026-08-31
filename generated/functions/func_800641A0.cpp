#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800641A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800641A0;

loc_800641A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x802C0000u;
    r0 = MemoryInline::FlatRead16((r31 + -17740));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800641BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800641E8;
    }
}

loc_800641C0:
{
    r3 = (r31 + -17740);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r3 + 4);
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 52);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r31 + -17740));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam16((r31 + -17740), static_cast<uint16_t>(r0));
}

loc_800641E8:
{
    r3 = 0x802C0000u;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r3 + -17740);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r3 + 4);
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

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00003F80 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800641A0 func_800641A0 preserves=true fpr_mask=0x00000000
