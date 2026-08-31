#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806BB144(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80537B88_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806BB144;

loc_806BB144:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + -3576);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = 0x808C0000u;
    r30 = (r30 + 9080);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 248));
}

loc_806BB188:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806BB1B8;
    }
}

loc_806BB18C:
{
    r4 = MemoryInline::FlatRead32((r3 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 356));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 356), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806BB1A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806BB1B0;
    }
}

loc_806BB1AC:
{
    MemoryInline::FlatWriteFloat32((r3 + 356), f0.d);
}

loc_806BB1B0:
{
    r3 = r29;
    ctx->lr = 0x806BB1B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806BB840u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806BB1B8:
{
    r3 = MemoryInline::FlatRead16(r30);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead32((r29 + 188));
    r0 = (r3 + 40);
}

loc_806BB1C8:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_806BB1D4;
    }
}

loc_806BB1CC:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r29 + 184), r0);
}

loc_806BB1D4:
{
    r0 = MemoryInline::FlatRead32((r29 + 188));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(40));
}

loc_806BB1DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806BB1FC;
    }
}

loc_806BB1E0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 384), static_cast<uint8_t>(r0));
    r3 = r29;
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806BB1FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806BB1FC:
{
    r0 = MemoryInline::FlatRead8((r29 + 348));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806BB204:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806BB368;
    }
}

loc_806BB208:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    r3 = MemoryInline::FlatRead32((r29 + 380));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x806B59A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r0 = MemoryInline::FlatRead32((r29 + 248));
    f31.d = f1.d;
}

loc_806BB22C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806BB250;
    }
}

loc_806BB230:
{
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r0 = MemoryInline::FlatRead16((r29 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    r0 = (r0 | 1);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r29 + 52), f0.d);
    goto loc_806BB278;
}

loc_806BB250:
{
    r3 = (r1 + 32);
    r4 = (r29 + 252);
    r5 = 3;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r0 = MemoryInline::FlatRead16((r29 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r29 + 52), f0.d);
}

loc_806BB278:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 92));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    r0 = MemoryInline::FlatRead8((r29 + 84));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 352));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806BB294:
{
    r3 = MemoryInline::FlatRead16((r29 + 44));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    f30.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 352), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806BB358;
    }
}

loc_806BB2B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806BB2BC;
    }
}

loc_806BB2B4:
{
    r3 = (r29 + 72);
    goto loc_806BB2EC;
}

loc_806BB2BC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r29 + 88);
    ctx->lr = 0x806BB2D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r29 + 72);
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r29 + 80), f0.d);
}

loc_806BB2EC:
{
    r0 = MemoryInline::FlatRead8((r29 + 84));
    f31.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806BB2F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806BB304;
    }
}

loc_806BB2FC:
{
    r4 = (r29 + 72);
    goto loc_806BB334;
}

loc_806BB304:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 20);
    r4 = (r29 + 88);
    ctx->lr = 0x806BB318u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r4 = (r29 + 72);
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r29 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r29 + 80), f0.d);
}

loc_806BB334:
{
    r3 = MemoryInline::FlatRead16((r29 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r29 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r29 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r29 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 80), f30.d);
}

loc_806BB358:
{
    r3 = MemoryInline::FlatRead32((r29 + 380));
    MemoryInline::FlatWriteFloat32((r29 + 80), f30.d);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 380), r0);
}

loc_806BB368:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806BB144 func_806BB144 preserves=false fpr_mask=0xC0000000
