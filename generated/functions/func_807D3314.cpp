#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D3314(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D3314;

loc_807D3314:
{
}

loc_807D3318:
{
    r28 = 0;
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(20))) {
        goto loc_807D3328;
    }
}

loc_807D3320:
{
}

loc_807D3324:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(18))) {
        goto loc_807D3358;
    }
}

loc_807D3328:
{
    r28 = 1;
}

loc_807D3358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807D335C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D336C;
    }
}

loc_807D3360:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_807D336C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xB0000003 gpr_write=0xF0000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D3314 func_807D3314 preserves=true fpr_mask=0x00000000
