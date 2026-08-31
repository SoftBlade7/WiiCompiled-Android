#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A88A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A88A0;

loc_800A88A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    // inline leaf 0x8008EEE0 (13 guest instruction(s))
}

loc_inl0_0x8008EEE0:
{
    r4 = MemoryInline::FlatRead32((r3 + 100));
    r0 = MemoryInline::FlatRead32((r3 + 96));
}

loc_inl0_0x8008EEEC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_inl0_0x8008EEF8;
    }
}

loc_inl0_0x8008EEF0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 100), r0);
}

loc_inl0_0x8008EEF8:
{
    r4 = MemoryInline::FlatRead32((r3 + 160));
    r0 = MemoryInline::FlatRead32((r3 + 156));
}

loc_inl0_0x8008EF04:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8008EF08:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 160), r0);
    goto loc_inl0_cont_8008EEE0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8008EEE0:
{
    // end of inlined leaf 0x8008EEE0
    r31 = r29;
    r30 = 0;
}

loc_800A88C8:
{
    r4 = r30;
    r3 = (r29 + 256);
    // inline leaf 0x800A8050 (8 guest instruction(s))
}

loc_inl1_0x800A8050:
{
}

loc_inl1_0x800A8054:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(7))) {
        goto loc_inl1_0x800A8060;
    }
}

loc_inl1_0x800A8058:
{
    r3 = 0;
    goto loc_inl1_cont_800A8050;
}

loc_inl1_0x800A8060:
{
    r0 = (r4 * 56);
    r3 = (r3 + r0);
    r3 = (r3 + 2932);
}

loc_inl1_cont_800A8050:
{
    // end of inlined leaf 0x800A8050
}

loc_800A88D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A88F4;
    }
}

loc_800A88DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 3656));
    r0 = MemoryInline::FlatRead32((r31 + 3652));
}

loc_800A88E8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_800A88F4;
    }
}

loc_800A88EC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 3656), r0);
}

loc_800A88F4:
{
    r30 = (r30 + 1);
    r31 = (r31 + 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(8));
}

loc_800A8900:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A88C8;
    }
}

loc_800A8904:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001B gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A88A0 func_800A88A0 preserves=true fpr_mask=0x00000000
