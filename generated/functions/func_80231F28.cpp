#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80231F28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80231F28;

loc_80231F28:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = r4;
    r4 = r5;
    r5 = r6;
    // inline leaf 0x801DE43C (13 guest instruction(s))
}

loc_inl0_0x801DE43C:
{
}

loc_inl0_0x801DE440:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(2))) {
        goto loc_inl0_0x801DE450;
    }
}

loc_inl0_0x801DE444:
{
    r0 = MemoryInline::FlatRead8((r3 + 201));
}

loc_inl0_0x801DE44C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x801DE458;
    }
}

loc_inl0_0x801DE450:
{
    r3 = -3;
    goto loc_inl0_cont_801DE43C;
}

loc_inl0_0x801DE458:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 120));
    MemoryInline::FlatWrite32(r5, r0);
}

loc_inl0_cont_801DE43C:
{
    // end of inlined leaf 0x801DE43C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80231F50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231F60;
    }
}

loc_80231F54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_80231F58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231F74;
    }
}

loc_80231F5C:
{
    goto loc_80231F88;
}

loc_80231F60:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80231F98;
}

loc_80231F74:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80231F98;
}

loc_80231F88:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 8), r3);
}

loc_80231F98:
{
    r3 = r0;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007A gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80231F28 func_80231F28 preserves=true fpr_mask=0x00000000
