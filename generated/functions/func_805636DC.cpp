#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805636DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805636DC;

loc_805636DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    r0 = MemoryInline::FlatRead32((r5 + 19448));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80563708:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_805637D8;
    }
}

loc_8056370C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80563714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805637D8;
    }
}

loc_80563718:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_805637D8;
    }
}

loc_8056371C:
{
    r4 = 0;
    r30 = 0;
    goto loc_8056376C;
}

loc_80563728:
{
    r5 = MemoryInline::FlatRead32((r29 + 12));
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80563738:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_80563750;
    }
}

loc_8056373C:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 36));
}

loc_80563748:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80563750;
    }
}

loc_8056374C:
{
    r6 = 1;
}

loc_80563750:
{
}

loc_80563754:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8056376C;
    }
}

loc_80563758:
{
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r30 = 1;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    goto loc_80563780;
}

loc_8056376C:
{
    r3 = (r31 + 68);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl0_0x800AF180:
{
}

loc_inl0_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800AF190;
    }
}

loc_inl0_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_800AF180;
}

loc_inl0_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
}

loc_80563778:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80563728;
    }
}

loc_80563780:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80563784:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805637D8;
    }
}

loc_80563788:
{
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r3 = 36;
    r5 = 4;
    ctx->lr = 0x80563798u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8056379C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805637D8;
    }
}

loc_805637A0:
{
    r7 = MemoryInline::FlatRead32((r29 + 36));
    r4 = 0x808B0000u;
    r6 = MemoryInline::FlatRead32((r29 + 12));
    r4 = (r4 + 19236);
    r5 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam32(r3, r4);
    r4 = r3;
    MemoryInline::FlatWriteRam32((r3 + 4), r6);
    MemoryInline::FlatWriteRam32((r3 + 8), r7);
    MemoryInline::FlatWriteRam32((r3 + 12), r5);
    MemoryInline::FlatWriteRam32((r3 + 24), r0);
    r3 = (r31 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AEF80u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_805637D8:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805636DC func_805636DC preserves=true fpr_mask=0x00000000
