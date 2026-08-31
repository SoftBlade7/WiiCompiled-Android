#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80113C70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80113C70;

loc_80113C70:
{
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r4 = 0x80280000u;
    r4 = (r4 + -10440);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80113C80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80113C8C;
    }
}

loc_80113C84:
{
    r3 = (r13 + -30240);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80113C8C:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80113C94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80113CA0;
    }
}

loc_80113C98:
{
    r3 = (r4 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80113CA0:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80113CA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80113CB4;
    }
}

loc_80113CAC:
{
    r3 = (r4 + 88);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80113CB4:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r3 = (r4 + 168);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80113CC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80113CC4:
{
    r3 = (r4 + 156);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80113C70 func_80113C70 preserves=true fpr_mask=0x00000000
