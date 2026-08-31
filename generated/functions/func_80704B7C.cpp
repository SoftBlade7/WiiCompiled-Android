#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80704B7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80704B7C;

loc_80704B7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 148));
}

loc_80704B84:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80704B90;
    }
}

loc_80704B88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_80704B8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80704BCC;
    }
}

loc_80704B90:
{
    r4 = MemoryInline::FlatRead32((r3 + 144));
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 124));
    r0 = (r0 & 64);
}

loc_80704BA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80704BB4;
    }
}

loc_80704BA4:
{
    r0 = MemoryInline::FlatRead32((r4 + 120));
    r0 = (r0 & 2);
}

loc_80704BAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80704BB4;
    }
}

loc_80704BB0:
{
    r3 = 1;
}

loc_80704BB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80704BB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80704BC4;
    }
}

loc_80704BBC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80704BC4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80704BCC:
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
// RECOMP_REGISTRATION base 0x80704B7C func_80704B7C preserves=true fpr_mask=0x00000000
