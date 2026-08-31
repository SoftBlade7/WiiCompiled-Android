#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059068C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059068C;

loc_8059068C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // inline leaf 0x805275EC (6 guest instruction(s))
}

loc_inl0_0x805275EC:
{
    r0 = (r3 + -24);
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_inl0_0x805275F8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805275FC:
{
    r3 = 1;
    goto loc_inl0_cont_805275EC;
}

loc_inl0_return:
{
}

loc_inl0_cont_805275EC:
{
    // end of inlined leaf 0x805275EC
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8059068C_statefree(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_8059068C;

loc_8059068C:
{
    cached_r3 = MemoryInline::FlatRead32(cached_r3);
    cached_r3 = MemoryInline::FlatRead32(cached_r3);
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 8));
    // inline leaf 0x805275EC (6 guest instruction(s))
}

loc_inl0_0x805275EC:
{
    cached_r0 = (cached_r3 + -24);
    cached_r3 = 0;
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(20));
}

loc_inl0_0x805275F8:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805275FC:
{
    cached_r3 = 1;
    goto loc_inl0_cont_805275EC;
}

loc_inl0_return:
{
}

loc_inl0_cont_805275EC:
{
    // end of inlined leaf 0x805275EC

return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8059068C symbol=func_8059068C_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059068C func_8059068C preserves=true fpr_mask=0x00000000

