#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8064C610(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8064C610;

loc_8064C610:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r3 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 580));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8064C648:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8064C654;
    }
}

loc_8064C64C:
{
    r30 = 0;
    goto loc_8064C6A8;
}

loc_8064C654:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7488);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064C6A4;
    }
}

loc_8064C660:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8064C674u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8064C68C;
}

loc_8064C678:
{
}

loc_8064C67C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_8064C688;
    }
}

loc_8064C680:
{
    r0 = 1;
    goto loc_8064C698;
}

loc_8064C688:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8064C68C:
{
}

loc_8064C690:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8064C678;
    }
}

loc_8064C694:
{
    r0 = 0;
}

loc_8064C698:
{
}

loc_8064C69C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8064C6A4;
    }
}

loc_8064C6A0:
{
    goto loc_8064C6A8;
}

loc_8064C6A4:
{
    r30 = 0;
}

loc_8064C6A8:
{
    r0 = MemoryInline::FlatRead32((r29 + 576));
}

loc_8064C6B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8064C6C0;
    }
}

loc_8064C6B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8064C6B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064C6D0;
    }
}

loc_8064C6BC:
{
    goto loc_8064C6DC;
}

loc_8064C6C0:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x80609CB8 (16 guest instruction(s))
}

loc_inl0_0x80609CB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x80609CBC:
{
    MemoryInline::FlatWrite32((r3 + 7416), r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80609CD0;
    }
}

loc_inl0_0x80609CC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_inl0_0x80609CC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80609CE4;
    }
}

loc_inl0_0x80609CCC:
{
    goto loc_inl0_cont_80609CB8;
}

loc_inl0_0x80609CD0:
{
    r3 = 0x809C0000u;
    r0 = 8;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    goto loc_inl0_cont_80609CB8;
}

loc_inl0_0x80609CE4:
{
    r3 = 0x809C0000u;
    r0 = 9;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
}

loc_inl0_cont_80609CB8:
{
    // end of inlined leaf 0x80609CB8
    goto loc_8064C6DC;
}

loc_8064C6D0:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x80609CB8 (16 guest instruction(s))
}

loc_inl1_0x80609CB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl1_0x80609CBC:
{
    MemoryInline::FlatWrite32((r3 + 7416), r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x80609CD0;
    }
}

loc_inl1_0x80609CC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_inl1_0x80609CC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x80609CE4;
    }
}

loc_inl1_0x80609CCC:
{
    goto loc_inl1_cont_80609CB8;
}

loc_inl1_0x80609CD0:
{
    r3 = 0x809C0000u;
    r0 = 8;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    goto loc_inl1_cont_80609CB8;
}

loc_inl1_0x80609CE4:
{
    r3 = 0x809C0000u;
    r0 = 9;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r0);
}

loc_inl1_cont_80609CB8:
{
    // end of inlined leaf 0x80609CB8
}

loc_8064C6DC:
{
    r0 = 143;
    MemoryInline::FlatWrite32((r28 + 3244), r0);
    r3 = r29;
    ctx->lr = 0x8064C6ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805BDF88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r3 = r28;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80602488u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8064C610 func_8064C610 preserves=true fpr_mask=0x00000000
