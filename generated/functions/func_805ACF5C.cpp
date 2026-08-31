#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805ACF5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805ACF5C;

loc_805ACF5C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 144);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r28 = 0x808B0000u;
    r29 = 0x80890000u;
    r26 = r4;
    r31 = r3;
    r3 = r26;
    r28 = (r28 + 27800);
    r29 = (r29 + 9336);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r12 = MemoryInline::FlatRead32(r31);
    r5 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = r31;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r5);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r0);
    ctr = r12;
    ctx->lr = 0x805ACFC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r3);
    r30 = r3;
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 12));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 56), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 60), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 64), f1.d);
    r4 = MemoryInline::FlatRead32(r3);
    r3 = (r1 + 32);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f6.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f3.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 44), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 48), f5.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 52), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 32), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 40), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 36), f0.d);
    }
    ctx->lr = 0x805AD020u;
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
    r3 = (r1 + 80);
    r4 = (r1 + 56);
    r5 = (r1 + 32);
    ctx->lr = 0x805AD030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x805AEF6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = r26;
    // inline leaf 0x80590224 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 24);
    // end of inlined leaf 0x80590224
    r27 = r3;
    r3 = r26;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r5 = r3;
    r6 = r27;
    r3 = (r1 + 80);
    r4 = (r1 + 20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AF228u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805AD05C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AD16C;
    }
}

loc_805AD060:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f1.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f4.d);
    f2.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x805AD0A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r30);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f3.d = MemoryInline::FlatReadFloat64((r29 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 92));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805AD0D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805AD16C;
    }
}

loc_805AD0D8:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_805AD0EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805AD0F8;
    }
}

loc_805AD0F0:
{
    f31.d = f0.d;
    goto loc_805AD104;
}

loc_805AD0F8:
{
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_805AD0FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805AD104;
    }
}

loc_805AD100:
{
    f31.d = f1.d;
}

loc_805AD104:
{
    r3 = r26;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f4.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805AD128:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805AD134;
    }
}

loc_805AD12C:
{
    f1.d = f0.d;
    goto loc_805AD144;
}

loc_805AD134:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805AD13C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805AD144;
    }
}

loc_805AD140:
{
    f1.d = f0.d;
}

loc_805AD144:
{
    f31.d = PpcFmulsInline(f31.d, f1.d);
    r3 = r26;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 510);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = (r31 + r4);
    r4 = MemoryInline::FlatRead16((r28 + 20));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWrite16((r3 + 440), static_cast<uint16_t>(r4));
    r3 = (r31 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 464), f31.d);
}

loc_805AD16C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 144);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 144));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7DF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805ACF5C func_805ACF5C preserves=false fpr_mask=0x80000000
