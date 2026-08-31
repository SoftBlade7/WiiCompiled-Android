#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086F23C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8086F23C;

loc_8086F23C:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8086F254:
{
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = 0x808E0000u;
    r30 = (r30 + -15536);
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 80), r28);
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086F294;
    }
}

loc_8086F278:
{
    r5 = MemoryInline::FlatRead32((r4 + 48));
    r0 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32(r3, r5);
    r0 = MemoryInline::FlatRead32((r4 + 56));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_8086F3E8;
}

loc_8086F294:
{
    r3 = r29;
    // inline leaf 0x8059098C (11 guest instruction(s))
}

loc_inl0_0x8059098C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl0_0x8059099C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x805909AC;
    }
}

loc_inl0_0x805909A0:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 320);
    goto loc_inl0_cont_8059098C;
}

loc_inl0_0x805909AC:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r3 = (r3 + 160);
}

loc_inl0_cont_8059098C:
{
    // end of inlined leaf 0x8059098C
    r4 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r3);
    r3 = r29;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8728));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f2.d);
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f1.d = MemoryInline::FlatReadFloat32((r3 + 388));
    r3 = r29;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    f1.d = f31.d;
    r4 = r3;
    r3 = (r1 + 56);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = 0x808B0000u;
    f5.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8756));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_8086F2F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086F334;
    }
}

loc_8086F2F8:
{
    f4.d = MemoryInline::FlatReadFloat32((r1 + 60));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_8086F300:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086F334;
    }
}

loc_8086F304:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 64));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8086F30C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086F334;
    }
}

loc_8086F310:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
}

loc_8086F334:
{
    r31 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8728));
    r3 = r29;
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    // inline leaf 0x80590CE4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 228);
    // end of inlined leaf 0x80590CE4
    r5 = 0x802A0000u;
    f2.d = MemoryInline::FlatReadFloat32(r3);
    r4 = (r5 + 16688);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8728));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8086F39C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086F3AC;
    }
}

loc_8086F3A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 100));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
}

loc_8086F3AC:
{
    r3 = r29;
    // inline leaf 0x80590278 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 28);
    // end of inlined leaf 0x80590278
    r30 = r3;
    r3 = (r1 + 20);
    r4 = (r1 + 68);
    r5 = (r1 + 44);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r4 = r30;
    r3 = (r1 + 8);
    r5 = (r1 + 20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    r3 = r28;
    r4 = (r1 + 8);
    r5 = (r1 + 32);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
}

loc_8086F3E8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 116));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r28 = MemoryInline::FlatRead32((r1 + 80));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000003A gpr_write=0xF000003B gpr_return=0x00000018 fpr_read=0x8000107F fpr_write=0x80001F7F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8086F23C func_8086F23C preserves=false fpr_mask=0x80000000
