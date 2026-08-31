#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80119E98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80119E98;

loc_80119E98:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
}

loc_80119EA4:
{
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 104), f31.d);
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 100), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 96), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 92), r29);
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80119ED0;
    }
}

loc_80119ECC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26688));
}

loc_80119ED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119ED4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119EDC;
    }
}

loc_80119ED8:
{
    goto loc_80119EEC;
}

loc_80119EDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r4 = r6;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl0_0x800EF4B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x800EF4B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl0_0x800EF4C4;
    }
}

loc_inl0_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl0_0x800EF4C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl0_0x800EF4CC;
    }
}

loc_inl0_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl0_cont_800EF4B0;
}

loc_inl0_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl0_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r6 = MemoryInline::FlatRead32(r3);
}

loc_80119EEC:
{
    r5 = r30;
    r3 = (r1 + 16);
    r4 = (r13 + -30024);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80119F00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80119F04:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f31.d);
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80119F10;
    }
}

loc_80119F0C:
{
    r29 = MemoryInline::FlatRead32((r13 + -26688));
}

loc_80119F10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80119F14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119F20;
    }
}

loc_80119F18:
{
    r3 = (r1 + 8);
    goto loc_80119F54;
}

loc_80119F20:
{
    r12 = r31;
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r29 + 12));
    ctr = r12;
    ctx->lr = 0x80119F38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119F3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119F54;
    }
}

loc_80119F40:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r4 = (r1 + 16);
    r6 = (r1 + 8);
    r5 = 1;
    ctx->lr = 0x80119F54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80116DD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80119F54:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 104));
    r31 = MemoryInline::FlatRead32((r1 + 100));
    r30 = MemoryInline::FlatRead32((r1 + 96));
    r29 = MemoryInline::FlatRead32((r1 + 92));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    f1.d = MemoryInline::FlatReadFloat64(r3);
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80119E98 func_80119E98 preserves=false fpr_mask=0x80000000
