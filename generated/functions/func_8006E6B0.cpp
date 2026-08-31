#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006E6B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006E6B0;

loc_8006E6B0:
{
}

loc_8006E6B4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(9))) {
        goto loc_8006E6D8;
    }
}

loc_8006E6B8:
{
    r7 = (r4 + -1);
    r8 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r7 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r7));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006E6D8;
    }
}

loc_8006E6D0:
{
    r0 = 1;
    goto loc_8006E6DC;
}

loc_8006E6D8:
{
    r0 = 0;
}

loc_8006E6DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E6E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8006E6E4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006E6F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8006E6B0 func_8006E6B0 preserves=true fpr_mask=0x00000000
