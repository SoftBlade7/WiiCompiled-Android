#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059F968(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8059F968;

loc_8059F968:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 48u, (r1 + 48), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    f30.d = f1.d;
    f31.d = f2.d;
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 44), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 8208);
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 40), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 36), r29);
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 32), r28);
    r28 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 32u, true, false);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 64));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f29.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 48));
            f29.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 52));
        }
    }
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 36));
    f7.d = PpcFmulsInline(f10.d, f0.d);
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 56));
    f5.d = PpcFmulsInline(f29.d, f0.d);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 40));
    f4.d = PpcFmulsInline(f10.d, f13.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 60));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 44));
    f6.d = PpcFmulsInline(f29.d, f13.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    r3 = (r3 + 68);
    f3.d = PpcFmulsInline(f12.d, f0.d);
    f2.d = PpcFmulsInline(f10.d, f11.d);
    f1.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f10.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f7.d = PpcFmulsInline(f12.d, f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = PpcFmulsInline(f12.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f7.d));
    f1.d = PpcFmulsInline(f9.d, f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f4.d = PpcFmulsInline(f9.d, f13.d);
    f2.d = PpcFmulsInline(f29.d, f11.d);
    f6.d = PpcFmulsInline(f9.d, f11.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = PpcFmulsInline(f29.d, f8.d);
    f0.d = PpcFmulsInline(f12.d, f13.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    guest_range_1 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 128u, true, false);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 108u, (r28 + 112));
    r3 = (r28 + 116);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 92u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f29.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 92u, (r28 + 96));
            f29.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 96u, (r28 + 100));
        }
    }
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r28 + 84));
    f7.d = PpcFmulsInline(f10.d, f0.d);
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 100u, (r28 + 104));
    f5.d = PpcFmulsInline(f29.d, f0.d);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 84u, (r28 + 88));
    f4.d = PpcFmulsInline(f10.d, f13.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 104u, (r28 + 108));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 88u, (r28 + 92));
    f6.d = PpcFmulsInline(f29.d, f13.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f3.d = PpcFmulsInline(f12.d, f0.d);
    f2.d = PpcFmulsInline(f10.d, f11.d);
    f1.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f10.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f7.d = PpcFmulsInline(f12.d, f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = PpcFmulsInline(f12.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f7.d));
    f1.d = PpcFmulsInline(f9.d, f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f4.d = PpcFmulsInline(f9.d, f13.d);
    f2.d = PpcFmulsInline(f29.d, f11.d);
    f6.d = PpcFmulsInline(f9.d, f11.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = PpcFmulsInline(f29.d, f8.d);
    f0.d = PpcFmulsInline(f12.d, f13.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r28 + 4));
    f1.d = f30.d;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r28 + 68));
    f2.d = f31.d;
    MemoryInline::FlatWriteFloat32((r3 + 296), f0.d);
    r4 = r30;
    f4.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r28 + 72));
    MemoryInline::FlatWriteFloat32((r3 + 300), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r28 + 76));
    MemoryInline::FlatWriteFloat32((r3 + 304), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r28 + 80));
    MemoryInline::FlatWriteFloat32((r3 + 308), f5.d);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r28 + 4));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 112u, (r28 + 116));
    MemoryInline::FlatWriteFloat32((r3 + 312), f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 116u, (r28 + 120));
    MemoryInline::FlatWriteFloat32((r3 + 316), f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 120u, (r28 + 124));
    MemoryInline::FlatWriteFloat32((r3 + 320), f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 124u, (r28 + 128));
    MemoryInline::FlatWriteFloat32((r3 + 324), f5.d);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r28 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 424), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 428), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 432), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r28 + 4));
    ctx->lr = 0x8059FB60u;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x805B5170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    r3 = (r28 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    r5 = r3;
    r4 = (r1 + 8);
    ctx->lr = 0x8059FB8Cu;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A5C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    r3 = (r28 + 84);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    r5 = r3;
    r4 = (r1 + 8);
    ctx->lr = 0x8059FBA0u;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A5C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r3 = (r28 + 52);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r3 = (r28 + 100);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_4, 60u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 48u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 52u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 56u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 72u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 48u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 32u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 16u, (r1 + 48));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 40));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 36));
    r0 = MemoryInline::ReadResolved32(guest_range_5, 68u, (r1 + 100));
    r28 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFC006 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8059F968 func_8059F968 preserves=false fpr_mask=0xC0000000
