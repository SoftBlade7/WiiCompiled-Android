#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80096120(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80096120;

loc_80096120:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80096124:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009613C;
    }
}

loc_80096128:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
}

loc_8009612C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096144;
    }
}

loc_80096130:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
}

loc_80096134:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096154;
    }
}

loc_80096138:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_8009613C:
{
    MemoryInline::FlatWrite32((r3 + 28), r4);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80096144:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80096154:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80096120 func_80096120 preserves=true fpr_mask=0x00000000
