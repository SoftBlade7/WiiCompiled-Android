#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80215E90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80215E90;

loc_80215E90:
{
    r3 = MemoryInline::FlatRead32((r3 + 2180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80215E98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80215E9C:
{
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80217588u>(ctx);
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000206B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80215E90 func_80215E90 preserves=true fpr_mask=0x00000000
