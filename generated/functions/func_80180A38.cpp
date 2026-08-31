#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80180A38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80180A38;

loc_80180A38:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_80180A3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80180A48;
    }
}

loc_80180A40:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80180A48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80180A4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80180A98;
    }
}

loc_80180A50:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80180A5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80180A90;
    }
}

loc_80180A60:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80180A6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80180A90;
    }
}

loc_80180A70:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80180A7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80180A90;
    }
}

loc_80180A80:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80180A8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80180A98;
    }
}

loc_80180A90:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80180A98:
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
// RECOMP_REGISTRATION base 0x80180A38 func_80180A38 preserves=true fpr_mask=0x00000000
