#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802198F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802198F8;

loc_802198F8:
{
    r4 = MemoryInline::FlatRead8(r3);
}

loc_80219900:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(89))) {
        goto loc_80219924;
    }
}

loc_80219904:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8021990C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(97))) {
        goto loc_80219924;
    }
}

loc_80219910:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(122));
}

loc_80219918:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80219924;
    }
}

loc_8021991C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80219924:
{
}

loc_80219928:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(65))) {
        goto loc_8021994C;
    }
}

loc_8021992C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80219934:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(83))) {
        goto loc_8021994C;
    }
}

loc_80219938:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(72));
}

loc_80219940:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8021994C;
    }
}

loc_80219944:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8021994C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(65));
}

loc_80219950:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80219974;
    }
}

loc_80219954:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(83));
}

loc_8021995C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80219974;
    }
}

loc_80219960:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(82));
}

loc_80219968:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80219974;
    }
}

loc_8021996C:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80219974:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802198F8 func_802198F8 preserves=true fpr_mask=0x00000000
