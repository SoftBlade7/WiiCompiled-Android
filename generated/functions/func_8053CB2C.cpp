#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053CB2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8053CB2C;

loc_8053CB2C:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r0 = MemoryInline::FlatRead8((r4 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053CB3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053CB48;
    }
}

loc_8053CB40:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8053CB48:
{
    r0 = MemoryInline::FlatRead8((r3 + 274));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053CB50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CB5C;
    }
}

loc_8053CB54:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8053CB5C:
{
    r0 = MemoryInline::FlatRead8((r4 + 14));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053CB64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CB70;
    }
}

loc_8053CB68:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8053CB70:
{
    r0 = MemoryInline::FlatRead16((r4 + 8));
    r5 = MemoryInline::FlatRead16((r3 + 268));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8053CB7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053CB88;
    }
}

loc_8053CB80:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8053CB88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CBC0;
    }
}

loc_8053CB8C:
{
    r0 = MemoryInline::FlatRead8((r4 + 10));
    r5 = MemoryInline::FlatRead8((r3 + 270));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8053CB98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053CBA4;
    }
}

loc_8053CB9C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8053CBA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053CBC0;
    }
}

loc_8053CBA8:
{
    r3 = MemoryInline::FlatRead16((r3 + 272));
    r0 = MemoryInline::FlatRead16((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8053CBB4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8053CBC0;
    }
}

loc_8053CBB8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8053CBC0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8053CB2C func_8053CB2C preserves=true fpr_mask=0x00000000
