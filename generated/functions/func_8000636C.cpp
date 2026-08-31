#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000636C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addic_src_0 = 0;
    uint32_t r4_addic_src_1 = 0;
    uint32_t r4_addic_src_2 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000636C;

loc_8000636C:
{
    r5 = -65536;
    r5 = (r5 | 65521);
    r5 = (r5 & r3);
    r3 = (r3 - r5);
    r4 = (r4 + r3);
}

loc_80006380:
{
    // dcbst @ 0x80006380 (no-op)
    // sync @ 0x80006384 (no-op)
    // icbi @ 0x80006388 (no-op)
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + 8);
    r4_addic_src_2 = r4;
    r4 = (r4_addic_src_2 + -8);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-8)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80006394:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80006380;
    }
}

loc_80006398:
{
    // isync @ 0x80006398 (no-op)
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8000636C func_8000636C preserves=true fpr_mask=0x00000000
