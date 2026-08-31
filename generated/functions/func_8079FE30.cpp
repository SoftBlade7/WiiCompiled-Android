#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079FE30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079FE30;

loc_8079FE30:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 352));
}

loc_8079FE54:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(300))) {
        goto loc_8079FE80;
    }
}

loc_8079FE58:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 8);
}

loc_8079FE60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079FE80;
    }
}

loc_8079FE64:
{
    r4 = 0x808D0000u;
    r3 = (r3 + 360);
    r4 = (r4 + 6528);
    // inline leaf 0x80021414 (15 guest instruction(s))
}

loc_inl0_0x80021414:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32(r4);
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r8 = MemoryInline::FlatRead32((r4 + 4));
    r9 = MemoryInline::FlatRead32((r3 + 8));
    r10 = MemoryInline::FlatRead32((r4 + 8));
    r3 = 1;
}

loc_inl0_0x80021434:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r7), static_cast<int32_t>(r8));
}

loc_inl0_0x80021438:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r9), static_cast<int32_t>(r10));
}

loc_inl0_0x8002143C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r6))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80021440:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80021444:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80021448:
{
    r3 = 0;
    goto loc_inl0_cont_80021414;
}

loc_inl0_return:
{
}

loc_inl0_cont_80021414:
{
    // end of inlined leaf 0x80021414
}

loc_8079FE78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8079FE80;
    }
}

loc_8079FE7C:
{
    r31 = 1;
}

loc_8079FE80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8079FE84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079FE94;
    }
}

loc_8079FE88:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x8079FE94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A6C14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8079FE94:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8079FE30 func_8079FE30 preserves=true fpr_mask=0x00000000
