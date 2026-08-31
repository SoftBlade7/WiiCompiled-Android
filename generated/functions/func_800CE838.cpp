#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CE838(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800CE838;

loc_800CE838:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -26928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CE854:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CE8BC;
    }
}

loc_800CE858:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CE85C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CE864;
    }
}

loc_800CE860:
{
    goto loc_800CE8BC;
}

loc_800CE864:
{
    // inline leaf 0x800CCC68 (6 guest instruction(s))
}

loc_inl0_0x800CCC68:
{
    r0 = MemoryInline::FlatRead32((r13 + -26968));
}

loc_inl0_0x800CCC70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800CCC74:
{
    MemoryInline::FlatWrite32((r13 + -26968), r3);
    MemoryInline::FlatWrite32((r13 + -26964), r4);
    goto loc_inl0_cont_800CCC68;
}

loc_inl0_return:
{
}

loc_inl0_cont_800CCC68:
{
    // end of inlined leaf 0x800CCC68
    r5 = MemoryInline::FlatRead32((r13 + -26928));
    r0 = MemoryInline::FlatRead32(r5);
}

loc_800CE874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CE898;
    }
}

loc_800CE878:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800CE87C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CE898;
    }
}

loc_800CE880:
{
    r12 = MemoryInline::FlatRead32((r5 + 48));
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r5 + 33));
    r5 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x800CE898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800CE898:
{
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CE8A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CE8BC;
    }
}

loc_800CE8A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 34), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r0));
}

loc_800CE8BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800CE838 func_800CE838 preserves=true fpr_mask=0x00000000
