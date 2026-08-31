#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052AD08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052AD08;

loc_8052AD08:
{
    r6 = MemoryInline::FlatRead16((r3 + 8));
    r7 = 0;
    r8 = 0;
    goto loc_8052AD6C;
}

loc_8052AD18:
{
    r0 = (r8 & 65535);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 * 36);
    r4 = 0;
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_8052AD34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8052AD44;
    }
}

loc_8052AD38:
{
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_8052AD40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8052AD48;
    }
}

loc_8052AD44:
{
    r4 = 1;
}

loc_8052AD48:
{
}

loc_8052AD4C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052AD68;
    }
}

loc_8052AD50:
{
}

loc_8052AD54:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8052AD64;
    }
}

loc_8052AD58:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_8052AD60:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r0))) {
        goto loc_8052AD68;
    }
}

loc_8052AD64:
{
    r7 = MemoryInline::FlatRead32((r5 + 8));
}

loc_8052AD68:
{
    r8 = (r8 + 1);
}

loc_8052AD6C:
{
    r0 = (r8 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_8052AD74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052AD18;
    }
}

loc_8052AD78:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001B9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052AD08 func_8052AD08 preserves=true fpr_mask=0x00000000
