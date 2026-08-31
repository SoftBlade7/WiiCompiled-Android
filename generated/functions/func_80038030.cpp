#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80038030(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80038030;

loc_80038030:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80038034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003806C;
    }
}

loc_80038038:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8003803C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80038074;
    }
}

loc_80038040:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(7));
}

loc_80038044:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003807C;
    }
}

loc_80038048:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(8));
}

loc_8003804C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80038084;
    }
}

loc_80038050:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(10));
}

loc_80038054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003808C;
    }
}

loc_80038058:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_8003805C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80038094;
    }
}

loc_80038060:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(9));
}

loc_80038064:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003809C;
    }
}

loc_80038068:
{
    goto loc_800380A4;
}

loc_8003806C:
{
    r3 = (r13 + -27392);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80038074:
{
    r3 = (r13 + -27388);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8003807C:
{
    r3 = (r13 + -27384);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80038084:
{
    r3 = (r13 + -27380);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8003808C:
{
    r3 = (r13 + -27376);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80038094:
{
    r3 = (r13 + -27372);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8003809C:
{
    r3 = (r13 + -27368);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800380A4:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002010 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80038030 func_80038030 preserves=true fpr_mask=0x00000000
