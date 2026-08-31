#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D0438(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r29 = ctx->gpr[29];
    uint32_t cr = ctx->cr;

    goto loc_801D0438;

loc_801D0438:
{
    r3 = (r29 + 20);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    InvokeDirectCpu<0x801D094Cu>(ctx);
    r29 = ctx->gpr[29];
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x200007F2 gpr_write=0xE000000B gpr_return=0x00000008 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x02 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D0438 func_801D0438 preserves=true fpr_mask=0x00000000
