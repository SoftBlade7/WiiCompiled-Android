#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801064C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801064C0;

loc_801064C0:
{
    r6 = MemoryInline::FlatRead32((r4 + 8));
}

loc_801064C8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801064E8;
    }
}

loc_801064CC:
{
    r3 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801064D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801064E8;
    }
}

loc_801064DC:
{
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_801064E8:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801064F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80106510;
    }
}

loc_801064F4:
{
    r3 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80106500:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80106510;
    }
}

loc_80106504:
{
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80106510:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801064C0 func_801064C0 preserves=true fpr_mask=0x00000000
