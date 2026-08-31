#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C6700(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800C6700;

loc_800C6700:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800BC370
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C6720:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C672C;
    }
}

loc_800C6724:
{
    r3 = 5;
    goto loc_800C67AC;
}

loc_800C672C:
{
    ctx->lr = 0x800C6730u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800BD860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C6734:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C6740;
    }
}

loc_800C6738:
{
    r3 = 5;
    goto loc_800C67AC;
}

loc_800C6740:
{
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl1_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl1_0x800BC3E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800BC3F4;
    }
}

loc_inl1_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl1_cont_800BC3E0;
}

loc_inl1_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl1_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C6748:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C6758;
    }
}

loc_800C6750:
{
    r3 = 5;
    goto loc_800C67AC;
}

loc_800C6758:
{
    MemoryInline::FlatWrite32((r3 + 12), r31);
    r5 = 0x800C0000u;
    r5 = (r5 + 26096);
    r3 = 0;
    r4 = 1;
    ctx->lr = 0x800C6770u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800BE150u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_800C6774:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C67A8;
    }
}

loc_800C6778:
{
    // inline leaf 0x800BC650 (7 guest instruction(s))
}

loc_inl2_0x800BC650:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl2_0x800BC658:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800BC664;
    }
}

loc_inl2_0x800BC65C:
{
    r3 = 0;
    goto loc_inl2_cont_800BC650;
}

loc_inl2_0x800BC664:
{
    r3 = MemoryInline::FlatRead32((r3 + 6984));
}

loc_inl2_cont_800BC650:
{
    // end of inlined leaf 0x800BC650
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-12));
}

loc_800C6780:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C67A8;
    }
}

loc_800C6784:
{
    ctx->lr = 0x800C6788u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CBA90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = 0;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r31);
    r12 = MemoryInline::FlatRead32((r30 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_800C679C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C67A8;
    }
}

loc_800C67A0:
{
    ctr = r12;
    ctx->lr = 0x800C67A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800C67A8:
{
    ctx->lr = 0x800C67ACu;
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
}

loc_800C67AC:
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800C6700 func_800C6700 preserves=true fpr_mask=0x00000000
