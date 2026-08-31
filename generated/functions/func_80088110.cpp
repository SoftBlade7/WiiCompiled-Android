#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80088110(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80088110;

loc_80088110:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = (r5 + -1379991552);
}

loc_8008811C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(21316))) {
        goto loc_80088128;
    }
}

loc_80088120:
{
    r0 = 0;
    goto loc_80088154;
}

loc_80088128:
{
    r6 = MemoryInline::FlatRead16((r4 + 6));
}

loc_80088130:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(256))) {
        goto loc_8008813C;
    }
}

loc_80088134:
{
    r0 = 0;
    goto loc_80088154;
}

loc_8008813C:
{
    r0 = (256 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(256) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r5 = 256;
    r5 = (r5 | ~r6);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r5 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_80088154:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80088158:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80088164;
    }
}

loc_8008815C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80088164:
{
    MemoryInline::FlatWrite32(r3, r4);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80088110 func_80088110 preserves=true fpr_mask=0x00000000
