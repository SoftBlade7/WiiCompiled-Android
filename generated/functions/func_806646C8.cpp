#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806646C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806646C8;

loc_806646C8:
{
    r0 = 3;
    r5 = 0;
    ctr = r0;
}

loc_806646D4:
{
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_806646E8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_806646F0;
    }
}

loc_806646EC:
{
    goto loc_806646F4;
}

loc_806646F0:
{
    r4 = -1;
}

loc_806646F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_806646F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066470C;
    }
}

loc_806646FC:
{
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8066470C:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664724:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_8066472C;
    }
}

loc_80664728:
{
    goto loc_80664730;
}

loc_8066472C:
{
    r4 = -1;
}

loc_80664730:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664734:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664748;
    }
}

loc_80664738:
{
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664748:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664760:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_80664768;
    }
}

loc_80664764:
{
    goto loc_8066476C;
}

loc_80664768:
{
    r4 = -1;
}

loc_8066476C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80664770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664784;
    }
}

loc_80664774:
{
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664784:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 52));
}

loc_8066479C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(66))) {
        goto loc_806647A4;
    }
}

loc_806647A0:
{
    goto loc_806647A8;
}

loc_806647A4:
{
    r4 = -1;
}

loc_806647A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_806647AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806647C0;
    }
}

loc_806647B0:
{
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806647C0:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806646D4;
    }
}

loc_806647C8:
{
    r3 = 2;
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
// RECOMP_REGISTRATION base 0x806646C8 func_806646C8 preserves=true fpr_mask=0x00000000
