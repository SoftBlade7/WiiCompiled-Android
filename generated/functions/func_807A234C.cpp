#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A234C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A234C;

loc_807A234C:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r7 = 0x808A0000u;
    r6 = 552075264;
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 20992);
    f6.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r8 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r30 = r4;
    r5 = MemoryInline::FlatRead32((r3 + 68));
    r4 = (r1 + 24);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r6 = (r6 + 4095);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r5 = MemoryInline::FlatRead32((r3 + 76));
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    r5 = (r29 + 68);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 180));
    r3 = MemoryInline::FlatRead32((r8 + 12100));
    r8 = (r1 + 20);
    f7.d = (-(f1.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r7 + 26368));
    f6.d = PpcFmulsInline(f6.d, f7.d);
    f4.d = PpcFmulsInline(f4.d, f7.d);
    f2.d = PpcFmulsInline(f2.d, f7.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    r9 = MemoryInline::FlatRead16((r29 + 110));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    ctx->lr = 0x807A2418u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078F140u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807A241C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A2454;
    }
}

loc_807A2420:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A2428:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A24D4;
    }
}

loc_807A242C:
{
    r0 = MemoryInline::FlatRead32((r29 + 116));
    f2.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r0 = (r0 | 8);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    MemoryInline::FlatWrite32((r29 + 116), r0);
    MemoryInline::FlatWriteFloat32((r29 + 200), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 204), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 208), f0.d);
    goto loc_807A24D4;
}

loc_807A2454:
{
    r0 = MemoryInline::FlatRead32((r29 + 352));
    r3 = (r1 + 8);
    r0 = (r0 * 50);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 3u>(ctx, r3));
    r3 = (r1 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    r4 = (r1 + 12);
    f1.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f1.d));
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 84));
    f2.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r29 + 80), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807A2498:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    MemoryInline::FlatWriteFloat32((r29 + 88), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A24B4;
    }
}

loc_807A24A8:
{
    MemoryInline::FlatWriteFloat32((r29 + 84), f0.d);
    r0 = 1;
    goto loc_807A24B8;
}

loc_807A24B4:
{
    r0 = 0;
}

loc_807A24B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A24BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A24D4;
    }
}

loc_807A24C0:
{
    f0.d = (-(f31.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 84));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807A24CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A24D4;
    }
}

loc_807A24D0:
{
    MemoryInline::FlatWriteFloat32((r29 + 84), f0.d);
}

loc_807A24D4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 84));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFC3F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFF0F fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A234C func_807A234C preserves=false fpr_mask=0x80000000
