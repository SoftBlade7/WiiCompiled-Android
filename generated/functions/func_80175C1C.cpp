#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80175C1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80175C1C;

loc_80175C1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r4 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x801768BC (7 guest instruction(s))
    r0 = (r4 * 104);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x801768BC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80175C48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80175C54;
    }
}

loc_80175C4C:
{
    r3 = 0;
    goto loc_80175C64;
}

loc_80175C54:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r5 = r31;
    r4 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x801768D8 (12 guest instruction(s))
}

loc_inl1_0x801768D8:
{
    r0 = (r4 * 104);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x801768E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x80176900;
    }
}

loc_inl1_0x801768EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_inl1_0x801768F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_0x80176900;
    }
}

loc_inl1_0x801768F8:
{
    r3 = 1;
    goto loc_inl1_cont_801768D8;
}

loc_inl1_0x80176900:
{
    r3 = 0;
}

loc_inl1_cont_801768D8:
{
    // end of inlined leaf 0x801768D8
}

loc_80175C64:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80175C1C func_80175C1C preserves=true fpr_mask=0x00000000
