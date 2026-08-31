#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80631734(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80631734;

loc_80631734:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(90));
}

loc_80631738:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631940;
    }
}

loc_8063173C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806317C8;
    }
}

loc_80631740:
{
}

loc_80631744:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(57))) {
        goto loc_80631790;
    }
}

loc_80631748:
{
}

loc_8063174C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(21))) {
        goto loc_80631770;
    }
}

loc_80631750:
{
}

loc_80631754:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(6))) {
        goto loc_80631764;
    }
}

loc_80631758:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8063175C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631854;
    }
}

loc_80631760:
{
    goto loc_80631A50;
}

loc_80631764:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(16));
}

loc_80631768:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631870;
    }
}

loc_8063176C:
{
    goto loc_80631860;
}

loc_80631770:
{
}

loc_80631774:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(25))) {
        goto loc_80631784;
    }
}

loc_80631778:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(23));
}

loc_8063177C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631890;
    }
}

loc_80631780:
{
    goto loc_80631880;
}

loc_80631784:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(53));
}

loc_80631788:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806318B0;
    }
}

loc_8063178C:
{
    goto loc_806318A0;
}

loc_80631790:
{
}

loc_80631794:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(72))) {
        goto loc_806317B0;
    }
}

loc_80631798:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(68));
}

loc_8063179C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806318E0;
    }
}

loc_806317A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806318F0;
    }
}

loc_806317A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(63));
}

loc_806317A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806318D0;
    }
}

loc_806317AC:
{
    goto loc_806318C0;
}

loc_806317B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(84));
}

loc_806317B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631910;
    }
}

loc_806317B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80631900;
    }
}

loc_806317BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(88));
}

loc_806317C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631930;
    }
}

loc_806317C4:
{
    goto loc_80631920;
}

loc_806317C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(130));
}

loc_806317CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806319D0;
    }
}

loc_806317D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063181C;
    }
}

loc_806317D4:
{
}

loc_806317D8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(104))) {
        goto loc_806317FC;
    }
}

loc_806317DC:
{
}

loc_806317E0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(96))) {
        goto loc_806317F0;
    }
}

loc_806317E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(94));
}

loc_806317E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631960;
    }
}

loc_806317EC:
{
    goto loc_80631950;
}

loc_806317F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(100));
}

loc_806317F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631980;
    }
}

loc_806317F8:
{
    goto loc_80631970;
}

loc_806317FC:
{
}

loc_80631800:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(122))) {
        goto loc_80631810;
    }
}

loc_80631804:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(120));
}

loc_80631808:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806319A0;
    }
}

loc_8063180C:
{
    goto loc_80631990;
}

loc_80631810:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(127));
}

loc_80631814:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806319C0;
    }
}

loc_80631818:
{
    goto loc_806319B0;
}

loc_8063181C:
{
}

loc_80631820:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(138))) {
        goto loc_8063183C;
    }
}

loc_80631824:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(135));
}

loc_80631828:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631A00;
    }
}

loc_8063182C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631A10;
    }
}

loc_80631830:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(133));
}

loc_80631834:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806319F0;
    }
}

loc_80631838:
{
    goto loc_806319E0;
}

loc_8063183C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(148));
}

loc_80631840:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631A40;
    }
}

loc_80631844:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631A50;
    }
}

loc_80631848:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(144));
}

loc_8063184C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631A30;
    }
}

loc_80631850:
{
    goto loc_80631A20;
}

loc_80631854:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631860:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 1);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631870:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 16);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631880:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 36);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631890:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 54);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806318A0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 74);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806318B0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 89);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806318C0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 105);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806318D0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 125);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806318E0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 141);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806318F0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 156);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631900:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 176);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631910:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 197);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631920:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 217);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631930:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 233);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631940:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 254);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631950:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 274);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631960:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 290);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631970:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 310);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631980:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 331);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631990:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 351);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806319A0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 366);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806319B0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 386);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806319C0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 404);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806319D0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 425);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806319E0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 443);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806319F0:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 459);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631A00:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 475);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631A10:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 493);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631A20:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 513);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631A30:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 531);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631A40:
{
    r3 = 0x80890000u;
    r3 = (r3 + 32148);
    r3 = (r3 + 549);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631A50:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80631734_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80631734;

loc_80631734:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(90));
}

loc_80631738:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631940;
    }
}

