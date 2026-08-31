#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80833510(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80833510;

loc_80833510:
{
}

loc_80833514:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80833528;
    }
}

loc_80833518:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8083351C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80833528;
    }
}

loc_80833520:
{
    r3 = 9118;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80833528:
{
}

loc_8083352C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80833540;
    }
}

loc_80833530:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80833534:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80833540;
    }
}

loc_80833538:
{
    r3 = 9119;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80833540:
{
}

loc_80833544:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80833558;
    }
}

loc_80833548:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8083354C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80833558;
    }
}

loc_80833550:
{
    r3 = 9120;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80833558:
{
}

loc_8083355C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80833570;
    }
}

loc_80833560:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80833564:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80833570;
    }
}

loc_80833568:
{
    r3 = 9121;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80833570:
{
}

loc_80833574:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80833588;
    }
}

loc_80833578:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8083357C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80833588;
    }
}

loc_80833580:
{
    r3 = 9122;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80833588:
{
}

loc_8083358C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_808335A0;
    }
}

loc_80833590:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80833594:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808335A0;
    }
}

loc_80833598:
{
    r3 = 9123;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808335A0:
{
}

loc_808335A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(18))) {
        goto loc_808335B8;
    }
}

loc_808335A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808335AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808335B8;
    }
}

loc_808335B0:
{
    r3 = 9168;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808335B8:
{
}

loc_808335BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_808335D0;
    }
}

loc_808335C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808335C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808335D0;
    }
}

loc_808335C8:
{
    r3 = 9169;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808335D0:
{
}

loc_808335D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_808335E8;
    }
}

loc_808335D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808335DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808335E8;
    }
}

loc_808335E0:
{
    r3 = 9170;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808335E8:
{
}

loc_808335EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(18))) {
        goto loc_80833600;
    }
}

loc_808335F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_808335F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80833600;
    }
}

loc_808335F8:
{
    r3 = 9171;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80833600:
{
}

loc_80833604:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_80833618;
    }
}

loc_80833608:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8083360C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80833618;
    }
}

loc_80833610:
{
    r3 = 9172;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80833618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20));
}

loc_8083361C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80833630;
    }
}

loc_80833620:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80833624:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80833630;
    }
}

loc_80833628:
{
    r3 = 9173;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80833630:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80833510_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80833510;

loc_80833510:
{
}

loc_80833514:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(0))) {
        goto loc_80833528;
    }
}

loc_80833518:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_8083351C:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80833528;
    }
}

loc_80833520:
{
    cached_r3 = 9118;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80833528:
{
}

loc_8083352C:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(1))) {
        goto loc_80833540;
    }
}

loc_80833530:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_80833534:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80833540;
    }
}

loc_80833538:
{
    cached_r3 = 9119;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80833540:
{
}

loc_80833544:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(2))) {
        goto loc_80833558;
    }
}

loc_80833548:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_8083354C:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80833558;
    }
}

loc_80833550:
{
    cached_r3 = 9120;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80833558:
{
}

loc_8083355C:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(0))) {
        goto loc_80833570;
    }
}

loc_80833560:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_80833564:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80833570;
    }
}

loc_80833568:
{
    cached_r3 = 9121;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80833570:
{
}

loc_80833574:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(1))) {
        goto loc_80833588;
    }
}

loc_80833578:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_8083357C:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80833588;
    }
}

loc_80833580:
{
    cached_r3 = 9122;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80833588:
{
}

loc_8083358C:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(2))) {
        goto loc_808335A0;
    }
}

loc_80833590:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_80833594:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_808335A0;
    }
}

loc_80833598:
{
    cached_r3 = 9123;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_808335A0:
{
}

loc_808335A4:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(18))) {
        goto loc_808335B8;
    }
}

loc_808335A8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_808335AC:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_808335B8;
    }
}

loc_808335B0:
{
    cached_r3 = 9168;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_808335B8:
{
}

loc_808335BC:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(19))) {
        goto loc_808335D0;
    }
}

loc_808335C0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_808335C4:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_808335D0;
    }
}

loc_808335C8:
{
    cached_r3 = 9169;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_808335D0:
{
}

loc_808335D4:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(20))) {
        goto loc_808335E8;
    }
}

loc_808335D8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_808335DC:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_808335E8;
    }
}

loc_808335E0:
{
    cached_r3 = 9170;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_808335E8:
{
}

loc_808335EC:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(18))) {
        goto loc_80833600;
    }
}

loc_808335F0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_808335F4:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80833600;
    }
}

loc_808335F8:
{
    cached_r3 = 9171;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80833600:
{
}

loc_80833604:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(19))) {
        goto loc_80833618;
    }
}

loc_80833608:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_8083360C:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80833618;
    }
}

loc_80833610:
{
    cached_r3 = 9172;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80833618:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(20));
}

loc_8083361C:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80833630;
    }
}

loc_80833620:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_80833624:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80833630;
    }
}

loc_80833628:
{
    cached_r3 = 9173;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80833630:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80833510 symbol=func_80833510_statefree gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80833510 func_80833510 preserves=true fpr_mask=0x00000000

