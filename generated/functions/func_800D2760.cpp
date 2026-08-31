#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D2760(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800D2760;

loc_800D2760:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26896));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800D2774:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D2780;
    }
}

loc_800D2778:
{
    r3 = 0;
    goto loc_800D27F8;
}

loc_800D2780:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D27C0;
    }
}

loc_800D2784:
{
    r0 = MemoryInline::FlatRead32((r3 + 2684));
}

loc_800D278C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D27C0;
    }
}

loc_800D2790:
{
}

loc_800D2794:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_800D27C0;
    }
}

loc_800D2798:
{
}

loc_800D279C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_800D27C0;
    }
}

loc_800D27A0:
{
}

loc_800D27A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_800D27C0;
    }
}

loc_800D27A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 877));
}

loc_800D27B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D27C0;
    }
}

loc_800D27B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 886));
}

loc_800D27BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D27C8;
    }
}

loc_800D27C0:
{
    r0 = 255;
    goto loc_800D27D4;
}

loc_800D27C8:
{
    r3 = 0;
    // inline leaf 0x800E7E6C (10 guest instruction(s))
}

loc_inl0_0x800E7E6C:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_inl0_0x800E7E78:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_inl0_0x800E7E8C;
    }
}

loc_inl0_0x800E7E7C:
{
    r0 = (r3 * 48);
    r3 = (r4 + r0);
    r3 = (r3 + 56);
    goto loc_inl0_cont_800E7E6C;
}

loc_inl0_0x800E7E8C:
{
    r3 = 0;
}

loc_inl0_cont_800E7E6C:
{
    // end of inlined leaf 0x800E7E6C
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_800D27D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_800D27D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D27E4;
    }
}

loc_800D27DC:
{
    r3 = 0;
    goto loc_800D27F8;
}

loc_800D27E4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26896));
    r3 = MemoryInline::FlatRead8((r3 + 886));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_800D27F8:
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

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D2760 func_800D2760 preserves=true fpr_mask=0x00000000
