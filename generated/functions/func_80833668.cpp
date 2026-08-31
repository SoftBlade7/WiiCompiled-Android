#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80833668(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80833668;

loc_80833668:
{
}

loc_8083366C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80833680;
    }
}

loc_80833670:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(32));
}

loc_80833674:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80833680;
    }
}

loc_80833678:
{
    r3 = (r3 + 9300);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80833680:
{
}

loc_80833684:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(32))) {
        goto loc_80833698;
    }
}

loc_8083368C:
{
}

loc_80833690:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(42))) {
        goto loc_80833698;
    }
}

loc_80833694:
{
    r0 = 1;
}

loc_80833698:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8083369C:
{
    r0 = 9999;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808336A8;
    }
}

loc_808336A4:
{
    r0 = (r3 + 9368);
}

loc_808336A8:
{
}

loc_808336AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9999))) {
        goto loc_808336E0;
    }
}

loc_808336B0:
{
}

loc_808336B4:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(32))) {
        goto loc_808336C8;
    }
}

loc_808336BC:
{
}

loc_808336C0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(42))) {
        goto loc_808336C8;
    }
}

loc_808336C4:
{
    r0 = 1;
}

loc_808336C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808336CC:
{
    r0 = 9999;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808336D8;
    }
}

loc_808336D4:
{
    r0 = (r3 + 9368);
}

loc_808336D8:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808336E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(54));
}

loc_808336E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808336F0;
    }
}

loc_808336E8:
{
    r3 = 9208;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808336F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(58));
}

loc_808336F4:
{
    r3 = 9999;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_808336FC:
{
    r3 = 9308;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80833668 func_80833668 preserves=true fpr_mask=0x00000000
