#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022C2B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_10 = 0;
    uint32_t r30_psq_tmp_11 = 0;
    uint32_t r30_psq_tmp_12 = 0;
    uint32_t r30_psq_tmp_13 = 0;
    uint32_t r30_psq_tmp_14 = 0;
    uint32_t r30_psq_tmp_15 = 0;
    uint32_t r30_psq_tmp_16 = 0;
    uint32_t r30_psq_tmp_17 = 0;
    uint32_t r30_psq_tmp_18 = 0;
    uint32_t r30_psq_tmp_19 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_20 = 0;
    uint32_t r30_psq_tmp_21 = 0;
    uint32_t r30_psq_tmp_22 = 0;
    uint32_t r30_psq_tmp_23 = 0;
    uint32_t r30_psq_tmp_24 = 0;
    uint32_t r30_psq_tmp_25 = 0;
    uint32_t r30_psq_tmp_26 = 0;
    uint32_t r30_psq_tmp_27 = 0;
    uint32_t r30_psq_tmp_28 = 0;
    uint32_t r30_psq_tmp_29 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_30 = 0;
    uint32_t r30_psq_tmp_31 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint32_t r30_psq_tmp_6 = 0;
    uint32_t r30_psq_tmp_7 = 0;
    uint32_t r30_psq_tmp_8 = 0;
    uint32_t r30_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8022C2B4;

loc_8022C2B4:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 8), 0, 44u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 156), r31);
    r31 = r4;
}

loc_8022C2D0:
{
    MemoryInline::FlatWriteRam32((r1 + 152), r30);
    r30 = r3;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022C2F0;
    }
}

loc_8022C2DC:
{
}

loc_8022C2E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8022C4B8;
    }
}

loc_8022C2E4:
{
}

loc_8022C2E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8022C680;
    }
}

loc_8022C2EC:
{
    goto loc_8022C840;
}

loc_8022C2F0:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 24));
    r9 = 1;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 28));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 32));
        }
    }
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 22));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 16));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 17));
    r6 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 20));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r4 + 18));
    r5 = (r5 | 1632);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 48));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 116u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 64), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 104), r8);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 108), r7);
    }
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r3 + 4), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved16(guest_range_1, 114u, (r3 + 118), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 52), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 48), f6.d);
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 20), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 24), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 28), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 32), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 40), f0.d);
    }
    r3 = (r3 + 32);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl0_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    guest_range_4 = MemoryInline::ResolveRangeHost((r2 + -26360), 0, 1284u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r2 + -26360));
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
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r2 + -26356));
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
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 1264u, (r2 + -25096));
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8022C38C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022C3B4;
    }
}

loc_8022C390:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 1280u, (r2 + -25080));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_21 = (r30 + 32);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_21));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_22 = (r30 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_22));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_23 = (r30 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_23, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_24 = (r30 + 40);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_24, f1.d);
    goto loc_8022C3C0;
}

loc_8022C3B4:
{
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
}

loc_8022C3C0:
{
    guest_range_8 = MemoryInline::ResolveRangeHost((r31 + 36), 0, 36u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 0u, (r31 + 36));
    r3 = (r30 + 32);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 4u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 4u, (r31 + 40));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 8u, (r31 + 44));
        }
    }
    f2.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl1_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl1_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl1_cont_8019AC68;
}

loc_inl1_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl1_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 1264u, (r2 + -25096));
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8022C420:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022C448;
    }
}

loc_8022C424:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 1280u, (r2 + -25080));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_26 = (r30 + 32);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_26));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_27 = (r30 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_27));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_28 = (r30 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_28, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_29 = (r30 + 40);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_29, f1.d);
    goto loc_8022C454;
}

loc_8022C448:
{
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
}

loc_8022C454:
{
    r10 = MemoryInline::ReadResolved8(guest_range_8, 16u, (r31 + 52));
    r0 = 0;
    r9 = MemoryInline::ReadResolved8(guest_range_8, 17u, (r31 + 53));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 18u, (r31 + 54));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 19u, (r31 + 55));
    r6 = MemoryInline::ReadResolved8(guest_range_8, 20u, (r31 + 56));
    r5 = MemoryInline::ReadResolved8(guest_range_8, 21u, (r31 + 57));
    r4 = MemoryInline::ReadResolved8(guest_range_8, 22u, (r31 + 58));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 23u, (r31 + 59));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 24u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 24u, (r31 + 60));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 28u, (r31 + 64));
        }
    }
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 32u, (r31 + 68));
    guest_range_10 = MemoryInline::ResolveRangeHost((r30 + 6), 0, 74u, false, true);
    MemoryInline::WriteResolved8(guest_range_10, 38u, (r30 + 44), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 39u, (r30 + 45), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_10, 40u, (r30 + 46), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_10, 41u, (r30 + 47), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_10, 54u, (r30 + 60), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_10, 55u, (r30 + 61), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_10, 56u, (r30 + 62), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_10, 57u, (r30 + 63), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 62u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_10, 62u, (r30 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_10, 66u, (r30 + 72), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_10, 70u, (r30 + 76), f2.d);
    MemoryInline::WriteResolved16(guest_range_10, 0u, (r30 + 6), static_cast<uint16_t>(r0));
    goto loc_8022C840;
}

