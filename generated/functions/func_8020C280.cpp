#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020C280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020C280;

loc_8020C280:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208FD8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_8020C294:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(26))) {
        goto loc_8020C2AC;
    }
}

loc_8020C298:
{
    r0 = (r3 * 20);
    r3 = 0x80380000u;
    r3 = (r3 + 12080);
    r3 = (r3 + r0);
    goto loc_8020C2B0;
}

loc_8020C2AC:
{
    r3 = 0;
}

loc_8020C2B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020C2B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020C2C0;
    }
}

loc_8020C2B8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_8020C2C4;
}

loc_8020C2C0:
{
    r3 = 0;
}

loc_8020C2C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020C280 func_8020C280 preserves=true fpr_mask=0x00000000
