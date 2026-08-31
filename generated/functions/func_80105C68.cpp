#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80105C68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80105C68;

loc_80105C68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80105C6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80105C70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80105C74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80105C7C;
    }
}

loc_80105C78:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80105C7C:
{
    r0 = MemoryInline::FlatRead32((r3 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80105C84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80105C98;
    }
}

loc_80105C88:
{
    MemoryInline::FlatWrite32((r3 + 76), r4);
    MemoryInline::FlatWrite32((r3 + 80), r4);
    MemoryInline::FlatWrite32((r3 + 72), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80105C98:
{
    r6 = MemoryInline::FlatRead32((r3 + 80));
    r5 = MemoryInline::FlatRead32((r3 + 76));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_80105CA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80105CB4;
    }
}

loc_80105CA8:
{
    MemoryInline::FlatWrite32((r5 + 12), r4);
    MemoryInline::FlatWrite32((r3 + 80), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80105CB4:
{
    MemoryInline::FlatWrite32((r6 + 12), r4);
    MemoryInline::FlatWrite32((r3 + 80), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80105C68 func_80105C68 preserves=true fpr_mask=0x00000000