loc_8022C4B8:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 24));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 28));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 22));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r4 + 19));
    r5 = (r0 & -3);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 16));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 17));
    r6 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 20));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r4 + 18));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 48));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 116u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 60u, (r3 + 64), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r3 + 104), r8);
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r3 + 108), r7);
    }
    MemoryInline::WriteResolved16(guest_range_2, 0u, (r3 + 4), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved16(guest_range_2, 114u, (r3 + 118), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r3 + 52), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 48), f6.d);
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 20), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 24), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 28), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 32), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 40), f0.d);
    }
    r3 = (r3 + 32);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl2_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    guest_range_5 = MemoryInline::ResolveRangeHost((r2 + -26360), 0, 1284u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, (r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl2_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 4u, (r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl2_cont_8019AC68;
}

loc_inl2_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl2_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 1264u, (r2 + -25096));
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8022C554:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022C57C;
    }
}

loc_8022C558:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 1280u, (r2 + -25080));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_11 = (r30 + 32);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_12 = (r30 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_12));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_13 = (r30 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_13, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_14 = (r30 + 40);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_14, f1.d);
    goto loc_8022C588;
}

loc_8022C57C:
{
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
}

loc_8022C588:
{
    guest_range_9 = MemoryInline::ResolveRangeHost((r31 + 36), 0, 36u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 0u, (r31 + 36));
    r3 = (r30 + 32);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 4u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 4u, (r31 + 40));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 8u, (r31 + 44));
        }
    }
    f2.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl3_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, (r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl3_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 4u, (r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl3_cont_8019AC68;
}

loc_inl3_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl3_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 1264u, (r2 + -25096));
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8022C5E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022C610;
    }
}

loc_8022C5EC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 1280u, (r2 + -25080));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_16 = (r30 + 32);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_17 = (r30 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_17));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_18 = (r30 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_18, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_19 = (r30 + 40);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_19, f1.d);
    goto loc_8022C61C;
}

loc_8022C610:
{
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
}

loc_8022C61C:
{
    r10 = MemoryInline::ReadResolved8(guest_range_9, 16u, (r31 + 52));
    r0 = 0;
    r9 = MemoryInline::ReadResolved8(guest_range_9, 17u, (r31 + 53));
    r8 = MemoryInline::ReadResolved8(guest_range_9, 18u, (r31 + 54));
    r7 = MemoryInline::ReadResolved8(guest_range_9, 19u, (r31 + 55));
    r6 = MemoryInline::ReadResolved8(guest_range_9, 20u, (r31 + 56));
    r5 = MemoryInline::ReadResolved8(guest_range_9, 21u, (r31 + 57));
    r4 = MemoryInline::ReadResolved8(guest_range_9, 22u, (r31 + 58));
    r3 = MemoryInline::ReadResolved8(guest_range_9, 23u, (r31 + 59));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 24u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 24u, (r31 + 60));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 28u, (r31 + 64));
        }
    }
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_9, 32u, (r31 + 68));
    guest_range_11 = MemoryInline::ResolveRangeHost((r30 + 6), 0, 74u, false, true);
    MemoryInline::WriteResolved8(guest_range_11, 38u, (r30 + 44), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_11, 39u, (r30 + 45), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_11, 40u, (r30 + 46), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_11, 41u, (r30 + 47), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_11, 54u, (r30 + 60), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_11, 55u, (r30 + 61), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_11, 56u, (r30 + 62), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_11, 57u, (r30 + 63), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 62u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_11, 62u, (r30 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_11, 66u, (r30 + 72), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_11, 70u, (r30 + 76), f2.d);
    MemoryInline::WriteResolved16(guest_range_11, 0u, (r30 + 6), static_cast<uint16_t>(r0));
    goto loc_8022C840;
}

loc_8022C680:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 24));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 28));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r4 + 19));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 16));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 17));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 20));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 22));
        }
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r4 + 18));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 48));
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 116u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r3 + 64), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 100u, (r3 + 104), r8);
        MemoryInline::WriteResolved32(guest_range_3, 104u, (r3 + 108), r7);
    }
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r3 + 4), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved16(guest_range_3, 114u, (r3 + 118), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r3 + 52), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r3 + 48), f6.d);
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 20), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 24), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 28), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 32), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 40), f0.d);
    }
    r3 = (r3 + 32);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl4_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    guest_range_6 = MemoryInline::ResolveRangeHost((r2 + -26360), 0, 1284u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 0u, (r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl4_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 4u, (r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl4_cont_8019AC68;
}

loc_inl4_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl4_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 1264u, (r2 + -25096));
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8022C718:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022C740;
    }
}

loc_8022C71C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 1280u, (r2 + -25080));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 32);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_3 = (r30 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_3, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_4 = (r30 + 40);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_4, f1.d);
    goto loc_8022C74C;
}

