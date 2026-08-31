#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800179B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_sthu_ea_0 = 0;
    uint32_t r5_sthu_ea_1 = 0;
    uint32_t r5_sthu_ea_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800179B4;

loc_800179B4:
{
    r4 = (r4 + -2);
    r5 = (r3 + -2);
}

loc_800179BC:
{
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead16(r4);
    r5_sthu_ea_2 = (r5 + 2);
    MemoryInline::FlatWrite16(r5_sthu_ea_2, static_cast<uint16_t>(r0));
    r5 = r5_sthu_ea_2;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800179C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800179BC;
    }
}

loc_800179CC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800179B4 func_800179B4 preserves=true fpr_mask=0x00000000
