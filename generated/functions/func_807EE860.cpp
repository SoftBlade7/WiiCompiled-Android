#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807EE860(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807EE860;

loc_807EE860:
{
    r6 = MemoryInline::FlatRead16((r5 + 8));
    r7 = 0;
    r0 = MemoryInline::FlatRead16((r4 + 8));
    r8 = 0;
    r9 = (r0 - r6);
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_807EE880;
    }
}

loc_807EE878:
{
    r8 = -1;
    r9 = (r9 + 1000);
}

loc_807EE880:
{
    r6 = MemoryInline::FlatRead8((r5 + 6));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    r0 = (r0 - r6);
    r8 = (r8 + r0);
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_807EE89C;
    }
}

loc_807EE894:
{
    r7 = -1;
    r8 = (r8 + 60);
}

loc_807EE89C:
{
    r5 = MemoryInline::FlatRead16((r5 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 - r5);
    r7 = (r7 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807EE8BC;
    }
}

loc_807EE8B0:
{
    r7 = 0;
    r8 = 0;
    r9 = 0;
}

loc_807EE8BC:
{
    r4 = 0x808B0000u;
    r0 = 1;
    r4 = (r4 + 11588);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r9));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807EE860 func_807EE860 preserves=true fpr_mask=0x00000000
