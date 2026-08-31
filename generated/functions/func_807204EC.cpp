#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807204EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807204EC;

loc_807204EC:
{
    r3 = MemoryInline::FlatRead32((r3 + 356));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807204F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807204F8:
{
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80720A20u>(ctx);
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xE00018FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xE000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807204EC func_807204EC preserves=true fpr_mask=0x00000000
