#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C59E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C59E0;

loc_800C59E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    // inline leaf 0x800BC400 (7 guest instruction(s))
}

loc_inl0_0x800BC400:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800BC408:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x800BC414;
    }
}

loc_inl0_0x800BC40C:
{
    r3 = 0;
    goto loc_inl0_cont_800BC400;
}

loc_inl0_0x800BC414:
{
    r3 = (r3 + 364);
}

loc_inl0_cont_800BC400:
{
    // end of inlined leaf 0x800BC400
    r31 = r3;
    ctx->lr = 0x800C5A00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BC480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C5A04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C5AAC;
    }
}

loc_800C5A08:
{
    // inline leaf 0x800BC400 (7 guest instruction(s))
}

loc_inl1_0x800BC400:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl1_0x800BC408:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800BC414;
    }
}

loc_inl1_0x800BC40C:
{
    r3 = 0;
    goto loc_inl1_cont_800BC400;
}

loc_inl1_0x800BC414:
{
    r3 = (r3 + 364);
}

loc_inl1_cont_800BC400:
{
    // end of inlined leaf 0x800BC400
    r30 = (r3 + 60);
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800BC370
}

loc_800C5A18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C5A24;
    }
}

loc_800C5A1C:
{
    r0 = 0;
    goto loc_800C5A3C;
}

loc_800C5A24:
{
    // inline leaf 0x800BC400 (7 guest instruction(s))
}

loc_inl3_0x800BC400:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl3_0x800BC408:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800BC414;
    }
}

loc_inl3_0x800BC40C:
{
    r3 = 0;
    goto loc_inl3_cont_800BC400;
}

loc_inl3_0x800BC414:
{
    r3 = (r3 + 364);
}

loc_inl3_cont_800BC400:
{
    // end of inlined leaf 0x800BC400
}

loc_800C5A2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C5A38;
    }
}

loc_800C5A30:
{
    r0 = 0;
    goto loc_800C5A3C;
}

loc_800C5A38:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_800C5A3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C5A40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C5A60;
    }
}

loc_800C5A44:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = 64;
    r3 = MemoryInline::FlatRead32((r31 + 52));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & -64);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800C5A60:
{
    r3 = MemoryInline::FlatRead8((r30 + 6401));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 6401), static_cast<uint8_t>(r0));
    r3 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 6400));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800C5A78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800C5A8C;
    }
}

loc_800C5A7C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0 = (r0_rot_3 & 16320);
    r3 = (r30 + r0);
    ctx->lr = 0x800C5A88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C5AE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800C5AC8;
}

loc_800C5A8C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x800C5A94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BC3D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r0);
    // inline leaf 0x800BC400 (7 guest instruction(s))
}

loc_inl4_0x800BC400:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl4_0x800BC408:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_0x800BC414;
    }
}

loc_inl4_0x800BC40C:
{
    r3 = 0;
    goto loc_inl4_cont_800BC400;
}

loc_inl4_0x800BC414:
{
    r3 = (r3 + 364);
}

loc_inl4_cont_800BC400:
{
    // end of inlined leaf 0x800BC400
    r3 = MemoryInline::FlatRead32((r3 + 16));
    ctx->lr = 0x800C5AA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C6990u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800C5AC8;
}

loc_800C5AAC:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x800C5AB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BC3D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x800C5AC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BF8E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800C5AC8:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800C59E0 func_800C59E0 preserves=true fpr_mask=0x00000000
