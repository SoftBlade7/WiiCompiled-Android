#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CF388(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801CF388;

loc_801CF388:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CF38C:
{
    r3 = 0x80350000u;
    r3 = (r3 + 16608);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CF3A8;
    }
}

loc_801CF398:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24480), r0);
    MemoryInline::FlatWriteRam8((r3 + 1800), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_801CF3A8:
{
    r3 = 0x802A0000u;
    r3 = (r3 + 1524);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027FA gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801CF388 func_801CF388 preserves=true fpr_mask=0x00000000
