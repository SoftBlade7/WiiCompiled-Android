#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807640F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807640F0;

loc_807640F0:
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
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 14504);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 128));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 248), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80764138:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80764144;
    }
}

loc_8076413C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 248), f0.d);
}

loc_80764144:
{
    r0 = MemoryInline::FlatRead8((r3 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8076414C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80764158;
    }
}

loc_80764150:
{
    r3 = (r3 + 72);
    goto loc_80764188;
}

loc_80764158:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 32);
    r4 = (r31 + 88);
    ctx->lr = 0x8076416Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80764188:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 248));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_807641A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807641AC;
    }
}

loc_807641A8:
{
    goto loc_807641B4;
}

loc_807641AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
}

loc_807641B4:
{
    r0 = MemoryInline::FlatRead8((r31 + 257));
}

loc_807641BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807641F8;
    }
}

loc_807641C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 244));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f30.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807641D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807641F8;
    }
}

loc_807641D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807641DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807641F8;
    }
}

loc_807641E0:
{
    f30.d = f1.d;
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 256), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 257), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 272), static_cast<uint8_t>(r0));
}

loc_807641F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 84));
    r3 = MemoryInline::FlatRead16((r31 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80764204:
{
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807642B8;
    }
}

loc_80764210:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8076421C;
    }
}

loc_80764214:
{
    r3 = (r31 + 72);
    goto loc_8076424C;
}

loc_8076421C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r31 + 88);
    ctx->lr = 0x80764230u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    r3 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_8076424C:
{
    r0 = MemoryInline::FlatRead8((r31 + 84));
    f31.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80764258:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80764264;
    }
}

loc_8076425C:
{
    r4 = (r31 + 72);
    goto loc_80764294;
}

loc_80764264:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 20);
    r4 = (r31 + 88);
    ctx->lr = 0x80764278u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    r4 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80764294:
{
    r3 = MemoryInline::FlatRead16((r31 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 76), f30.d);
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_807642B8:
{
    MemoryInline::FlatWriteFloat32((r31 + 76), f30.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0003FFF gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0xE0000FFF fpr_write=0xE0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807640F0 func_807640F0 preserves=false fpr_mask=0xC0000000
