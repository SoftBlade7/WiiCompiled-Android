#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C3DE0(CpuContext* MKW_RESTRICT ctx)
{
    double leaf_stack_saved_f15_entry = 0.0;
    double leaf_stack_saved_f16_entry = 0.0;
    double leaf_stack_saved_f17_entry = 0.0;
    double leaf_stack_saved_f18_entry = 0.0;
    double leaf_stack_saved_f19_entry = 0.0;
    double leaf_stack_saved_f20_entry = 0.0;
    double leaf_stack_saved_f21_entry = 0.0;
    double leaf_stack_saved_f22_entry = 0.0;
    double leaf_stack_saved_f23_entry = 0.0;
    double leaf_stack_saved_f24_entry = 0.0;
    double leaf_stack_saved_f25_entry = 0.0;
    double leaf_stack_saved_f26_entry = 0.0;
    double leaf_stack_saved_f27_entry = 0.0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f15 = ctx->fpr[15];
    PPC_FPR f16 = ctx->fpr[16];
    PPC_FPR f17 = ctx->fpr[17];
    PPC_FPR f18 = ctx->fpr[18];
    PPC_FPR f19 = ctx->fpr[19];
    PPC_FPR f20 = ctx->fpr[20];
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_800C3DE0;

loc_800C3DE0:
{
    leaf_stack_saved_f15_entry = f15.d;
    leaf_stack_saved_f16_entry = f16.d;
    leaf_stack_saved_f17_entry = f17.d;
    leaf_stack_saved_f18_entry = f18.d;
    leaf_stack_saved_f19_entry = f19.d;
    leaf_stack_saved_f20_entry = f20.d;
    leaf_stack_saved_f21_entry = f21.d;
    leaf_stack_saved_f22_entry = f22.d;
    leaf_stack_saved_f23_entry = f23.d;
    leaf_stack_saved_f24_entry = f24.d;
    leaf_stack_saved_f25_entry = f25.d;
    leaf_stack_saved_f26_entry = f26.d;
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r11 = 1127219200;
    r7 = 0x80250000u;
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(22));
    r0 = (r0_rot_0 & 15);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r9 = (r9_rot_0 & 31);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(13));
    r12 = (r12_rot_0 & 15);
    MemoryInline::FlatWriteRam32((r1 + 8), r11);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & 63);
    r7 = (r7 + -18056);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r8 = (r8_rot_0 & 31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(21));
    r6 = (r6_rot_0 & 15);
    r7_addr_0 = (r7 + r0);
    r7 = MemoryInline::FlatRead8(r7_addr_0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 31);
    MemoryInline::FlatWriteRam32((r1 + 12), r12);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r31 = (r31_rot_0 & 15);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -27704), 0, 160u, true, false);
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 152u, (r2 + -27552));
    r7 = (r8 + r7);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r7 = (r7 & 31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -27668));
    MemoryInline::FlatWriteRam32((r1 + 16), r11);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r2 + -27640));
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    f10.d = PpcFmulsInline(f0.d, f2.d);
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -27648));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = PpcFmulsInline(f7.d, f1.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = (f6.d + f2.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r12);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -27656));
    f18.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f12.d = (f3.d * f4.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -27660));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = PpcFmulsInline(f7.d, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    f17.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -27664));
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f19.d = PpcFmulsInline(f8.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r2 + -27632));
    f4.d = (f6.d + f4.d);
    f15.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r2 + -27620));
    f16.d = PpcFmulsInline(f8.d, f3.d);
    f13.d = (f5.d * f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r2 + -27624));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    f1.d = PpcFmulsInline(f7.d, f1.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f19.d));
    f3.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r2 + -27616));
    f1.d = (f6.d + f1.d);
    f12.d = static_cast<double>(PpcForceSingleValueInline(f12.d));
    f3.d = (f6.d + f3.d);
    f27.d = (f5.d * f1.d);
    f28.d = (f2.d * f3.d);
    f13.d = static_cast<double>(PpcForceSingleValueInline(f13.d));
    f31.d = PpcFmulsInline(f4.d, f18.d);
    f30.d = PpcFmulsInline(f0.d, f17.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f15.d + f16.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d));
    r8 = 0x80250000u;
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(5));
    r9 = (r9_rot_1 & 31);
    r8 = (r8 + -18000);
    r7 = MemoryInline::FlatRead16((r3 + 14));
    r8_addr_0 = (r8 + r9);
    r8 = MemoryInline::FlatRead8(r8_addr_0);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(17));
    r9 = (r9_rot_2 & 31);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r6 = MemoryInline::FlatRead16((r3 + 20));
    r3 = (r7 & 31);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r9 + r8);
    r3 = (r3 & 31);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r9 = (r9_rot_3 & 15);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r8 = (r0 & 31);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r7 = (r7_rot_0 & 15);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r3 = (r3_rot_0 & 31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 31);
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = PpcFmulsInline(f8.d, f2.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f17.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 104u, (r2 + -27600));
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f18.d = PpcFmulsInline(f7.d, f17.d);
    f21.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f17.d = PpcFmulsInline(f7.d, f15.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f16.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r2 + -27608));
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    f18.d = (f6.d + f18.d);
    f19.d = PpcFmulsInline(f7.d, f16.d);
    f20.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f15.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f16.d = (f6.d + f17.d);
    f26.d = (f0.d * f18.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f15.d - f9.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r2 + -27592));
    f17.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f23.d = (f6.d + f19.d);
    f25.d = (f5.d * f16.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 128u);
        if (resolved_pair.valid) {
            f19.d = PpcBitCastToFloatInline(resolved_pair.second);
            f18.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f19.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 132u, (r2 + -27572));
            f18.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r2 + -27576));
        }
    }
    f22.d = PpcFmulsInline(f7.d, f15.d);
    f16.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r2 + -27568));
    f15.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f9.d));
    f20.d = static_cast<double>(PpcForceSingleValueInline(f20.d - f9.d));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 120u, (r2 + -27584));
    f22.d = (f6.d + f22.d);
    f5.d = (f5.d * f23.d);
    f24.d = (f21.d * f22.d);
    f17.d = static_cast<double>(PpcForceSingleValueInline(f17.d - f9.d));
    f21.d = PpcFmulsInline(f8.d, f15.d);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f15.d = PpcFmulsInline(f8.d, f17.d);
    f19.d = PpcFmulsInline(f19.d, f20.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f21.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f18.d + f19.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f16.d + f15.d));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(21));
    r0 = (r0_rot_4 & 15);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r2 + -27560));
    r6 = 2;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 1;
    f15.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r5 = (r5 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f17.d = static_cast<double>(PpcForceSingleValueInline(f15.d - f9.d));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -27696));
    f15.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f10.d));
    f18.d = PpcFmulsInline(f7.d, f17.d);
    f17.d = PpcFmulsInline(f7.d, f9.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f15.d - f16.d));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r2 + -27564));
    f7.d = (f6.d + f18.d);
    f22.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -27704));
    f19.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f10.d));
    f9.d = PpcFmulsInline(f15.d, f9.d);
    f21.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f30.d));
    f20.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r2 + -27556));
    f6.d = (f6.d + f17.d);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 472u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r4 + 16), f31.d);
    f10.d = PpcFmulsInline(f1.d, f9.d);
    f16.d = PpcFmulsInline(f11.d, f9.d);
    f17.d = PpcFmulsInline(f12.d, f9.d);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r6);
    f18.d = PpcFmulsInline(f13.d, f9.d);
    f11.d = PpcFmulsInline(f27.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r4 + 4), f16.d);
    f15.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f9.d, f19.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r4 + 68), f16.d);
    f13.d = PpcFmulsInline(f29.d, f9.d);
    f12.d = PpcFmulsInline(f28.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f15.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f30.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f20.d - f31.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r4 + 64), f0.d);
    f19.d = PpcFmulsInline(f9.d, f21.d);
    f16.d = PpcFmulsInline(f9.d, f1.d);
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r4 + 84), r3);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f20.d - f3.d));
    f2.d = PpcFmulsInline(f2.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f17.d);
    f1.d = PpcFmulsInline(f26.d, f9.d);
    f0.d = PpcFmulsInline(f25.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r4 + 12), f18.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f17.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f18.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r4 + 72), f17.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r4 + 76), f18.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r4 + 80), f27.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f19.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f13.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r4 + 128), f19.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r4 + 132), f13.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f12.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r4 + 136), f12.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 140u, (r4 + 140), f11.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 144u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 144u, (r4 + 144), f3.d);
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r4 + 148), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 192u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f16.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f13.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 192u, (r4 + 192), f16.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 196u, (r4 + 196), f13.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 200u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f12.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 200u, (r4 + 200), f12.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 204u, (r4 + 204), f11.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 208u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f15.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 208u, (r4 + 208), f15.d);
        MemoryInline::WriteResolved32(guest_range_1, 212u, (r4 + 212), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 256u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 256u, (r4 + 256), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 260u, (r4 + 260), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 264u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 264u, (r4 + 264), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 268u, (r4 + 268), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 272u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f22.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 272u, (r4 + 272), f22.d);
        MemoryInline::WriteResolved32(guest_range_1, 276u, (r4 + 276), r0);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 320u, (r4 + 320), f10.d);
    f11.d = PpcFmulsInline(f4.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 336u, (r4 + 336), f22.d);
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f4.d = PpcFmulsInline(f24.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 324u, (r4 + 324), f11.d);
    f3.d = PpcFmulsInline(f8.d, f9.d);
    f2.d = PpcFmulsInline(f23.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 328u, (r4 + 328), f5.d);
    f1.d = PpcFmulsInline(f7.d, f9.d);
    f0.d = PpcFmulsInline(f6.d, f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 332u, (r4 + 332), f4.d);
    MemoryInline::WriteResolved32(guest_range_1, 340u, (r4 + 340), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 384u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 384u, (r4 + 384), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 388u, (r4 + 388), f11.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 392u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 392u, (r4 + 392), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 396u, (r4 + 396), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 400u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f22.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 400u, (r4 + 400), f22.d);
        MemoryInline::WriteResolved32(guest_range_1, 404u, (r4 + 404), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 448u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 448u, (r4 + 448), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 452u, (r4 + 452), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 456u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 456u, (r4 + 456), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 460u, (r4 + 460), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 464u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f22.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 464u, (r4 + 464), f22.d);
        MemoryInline::WriteResolved32(guest_range_1, 468u, (r4 + 468), r0);
    }
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = leaf_stack_saved_f28_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = leaf_stack_saved_f27_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = leaf_stack_saved_f26_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = leaf_stack_saved_f25_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = leaf_stack_saved_f24_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = leaf_stack_saved_f23_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = leaf_stack_saved_f22_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = leaf_stack_saved_f21_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = leaf_stack_saved_f20_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f19.d = leaf_stack_saved_f19_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f18.d = leaf_stack_saved_f18_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f17.d = leaf_stack_saved_f17_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f16.d = leaf_stack_saved_f16_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f15.d = leaf_stack_saved_f15_entry;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003E gpr_write=0x80001FEB gpr_return=0x00000008 fpr_read=0xFFFF8000 fpr_write=0xFFFFBFFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C3DE0 func_800C3DE0 preserves=true fpr_mask=0x00000000
