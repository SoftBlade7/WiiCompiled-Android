#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065574C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8065574C;

loc_8065574C:
{
    r0 = 12;
    r4 = 0;
    r7 = 0x809C0000u;
    r8 = 1;
    ctr = r0;
}

loc_80655760:
{
    r10 = MemoryInline::FlatRead32((r7 + 8408));
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
    r5 = MemoryInline::FlatRead32((r10 + 10524));
    r5 = (r5 * 88);
    r6 = (r10 + r5);
    r5 = MemoryInline::FlatRead32((r6 + 72));
    r5 = (r0 & r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065582C;
    }
}

loc_80655784:
{
    r5 = MemoryInline::FlatRead8((r6 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_8065578C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065582C;
    }
}

loc_80655790:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r6 = (r6_rot_2 & 8160);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r9 = (r9_rot_2 & 1020);
    r5 = (r10 + r6);
    r5 = MemoryInline::FlatRead32((r5 + 10144));
    r5 = (r5 * 48);
    r5 = (r10 + r5);
    r5 = (r5 + r9);
    r5 = MemoryInline::FlatRead32((r5 + 336));
    r10 = MemoryInline::FlatRead32((r5 + 4));
    r5 = MemoryInline::FlatRead32((r10 + 8));
}

loc_806557BC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806557F4;
    }
}

loc_806557C0:
{
    r10 = MemoryInline::FlatRead32(r10);
    r5 = MemoryInline::FlatRead32((r10 + 4));
}

loc_806557CC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806557DC;
    }
}

loc_806557D0:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r5 | r0);
    MemoryInline::FlatWrite32((r3 + 4), r5);
}

loc_806557DC:
{
    r5 = MemoryInline::FlatRead8((r10 + 23));
}

loc_806557E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806557F4;
    }
}

loc_806557E8:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r5 = (r5 | r0);
    MemoryInline::FlatWrite32((r3 + 12), r5);
}

loc_806557F4:
{
    r5 = MemoryInline::FlatRead32((r7 + 8408));
    r6 = (r5 + r6);
    r5 = (r9 + r5);
    r6 = MemoryInline::FlatRead32((r6 + 10152));
    r6 = (r6 * 48);
    r5 = (r6 + r5);
    r5 = MemoryInline::FlatRead32((r5 + 336));
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r5 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8065581C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065582C;
    }
}

loc_80655820:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8065582C:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80655760;
    }
}

loc_80655834:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065574C func_8065574C preserves=true fpr_mask=0x00000000
