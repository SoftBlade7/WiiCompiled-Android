#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059E618(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059E618;

loc_8059E618:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059E620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059E62C;
    }
}

loc_8059E624:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // inline leaf 0x80833444 (12 guest instruction(s))
}

loc_inl0_0x80833444:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80833454:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x8083346C;
    }
}

loc_inl0_0x80833458:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 * 44);
    r3 = (r3 + r0);
    goto loc_inl0_cont_80833444;
}

loc_inl0_0x8083346C:
{
    r3 = 0;
}

loc_inl0_cont_80833444:
{
    // end of inlined leaf 0x80833444
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8059E62C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059E618 func_8059E618 preserves=true fpr_mask=0x00000000
