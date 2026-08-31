#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016DCB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016DCB0;

loc_8016DCB0:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(10));
    r0_mrot_0 = (r0_rot_0 & 7168);
    r0_mdest_0 = (r0 & -7169);
    r0 = (r0_mdest_0 | r0_mrot_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_8016DCBC:
{
    MemoryInline::FlatWrite32((r8 + 28), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016DCD8;
    }
}

loc_8016DCC4:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0 = (r0 | 512);
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016DDD8u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_8016DCD8:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(9));
    r0_mrot_1 = (r0_rot_1 & 512);
    r0_mdest_1 = (r0 & -513);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r8 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016DDD8u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8016DCB0 func_8016DCB0 preserves=true fpr_mask=0x00000000
