#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8063D648(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8063D648;

loc_8063D648:
{
    r0 = MemoryInline::FlatRead32((r3 + 100));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8063D650:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8063D654:
{
    r4 = r3;
    r5 = 1;
    goto loc_8063D664;
}

loc_8063D660:
{
    r5 = (r5 + 1);
}

loc_8063D664:
{
    r4 = MemoryInline::FlatRead32((r4 + 100));
    r4 = MemoryInline::FlatRead32((r4 + 8));
}

loc_8063D670:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8063D660;
    }
}

loc_8063D674:
{
    r7 = (r5 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8063D678:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_8063D67C:
{
    r5 = 0x80000000u;
    goto loc_8063D740;
}

loc_8063D684:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8063D688:
{
    r8 = r3;
    r9 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8063D73C;
    }
}

loc_8063D694:
{
}

loc_8063D698:
{
    r4 = (r7 + -8);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_8063D71C;
    }
}

loc_8063D6A0:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8063D6B8;
    }
}

loc_8063D6A8:
{
    r0 = (r5 + -2);
}

loc_8063D6B0:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_8063D6B8;
    }
}

loc_8063D6B4:
{
    r6 = 1;
}

loc_8063D6B8:
{
}

loc_8063D6BC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8063D71C;
    }
}

loc_8063D6C0:
{
    r0 = (r4 + 7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_8063D6D0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8063D71C;
    }
}

loc_8063D6D4:
{
    r4 = MemoryInline::FlatRead32((r8 + 100));
    r9 = (r9 + 8);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 100));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 100));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 100));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 100));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 100));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 100));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 100));
    r8 = MemoryInline::FlatRead32((r4 + 8));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8063D6D4;
    }
}

loc_8063D71C:
{
    r0 = (r7 - r9);
    ctr = r0;
}

loc_8063D728:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r7))) {
        goto loc_8063D73C;
    }
}

loc_8063D72C:
{
    r4 = MemoryInline::FlatRead32((r8 + 100));
    r9 = (r9 + 1);
    r8 = MemoryInline::FlatRead32((r4 + 8));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8063D72C;
    }
}

loc_8063D73C:
{
    r7 = (r7 + -1);
}

loc_8063D740:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8063D744:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063D684;
    }
}

loc_8063D748:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8063D648 func_8063D648 preserves=true fpr_mask=0x00000000
