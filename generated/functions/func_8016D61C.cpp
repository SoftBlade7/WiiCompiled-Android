#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016D61C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r9_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8016D61C;

loc_8016D61C:
{
    r6 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(25));
}

loc_8016D628:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8016D7BC;
    }
}

loc_8016D62C:
{
    r9 = (r4 + -24520);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r9_addr_0 = (r9 + r6);
    r9 = MemoryInline::FlatRead32(r9_addr_0);
    ctr = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8016D7BC:
{
    r3 = (r3 + 8);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8016D7C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8016D61C;
    }
}

loc_8016D7CC:
{
    r0 = MemoryInline::FlatRead8((r5 + 1316));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016D7D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016D7E4;
    }
}

loc_8016D7D8:
{
    r0 = MemoryInline::FlatRead8((r5 + 1317));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016D7E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016D7F8;
    }
}

loc_8016D7E4:
{
    r0 = MemoryInline::FlatRead32((r5 + 1312));
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r3_mrot_1 = (r3_rot_1 & 6144);
    r3_mdest_1 = (r3 & -6145);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r5 + 20), r3);
    goto loc_8016D804;
}

loc_8016D7F8:
{
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r0 & -6145);
    MemoryInline::FlatWrite32((r5 + 20), r0);
}

loc_8016D804:
{
    r0 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r5 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFDFF gpr_write=0x00000249 gpr_return=0x00000008 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8016D61C func_8016D61C preserves=true fpr_mask=0x00000000
