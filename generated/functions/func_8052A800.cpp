#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052A800(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8052A800;

loc_8052A800:
{
    r6 = MemoryInline::FlatRead16((r3 + 8));
    r7 = 0;
    goto loc_8052A850;
}

loc_8052A80C:
{
    r0 = (r7 & 65535);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 * 36);
    r4 = 0;
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_8052A828:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8052A838;
    }
}

loc_8052A82C:
{
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_8052A834:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8052A83C;
    }
}

loc_8052A838:
{
    r4 = 1;
}

loc_8052A83C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8052A840:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052A84C;
    }
}

loc_8052A844:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8052A84C:
{
    r7 = (r7 + 1);
}

loc_8052A850:
{
    r0 = (r7 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_8052A858:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052A80C;
    }
}

loc_8052A85C:
{
    r3 = 0;
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

// RECOMP_GUEST_ABI gpr_read=0x000000B9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052A800 func_8052A800 preserves=true fpr_mask=0x00000000
