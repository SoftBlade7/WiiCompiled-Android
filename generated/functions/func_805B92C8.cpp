#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B92C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805B92C8;

loc_805B92C8:
{
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 100));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r3_addr_0 = (r3 + r4);
    r4 = MemoryInline::FlatRead32(r3_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805B92E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B92EC;
    }
}

loc_805B92E4:
{
    r3 = MemoryInline::FlatRead32(r5);
    goto loc_805B92F0;
}

loc_805B92EC:
{
    r3 = 0;
}

loc_805B92F0:
{
    MemoryInline::FlatWrite32((r3 + 360), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B92C8 func_805B92C8 preserves=true fpr_mask=0x00000000
