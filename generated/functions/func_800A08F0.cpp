#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A08F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A08F0;

loc_800A08F0:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A08F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A0904;
    }
}

loc_800A08FC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800A0904:
{
    // inline leaf 0x8009DE70 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8009DE70
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_800A08F0_statefree_v0(uint32_t native_r0, uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    goto loc_800A08F0;

loc_800A08F0:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 16));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_800A08F8:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800A0904;
    }
}

loc_800A08FC:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_800A0904:
{
    // inline leaf 0x8009DE70 (5 guest instruction(s))
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 4));
    cached_r0 = (0 - cached_r3);
    cached_r0 = (cached_r0 | cached_r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(1));
    cached_r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8009DE70

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800A08F0 symbol=func_800A08F0_statefree_v0 gpr_in=0x00000009 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_800A08F0_statefree(uint32_t native_r0, uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    goto loc_800A08F0;

loc_800A08F0:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 16));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_800A08F8:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800A0904;
    }
}

loc_800A08FC:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_800A0904:
{
    // inline leaf 0x8009DE70 (5 guest instruction(s))
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 4));
    cached_r0 = (0 - cached_r3);
    cached_r0 = (cached_r0 | cached_r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(1));
    cached_r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8009DE70

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800A08F0 symbol=func_800A08F0_statefree gpr_in=0x00000009 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A08F0 func_800A08F0 preserves=true fpr_mask=0x00000000

