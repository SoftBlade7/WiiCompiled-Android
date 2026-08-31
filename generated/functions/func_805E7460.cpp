#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E7460(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E7460;

loc_805E7460:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_805E7464:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7470;
    }
}

loc_805E7468:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805E7470:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E7478:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7484;
    }
}

loc_805E747C:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805E7484:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_805E7488:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7494;
    }
}

loc_805E748C:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805E7494:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E749C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E74A8;
    }
}

loc_805E74A0:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805E74A8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_805E74AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E74B8;
    }
}

loc_805E74B0:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805E74B8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E74C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E74CC;
    }
}

loc_805E74C4:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805E74CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_805E74D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E74DC;
    }
}

loc_805E74D4:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805E74DC:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E74E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E74F0;
    }
}

loc_805E74E8:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805E74F0:
{
    goto loc_805E7460;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_805E7460_statefree_v0(uint32_t native_r3, uint32_t native_r4, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_805E7460;

loc_805E7460:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(cached_r4));
}

loc_805E7464:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E7470;
    }
}

loc_805E7468:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_805E7470:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_805E7478:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E7484;
    }
}

loc_805E747C:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_805E7484:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(cached_r4));
}

loc_805E7488:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E7494;
    }
}

loc_805E748C:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_805E7494:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_805E749C:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E74A8;
    }
}

loc_805E74A0:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_805E74A8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(cached_r4));
}

loc_805E74AC:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E74B8;
    }
}

loc_805E74B0:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_805E74B8:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_805E74C0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E74CC;
    }
}

loc_805E74C4:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_805E74CC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(cached_r4));
}

loc_805E74D0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E74DC;
    }
}

loc_805E74D4:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_805E74DC:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_805E74E4:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E74F0;
    }
}

loc_805E74E8:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_805E74F0:
{
    goto loc_805E7460;
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x805E7460 symbol=func_805E7460_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_805E7460_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_805E7460;

loc_805E7460:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(cached_r4));
}

loc_805E7464:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E7470;
    }
}

loc_805E7468:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_805E7470:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_805E7478:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E7484;
    }
}

loc_805E747C:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_805E7484:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(cached_r4));
}

loc_805E7488:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E7494;
    }
}

loc_805E748C:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_805E7494:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_805E749C:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E74A8;
    }
}

loc_805E74A0:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_805E74A8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(cached_r4));
}

loc_805E74AC:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E74B8;
    }
}

loc_805E74B0:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_805E74B8:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_805E74C0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E74CC;
    }
}

loc_805E74C4:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_805E74CC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(cached_r4));
}

loc_805E74D0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E74DC;
    }
}

loc_805E74D4:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_805E74DC:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_805E74E4:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805E74F0;
    }
}

loc_805E74E8:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_805E74F0:
{
    goto loc_805E7460;
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x805E7460 symbol=func_805E7460_statefree gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E7460 func_805E7460 preserves=true fpr_mask=0x00000000

