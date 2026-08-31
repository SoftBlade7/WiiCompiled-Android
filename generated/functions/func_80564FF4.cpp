#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80564FF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80564FF4;

loc_80564FF4:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 6260));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80565000:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80565004:
{
    r5 = 0x809C0000u;
    r5 = (r5 + 6224);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = 0;
}

loc_80565014:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r3))) {
        goto loc_8056501C;
    }
}

loc_80565018:
{
    MemoryInline::FlatWriteRam32(r5, r0);
}

loc_8056501C:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_80565024:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80565028:
{
    MemoryInline::FlatWriteRam32((r5 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80564FF4 func_80564FF4 preserves=true fpr_mask=0x00000000
