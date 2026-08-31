#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F5D58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805F5D58;

loc_805F5D58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(90));
}

loc_805F5D5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5D60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5DBC;
    }
}

loc_805F5D64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(78));
}

loc_805F5D68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5E14;
    }
}

loc_805F5D6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5DA0;
    }
}

loc_805F5D70:
{
}

loc_805F5D74:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(72))) {
        goto loc_805F5D8C;
    }
}

loc_805F5D78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(63));
}

loc_805F5D7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5D80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(61));
}

loc_805F5D84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5E0C;
    }
}

loc_805F5D88:
{
    goto loc_805F5E20;
}

loc_805F5D8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(77));
}

loc_805F5D90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5E0C;
    }
}

loc_805F5D94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(75));
}

loc_805F5D98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5E1C;
    }
}

loc_805F5D9C:
{
    goto loc_805F5E0C;
}

loc_805F5DA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(84));
}

loc_805F5DA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5E1C;
    }
}

loc_805F5DA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5E0C;
    }
}

loc_805F5DAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(80));
}

loc_805F5DB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5E14;
    }
}

loc_805F5DB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5DB8:
{
    goto loc_805F5E0C;
}

loc_805F5DBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(130));
}

loc_805F5DC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5DC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5DF0;
    }
}

loc_805F5DC8:
{
}

loc_805F5DCC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(104))) {
        goto loc_805F5DE4;
    }
}

loc_805F5DD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(100));
}

loc_805F5DD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5E14;
    }
}

loc_805F5DD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(96));
}

loc_805F5DDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5E0C;
    }
}

loc_805F5DE0:
{
    goto loc_805F5E14;
}

loc_805F5DE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(127));
}

loc_805F5DE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5E14;
    }
}

loc_805F5DEC:
{
    goto loc_805F5E20;
}

loc_805F5DF0:
{
}

loc_805F5DF4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(144))) {
        goto loc_805F5E04;
    }
}

loc_805F5DF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(135));
}

loc_805F5DFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5E00:
{
    goto loc_805F5E0C;
}

loc_805F5E04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(148));
}

loc_805F5E08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5E0C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805F5E14:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805F5E1C:
{
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805F5E20:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_805F5D58_statefree(uint32_t native_r0, uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_805F5D58;

loc_805F5D58:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(90));
}

loc_805F5D5C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5D60:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5DBC;
    }
}

loc_805F5D64:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(78));
}

loc_805F5D68:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F5E14;
    }
}

loc_805F5D6C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5DA0;
    }
}

loc_805F5D70:
{
}

loc_805F5D74:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(72))) {
        goto loc_805F5D8C;
    }
}

loc_805F5D78:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(63));
}

loc_805F5D7C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5D80:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(61));
}

loc_805F5D84:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5E0C;
    }
}

loc_805F5D88:
{
    goto loc_805F5E20;
}

loc_805F5D8C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(77));
}

loc_805F5D90:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5E0C;
    }
}

loc_805F5D94:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(75));
}

loc_805F5D98:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5E1C;
    }
}

loc_805F5D9C:
{
    goto loc_805F5E0C;
}

loc_805F5DA0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(84));
}

loc_805F5DA4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F5E1C;
    }
}

loc_805F5DA8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5E0C;
    }
}

loc_805F5DAC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(80));
}

loc_805F5DB0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F5E14;
    }
}

loc_805F5DB4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5DB8:
{
    goto loc_805F5E0C;
}

loc_805F5DBC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(130));
}

loc_805F5DC0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5DC4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5DF0;
    }
}

loc_805F5DC8:
{
}

loc_805F5DCC:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(104))) {
        goto loc_805F5DE4;
    }
}

loc_805F5DD0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(100));
}

loc_805F5DD4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5E14;
    }
}

loc_805F5DD8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(96));
}

loc_805F5DDC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5E0C;
    }
}

loc_805F5DE0:
{
    goto loc_805F5E14;
}

loc_805F5DE4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(127));
}

loc_805F5DE8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5E14;
    }
}

loc_805F5DEC:
{
    goto loc_805F5E20;
}

loc_805F5DF0:
{
}

loc_805F5DF4:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(144))) {
        goto loc_805F5E04;
    }
}

loc_805F5DF8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(135));
}

loc_805F5DFC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5E00:
{
    goto loc_805F5E0C;
}

loc_805F5E04:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(148));
}

loc_805F5E08:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_805F5E20;
    }
}

loc_805F5E0C:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805F5E14:
{
    cached_r3 = 2;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805F5E1C:
{
    // inline leaf 0x808605FC (6 guest instruction(s))
    cached_r3 = 0x809C0000u;
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 7736));
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 152));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 292));
    cached_r3 = (cached_r0 & 255);
    // end of inlined leaf 0x808605FC

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805F5E20:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x805F5D58 symbol=func_805F5D58_statefree gpr_in=0x00000009 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F5D58 func_805F5D58 preserves=true fpr_mask=0x00000000

