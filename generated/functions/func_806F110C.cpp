#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F110C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F110C;

loc_806F110C:
{
    r7 = MemoryInline::FlatRead16((r3 + 12));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r7 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_806F1120:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806F1138;
    }
}

loc_806F1124:
{
    r0 = MemoryInline::FlatRead16((r3 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r7 - r4);
    r0 = (r0 - r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_806F1148;
}

loc_806F1138:
{
    r0 = MemoryInline::FlatRead8((r3 + 23));
    r0 = (r4 * r0);
    r0 = (r5 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_806F1148:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6_addr_0 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x000000C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F110C func_806F110C preserves=true fpr_mask=0x00000000
