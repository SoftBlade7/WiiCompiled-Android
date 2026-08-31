#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054FBE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8054FBE4;

loc_8054FBE4:
{
    r5 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r5 + -10424));
    r0 = MemoryInline::FlatRead16((r7 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8054FBF4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8054FC14;
    }
}

loc_8054FBF8:
{
    r5 = 65536;
    r6 = (r0 & 255);
    r0 = (r5 + -27664);
    r0 = (r0 * r6);
    r5 = (r7 + r0);
    r5 = (r5 + 56);
    goto loc_8054FC18;
}

loc_8054FC14:
{
    r5 = 0;
}

loc_8054FC18:
{
    r4 = (r4 * 896);
    r0 = (r3 * 112);
    r3 = (r5 + r4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 118));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054FC30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054FC3C;
    }
}

loc_8054FC34:
{
    r3 = MemoryInline::FlatRead32((r3 + 132));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8054FC3C:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000099 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054FBE4 func_8054FBE4 preserves=true fpr_mask=0x00000000
