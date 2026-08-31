#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D041C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_801D041C;

loc_801D041C:
{
    r3 = (r29 + 0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r0 = MemoryInline::FlatRead32((r31 + 1856));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 1856), r0);
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x801D094Cu>(ctx);
    r0 = ctx->gpr[0];
    r29 = ctx->gpr[29];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xA00007F2 gpr_write=0xE000000B gpr_return=0x00000008 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x02 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D041C func_801D041C preserves=true fpr_mask=0x00000000
