#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D26E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800D26E8;

loc_800D26E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26896));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800D26FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D273C;
    }
}

loc_800D2700:
{
    r0 = MemoryInline::FlatRead32((r3 + 2684));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D2708:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D273C;
    }
}

loc_800D270C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_800D2710:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D273C;
    }
}

loc_800D2714:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_800D2718:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D273C;
    }
}

loc_800D271C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_800D2720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D273C;
    }
}

loc_800D2724:
{
    r0 = MemoryInline::FlatRead8((r3 + 877));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D272C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D273C;
    }
}

loc_800D2730:
{
    r0 = MemoryInline::FlatRead8((r3 + 886));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D2738:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D2744;
    }
}

loc_800D273C:
{
    r3 = 255;
    goto loc_800D2750;
}

loc_800D2744:
{
    r3 = 0;
    // inline leaf 0x800E7E6C (10 guest instruction(s))
}

loc_inl0_0x800E7E6C:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r4 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_inl0_0x800E7E78:
{
    if (((cr & 0x80000000u) == 0)) {
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
    r3 = MemoryInline::FlatRead8((r3 + 22));
}

loc_800D2750:
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
// RECOMP_REGISTRATION base 0x800D26E8 func_800D26E8 preserves=true fpr_mask=0x00000000
