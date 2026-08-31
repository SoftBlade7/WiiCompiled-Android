#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807158E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807158E0;

loc_807158E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B378 (8 guest instruction(s))
}

loc_inl0_0x8061B378:
{
}

loc_inl0_0x8061B37C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl0_0x8061B388;
    }
}

loc_inl0_0x8061B380:
{
    r3 = 0;
    goto loc_inl0_cont_8061B378;
}

loc_inl0_0x8061B388:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_inl0_cont_8061B378:
{
    // end of inlined leaf 0x8061B378
}

loc_80715908:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(785))) {
        goto loc_80715934;
    }
}

loc_8071590C:
{
}

loc_80715910:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(529))) {
        goto loc_80715928;
    }
}

loc_80715914:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(276));
}

loc_80715918:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715970;
    }
}

loc_8071591C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(273));
}

loc_80715920:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715954;
    }
}

loc_80715924:
{
    goto loc_80715970;
}

loc_80715928:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(532));
}

loc_8071592C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715970;
    }
}

loc_80715930:
{
    goto loc_8071595C;
}

loc_80715934:
{
}

loc_80715938:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1041))) {
        goto loc_80715948;
    }
}

loc_8071593C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(788));
}

loc_80715940:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715970;
    }
}

loc_80715944:
{
    goto loc_80715964;
}

loc_80715948:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1044));
}

loc_8071594C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715970;
    }
}

loc_80715950:
{
    goto loc_8071596C;
}

loc_80715954:
{
    r31 = (r31 | 2);
    goto loc_80715970;
}

loc_8071595C:
{
    r31 = (r31 | 4);
    goto loc_80715970;
}

loc_80715964:
{
    r31 = (r31 | 8);
    goto loc_80715970;
}

loc_8071596C:
{
    r31 = (r31 | 16);
}

loc_80715970:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001A gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807158E0 func_807158E0 preserves=true fpr_mask=0x00000000
