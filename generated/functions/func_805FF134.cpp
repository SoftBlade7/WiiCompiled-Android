#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FF134(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805FF134;

loc_805FF134:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FF13C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FF148;
    }
}

loc_805FF140:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805FF148:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(140));
}

loc_805FF15C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF17C;
    }
}

loc_805FF160:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(170));
}

loc_805FF164:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF17C;
    }
}

loc_805FF168:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(142));
}

loc_805FF16C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF184;
    }
}

loc_805FF170:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(171));
}

loc_805FF174:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF184;
    }
}

loc_805FF178:
{
    goto loc_805FF18C;
}

loc_805FF17C:
{
    r3 = 193;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805FF184:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805FF18C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805FF134 func_805FF134 preserves=true fpr_mask=0x00000000
