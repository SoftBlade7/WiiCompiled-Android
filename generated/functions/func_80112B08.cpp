#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80112B08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80112B08;

loc_80112B08:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 452));
    MemoryInline::FlatWrite32((r3 + 16), r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80112B30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80112B48;
    }
}

loc_80112B34:
{
    r3 = r0;
    ctx->lr = 0x80112B3Cu;
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
    InvokeDirectCpu<0x800F2238u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 452));
    ctx->lr = 0x80112B44u;
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
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 452), r31);
}

loc_80112B48:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    ctx->lr = 0x80112B50u;
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
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 300));
    r31 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 24));
    MemoryInline::FlatWrite32((r30 + 20), r0);
    MemoryInline::FlatWrite32((r30 + 300), r31);
    ctx->lr = 0x80112B68u;
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
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 24), r31);
    r3 = MemoryInline::FlatRead32((r30 + 36));
    MemoryInline::FlatWrite32((r30 + 28), r31);
    MemoryInline::FlatWrite16((r30 + 32), static_cast<uint16_t>(r31));
    ctx->lr = 0x80112B7Cu;
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
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 36), r31);
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r30 + 76));
    ctx->lr = 0x80112B8Cu;
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
    InvokeDirectCpu<0x800F11F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 76));
    ctx->lr = 0x80112B94u;
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
    InvokeDirectCpu<0x800F11C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = -1;
    r3 = (r30 + 84);
    MemoryInline::FlatWrite32((r30 + 76), r0);
    // inline leaf 0x80111DC4 (9 guest instruction(s))
}

loc_inl0_0x80111DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_inl0_0x80111DD4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80111DDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    goto loc_inl0_cont_80111DC4;
}

loc_inl0_return:
{
}

loc_inl0_cont_80111DC4:
{
    // end of inlined leaf 0x80111DC4
    r3 = (r30 + 120);
    // inline leaf 0x80111DC4 (9 guest instruction(s))
}

loc_inl1_0x80111DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_inl1_0x80111DD4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80111DDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    goto loc_inl1_cont_80111DC4;
}

loc_inl1_return:
{
}

loc_inl1_cont_80111DC4:
{
    // end of inlined leaf 0x80111DC4
    r3 = (r30 + 156);
    // inline leaf 0x80111DC4 (9 guest instruction(s))
}

loc_inl2_0x80111DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_inl2_0x80111DD4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80111DDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    goto loc_inl2_cont_80111DC4;
}

loc_inl2_return:
{
}

loc_inl2_cont_80111DC4:
{
    // end of inlined leaf 0x80111DC4
    r3 = (r30 + 192);
    // inline leaf 0x80111DC4 (9 guest instruction(s))
}

loc_inl3_0x80111DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_inl3_0x80111DD4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80111DDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    goto loc_inl3_cont_80111DC4;
}

loc_inl3_return:
{
}

loc_inl3_cont_80111DC4:
{
    // end of inlined leaf 0x80111DC4
    r0 = MemoryInline::FlatRead32((r30 + 408));
    MemoryInline::FlatWrite32((r30 + 268), r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80112BC8:
{
    MemoryInline::FlatWrite32((r30 + 272), r31);
    MemoryInline::FlatWrite32((r30 + 276), r31);
    MemoryInline::FlatWrite32((r30 + 280), r31);
    MemoryInline::FlatWrite32((r30 + 284), r31);
    MemoryInline::FlatWrite32((r30 + 340), r31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80112C28;
    }
}

loc_80112BE0:
{
    r12 = MemoryInline::FlatRead32((r30 + 436));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80112BE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80112BFC;
    }
}

loc_80112BEC:
{
    r3 = r30;
    r4 = (r30 + 400);
    ctr = r12;
    ctx->lr = 0x80112BFCu;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80112BFC:
{
    r31 = 0;
    r3 = 0x80280000u;
    MemoryInline::FlatWrite32((r30 + 408), r31);
    r3 = (r3 + -10504);
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80112C1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80112C28;
    }
}

loc_80112C20:
{
    MemoryInline::FlatWrite32((r30 + 404), r31);
    MemoryInline::FlatWrite32((r30 + 400), r31);
}

loc_80112C28:
{
    r3 = MemoryInline::FlatRead32((r30 + 304));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 304), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
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
// RECOMP_REGISTRATION base 0x80112B08 func_80112B08 preserves=true fpr_mask=0x00000000
