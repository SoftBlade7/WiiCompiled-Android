#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802354CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802354CC;

loc_802354CC:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -256), 0, 264u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 260u, (r1 + 260), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 240u, (r1 + 240), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 224u, (r1 + 224), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 208u, (r1 + 208), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 192u, (r1 + 192), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 176u, (r1 + 176), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 160u, (r1 + 160), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    r11 = (r1 + 160);
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
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    r4 = 1127219200;
    r31 = (r3 + r0);
    f29.d = f1.d;
    r6 = MemoryInline::FlatRead8((r31 + 48));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 248);
    f30.d = f2.d;
    MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 72), r4);
    r0 = (r6 - r0);
    r29 = (r0 & 255);
    MemoryInline::WriteResolved32(guest_range_3, 80u, (r1 + 80), r4);
}

loc_80235540:
{
    r27 = r3;
    r25_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r25 = (r25_rot_0 & 2040);
    if ((static_cast<uint32_t>(r29) <= static_cast<uint32_t>(8))) {
        goto loc_80235550;
    }
}

loc_8023554C:
{
    r29 = 8;
}

loc_80235550:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r6);
    r3 = r29;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -24840));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24852));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016E5A4u>(ctx);
    r28 = 0x80260000u;
    f26.d = MemoryInline::FlatReadFloat64((r2 + -24816));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -24832));
    r28 = (r28 + -32504);
    f28.d = MemoryInline::FlatReadFloat32((r2 + -24828));
    r26 = 0;
    goto loc_80235660;
}

loc_8023558C:
{
    r3 = r26;
    // inline leaf 0x80228DCC (3 guest instruction(s))
    r4 = (r2 + -25200);
    r4_addr_2 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_2);
    // end of inlined leaf 0x80228DCC
    r30 = r3;
    r3 = r26;
    r6 = r30;
    r4 = 1;
    r5 = 4;
    r7 = 0;
    r8 = 125;
    ctx->lr = 0x802355B4u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016E37Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r25 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r4 = (r1 + 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f26.d));
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f1.d = PpcFmulsInline(f27.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = PpcFmulsInline(f28.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    guest_range_1 = MemoryInline::ResolveRangeHost(r28, 0, 32u, true, false);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 0u, r28);
    r4 = r30;
    r11 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r28 + 4));
    r3 = (r1 + 40);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r28 + 8));
    r5 = 1;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r28 + 12));
            r8 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r28 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r28 + 20));
            r6 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r28 + 24));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r28 + 28));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 40), r12);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::WriteResolved32(guest_range_4, 4u, (r1 + 44), r11);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 48), r10);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r1 + 52), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 56), r8);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r1 + 60), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 64), r6);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r1 + 68), r0);
    }
    f2.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = PpcFmulsInline(f29.d, f1.d);
    f0.d = PpcFmulsInline(f30.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 48), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r1 + 64), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80173234u>(ctx);
    r25 = (r25 + 1);
    r26 = (r26 + 1);
}

loc_80235660:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r29));
}

loc_80235664:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8023558C;
    }
}

loc_80235668:
{
    r4 = MemoryInline::FlatRead8((r31 + 49));
    r30 = 0;
    r3 = 0;
}

loc_80235678:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(128))) {
        goto loc_8023568C;
    }
}

loc_8023567C:
{
    r0 = MemoryInline::FlatRead8((r31 + 50));
}

loc_80235684:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(128))) {
        goto loc_8023568C;
    }
}

loc_80235688:
{
    r3 = 1;
}

loc_8023568C:
{
}

loc_80235690:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802356A4;
    }
}

loc_80235694:
{
    r0 = MemoryInline::FlatRead8((r31 + 51));
}

loc_8023569C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(128))) {
        goto loc_802356A4;
    }
}

loc_802356A0:
{
    r30 = 1;
}

loc_802356A4:
{
    r3 = MemoryInline::FlatRead8((r31 + 52));
}

loc_802356AC:
{
    r0 = (r3 + -128);
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r28 = (r28_rot_0 & 1);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802356C0;
    }
}

loc_802356B8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24824));
    goto loc_802356C4;
}

loc_802356C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24852));
}

loc_802356C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_802356CC:
{
    f6.d = PpcFmulsInline(f0.d, f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802356DC;
    }
}

loc_802356D4:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24824));
    goto loc_802356E0;
}

