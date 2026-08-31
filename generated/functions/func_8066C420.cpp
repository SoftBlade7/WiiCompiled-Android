#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066C420(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066C420;

loc_8066C420:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
    r7 = MemoryInline::FlatRead32((r3 + 88));
    goto loc_8066C4A8;
}

loc_8066C430:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 784));
}

loc_8066C440:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8066C480;
    }
}

loc_8066C444:
{
    r0 = MemoryInline::FlatRead16((r6 + 786));
}

loc_8066C44C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8066C480;
    }
}

loc_8066C450:
{
    r0 = MemoryInline::FlatRead16((r6 + 788));
}

loc_8066C458:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_8066C470;
    }
}

loc_8066C45C:
{
    r0 = MemoryInline::FlatRead16((r6 + 790));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_8066C464:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C470;
    }
}

loc_8066C468:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8066C470:
{
    r6 = MemoryInline::FlatRead32(r5);
    r7 = (r7 + -1);
    r0 = (r6 + 2);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_8066C480:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r4));
}

loc_8066C484:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C490;
    }
}

loc_8066C488:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8066C490:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066C49C;
    }
}

loc_8066C494:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8066C49C:
{
    r6 = MemoryInline::FlatRead32(r5);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_8066C4A8:
{
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(636));
}

loc_8066C4B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066C430;
    }
}

loc_8066C4B4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066C420 func_8066C420 preserves=true fpr_mask=0x00000000
