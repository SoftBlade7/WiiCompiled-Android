#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006CA00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8006CA00;

loc_8006CA00:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r31 = MemoryInline::FlatRead32(r8);
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r0 = (r31 & 2);
}

loc_8006CA28:
{
    r28 = r6;
    r29 = r7;
    r30 = r8;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8006CA40;
    }
}

loc_8006CA38:
{
    r0 = (r31 & 4);
}

loc_8006CA3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006CA50;
    }
}

loc_8006CA40:
{
    r3 = r27;
    r4 = r25;
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_6 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_7 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_8 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_8, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_9 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_9, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_10 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_10 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_10, f5.d);
    // end of inlined leaf 0x80199D30
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    goto loc_8006CB30;
}

loc_8006CA50:
{
    r0 = (r31 & 32);
}

loc_8006CA54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006CAC8;
    }
}

loc_8006CA58:
{
    r0 = (r7 & -2147483648);
}

loc_8006CA5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006CA88;
    }
}

loc_8006CA60:
{
    f2.d = MemoryInline::FlatReadFloat32((r8 + 72));
    r4 = r27;
    f1.d = MemoryInline::FlatReadFloat32((r8 + 56));
    r5 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
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
    InvokeDirectCpu<0x80085810u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    goto loc_8006CB30;
}

loc_8006CA88:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    r4 = r27;
    f0.d = MemoryInline::FlatReadFloat32((r8 + 72));
    r5 = (r1 + 8);
    f3.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 40));
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
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
    InvokeDirectCpu<0x80085810u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    goto loc_8006CB30;
}

loc_8006CAC8:
{
    r0 = (r7 & -2147483648);
}

loc_8006CACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006CAE4;
    }
}

loc_8006CAD0:
{
    r3 = r27;
    r5 = r25;
    r4 = (r8 + 28);
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
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    goto loc_8006CB30;
}

loc_8006CAE4:
{
    r4 = r25;
    r3 = (r8 + 28);
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5, f5.d);
    // end of inlined leaf 0x80199D30
    f1.d = MemoryInline::FlatReadFloat32((r25 + 12));
    r3 = r27;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r4 = r25;
    f3.d = MemoryInline::FlatReadFloat32((r25 + 28));
    r5 = r25;
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::FlatWriteFloat32((r25 + 12), f4.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r25 + 28), f2.d);
    MemoryInline::FlatWriteFloat32((r25 + 44), f0.d);
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
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f5.d = PPC_PsToScalarInline(f5.d);
}

loc_8006CB30:
{
    r0 = (r31 & 8);
}

loc_8006CB34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006CB58;
    }
}

loc_8006CB38:
{
    f2.d = MemoryInline::FlatReadFloat32(r28);
    r4 = (r29 | 1073741824);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    MemoryInline::FlatWriteFloat32(r26, f2.d);
    MemoryInline::FlatWriteFloat32((r26 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r26 + 8), f0.d);
    goto loc_8006CB8C;
}

loc_8006CB58:
{
    f1.d = MemoryInline::FlatReadFloat32(r28);
    r4 = (r29 & 1073741823);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    MemoryInline::FlatWriteFloat32(r26, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r26 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r26 + 8), f0.d);
}

loc_8006CB8C:
{
    r0 = (r31 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006CB90:
{
    r3 = (r4 & 268435455);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006CB9C;
    }
}

loc_8006CB98:
{
    r3 = (r4 | 268435456);
}

loc_8006CB9C:
{
    r11 = (r1 + 64);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -28), 0, 28u, true, false);
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0001FB gpr_write=0xFE00087B gpr_return=0x00000018 fpr_read=0x8000C400 fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006CA00 func_8006CA00 preserves=true fpr_mask=0x00000000
