#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066C4BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066C4BC;

loc_8066C4BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066C4C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C520;
    }
}

loc_8066C4C8:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r3 = MemoryInline::FlatRead8((r5 + 6));
    r0 = (r0 * 60);
    r6 = MemoryInline::FlatRead32((r4 + 416));
    r5 = MemoryInline::FlatRead16((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8066C4E0:
{
    r0 = (r3 + r0);
    r0 = (r0 * 1000);
    r5 = (r5 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066C4FC;
    }
}

loc_8066C4F0:
{
    r0 = MemoryInline::FlatRead32((r4 + 192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066C4F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C504;
    }
}

loc_8066C4FC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8066C504:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_8066C508:
{
    r3 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8066C518;
    }
}

loc_8066C510:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_8066C514:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8066C518:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8066C520:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066C4BC func_8066C4BC preserves=true fpr_mask=0x00000000
