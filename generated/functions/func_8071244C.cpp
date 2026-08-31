#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071244C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8071244C;

loc_8071244C:
{
    r5 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10448));
    r6 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = MemoryInline::FlatRead8((r5 + 45));
    r4 = MemoryInline::FlatRead32((r4 + 2932));
    r0 = (0 - r5);
    r0 = (r0 | r5);
}

loc_80712474:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(6))) {
        goto loc_80712480;
    }
}

loc_8071247C:
{
    r6 = 1;
}

loc_80712480:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80712484:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712490;
    }
}

loc_80712488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8071248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071249C;
    }
}

loc_80712490:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 112), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8071249C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 112), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000049 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071244C func_8071244C preserves=true fpr_mask=0x00000000
