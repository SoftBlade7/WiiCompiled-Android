#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023B940(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023B940;

loc_8023B940:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 32));
    goto loc_8023B968;
}

loc_8023B950:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_8023B958:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8023B964;
    }
}

loc_8023B95C:
{
    r5 = 1;
    goto loc_8023B970;
}

loc_8023B964:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
}

loc_8023B968:
{
}

loc_8023B96C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8023B950;
    }
}

loc_8023B970:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8023B974:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8023B978:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023B940 func_8023B940 preserves=true fpr_mask=0x00000000
