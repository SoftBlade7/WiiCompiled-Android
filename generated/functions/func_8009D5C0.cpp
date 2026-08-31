#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009D5C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8009D5C0;

loc_8009D5C0:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead8((r3 + 76));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8009D5EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009D65C;
    }
}

loc_8009D5F0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    r31 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r0 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 12));
            r11 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r4 + 20));
            r9 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 28));
            r7 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r4 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r4 + 36));
            r5 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r4 + 40));
        }
    }
    r4 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r4 + 44));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 77u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r31);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r29);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r11);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r9);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 32), r7);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r3 + 36), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r3 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r3 + 44), r4);
    }
    MemoryInline::WriteResolved8(guest_range_2, 76u, (r3 + 76), static_cast<uint8_t>(r0));
    goto loc_8009D7EC;
}

loc_8009D65C:
{
    f5.d = MemoryInline::FlatReadFloat32((r3 + 12));
    r27 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r28 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f9.d = PpcFmulsInline(f0.d, f5.d);
    f4.d = PpcFmulsInline(f2.d, f5.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f11.d = PpcFmulsInline(f1.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f10.d = PpcFmulsInline(f0.d, f3.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f8.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f3.d = PpcFmulsInline(f1.d, f7.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f2.d, f5.d);
    f12.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = PpcFmulsInline(f0.d, f7.d);
    f30.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f31.d = PpcFmulsInline(f12.d, f30.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f12.d = PpcFmulsInline(f7.d, f30.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f10.d));
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f13.d));
    r30 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f7.d));
    f11.d = (-(f10.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    f5.d = PpcFmulsInline(f5.d, f30.d);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
    f10.d = (-(f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f8.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
            r11 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
        }
    }
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r4 + 44));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    f5.d = PpcFmulsInline(f1.d, f6.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    f3.d = PpcFmulsInline(f3.d, f6.d);
    f1.d = PpcFmulsInline(f1.d, f6.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
            r9 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    f3.d = (-(f4.d));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
    f1.d = (-(f2.d));
    f2.d = (-(f7.d));
    f0.d = (-(f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
        }
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f11.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f10.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f3.d, f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_1 = (r27 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r27_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r28_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 48);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f3.d, f4.d));
    MemoryInline::FlatWrite32(r3, r29);
    MemoryInline::FlatWrite32((r3 + 4), r30);
    MemoryInline::FlatWrite32((r3 + 8), r31);
    MemoryInline::FlatWrite32((r3 + 12), r12);
    MemoryInline::FlatWrite32((r3 + 16), r11);
    MemoryInline::FlatWrite32((r3 + 20), r10);
    MemoryInline::FlatWrite32((r3 + 24), r9);
    MemoryInline::FlatWrite32((r3 + 28), r8);
    MemoryInline::FlatWrite32((r3 + 32), r7);
    MemoryInline::FlatWrite32((r3 + 36), r6);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 56);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f1.d);
}

loc_8009D7EC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f30.d = leaf_stack_saved_f30_entry;
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800001A gpr_write=0xF8001FF3 gpr_return=0x00000010 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009D5C0 func_8009D5C0 preserves=true fpr_mask=0x00000000
