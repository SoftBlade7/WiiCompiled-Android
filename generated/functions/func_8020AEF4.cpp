#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020AEF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020AEF4;

loc_8020AEF4:
{
}

loc_8020D0CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
}

loc_8020D0D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8020D0D4:
{
    r5 = 0x80210000u;
    r4 = 0x80380000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r3 = 0x80210000u;
    r4 = (r4 + 12600);
    r5 = (r5 + -14676);
    r4_addr_0 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_0, r5);
    r5 = (r4 + r0);
    r3 = (r3 + -13764);
    r4 = 0x80210000u;
    MemoryInline::FlatWrite32((r5 + 4), r3);
    r4 = (r4 + -13188);
    r3 = 0x80210000u;
    MemoryInline::FlatWrite32((r5 + 8), r4);
    r3 = (r3 + -14292);
    MemoryInline::FlatWrite32((r5 + 12), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_8020AEF4_statefree_v0(uint32_t native_r0, uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4{};
    uint32_t cached_r5{};

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    goto loc_8020AEF4;

loc_8020AEF4:
{
}

loc_8020D0CC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(26));
}

loc_8020D0D0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8020D0D4:
{
    cached_r5 = 0x80210000u;
    cached_r4 = 0x80380000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(4));
    cached_r0 = (r0_rot_0 & -16);
    cached_r3 = 0x80210000u;
    cached_r4 = (cached_r4 + 12600);
    cached_r5 = (cached_r5 + -14676);
    r4_addr_0 = (cached_r4 + cached_r0);
    MemoryInline::FlatWrite32(r4_addr_0, cached_r5);
    cached_r5 = (cached_r4 + cached_r0);
    cached_r3 = (cached_r3 + -13764);
    cached_r4 = 0x80210000u;
    MemoryInline::FlatWrite32((cached_r5 + 4), cached_r3);
    cached_r4 = (cached_r4 + -13188);
    cached_r3 = 0x80210000u;
    MemoryInline::FlatWrite32((cached_r5 + 8), cached_r4);
    cached_r3 = (cached_r3 + -14292);
    MemoryInline::FlatWrite32((cached_r5 + 12), cached_r3);


return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_cr) };
}

loc_return:
{


return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8020AEF4 symbol=func_8020AEF4_statefree_v0 gpr_in=0x00000009 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8020AEF4_statefree(uint32_t native_r0, uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    goto loc_8020AEF4;

loc_8020AEF4:
{
}

loc_8020D0CC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(26));
}

loc_8020D0D0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8020D0D4:
{
    cached_r5 = 0x80210000u;
    cached_r4 = 0x80380000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(4));
    cached_r0 = (r0_rot_0 & -16);
    cached_r3 = 0x80210000u;
    cached_r4 = (cached_r4 + 12600);
    cached_r5 = (cached_r5 + -14676);
    r4_addr_0 = (cached_r4 + cached_r0);
    MemoryInline::FlatWrite32(r4_addr_0, cached_r5);
    cached_r5 = (cached_r4 + cached_r0);
    cached_r3 = (cached_r3 + -13764);
    cached_r4 = 0x80210000u;
    MemoryInline::FlatWrite32((cached_r5 + 4), cached_r3);
    cached_r4 = (cached_r4 + -13188);
    cached_r3 = 0x80210000u;
    MemoryInline::FlatWrite32((cached_r5 + 8), cached_r4);
    cached_r3 = (cached_r3 + -14292);
    MemoryInline::FlatWrite32((cached_r5 + 12), cached_r3);


return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_cr) };
}

loc_return:
{


return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8020AEF4 symbol=func_8020AEF4_statefree gpr_in=0x00000039 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020AEF4 func_8020AEF4 preserves=true fpr_mask=0x00000000

