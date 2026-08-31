#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059BE8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8059BE8C;

loc_8059BE8C:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r4 & 2097152);
}

loc_8059BEC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059BED0;
    }
}

loc_8059BEC4:
{
    r0 = (r4 & 67108864);
}

loc_8059BEC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059BED0;
    }
}

loc_8059BECC:
{
    r3 = 1;
}

loc_8059BED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8059BED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059C094;
    }
}

loc_8059BED8:
{
    r4 = 0x808B0000u;
    r3 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r4 + 26684));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f7.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    r3 = (r31 + 32);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = PpcFmulsInline(f3.d, f31.d);
    f4.d = PpcFmulsInline(f2.d, f31.d);
    f3.d = PpcFmulsInline(f1.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 32), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 36), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    ctx->lr = 0x8059BF44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8059BF50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059BF74;
    }
}

loc_8059BF54:
{
    r3 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16688));
    r3 = (r3 + 16688);
    MemoryInline::FlatWriteFloat32((r31 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
}

loc_8059BF74:
{
    r3 = r31;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r30 = r3;
    r3 = r31;
    // inline leaf 0x80590888 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590888
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r3 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 26680));
    r3 = r31;
    f3.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = r3;
    r3 = (r1 + 32);
    r4 = (r4 + 256);
    r5 = (r1 + 20);
    // inline leaf 0x80230118 (46 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24944));
    f10.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32(r4);
    f9.d = PpcFmulsInline(f1.d, f10.d);
    f8.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f1.d, f7.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f4.d = PpcFmulsInline(f1.d, f8.d);
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    f11.d = PpcFmulsInline(f9.d, f10.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f2.d);
    f12.d = PpcFmulsInline(f6.d, f7.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f4.d = PpcFmulsInline(f4.d, f8.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f12.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f11.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    f12.d = PpcFmulsInline(f6.d, f10.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f13.d = PpcFmulsInline(f5.d, f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f11.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f13.d));
    f2.d = PpcFmulsInline(f6.d, f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    f6.d = PpcFmulsInline(f5.d, f10.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f13.d));
    f4.d = PpcFmulsInline(f9.d, f8.d);
    f5.d = PpcFmulsInline(f5.d, f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f0.d);
    }
    // end of inlined leaf 0x80230118
    r29 = MemoryInline::FlatRead32((r31 + 52));
    r30 = 0;
}

loc_8059BFFC:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8059C008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059C018;
    }
}

loc_8059C00C:
{
    r5 = (r1 + 32);
    r4 = 0;
    ctx->lr = 0x8059C018u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_8059C018:
{
    r30 = (r30 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_8059C024:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8059BFFC;
    }
}

loc_8059C028:
{
    r3 = MemoryInline::FlatRead32((r31 + 52));
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8108));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8059C044u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = MemoryInline::FlatRead32((r31 + 56));
    r30 = 0;
}

loc_8059C04C:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8059C058:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059C068;
    }
}

loc_8059C05C:
{
    r5 = (r1 + 32);
    r4 = 0;
    ctx->lr = 0x8059C068u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_8059C068:
{
    r30 = (r30 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_8059C074:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8059C04C;
    }
}

loc_8059C078:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8108));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8059C094u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8059C094:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 116));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8059BE8C func_8059BE8C preserves=false fpr_mask=0x80000000
