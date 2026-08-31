#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085896C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085896C;

loc_8085896C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
}

loc_8085897C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808589F0;
    }
}

loc_80858980:
{
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80858988:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80858998;
    }
}

loc_8085898C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80858990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808589A0;
    }
}

loc_80858994:
{
    goto loc_808589A8;
}

loc_80858998:
{
    r3 = 2174;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808589A0:
{
    r3 = 2158;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808589A8:
{
    r0 = MemoryInline::FlatRead16((r3 + 2974));
}

loc_808589B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(5))) {
        goto loc_808589BC;
    }
}

loc_808589B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_808589B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808589E0;
    }
}

loc_808589BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_808589C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808589D0;
    }
}

loc_808589C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808589C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808589D8;
    }
}

loc_808589CC:
{
    goto loc_808589E8;
}

loc_808589D0:
{
    r3 = 2158;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808589D8:
{
    r3 = 2174;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808589E0:
{
    r3 = 11342;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808589E8:
{
    r3 = 3150;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808589F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 2974));
    r3 = 2126;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_808589FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80858A10;
    }
}

loc_80858A00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80858A04:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80858A10;
    }
}

loc_80858A08:
{
    r3 = (r3 | 48);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80858A10:
{
    r3 = (r3 | 1024);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8085896C func_8085896C preserves=true fpr_mask=0x00000000
