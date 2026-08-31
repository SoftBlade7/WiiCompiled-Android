#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806647D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806647D0;

loc_806647D0:
{
    r0 = 3;
    r4 = 0;
    ctr = r0;
}

loc_806647DC:
{
    r0 = (r4 & 255);
    r0 = (r0 * 48);
    r5 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 52));
}

loc_806647F0:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_806647F8;
    }
}

loc_806647F4:
{
    goto loc_806647FC;
}

loc_806647F8:
{
    r5 = -1;
}

loc_806647FC:
{
}

loc_80664800:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(-1))) {
        goto loc_80664810;
    }
}

loc_80664804:
{
    r3 = (r3 + r0);
    r4 = (r3 + 64);
    goto loc_806648C4;
}

loc_80664810:
{
    r4 = (r4 + 1);
    r0 = (r4 & 255);
    r0 = (r0 * 48);
    r5 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 52));
}

loc_80664828:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80664830;
    }
}

loc_8066482C:
{
    goto loc_80664834;
}

loc_80664830:
{
    r5 = -1;
}

loc_80664834:
{
}

loc_80664838:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(-1))) {
        goto loc_80664848;
    }
}

loc_8066483C:
{
    r3 = (r3 + r0);
    r4 = (r3 + 64);
    goto loc_806648C4;
}

loc_80664848:
{
    r4 = (r4 + 1);
    r0 = (r4 & 255);
    r0 = (r0 * 48);
    r5 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 52));
}

loc_80664860:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80664868;
    }
}

loc_80664864:
{
    goto loc_8066486C;
}

loc_80664868:
{
    r5 = -1;
}

loc_8066486C:
{
}

loc_80664870:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(-1))) {
        goto loc_80664880;
    }
}

loc_80664874:
{
    r3 = (r3 + r0);
    r4 = (r3 + 64);
    goto loc_806648C4;
}

loc_80664880:
{
    r4 = (r4 + 1);
    r0 = (r4 & 255);
    r0 = (r0 * 48);
    r5 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 52));
}

loc_80664898:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_806648A0;
    }
}

loc_8066489C:
{
    goto loc_806648A4;
}

loc_806648A0:
{
    r5 = -1;
}

loc_806648A4:
{
}

loc_806648A8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(-1))) {
        goto loc_806648B8;
    }
}

loc_806648AC:
{
    r3 = (r3 + r0);
    r4 = (r3 + 64);
    goto loc_806648C4;
}

loc_806648B8:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806647DC;
    }
}

loc_806648C0:
{
    r4 = 0;
}

loc_806648C4:
{
    r0 = 2;
    r3 = 0;
    r5 = 0;
    ctr = r0;
}

loc_806648D4:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_806648DC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(12))) {
        goto loc_806648E4;
    }
}

loc_806648E0:
{
    r3 = (r3 + 1);
}

loc_806648E4:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_806648EC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(12))) {
        goto loc_806648F4;
    }
}

loc_806648F0:
{
    r3 = (r3 + 1);
}

loc_806648F4:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_806648FC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(12))) {
        goto loc_80664904;
    }
}

loc_80664900:
{
    r3 = (r3 + 1);
}

loc_80664904:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
}

loc_8066490C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(12))) {
        goto loc_80664914;
    }
}

loc_80664910:
{
    r3 = (r3 + 1);
}

loc_80664914:
{
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_8066491C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(12))) {
        goto loc_80664924;
    }
}

loc_80664920:
{
    r3 = (r3 + 1);
}

loc_80664924:
{
    r0 = MemoryInline::FlatRead8((r4 + 5));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_8066492C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80664934;
    }
}

loc_80664930:
{
    r3 = (r3 + 1);
}

loc_80664934:
{
    r5 = (r5 + 5);
    r4 = (r4 + 6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806648D4;
    }
}

loc_80664940:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806647D0 func_806647D0 preserves=true fpr_mask=0x00000000