loc_8022C740:
{
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
}

loc_8022C74C:
{
    guest_range_7 = MemoryInline::ResolveRangeHost((r31 + 36), 0, 42u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 0u, (r31 + 36));
    r3 = (r30 + 32);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 4u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 4u, (r31 + 40));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 8u, (r31 + 44));
        }
    }
    f2.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl5_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 0u, (r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl5_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 4u, (r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl5_cont_8019AC68;
}

loc_inl5_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl5_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 1264u, (r2 + -25096));
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8022C7AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022C7D4;
    }
}

loc_8022C7B0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 1280u, (r2 + -25080));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_6 = (r30 + 32);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_7 = (r30 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_7));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_8 = (r30 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_8, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_9 = (r30 + 40);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_9, f1.d);
    goto loc_8022C7E0;
}

loc_8022C7D4:
{
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
}

loc_8022C7E0:
{
    r10 = MemoryInline::ReadResolved8(guest_range_7, 16u, (r31 + 52));
    r9 = MemoryInline::ReadResolved8(guest_range_7, 17u, (r31 + 53));
    r8 = MemoryInline::ReadResolved8(guest_range_7, 18u, (r31 + 54));
    r7 = MemoryInline::ReadResolved8(guest_range_7, 19u, (r31 + 55));
    r6 = MemoryInline::ReadResolved8(guest_range_7, 20u, (r31 + 56));
    r5 = MemoryInline::ReadResolved8(guest_range_7, 21u, (r31 + 57));
    r4 = MemoryInline::ReadResolved8(guest_range_7, 22u, (r31 + 58));
    r3 = MemoryInline::ReadResolved8(guest_range_7, 23u, (r31 + 59));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 24u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 24u, (r31 + 60));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 28u, (r31 + 64));
        }
    }
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_7, 32u, (r31 + 68));
    r0 = MemoryInline::ReadResolved16(guest_range_7, 40u, (r31 + 76));
    guest_range_12 = MemoryInline::ResolveRangeHost((r30 + 6), 0, 74u, false, true);
    MemoryInline::WriteResolved8(guest_range_12, 38u, (r30 + 44), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_12, 39u, (r30 + 45), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_12, 40u, (r30 + 46), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_12, 41u, (r30 + 47), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_12, 54u, (r30 + 60), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_12, 55u, (r30 + 61), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_12, 56u, (r30 + 62), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_12, 57u, (r30 + 63), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 62u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_12, 62u, (r30 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_12, 66u, (r30 + 72), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_12, 70u, (r30 + 76), f2.d);
    MemoryInline::WriteResolved16(guest_range_12, 0u, (r30 + 6), static_cast<uint16_t>(r0));
}

loc_8022C840:
{
    r0 = MemoryInline::FlatRead8((r30 + 44));
    r4 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r3 = MemoryInline::FlatRead8((r30 + 45));
    MemoryInline::FlatWriteRam32((r1 + 96), r4);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -25056));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 108), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 48));
    MemoryInline::FlatWriteRam32((r1 + 104), r4);
    r0 = MemoryInline::FlatRead8((r30 + 46));
    f3.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 104));
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25064));
    MemoryInline::FlatWriteRam32((r1 + 112), r4);
    f8.d = MemoryInline::FlatReadFloat32((r30 + 32));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8022C890:
{
    f2.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f7.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f6.d = MemoryInline::FlatReadFloat32((r30 + 40));
    MemoryInline::FlatWriteFloat32((r30 + 124), f8.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 128), f7.d);
    MemoryInline::FlatWriteFloat32((r30 + 132), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022C8CC;
    }
}

loc_8022C8C8:
{
    goto loc_8022C8D0;
}

loc_8022C8CC:
{
    f3.d = f0.d;
}

loc_8022C8D0:
{
    f2.d = PPC_Fctiwz(f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25064));
    MemoryInline::FlatWriteRamFloat64((r1 + 120), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022C8E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::FlatWrite8((r30 + 136), static_cast<uint8_t>(r0));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022C8F8;
    }
}

loc_8022C8F4:
{
    goto loc_8022C8FC;
}

loc_8022C8F8:
{
    f1.d = f0.d;
}

loc_8022C8FC:
{
    f2.d = PPC_Fctiwz(f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25064));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022C910:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    MemoryInline::FlatWrite8((r30 + 137), static_cast<uint8_t>(r0));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022C924;
    }
}

loc_8022C920:
{
    goto loc_8022C928;
}

loc_8022C924:
{
    f1.d = f0.d;
}

loc_8022C928:
{
    f0.d = PPC_Fctiwz(f1.d);
    r0 = MemoryInline::FlatRead8((r30 + 47));
    MemoryInline::FlatWrite8((r30 + 139), static_cast<uint8_t>(r0));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r30 + 138), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00007FF gpr_write=0xC00007FB gpr_return=0x00000018 fpr_read=0x0000017F fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022C2B4 func_8022C2B4 preserves=true fpr_mask=0x00000000
