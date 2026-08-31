#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80653CB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80653CB8;

loc_80653CB8:
{
    r3 = 0x809C0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80653CC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 8408));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80653CDC;
    }
}

loc_80653CC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(12));
}

loc_80653CCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80653CDC;
    }
}

loc_80653CD0:
{
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80653CE0;
}

loc_80653CDC:
{
    r0 = 255;
}

loc_80653CE0:
{
    r4 = 0x809C0000u;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r3 = (r3_rot_0 & 8160);
    r4 = MemoryInline::FlatRead32((r4 + 8408));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r3 = (r4 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 10148));
    r3 = (r3 * 48);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80653CB8 func_80653CB8 preserves=true fpr_mask=0x00000000
