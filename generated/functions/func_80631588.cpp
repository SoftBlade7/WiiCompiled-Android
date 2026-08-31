#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80631588(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80631588;

loc_80631588:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(68));
}

loc_8063158C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806316CC;
    }
}

loc_80631590:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806315FC;
    }
}

loc_80631594:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(12));
}

loc_80631598:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631694;
    }
}

loc_8063159C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806315D0;
    }
}

loc_806315A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(8));
}

loc_806315A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631674;
    }
}

loc_806315A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806315C0;
    }
}

loc_806315AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_806315B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063166C;
    }
}

loc_806315B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806315B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631664;
    }
}

loc_806315BC:
{
    goto loc_8063172C;
}

loc_806315C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(10));
}

loc_806315C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631684;
    }
}

loc_806315C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063168C;
    }
}

loc_806315CC:
{
    goto loc_8063167C;
}

loc_806315D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(15));
}

loc_806315D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806316AC;
    }
}

loc_806315D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806315E8;
    }
}

loc_806315DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(14));
}

loc_806315E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806316A4;
    }
}

loc_806315E4:
{
    goto loc_8063169C;
}

loc_806315E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(59));
}

loc_806315EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806316C4;
    }
}

loc_806315F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(25));
}

loc_806315F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806316BC;
    }
}

loc_806315F8:
{
    goto loc_806316B4;
}

loc_806315FC:
{
}

loc_80631600:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(120))) {
        goto loc_80631634;
    }
}

loc_80631604:
{
}

loc_80631608:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(90))) {
        goto loc_80631620;
    }
}

loc_8063160C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(88));
}

loc_80631610:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806316E4;
    }
}

loc_80631614:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(85));
}

loc_80631618:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806316DC;
    }
}

loc_8063161C:
{
    goto loc_806316D4;
}

loc_80631620:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(104));
}

loc_80631624:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806316FC;
    }
}

loc_80631628:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(94));
}

loc_8063162C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806316F4;
    }
}

loc_80631630:
{
    goto loc_806316EC;
}

loc_80631634:
{
}

loc_80631638:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(138))) {
        goto loc_80631650;
    }
}

loc_8063163C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(136));
}

loc_80631640:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631714;
    }
}

loc_80631644:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(122));
}

loc_80631648:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063170C;
    }
}

loc_8063164C:
{
    goto loc_80631704;
}

loc_80631650:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(149));
}

loc_80631654:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063172C;
    }
}

loc_80631658:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(140));
}

loc_8063165C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631724;
    }
}

loc_80631660:
{
    goto loc_8063171C;
}

loc_80631664:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063166C:
{
    r3 = 3;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631674:
{
    r3 = 6;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063167C:
{
    r3 = 7;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631684:
{
    r3 = 8;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063168C:
{
    r3 = 9;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631694:
{
    r3 = 10;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063169C:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316A4:
{
    r3 = 11;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316AC:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316B4:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316BC:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316C4:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316CC:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316D4:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316DC:
{
    r3 = 4;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316E4:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316EC:
{
    r3 = 4;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316F4:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806316FC:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631704:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063170C:
{
    r3 = 4;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631714:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063171C:
{
    r3 = 4;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631724:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063172C:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80631588_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80631588;

loc_80631588:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(68));
}

loc_8063158C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_806316CC;
    }
}

loc_80631590:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806315FC;
    }
}

loc_80631594:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(12));
}

loc_80631598:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631694;
    }
}

loc_8063159C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806315D0;
    }
}

loc_806315A0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(8));
}

loc_806315A4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631674;
    }
}

loc_806315A8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806315C0;
    }
}

loc_806315AC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(6));
}

loc_806315B0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8063166C;
    }
}

loc_806315B4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_806315B8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631664;
    }
}

loc_806315BC:
{
    goto loc_8063172C;
}

loc_806315C0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(10));
}

loc_806315C4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631684;
    }
}

loc_806315C8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8063168C;
    }
}

loc_806315CC:
{
    goto loc_8063167C;
}

loc_806315D0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(15));
}

loc_806315D4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_806316AC;
    }
}

loc_806315D8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806315E8;
    }
}

loc_806315DC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(14));
}

loc_806315E0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806316A4;
    }
}

loc_806315E4:
{
    goto loc_8063169C;
}

loc_806315E8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(59));
}

loc_806315EC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806316C4;
    }
}

loc_806315F0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(25));
}

loc_806315F4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806316BC;
    }
}

loc_806315F8:
{
    goto loc_806316B4;
}

loc_806315FC:
{
}

loc_80631600:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(120))) {
        goto loc_80631634;
    }
}

loc_80631604:
{
}

loc_80631608:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(90))) {
        goto loc_80631620;
    }
}

loc_8063160C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(88));
}

loc_80631610:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806316E4;
    }
}

loc_80631614:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(85));
}

loc_80631618:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806316DC;
    }
}

loc_8063161C:
{
    goto loc_806316D4;
}

loc_80631620:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(104));
}

loc_80631624:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806316FC;
    }
}

loc_80631628:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(94));
}

loc_8063162C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806316F4;
    }
}

loc_80631630:
{
    goto loc_806316EC;
}

loc_80631634:
{
}

loc_80631638:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(138))) {
        goto loc_80631650;
    }
}

loc_8063163C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(136));
}

loc_80631640:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631714;
    }
}

loc_80631644:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(122));
}

loc_80631648:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8063170C;
    }
}

loc_8063164C:
{
    goto loc_80631704;
}

loc_80631650:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(149));
}

loc_80631654:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8063172C;
    }
}

loc_80631658:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(140));
}

loc_8063165C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631724;
    }
}

loc_80631660:
{
    goto loc_8063171C;
}

loc_80631664:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063166C:
{
    cached_r3 = 3;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631674:
{
    cached_r3 = 6;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063167C:
{
    cached_r3 = 7;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631684:
{
    cached_r3 = 8;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063168C:
{
    cached_r3 = 9;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631694:
{
    cached_r3 = 10;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063169C:
{
    cached_r3 = 2;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316A4:
{
    cached_r3 = 11;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316AC:
{
    cached_r3 = 2;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316B4:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316BC:
{
    cached_r3 = 2;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316C4:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316CC:
{
    cached_r3 = 2;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316D4:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316DC:
{
    cached_r3 = 4;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316E4:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316EC:
{
    cached_r3 = 4;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316F4:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806316FC:
{
    cached_r3 = 2;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631704:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063170C:
{
    cached_r3 = 4;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631714:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063171C:
{
    cached_r3 = 4;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631724:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063172C:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80631588 symbol=func_80631588_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80631588 func_80631588 preserves=true fpr_mask=0x00000000

