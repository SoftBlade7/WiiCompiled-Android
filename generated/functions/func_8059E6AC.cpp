#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059E6AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059E6AC;

loc_8059E6AC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(79));
}

loc_8059E6CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059E758;
    }
}

loc_8059E6D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059E700;
    }
}

loc_8059E6D4:
{
}

loc_8059E6D8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(75))) {
        goto loc_8059E6F0;
    }
}

loc_8059E6DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(63));
}

loc_8059E6E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059E758;
    }
}

loc_8059E6E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(61));
}

loc_8059E6E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059E72C;
    }
}

loc_8059E6EC:
{
    goto loc_8059E758;
}

loc_8059E6F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(77));
}

loc_8059E6F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059E758;
    }
}

loc_8059E6F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059E72C;
    }
}

loc_8059E6FC:
{
    goto loc_8059E734;
}

loc_8059E700:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(84));
}

loc_8059E704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059E72C;
    }
}

loc_8059E708:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059E718;
    }
}

loc_8059E70C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(81));
}

loc_8059E710:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059E758;
    }
}

loc_8059E714:
{
    goto loc_8059E72C;
}

loc_8059E718:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_8059E71C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059E758;
    }
}

loc_8059E720:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(127));
}

loc_8059E724:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059E72C;
    }
}

loc_8059E728:
{
    goto loc_8059E758;
}

loc_8059E72C:
{
    r3 = 1;
    goto loc_8059E75C;
}

loc_8059E734:
{
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r4 = (r3 & 255);
    r3 = 2;
    r0 = (r4 + -2);
    r3 = (r4 | ~r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    goto loc_8059E75C;
}

loc_8059E758:
{
    r3 = 0;
}

loc_8059E75C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000013 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059E6AC func_8059E6AC preserves=true fpr_mask=0x00000000
