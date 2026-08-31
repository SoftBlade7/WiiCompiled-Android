#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FADD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800FADD4;

loc_800FADD4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r3));
}

loc_800FADFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FAE08;
    }
}

loc_800FAE00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(-1));
}

loc_800FAE04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAE10;
    }
}

loc_800FAE08:
{
    r3 = 0;
    goto loc_800FAE58;
}

loc_800FAE10:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = r31;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl1_0x800EF4B0:
{
}

loc_inl1_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl1_0x800EF4C4;
    }
}

loc_inl1_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl1_0x800EF4CC;
    }
}

loc_inl1_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl1_cont_800EF4B0;
}

loc_inl1_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl1_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r31 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(-1));
}

loc_800FAE24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAE30;
    }
}

loc_800FAE28:
{
    r3 = 0;
    goto loc_800FAE58;
}

loc_800FAE30:
{
    r3 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r3));
}

loc_800FAE3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FAE48;
    }
}

loc_800FAE40:
{
    r3 = 0;
    goto loc_800FAE58;
}

loc_800FAE48:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 8), r31);
    r3 = 1;
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_800FAE58:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800FADD4 func_800FADD4 preserves=true fpr_mask=0x00000000
