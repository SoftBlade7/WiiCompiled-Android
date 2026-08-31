#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F0DB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805F0DB4;

loc_805F0DB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805F0DB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0DD8;
    }
}

loc_805F0DBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_805F0DC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0DE8;
    }
}

loc_805F0DC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_805F0DC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0DF8;
    }
}

loc_805F0DCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_805F0DD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0E08;
    }
}

loc_805F0DD4:
{
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_805F0DD8:
{
    r4 = 0x805F0000u;
    r4 = (r4 + 3384);
    MemoryInline::FlatWrite32((r3 + 544), r4);
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_805F0DE8:
{
    r4 = 0x805F0000u;
    r4 = (r4 + 3608);
    MemoryInline::FlatWrite32((r3 + 544), r4);
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_805F0DF8:
{
    r4 = 0x805F0000u;
    r4 = (r4 + 3620);
    MemoryInline::FlatWrite32((r3 + 544), r4);
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_805F0E08:
{
    r4 = 0x805F0000u;
    r4 = (r4 + 10568);
    MemoryInline::FlatWrite32((r3 + 544), r4);
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_805F0DB4_statefree_v3(uint32_t native_r3, uint32_t native_r4, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_805F0DB4;

loc_805F0DB4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_805F0DB8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DD8;
    }
}

loc_805F0DBC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_805F0DC0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DE8;
    }
}

loc_805F0DC4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(2));
}

loc_805F0DC8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DF8;
    }
}

loc_805F0DCC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(3));
}

loc_805F0DD0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0E08;
    }
}

loc_805F0DD4:
{
return;
}

loc_805F0DD8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3384);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return;
}

loc_805F0DE8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3608);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return;
}

loc_805F0DF8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3620);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return;
}

loc_805F0E08:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 10568);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x805F0DB4 symbol=func_805F0DB4_statefree_v3 gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_805F0DB4_statefree_v2(uint32_t native_r3, uint32_t native_r4, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_805F0DB4;

loc_805F0DB4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_805F0DB8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DD8;
    }
}

loc_805F0DBC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_805F0DC0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DE8;
    }
}

loc_805F0DC4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(2));
}

loc_805F0DC8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DF8;
    }
}

loc_805F0DCC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(3));
}

loc_805F0DD0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0E08;
    }
}

loc_805F0DD4:
{
return static_cast<uint64_t>(cached_r4);
}

loc_805F0DD8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3384);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return static_cast<uint64_t>(cached_r4);
}

loc_805F0DE8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3608);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return static_cast<uint64_t>(cached_r4);
}

loc_805F0DF8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3620);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return static_cast<uint64_t>(cached_r4);
}

loc_805F0E08:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 10568);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return static_cast<uint64_t>(cached_r4);
}


    return static_cast<uint64_t>(cached_r4);
}
// RECOMP_STATE_FREE_ABI address=0x805F0DB4 symbol=func_805F0DB4_statefree_v2 gpr_in=0x00000018 gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_805F0DB4_statefree_v1(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_805F0DB4;

loc_805F0DB4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_805F0DB8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DD8;
    }
}

loc_805F0DBC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_805F0DC0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DE8;
    }
}

loc_805F0DC4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(2));
}

loc_805F0DC8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DF8;
    }
}

loc_805F0DCC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(3));
}

loc_805F0DD0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0E08;
    }
}

loc_805F0DD4:
{
return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

loc_805F0DD8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3384);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

loc_805F0DE8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3608);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

loc_805F0DF8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3620);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

loc_805F0E08:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 10568);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x805F0DB4 symbol=func_805F0DB4_statefree_v1 gpr_in=0x00000018 gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_805F0DB4_statefree_v0(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_805F0DB4;

loc_805F0DB4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_805F0DB8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DD8;
    }
}

loc_805F0DBC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_805F0DC0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DE8;
    }
}

loc_805F0DC4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(2));
}

loc_805F0DC8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DF8;
    }
}

loc_805F0DCC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(3));
}

loc_805F0DD0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0E08;
    }
}

loc_805F0DD4:
{
return static_cast<uint64_t>(cached_cr);
}

loc_805F0DD8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3384);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return static_cast<uint64_t>(cached_cr);
}

loc_805F0DE8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3608);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return static_cast<uint64_t>(cached_cr);
}

loc_805F0DF8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3620);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return static_cast<uint64_t>(cached_cr);
}

loc_805F0E08:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 10568);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return static_cast<uint64_t>(cached_cr);
}


    return static_cast<uint64_t>(cached_cr);
}
// RECOMP_STATE_FREE_ABI address=0x805F0DB4 symbol=func_805F0DB4_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_805F0DB4_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_805F0DB4;

loc_805F0DB4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_805F0DB8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DD8;
    }
}

loc_805F0DBC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_805F0DC0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DE8;
    }
}

loc_805F0DC4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(2));
}

loc_805F0DC8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0DF8;
    }
}

loc_805F0DCC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(3));
}

loc_805F0DD0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_805F0E08;
    }
}

loc_805F0DD4:
{
return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

loc_805F0DD8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3384);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

loc_805F0DE8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3608);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

loc_805F0DF8:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 3620);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

loc_805F0E08:
{
    cached_r4 = 0x805F0000u;
    cached_r4 = (cached_r4 + 10568);
    MemoryInline::FlatWrite32((cached_r3 + 544), cached_r4);
return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x805F0DB4 symbol=func_805F0DB4_statefree gpr_in=0x00000018 gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F0DB4 func_805F0DB4 preserves=true fpr_mask=0x00000000

