#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070E5F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8070E5F0;

loc_8070E5F0:
{
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + 96));
    r0 = MemoryInline::FlatRead32((r4 + 9896));
    r4 = MemoryInline::FlatRead16((r3 + 156));
    r5 = (r5 & -241);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r5 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(511));
}

loc_8070E610:
{
    MemoryInline::FlatWrite32((r3 + 96), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E634;
    }
}

loc_8070E618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(517));
}

loc_8070E61C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E644;
    }
}

loc_8070E620:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(522));
}

loc_8070E624:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E654;
    }
}

loc_8070E628:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(525));
}

loc_8070E62C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E664;
    }
}

loc_8070E630:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8070E634:
{
    r0 = (r5 & -241);
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8070E644:
{
    r0 = (r5 & -241);
    r0 = (r0 | 48);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8070E654:
{
    r0 = (r5 & -241);
    r0 = (r0 | 112);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8070E664:
{
    r0 = (r5 & -241);
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8070E5F0 func_8070E5F0 preserves=true fpr_mask=0x00000000