loc_8063173C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806317C8;
    }
}

loc_80631740:
{
}

loc_80631744:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(57))) {
        goto loc_80631790;
    }
}

loc_80631748:
{
}

loc_8063174C:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(21))) {
        goto loc_80631770;
    }
}

loc_80631750:
{
}

loc_80631754:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(6))) {
        goto loc_80631764;
    }
}

loc_80631758:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_8063175C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631854;
    }
}

loc_80631760:
{
    goto loc_80631A50;
}

loc_80631764:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(16));
}

loc_80631768:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631870;
    }
}

loc_8063176C:
{
    goto loc_80631860;
}

loc_80631770:
{
}

loc_80631774:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(25))) {
        goto loc_80631784;
    }
}

loc_80631778:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(23));
}

loc_8063177C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631890;
    }
}

loc_80631780:
{
    goto loc_80631880;
}

loc_80631784:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(53));
}

loc_80631788:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806318B0;
    }
}

loc_8063178C:
{
    goto loc_806318A0;
}

loc_80631790:
{
}

loc_80631794:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(72))) {
        goto loc_806317B0;
    }
}

loc_80631798:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(68));
}

loc_8063179C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_806318E0;
    }
}

loc_806317A0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806318F0;
    }
}

loc_806317A4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(63));
}

loc_806317A8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806318D0;
    }
}

loc_806317AC:
{
    goto loc_806318C0;
}

loc_806317B0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(84));
}

loc_806317B4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631910;
    }
}

loc_806317B8:
{
    if (((cached_cr & 0x80000000u) != 0)) {
        goto loc_80631900;
    }
}

loc_806317BC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(88));
}

loc_806317C0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631930;
    }
}

loc_806317C4:
{
    goto loc_80631920;
}

loc_806317C8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(130));
}

loc_806317CC:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_806319D0;
    }
}

loc_806317D0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8063181C;
    }
}

loc_806317D4:
{
}

loc_806317D8:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(104))) {
        goto loc_806317FC;
    }
}

loc_806317DC:
{
}

loc_806317E0:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(96))) {
        goto loc_806317F0;
    }
}

loc_806317E4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(94));
}

loc_806317E8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631960;
    }
}

loc_806317EC:
{
    goto loc_80631950;
}

loc_806317F0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(100));
}

loc_806317F4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631980;
    }
}

loc_806317F8:
{
    goto loc_80631970;
}

loc_806317FC:
{
}

loc_80631800:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(122))) {
        goto loc_80631810;
    }
}

loc_80631804:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(120));
}

loc_80631808:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806319A0;
    }
}

loc_8063180C:
{
    goto loc_80631990;
}

loc_80631810:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(127));
}

loc_80631814:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806319C0;
    }
}

loc_80631818:
{
    goto loc_806319B0;
}

loc_8063181C:
{
}

loc_80631820:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(138))) {
        goto loc_8063183C;
    }
}

loc_80631824:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(135));
}

loc_80631828:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631A00;
    }
}

loc_8063182C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631A10;
    }
}

loc_80631830:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(133));
}

loc_80631834:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806319F0;
    }
}

loc_80631838:
{
    goto loc_806319E0;
}

loc_8063183C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(148));
}

loc_80631840:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631A40;
    }
}

loc_80631844:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631A50;
    }
}

loc_80631848:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(144));
}

loc_8063184C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631A30;
    }
}

loc_80631850:
{
    goto loc_80631A20;
}

loc_80631854:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631860:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 1);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631870:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 16);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631880:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 36);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631890:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 54);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806318A0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 74);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806318B0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 89);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806318C0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 105);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806318D0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 125);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806318E0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 141);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806318F0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 156);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631900:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 176);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631910:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 197);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631920:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 217);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631930:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 233);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631940:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 254);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631950:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 274);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631960:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 290);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631970:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 310);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631980:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 331);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631990:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 351);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806319A0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 366);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806319B0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 386);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806319C0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 404);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806319D0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 425);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806319E0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 443);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806319F0:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 459);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631A00:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 475);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631A10:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 493);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631A20:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 513);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631A30:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 531);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631A40:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 32148);
    cached_r3 = (cached_r3 + 549);
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631A50:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80631734 symbol=func_80631734_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80631734 func_80631734 preserves=true fpr_mask=0x00000000

