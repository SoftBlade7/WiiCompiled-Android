#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A6F74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
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
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807A6F74;

loc_807A6F74:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r9 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r29 = 0x808A0000u;
    r8 = (r8 * 116);
    r9 = (r9 + 12104);
    r28 = r7;
    r25 = r4;
    r7 = (r9 + r8);
    r30 = r3;
    r31 = MemoryInline::FlatRead8((r7 + 88));
    r0 = (r0 | 32772);
    r26 = r5;
    r27 = r6;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    r3 = (r3 + 80);
    r4 = r28;
    r29 = (r29 + 22136);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x807DE858u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_0 = (r27 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_0 = (r28 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28));
    f3.d = MemoryInline::FlatReadFloat32(r29);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f1.d, f2.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f3.d);
}

loc_807A6FFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A7004;
    }
}

loc_807A7000:
{
    goto loc_807A7018;
}

loc_807A7004:
{
    f3.d = MemoryInline::FlatReadFloat32((r29 + 4));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f3.d);
}

loc_807A700C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A7014;
    }
}

loc_807A7010:
{
    goto loc_807A7018;
}

loc_807A7014:
{
    f3.d = f0.d;
    f3.d = PPC_PsToScalarInline(f3.d);
}

loc_807A7018:
{
}

loc_807A701C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_807A7028;
    }
}

loc_807A7020:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    goto loc_807A702C;
}

loc_807A7028:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
}

loc_807A702C:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_807A703C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f3.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 80), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 84), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A7140;
    }
}

loc_807A7074:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 68);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    r3 = (r1 + 32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    r4 = (r1 + 8);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_1 = (r26 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 76);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_2));
    r0 = MemoryInline::FlatRead32((r1 + 32));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    r5 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x807A70B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r25 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f7.d = MemoryInline::FlatReadFloat64((r29 + 24));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f6.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f7.d));
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 80));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    f2.d = PpcFmulsInline(f6.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 68), r3);
    f5.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f7.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f5.d = PpcFmulsInline(f6.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f7.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f2.d = PpcFmulsInline(f6.d, f1.d);
    f1.d = PpcFmulsInline(f4.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 84), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
}

loc_807A7140:
{
    r0 = MemoryInline::FlatRead32((r30 + 120));
    r5 = 0x808D0000u;
    r5 = (r5 + 7384);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = (r0 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A7150:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A7174;
    }
}

loc_807A7168:
{
    MemoryInline::FlatWrite32((r30 + 360), r4);
    MemoryInline::FlatWrite32((r30 + 364), r3);
    MemoryInline::FlatWrite32((r30 + 368), r0);
}

loc_807A7174:
{
    r5 = 0x808D0000u;
    r5 = (r5 + 7396);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r30 + 120));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807A7184:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r30 + 376), r3);
    r0 = (r0 & -14337);
    MemoryInline::FlatWrite32((r30 + 372), r4);
    r3 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r30 + 380), r3);
    MemoryInline::FlatWrite32((r30 + 120), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A71BC;
    }
}

loc_807A71A4:
{
    r3 = (r30 + 16);
    r4 = (r30 + 32);
    ctx->lr = 0x807A71B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B9DD4u>(ctx);
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 120));
    r0 = (r0 | 16777216);
    MemoryInline::FlatWrite32((r30 + 120), r0);
}

loc_807A71BC:
{
    r3 = MemoryInline::FlatRead32((r30 + 164));
    r11 = (r1 + 112);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE003FFF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x000000FD fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807A6F74 func_807A6F74 preserves=true fpr_mask=0x00000000
