#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80119B14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80119B14;

loc_80119B14:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
}

loc_80119B20:
{
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 80), r28);
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80119B4C;
    }
}

loc_80119B48:
{
    r3 = MemoryInline::FlatRead32((r13 + -26688));
}

loc_80119B4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119B50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119B58;
    }
}

loc_80119B54:
{
    goto loc_80119B68;
}

loc_80119B58:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r4 = r7;
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
    r7 = MemoryInline::FlatRead32(r3);
}

loc_80119B68:
{
    r6 = r7;
    r5 = r29;
    r3 = (r1 + 16);
    r4 = (r13 + -30032);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80119B80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80119B84:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80119B90;
    }
}

loc_80119B8C:
{
    r28 = MemoryInline::FlatRead32((r13 + -26688));
}

loc_80119B90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80119B94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119BA0;
    }
}

loc_80119B98:
{
    r3 = (r1 + 8);
    goto loc_80119BD4;
}

loc_80119BA0:
{
    r12 = r30;
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r28 + 12));
    ctr = r12;
    ctx->lr = 0x80119BB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80119BBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80119BD4;
    }
}

loc_80119BC0:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = (r1 + 16);
    r6 = (r1 + 8);
    r5 = 0;
    ctx->lr = 0x80119BD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80116DD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80119BD4:
{
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r28 = MemoryInline::FlatRead32((r1 + 80));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
// RECOMP_REGISTRATION base 0x80119B14 func_80119B14 preserves=true fpr_mask=0x00000000
