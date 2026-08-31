#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B90B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806B90B4;

loc_806B90B4:
{
    r7 = 0;
    r6 = 0;
    r5 = 0x809C0000u;
    goto loc_806B90D0;
}

loc_806B90C4:
{
    r4 = MemoryInline::FlatRead32((r3 + 180));
    r4_addr_2 = (r4 + r7);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r6));
    r7 = (r7 + 1);
}

loc_806B90D0:
{
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead8((r4 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_806B90DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806B90C4;
    }
}

loc_806B90E0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000D9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806B90B4 func_806B90B4 preserves=true fpr_mask=0x00000000
