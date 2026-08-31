#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F1EE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F1EE0;

loc_800F1EE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x801ED98C (1 guest instruction(s))
    // end of inlined leaf 0x801ED98C
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 255);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_0 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_800F1F00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F1F0C;
    }
}

loc_800F1F04:
{
    r3 = 1;
    goto loc_800F1F48;
}

loc_800F1F0C:
{
}

loc_800F1F10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(172))) {
        goto loc_800F1F2C;
    }
}

loc_800F1F14:
{
}

loc_800F1F18:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(16))) {
        goto loc_800F1F2C;
    }
}

loc_800F1F1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(31));
}

loc_800F1F20:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800F1F2C;
    }
}

loc_800F1F24:
{
    r3 = 1;
    goto loc_800F1F48;
}

loc_800F1F2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(192));
}

loc_800F1F30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F1F44;
    }
}

loc_800F1F34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(168));
}

loc_800F1F38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F1F44;
    }
}

loc_800F1F3C:
{
    r3 = 1;
    goto loc_800F1F48;
}

loc_800F1F44:
{
    r3 = 0;
}

loc_800F1F48:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F1EE0 func_800F1EE0 preserves=true fpr_mask=0x00000000
