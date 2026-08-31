#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80746C64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80746C64;

loc_80746C64:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 76), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + -18696);
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 11192);
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r29);
    r29 = r4;
    f6.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r28);
    r28 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 8), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 12), f0.d);
    }
    f5.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 20));
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f4.d, f4.d);
    f31.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f2.d = PpcFmulsInline(f3.d, f3.d);
    f30.d = MemoryInline::FlatReadFloat32((r3 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 16), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 20), f4.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 24), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 40), f5.d);
    SetCRFloatResident(cr, 0, f29.d, f6.d);
}

loc_80746CFC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f3.d);
    MemoryInline::FlatWriteFloat32(r4, f5.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f4.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f3.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80746D34;
    }
}

loc_80746D18:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80746D34u;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_80746D34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 76u, true, false);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    SetCRFloatResident(cr, 0, f29.d, f7.d);
}

loc_80746D3C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80746D48;
    }
}

loc_80746D44:
{
    goto loc_80746D54;
}

loc_80746D48:
{
    f1.d = f29.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f7.d = PpcFmulsInline(f29.d, f1.d);
}

loc_80746D54:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    SetCRFloatResident(cr, 0, f7.d, f0.d);
}

loc_80746D5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80746E3C;
    }
}

loc_80746D60:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r30 + 64));
    SetCRFloatResident(cr, 0, f7.d, f4.d);
}

loc_80746D68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80746E3C;
    }
}

loc_80746D6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f7.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    SetCRFloatResident(cr, 0, f7.d, f0.d);
}

loc_80746D98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80746DA0;
    }
}

loc_80746D9C:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f7.d));
}

loc_80746DA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = PpcFmulsInline(f7.d, f0.d);
    f6.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f7.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    f2.d = PpcFmulsInline(f7.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f3.d = PpcFmulsInline(f7.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f6.d);
    f2.d = PpcFmulsInline(f6.d, f6.d);
    f1.d = PpcFmulsInline(f5.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f3.d);
    f2.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80746E10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80746E3C;
    }
}

loc_80746E14:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f3.d = PpcFmulsInline(f1.d, f3.d);
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 24), f3.d);
    MemoryInline::FlatWriteFloat32((r29 + 28), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
}

loc_80746E3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r30 + 68));
    f4.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f3.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f3.d);
    f1.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80746E7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80746E9C;
    }
}

loc_80746E80:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 36), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 40), f0.d);
}

loc_80746E9C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80746EA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80746ED0;
    }
}

loc_80746EAC:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 56));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80746EB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80746EF0;
    }
}

loc_80746EBC:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    MemoryInline::FlatWriteFloat32((r29 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
    goto loc_80746EF0;
}

loc_80746ED0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 48));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80746EDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80746EF0;
    }
}

loc_80746EE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    MemoryInline::FlatWriteFloat32((r29 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
}

loc_80746EF0:
{
    f4.d = MemoryInline::FlatReadFloat32((r29 + 56));
    SetCRFloatResident(cr, 0, f4.d, f30.d);
}

loc_80746EF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80746FA4;
    }
}

loc_80746EFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80746F08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80746F1C;
    }
}

loc_80746F0C:
{
    f0.d = (-(f31.d));
    MemoryInline::FlatWriteFloat32((r29 + 56), f30.d);
    MemoryInline::FlatWriteFloat32((r29 + 52), f0.d);
    goto loc_80746FA4;
}

loc_80746F1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f2.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80746F4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80746F6C;
    }
}

loc_80746F50:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 52), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
}

loc_80746F6C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 56));
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_80746F74:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80746F88;
    }
}

loc_80746F78:
{
    f0.d = (-(f31.d));
    MemoryInline::FlatWriteFloat32((r29 + 56), f30.d);
    MemoryInline::FlatWriteFloat32((r29 + 52), f0.d);
    goto loc_80746FA4;
}

loc_80746F88:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80746F90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80746FA4;
    }
}

loc_80746F94:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    MemoryInline::FlatWriteFloat32((r29 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
}

loc_80746FA4:
{
    f4.d = MemoryInline::FlatReadFloat32((r29 + 48));
    SetCRFloatResident(cr, 0, f4.d, f30.d);
}

loc_80746FAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80747050;
    }
}

loc_80746FB0:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80746FBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80746FCC;
    }
}

loc_80746FC0:
{
    MemoryInline::FlatWriteFloat32((r29 + 44), f31.d);
    MemoryInline::FlatWriteFloat32((r29 + 48), f30.d);
    goto loc_80747050;
}

loc_80746FCC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 44));
    f2.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80746FFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074701C;
    }
}

loc_80747000:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 44), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
}

loc_8074701C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 48));
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_80747024:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80747034;
    }
}

loc_80747028:
{
    MemoryInline::FlatWriteFloat32((r29 + 44), f31.d);
    MemoryInline::FlatWriteFloat32((r29 + 48), f30.d);
    goto loc_80747050;
}

loc_80747034:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8074703C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80747050;
    }
}

loc_80747040:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    MemoryInline::FlatWriteFloat32((r29 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
}

loc_80747050:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 48));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8074705C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80747090;
    }
}

loc_80747060:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 104));
    MemoryInline::FlatWriteFloat32((r29 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 108));
    MemoryInline::FlatWriteFloat32((r29 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 112));
    MemoryInline::FlatWriteFloat32((r29 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 116));
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 120));
    MemoryInline::FlatWriteFloat32((r29 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 124));
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
}

loc_80747090:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 36));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteFloat32((r28 + 104), f0.d);
    r4 = (r29 + 36);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 52));
    MemoryInline::FlatWriteFloat32((r28 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 56));
    MemoryInline::FlatWriteFloat32((r28 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 44));
    MemoryInline::FlatWriteFloat32((r28 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 48));
    MemoryInline::FlatWriteFloat32((r28 + 124), f0.d);
    ctx->lr = 0x807470D0u;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80746970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f30.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807470E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80747104;
    }
}

loc_807470E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    r3 = (r1 + 8);
    r4 = (r29 + 52);
    ctx->lr = 0x807470F4u;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80746970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = (-(f30.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 60), f0.d);
    goto loc_8074711C;
}

loc_80747104:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    r3 = (r1 + 8);
    r4 = (r29 + 44);
    ctx->lr = 0x80747114u;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80746970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 60), f0.d);
}

loc_8074711C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 64), 0, 72u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 48u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 32u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r1 + 80));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 76));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 72));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 68));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r1 + 132));
    r28 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 64));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80746C64 func_80746C64 preserves=false fpr_mask=0xE0000000
