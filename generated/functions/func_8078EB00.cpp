#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078EB00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_5 = 0;
    uint32_t r27_psq_tmp_6 = 0;
    uint32_t r27_psq_tmp_7 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r28_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8078EB00;

loc_8078EB00:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r30 = 0x808A0000u;
    r24 = r4;
    r25 = r5;
}

loc_8078EB28:
{
    r26 = r6;
    r27 = r7;
    r29 = r8;
    r30 = (r30 + 19288);
    r31 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8078EB50;
    }
}

loc_8078EB40:
{
    r4 = 0x809C0000u;
    r31 = (r3 + 16);
    r4 = MemoryInline::FlatRead32((r4 + 15376));
    MemoryInline::FlatWrite32((r4 + 8), r0);
}

loc_8078EB50:
{
}

loc_8078EB54:
{
    r28 = MemoryInline::FlatRead32((r3 + 16));
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8078EB78;
    }
}

loc_8078EB5C:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteFloat32((r7 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 4), f0.d);
    MemoryInline::FlatWriteFloat32(r7, f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 20), f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 12), f0.d);
}

loc_8078EB78:
{
}

loc_8078EB7C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8078EB88;
    }
}

loc_8078EB80:
{
    r3 = r29;
    // inline leaf 0x807BDA7C (8 guest instruction(s))
    r4 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    r4 = (r4 + 14552);
    MemoryInline::FlatWriteRam32((r4 + 768), r0);
    MemoryInline::FlatWriteRam32((r4 + 772), r0);
    MemoryInline::FlatWriteRam32((r4 + 776), r3);
    // end of inlined leaf 0x807BDA7C
}

loc_8078EB88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8078EB8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078EBB4;
    }
}

loc_8078EB90:
{
    f1.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 144));
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
}

loc_8078EBB4:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 136));
    r3 = MemoryInline::FlatRead32((r3 + 15376));
    r5 = r24;
    r6 = r25;
    r7 = r26;
    r8 = r27;
    r9 = r29;
    r4 = 0;
    ctx->lr = 0x8078EBDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807C2DA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 17168));
    r8 = r29;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r29 = 0;
    ctx->lr = 0x8078EC04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081B940u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8078EC08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8078EC14;
    }
}

loc_8078EC0C:
{
}

loc_8078EC10:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8078EC18;
    }
}

loc_8078EC14:
{
    r29 = 1;
}

loc_8078EC18:
{
}

loc_8078EC1C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8078EC70;
    }
}

loc_8078EC20:
{
}

loc_8078EC24:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8078EC48;
    }
}

loc_8078EC28:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_1 = (r27 + 12);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_2 = (r27 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_3 = (r27 + 20);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_4 = (r27 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_4, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_5 = (r27 + 32);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_5, f0.d);
}

loc_8078EC48:
{
}

loc_8078EC4C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8078EC70;
    }
}

loc_8078EC50:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 12);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_2 = (r28 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_2, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_3 = (r28 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_4 = (r28 + 20);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_4));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_5 = (r28 + 32);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_5, f0.d);
}

loc_8078EC70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8078EC74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078EC8C;
    }
}

loc_8078EC78:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 15376));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8078EC8C:
{
    r11 = (r1 + 48);
    r3 = r29;
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFDFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8078EB00 func_8078EB00 preserves=true fpr_mask=0x00000000
