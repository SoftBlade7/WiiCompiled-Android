#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019F980(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8019F980;

loc_8019F980:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019F988:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F990;
    }
}

loc_8019F98C:
{
    goto loc_8019F9AC;
}

loc_8019F990:
{
    r4 = 0x80340000u;
    r3 = 0x80000000u;
    r4 = (r4 + 28832);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 | 32768);
    MemoryInline::FlatWriteRam16((r3 + 12518), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8019F9AC:
{
    r0 = 1;
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam16((r3 + 12518), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019F980 func_8019F980 preserves=true fpr_mask=0x00000000
