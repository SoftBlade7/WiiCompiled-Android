#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802311EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802311EC;

loc_802311EC:
{
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    f29.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 46));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80231230:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231388;
    }
}

loc_80231234:
{
    r0 = MemoryInline::FlatRead8((r3 + 48));
    r0 = (r0 & 2);
}

loc_8023123C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80231260;
    }
}

loc_80231240:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 80));
    MemoryInline::FlatWriteFloat32((r3 + 88), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 92), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 96), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
}

loc_80231260:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -24932));
    r29 = 0;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -24936));
    r30 = 0;
    goto loc_8023136C;
}

loc_80231274:
{
    r3 = MemoryInline::FlatRead32((r28 + 84));
}

loc_8023127C:
{
    r3_addr_2 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r31 = MemoryInline::FlatRead32((r3 + 16));
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_80231338;
    }
}

loc_8023128C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 96));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 88));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl0_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl0_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl0_cont_8019AC68;
}

loc_inl0_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl0_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 100));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f4.d, f30.d);
}

loc_802312D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80231364;
    }
}

loc_802312DC:
{
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_802312E0:
{
    f4.d = PpcFmulsInline(f4.d, f31.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80231328;
    }
}

loc_802312E8:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 88));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 92));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 96));
    f3.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 88), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = PpcFmulsInline(f2.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r28 + 92), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 96), f0.d);
}

loc_80231328:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 100));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    MemoryInline::FlatWriteFloat32((r28 + 100), f0.d);
    goto loc_80231364;
}

loc_80231338:
{
    r0 = MemoryInline::FlatRead8((r28 + 48));
    r0 = (r0 & 2);
}

loc_80231340:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80231364;
    }
}

loc_80231344:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r28 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r28 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r28 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r28 + 100), f0.d);
}

loc_80231364:
{
    r30 = (r30 + 12);
    r29 = (r29 + 1);
}

loc_8023136C:
{
    r0 = MemoryInline::FlatRead16((r28 + 46));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_80231374:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80231274;
    }
}

loc_80231378:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 100));
    f0.d = PpcFmulsInline(f0.d, f29.d);
    MemoryInline::FlatWriteFloat32((r28 + 100), f0.d);
    goto loc_8023139C;
}

loc_80231388:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24936));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
}

loc_8023139C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000000F gpr_write=0xF000000B gpr_return=0x00000008 fpr_read=0xE000003F fpr_write=0xE000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802311EC func_802311EC preserves=true fpr_mask=0x00000000
