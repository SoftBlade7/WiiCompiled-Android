#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D0978(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806D0978;

loc_806D0978:
{
}

loc_806D097C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806D099C;
    }
}

loc_806D0980:
{
}

loc_806D0984:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_806D09B4;
    }
}

loc_806D0988:
{
}

loc_806D098C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_806D09CC;
    }
}

loc_806D0990:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_806D0994:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806D09E4;
    }
}

loc_806D0998:
{
    goto loc_806D09F8;
}

loc_806D099C:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806D09A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806D09F8;
    }
}

loc_806D09A8:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 188), r0);
    goto loc_806D09F8;
}

loc_806D09B4:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806D09BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806D09F8;
    }
}

loc_806D09C0:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 188), r0);
    goto loc_806D09F8;
}

loc_806D09CC:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806D09D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806D09F8;
    }
}

loc_806D09D8:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 188), r0);
    goto loc_806D09F8;
}

loc_806D09E4:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806D09EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806D09F8;
    }
}

loc_806D09F0:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 188), r0);
}

loc_806D09F8:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000069 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806D0978 func_806D0978 preserves=true fpr_mask=0x00000000
