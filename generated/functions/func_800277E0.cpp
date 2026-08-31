#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800277E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800277E0;

loc_800277E0:
{
    r6 = MemoryInline::FlatRead32((r4 + 20));
    r7 = MemoryInline::FlatRead32((r5 + 24));
}

loc_800277EC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800277F8;
    }
}

loc_800277F0:
{
    MemoryInline::FlatWrite32(r3, r5);
    goto loc_800277FC;
}

loc_800277F8:
{
    MemoryInline::FlatWrite32((r6 + 24), r5);
}

loc_800277FC:
{
    MemoryInline::FlatWrite32((r5 + 20), r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80027804:
{
    MemoryInline::FlatWrite32((r5 + 24), r4);
    MemoryInline::FlatWrite32((r4 + 20), r5);
    MemoryInline::FlatWrite32((r4 + 24), r7);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002781C;
    }
}

loc_80027814:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8002781C:
{
    MemoryInline::FlatWrite32((r7 + 20), r4);
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x000000C0 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800277E0 func_800277E0 preserves=true fpr_mask=0x00000000