loc_802356DC:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24852));
}

loc_802356E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 50));
    MemoryInline::FlatWriteRam32((r1 + 76), r4);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 44));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f7.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f5.d = MemoryInline::FlatReadFloat64((r2 + -24840));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = MemoryInline::FlatRead8((r31 + 51));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24820));
    f4.d = PpcFmulsInline(f1.d, f6.d);
    MemoryInline::FlatWriteRam32((r1 + 84), r3);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f3.d = PpcFmulsInline(f3.d, f6.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f4.d);
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80235738:
{
    f2.d = PpcFmulsInline(f2.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    f1.d = PpcFmulsInline(f1.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80235754;
    }
}

loc_80235750:
{
    goto loc_80235758;
}

loc_80235754:
{
    f4.d = f0.d;
}

loc_80235758:
{
    f2.d = PPC_Fctiwz(f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24820));
    MemoryInline::FlatWriteRamFloat64((r1 + 88), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8023576C:
{
    r0 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8023577C;
    }
}

loc_80235778:
{
    goto loc_80235780;
}

loc_8023577C:
{
    f1.d = f0.d;
}

loc_80235780:
{
    f2.d = PPC_Fctiwz(f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24820));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80235794:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802357A4;
    }
}

loc_802357A0:
{
    goto loc_802357A8;
}

loc_802357A4:
{
    f1.d = f0.d;
}

loc_802357A8:
{
    f2.d = PPC_Fctiwz(f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24820));
    MemoryInline::FlatWriteRamFloat64((r1 + 104), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802357BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 108));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802357CC;
    }
}

loc_802357C8:
{
    goto loc_802357D0;
}

loc_802357CC:
{
    f1.d = f0.d;
}

loc_802357D0:
{
    f0.d = PPC_Fctiwz(f1.d);
    r4 = (r1 + 8);
    r3 = 0;
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801722A8u>(ctx);
    r25 = (r29 + -1);
    r24 = 0;
    goto loc_80235930;
}

loc_80235808:
{
    r3 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80171B58u>(ctx);
    r3 = r24;
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171FD0u>(ctx);
}

loc_80235824:
{
    r26 = 15;
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(0))) {
        goto loc_80235830;
    }
}

loc_8023582C:
{
    r26 = 0;
}

loc_80235830:
{
}

loc_80235834:
{
    r31 = 7;
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(0))) {
        goto loc_80235840;
    }
}

loc_8023583C:
{
    r31 = 0;
}

loc_80235840:
{
    r3 = r24;
    r4 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171F30u>(ctx);
    r3 = r24;
    r4 = 28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171F80u>(ctx);
    r5 = MemoryInline::FlatRead32((r27 + 8));
    r3 = r24;
    r4 = r24;
    r6 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = r24;
    r7 = r26;
    r4 = 15;
    r5 = 8;
    r6 = 14;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = r24;
    r7 = r31;
    r4 = 7;
    r5 = 4;
    r6 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r0 = (r25 - r24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_802358A4:
{
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = 0;
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r26 = (r26_rot_2 & 134217727);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802358C0;
    }
}

loc_802358B4:
{
}

loc_802358B8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_802358C0;
    }
}

loc_802358BC:
{
    r0 = 1;
}

loc_802358C0:
{
}

loc_802358C4:
{
    r6 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802358D0;
    }
}

loc_802358CC:
{
    r6 = 3;
}

loc_802358D0:
{
}

loc_802358D4:
{
    r0 = 0;
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_802358E8;
    }
}

loc_802358DC:
{
}

loc_802358E0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_802358E8;
    }
}

loc_802358E4:
{
    r0 = 1;
}

loc_802358E8:
{
}

loc_802358EC:
{
    r31 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802358F8;
    }
}

loc_802358F4:
{
    r31 = 3;
}

loc_802358F8:
{
    r3 = r24;
    r7 = (r26 & 255);
    r4 = 0;
    r5 = 0;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171D60u>(ctx);
    r3 = r24;
    r6 = r31;
    r7 = (r26 & 255);
    r4 = 0;
    r5 = 0;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171DB8u>(ctx);
    r24 = (r24 + 1);
}

loc_80235930:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r29));
}

loc_80235934:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80235808;
    }
}

loc_80235938:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 160);
    f26.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802354CC func_802354CC preserves=false fpr_mask=0xFC000000
