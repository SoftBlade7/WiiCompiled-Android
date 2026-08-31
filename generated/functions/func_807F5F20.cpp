#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F5F20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807F5F20;

loc_807F5F20:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_807F5F34:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(112))) {
        goto loc_807F5F40;
    }
}

loc_807F5F38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(113));
}

loc_807F5F3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F5F6C;
    }
}

loc_807F5F40:
{
}

loc_807F5F44:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(48))) {
        goto loc_807F5F50;
    }
}

loc_807F5F48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(49));
}

loc_807F5F4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F5F7C;
    }
}

loc_807F5F50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_807F5F54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F5F6C;
    }
}

loc_807F5F58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(31));
}

loc_807F5F5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F5F7C;
    }
}

loc_807F5F60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(45));
}

loc_807F5F64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F5F7C;
    }
}

loc_807F5F68:
{
    goto loc_807F5F8C;
}

loc_807F5F6C:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -23804);
    r3 = (r3 + 337);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_807F5F7C:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -23804);
    r3 = (r3 + 346);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_807F5F8C:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -23804);
    r3 = (r3 + 355);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000001 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807F5F20 func_807F5F20 preserves=true fpr_mask=0x00000000
