#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806478C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806478C4;

loc_806478C4:
{
    r3 = MemoryInline::FlatRead32((r3 + 88));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806478D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80647988;
    }
}

loc_806478D4:
{
}

loc_806478D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806478F0;
    }
}

loc_806478DC:
{
}

loc_806478E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(12))) {
        goto loc_806478F0;
    }
}

loc_806478E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(14));
}

loc_806478E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647988;
    }
}

loc_806478EC:
{
    goto loc_80647990;
}

loc_806478F0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_80647904:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647980;
    }
}

loc_80647908:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8064793C;
    }
}

loc_8064790C:
{
}

loc_80647910:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(91))) {
        goto loc_80647928;
    }
}

loc_80647914:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(88));
}

loc_80647918:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647980;
    }
}

loc_8064791C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(85));
}

loc_80647920:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647958;
    }
}

loc_80647924:
{
    goto loc_80647980;
}

loc_80647928:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(128));
}

loc_8064792C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647970;
    }
}

loc_80647930:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(94));
}

loc_80647934:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647980;
    }
}

loc_80647938:
{
    goto loc_80647958;
}

loc_8064793C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(135));
}

loc_80647940:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647978;
    }
}

loc_80647944:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647980;
    }
}

loc_80647948:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(132));
}

loc_8064794C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647968;
    }
}

loc_80647950:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647980;
    }
}

loc_80647954:
{
    goto loc_80647960;
}

loc_80647958:
{
    r3 = 139;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647960:
{
    r3 = 142;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647968:
{
    r3 = 154;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647970:
{
    r3 = 160;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647978:
{
    r3 = 185;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647980:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647988:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647990:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806478C4 func_806478C4 preserves=true fpr_mask=0x00000000
