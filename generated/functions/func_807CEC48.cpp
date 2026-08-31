#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CEC48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807CEC48;

loc_807CEC48:
{
    r4 = MemoryInline::FlatRead16((r3 + 250));
    r0 = 0;
}

loc_807CEC54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807CEC70;
    }
}

loc_807CEC58:
{
}

loc_807CEC5C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(1))) {
        goto loc_807CEC74;
    }
}

loc_807CEC60:
{
}

loc_807CEC64:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_807CEC74;
    }
}

loc_807CEC68:
{
}

loc_807CEC6C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(6))) {
        goto loc_807CEC74;
    }
}

loc_807CEC70:
{
    r0 = 1;
}

loc_807CEC74:
{
}

loc_807CEC78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CEC9C;
    }
}

loc_807CEC7C:
{
    r0 = MemoryInline::FlatRead32((r3 + 256));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CEC84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CECCC;
    }
}

loc_807CEC88:
{
    r4 = (r4 + 65536);
    r0 = (r4 + -8);
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807CEC98:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807CECCC;
    }
}

loc_807CEC9C:
{
    r0 = MemoryInline::FlatRead8((r3 + 212));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CECA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CECC4;
    }
}

loc_807CECAC:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1088);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CECBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CECC4;
    }
}

loc_807CECC0:
{
    r4 = 1;
}

loc_807CECC4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_807CECCC:
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
// RECOMP_REGISTRATION base 0x807CEC48 func_807CEC48 preserves=true fpr_mask=0x00000000
