#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015AC40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015AC40;

loc_8015AC40:
{
    r4 = 0x80340000u;
    r4 = (r4 + -24768);
    r4 = (r4 + 60);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8015AC50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015AC68;
    }
}

loc_8015AC54:
{
    r0 = MemoryInline::FlatRead16((r4 + 34));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8015AC5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015AC68;
    }
}

loc_8015AC60:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015AC68:
{
    r4 = (r4 + 1144);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8015AC70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015AC88;
    }
}

loc_8015AC74:
{
    r0 = MemoryInline::FlatRead16((r4 + 34));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8015AC7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015AC88;
    }
}

loc_8015AC80:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015AC88:
{
    r4 = (r4 + 1144);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8015AC90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015ACA8;
    }
}

loc_8015AC94:
{
    r0 = MemoryInline::FlatRead16((r4 + 34));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8015AC9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015ACA8;
    }
}

loc_8015ACA0:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015ACA8:
{
    r4 = (r4 + 1144);
    r0 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015ACB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015ACC8;
    }
}

loc_8015ACB4:
{
    r0 = MemoryInline::FlatRead16((r4 + 34));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8015ACBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015ACC8;
    }
}

loc_8015ACC0:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015ACC8:
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
// RECOMP_REGISTRATION base 0x8015AC40 func_8015AC40 preserves=true fpr_mask=0x00000000
