#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80227960(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80227960;

loc_80227960:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 120), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80227990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227AF8;
    }
}

loc_80227994:
{
    r3 = r4;
    r4 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80056BE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    f1.d = f31.d;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 16);
    r4 = (r1 + 56);
    ctx->lr = 0x802279B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80055FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 60));
}

loc_802279BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802279CC;
    }
}

loc_802279C0:
{
}

loc_802279C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80227A60;
    }
}

loc_802279C8:
{
    goto loc_80227AE0;
}

loc_802279CC:
{
    r0 = (r31 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802279D0:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r30, r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80227A1C;
    }
}

loc_802279DC:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_802279E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227A1C;
    }
}

loc_802279EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25224));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25220));
    r4 = (r1 + 12);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
}

loc_80227A1C:
{
    r0 = (r31 & 2);
}

loc_80227A20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80227AE0;
    }
}

loc_80227A24:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 76));
    r0 = MemoryInline::FlatRead16((r30 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25240));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    goto loc_80227AE0;
}

loc_80227A60:
{
    r0 = (r31 & 2);
}

loc_80227A64:
{
    r3 = 0;
    MemoryInline::FlatWrite32(r30, r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80227AE0;
    }
}

loc_80227A70:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80227A78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80227A8C;
    }
}

loc_80227A7C:
{
    r0 = MemoryInline::FlatRead16((r30 + 52));
    MemoryInline::FlatWrite32((r30 + 4), r3);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
}

loc_80227A8C:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 104));
    r0 = MemoryInline::FlatRead16((r30 + 52));
    MemoryInline::FlatWriteFloat32((r30 + 12), f3.d);
    r0 = (r0 | 1);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25240));
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25228));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
}

loc_80227AE0:
{
    r0 = (r31 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80227AE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80227AF8;
    }
}

loc_80227AE8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
}

loc_80227AF8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 148));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF80007F gpr_write=0xFF80083B gpr_return=0x00000018 fpr_read=0x80000FFF fpr_write=0x80000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80227960 func_80227960 preserves=false fpr_mask=0x80000000
