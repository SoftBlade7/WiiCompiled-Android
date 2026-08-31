#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807396CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807396CC;

loc_807396CC:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_807396E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_807396E4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_807396CC_statefree_v0(uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_807396CC;

loc_807396CC:
{
    cached_r4 = 0x809C0000u;
    cached_r3 = 0;
    cached_r4 = MemoryInline::FlatRead32((cached_r4 + -10456));
    cached_r0 = MemoryInline::FlatRead32((cached_r4 + 2928));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(4));
}

loc_807396E0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_807396E4:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_return:
{

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x807396CC symbol=func_807396CC_statefree_v0 gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_807396CC_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_807396CC;

loc_807396CC:
{
    cached_r4 = 0x809C0000u;
    cached_r3 = 0;
    cached_r4 = MemoryInline::FlatRead32((cached_r4 + -10456));
    cached_r0 = MemoryInline::FlatRead32((cached_r4 + 2928));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(4));
}

loc_807396E0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_807396E4:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_return:
{

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x807396CC symbol=func_807396CC_statefree gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807396CC func_807396CC preserves=true fpr_mask=0x00000000

