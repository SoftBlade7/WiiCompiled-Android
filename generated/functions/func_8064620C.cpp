#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8064620C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8064620C;

loc_8064620C:
{
    r6 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r6 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2960));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r3 + 5620), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r6 + -10456));
    r0 = MemoryInline::FlatRead8((r5 + 36));
    MemoryInline::FlatWrite8((r3 + 5622), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80646240:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(112))) {
        goto loc_8064624C;
    }
}

loc_80646244:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(115));
}

loc_80646248:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80646260;
    }
}

loc_8064624C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(116));
}

loc_80646250:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80646254:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(119));
}

loc_80646258:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8064626C;
    }
}

loc_8064625C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80646260:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 5621), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8064626C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 5621), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8064620C func_8064620C preserves=true fpr_mask=0x00000000
