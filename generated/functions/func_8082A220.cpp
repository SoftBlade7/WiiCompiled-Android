#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082A220(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8082A220;

loc_8082A220:
{
    r0 = MemoryInline::FlatRead32((r3 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8082A228:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082A240;
    }
}

loc_8082A22C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8082A230:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082A24C;
    }
}

loc_8082A234:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8082A238:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082A258;
    }
}

loc_8082A23C:
{
    goto loc_8082A264;
}

loc_8082A240:
{
    r3 = 0x808D0000u;
    r3 = (r3 + 32716);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8082A24C:
{
    r3 = 0x808D0000u;
    r3 = (r3 + 32700);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8082A258:
{
    r3 = 0x808D0000u;
    r3 = (r3 + 32684);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8082A264:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082A220 func_8082A220 preserves=true fpr_mask=0x00000000
