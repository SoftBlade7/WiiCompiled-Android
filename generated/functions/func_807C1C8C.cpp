#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C1C8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807C1C8C;

loc_807C1C8C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r7 = MemoryInline::FlatRead32(r4);
    r31 = 0x808A0000u;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r29 = r5;
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 24), r0);
    r27 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 26344));
    r28 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 20), r7);
    r30 = r6;
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r4 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 28), r0);
    r5 = MemoryInline::FlatRead32((r3 + 660));
    r0 = MemoryInline::FlatRead32((r3 + 664));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 8), r5);
    }
    r0 = MemoryInline::FlatRead32((r3 + 668));
    r3 = (r1 + 20);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r0);
    f2.d = MemoryInline::FlatReadFloat32((r27 + 672));
    ctx->lr = 0x807C1CF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051A07Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C1D00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C1D6C;
    }
}

loc_807C1D04:
{
    r3 = r27;
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BE030u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 60), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r27 + 104), r3);
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = MemoryInline::FlatReadFloat32(r28);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r27 + 60), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r27 + 64), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r27 + 68), f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r27 + 72), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r27 + 76), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r27 + 80), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_0 = (r29 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_0 = (r27 + 84);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_0, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_0 = (r28 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f3.d));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r27 + 100), r30);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_1 = (r27 + 92);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_1, f0.d);
    goto loc_807C1DD0;
}

loc_807C1D6C:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 60), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r27 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r27 + 64), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r27 + 68), f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r27 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 26344));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r27 + 76), f2.d);
    r0 = MemoryInline::FlatRead32((r27 + 656));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r27 + 80), f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_2 = (r27 + 84);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_2, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r27 + 96), f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_3 = (r27 + 92);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_3, f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r27 + 100), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r27 + 104), r0);
    }
}

loc_807C1DD0:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8000FFA gpr_write=0xF8000FFB gpr_return=0x00000018 fpr_read=0x80000009 fpr_write=0x8000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807C1C8C func_807C1C8C preserves=true fpr_mask=0x00000000
