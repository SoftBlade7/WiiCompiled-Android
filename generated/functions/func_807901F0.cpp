#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807901F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_5 = 0;
    uint32_t r26_psq_tmp_6 = 0;
    uint32_t r26_psq_tmp_7 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807901F0;

loc_807901F0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r10 = 0x808A0000u;
    f31.d = f1.d;
    r23 = r4;
}

loc_80790220:
{
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r29 = r9;
    r10 = (r10 + 19288);
    r31 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80790250;
    }
}

loc_80790240:
{
    r4 = 0x809C0000u;
    r31 = (r3 + 16);
    r4 = MemoryInline::FlatRead32((r4 + 15376));
    MemoryInline::FlatWrite32((r4 + 8), r0);
}

loc_80790250:
{
}

loc_80790254:
{
    r28 = MemoryInline::FlatRead32((r3 + 16));
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80790278;
    }
}

loc_8079025C:
{
    f0.d = MemoryInline::FlatReadFloat32(r10);
    MemoryInline::FlatWriteFloat32((r7 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 4), f0.d);
    MemoryInline::FlatWriteFloat32(r7, f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 20), f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 12), f0.d);
}

loc_80790278:
{
}

loc_8079027C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80790288;
    }
}

loc_80790280:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r8, r0);
}

loc_80790288:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8079028C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807902B4;
    }
}

loc_80790290:
{
    f1.d = MemoryInline::FlatReadFloat32(r10);
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 144));
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
}

loc_807902B4:
{
    r3 = 0x809C0000u;
    f2.d = f31.d;
    r3 = MemoryInline::FlatRead32((r3 + 15376));
    r5 = r23;
    f1.d = MemoryInline::FlatReadFloat32((r10 + 136));
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    r4 = 0;
    ctx->lr = 0x807902E0u;
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
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807C4648u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = f31.d;
    r4 = 0x809C0000u;
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 17168));
    r9 = r29;
    r4 = r23;
    r5 = r24;
    r6 = r25;
    r7 = r26;
    r8 = r27;
    r29 = 0;
    ctx->lr = 0x80790310u;
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
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081C5A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80790314:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80790320;
    }
}

loc_80790318:
{
}

loc_8079031C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80790324;
    }
}

loc_80790320:
{
    r29 = 1;
}

loc_80790324:
{
}

loc_80790328:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079037C;
    }
}

loc_8079032C:
{
}

loc_80790330:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80790354;
    }
}

loc_80790334:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_1 = (r26 + 12);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_2 = (r26 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_3 = (r26 + 20);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_4 = (r26 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_4, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_5 = (r26 + 32);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_5, f0.d);
}

loc_80790354:
{
}

loc_80790358:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8079037C;
    }
}

loc_8079035C:
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

loc_8079037C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80790380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80790398;
    }
}

loc_80790384:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 15376));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_80790398:
{
    r3 = r29;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807901F0 func_807901F0 preserves=false fpr_mask=0x80000000
