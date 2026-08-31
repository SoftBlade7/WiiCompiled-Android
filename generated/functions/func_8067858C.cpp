#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067858C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8067858C;

loc_8067858C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x800CCB4C (6 guest instruction(s))
}

loc_inl0_0x800CCB4C:
{
}

loc_inl0_0x800CCB50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CCB5C;
    }
}

loc_inl0_0x800CCB54:
{
    r0 = MemoryInline::FlatRead32((r13 + -26964));
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl0_0x800CCB5C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26968));
}

loc_inl0_cont_800CCB4C:
{
    // end of inlined leaf 0x800CCB4C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_806785AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806785C4;
    }
}

loc_806785B0:
{
}

loc_806785B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(20))) {
        goto loc_806785D8;
    }
}

loc_806785B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(9));
}

loc_806785BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806785F0;
    }
}

loc_806785C0:
{
    goto loc_80678604;
}

loc_806785C4:
{
    r3 = r31;
    r4 = -1;
    r5 = 10;
    ctx->lr = 0x806785D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806784A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80678614;
}

loc_806785D8:
{
    // inline leaf 0x800CCC38 (7 guest instruction(s))
}

loc_inl1_0x800CCC38:
{
    r0 = MemoryInline::FlatRead32((r13 + -26968));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_inl1_0x800CCC40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800CCC44:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26968), r0);
    MemoryInline::FlatWrite32((r13 + -26964), r0);
    goto loc_inl1_cont_800CCC38;
}

loc_inl1_return:
{
}

loc_inl1_cont_800CCC38:
{
    // end of inlined leaf 0x800CCC38
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_80678614;
}

loc_806785F0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_80678614;
}

loc_80678604:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_80678614:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8067858C func_8067858C preserves=true fpr_mask=0x00000000
