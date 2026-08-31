#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002E660(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8002E660;

loc_8002E660:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 80);
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
    r7 = 0x80270000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 3), 0, 7u, true, false);
    r31 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 3));
    r7 = (r7 + 8936);
    r0 = 1127219200;
    r7_addr_0 = (r7 + r31);
    r29 = MemoryInline::FlatRead8(r7_addr_0);
    r7 = 0x80270000u;
    r7 = (r7 + 9192);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8002E6A0:
{
    r7_addr_1 = (r7 + r31);
    r30 = MemoryInline::FlatRead8(r7_addr_1);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r27 = r4;
    r24 = r5;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002E98C;
    }
}

loc_8002E6B4:
{
    r8 = MemoryInline::ReadResolved16(guest_range_1, 5u, (r3 + 8));
    r28 = (r3 + 32);
}

loc_8002E6C0:
{
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(1))) {
        goto loc_8002E6CC;
    }
}

loc_8002E6C4:
{
    r0 = 0;
    goto loc_8002E950;
}

loc_8002E6CC:
{
    r26 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 4));
    r7 = (r26 & 32);
}

loc_8002E6D4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8002E78C;
    }
}

loc_8002E6D8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
}

loc_8002E6E0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8002E78C;
    }
}

loc_8002E6E4:
{
    r0 = (r26 & 128);
}

loc_8002E6E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002E708;
    }
}

loc_8002E6EC:
{
    r0 = (r8 + -1);
}

loc_8002E6F4:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_8002E700;
    }
}

loc_8002E6F8:
{
    r0 = (r0 & 65535);
    goto loc_8002E950;
}

loc_8002E700:
{
    r0 = (r5 & 65535);
    goto loc_8002E950;
}

loc_8002E708:
{
}

loc_8002E70C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(1))) {
        goto loc_8002E71C;
    }
}

loc_8002E710:
{
    r0 = (r8 + -1);
    r0 = (r0 & 65535);
    goto loc_8002E950;
}

loc_8002E71C:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r0 = (r8 + -1);
    r3 = (r0 ^ -2147483648);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r6 + -1);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002E76C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002E77C;
    }
}

loc_8002E770:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
}

loc_8002E77C:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    goto loc_8002E950;
}

loc_8002E78C:
{
    r0 = (r26 & 128);
}

loc_8002E790:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002E834;
    }
}

loc_8002E794:
{
    r6 = (r8 + -1);
    r0 = (r26 & 64);
}

loc_8002E79C:
{
    r4 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002E7D0;
    }
}

loc_8002E7A4:
{
}

loc_8002E7A8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8002E7C0;
    }
}

loc_8002E7AC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
}

loc_8002E7B4:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8002E7C0;
    }
}

loc_8002E7B8:
{
    r0 = (r6 & 65535);
    goto loc_8002E950;
}

loc_8002E7C0:
{
    r0 = (r4 * r6);
    r0 = (r5 - r0);
    r0 = (r0 & 65535);
    goto loc_8002E950;
}

loc_8002E7D0:
{
}

loc_8002E7D4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8002E808;
    }
}

loc_8002E7D8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
}

loc_8002E7E0:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8002E808;
    }
}

loc_8002E7E4:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002E800;
    }
}

loc_8002E7F8:
{
    r0 = 0;
    goto loc_8002E950;
}

loc_8002E800:
{
    r0 = (r6 & 65535);
    goto loc_8002E950;
}

loc_8002E808:
{
    r0 = (r4 & 1);
}

loc_8002E80C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002E820;
    }
}

loc_8002E810:
{
    r0 = (r4 * r6);
    r0 = (r5 - r0);
    r0 = (r0 & 65535);
    goto loc_8002E950;
}

loc_8002E820:
{
    r0 = (r4 + 1);
    r0 = (r6 * r0);
    r0 = (r0 - r5);
    r0 = (r0 & 65535);
    goto loc_8002E950;
}

loc_8002E834:
{
    r4 = (r6 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_8002E83C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002E874;
    }
}

loc_8002E840:
{
    r0 = (r26 & 64);
}

loc_8002E844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002E860;
    }
}

loc_8002E848:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002E86C;
    }
}

loc_8002E860:
{
    r0 = (r8 + -1);
    r0 = (r0 & 65535);
    goto loc_8002E950;
}

loc_8002E86C:
{
    r0 = 0;
    goto loc_8002E950;
}

loc_8002E874:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
    r25 = (r8 + -1);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r25 ^ -2147483648);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f31.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = (r3 * r25);
    MemoryInline::FlatWriteRam32((r1 + 12), r24);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    r0 = (r26 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002E8E8:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002E918;
    }
}

loc_8002E908:
{
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    goto loc_8002E950;
}

loc_8002E918:
{
    r0 = (r25 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002E928:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002E950;
    }
}

loc_8002E944:
{
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
}

loc_8002E950:
{
    r0 = (r0 & 65535);
    r4 = 1;
    r0 = (r29 * r0);
    r3 = (r28 + r0);
    goto loc_8002E984;
}

loc_8002E968:
{
    r0 = (r31 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002E97C;
    }
}

loc_8002E970:
{
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
}

loc_8002E97C:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 65534);
    r27 = (r27 + 1);
}

loc_8002E984:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r30));
}

loc_8002E988:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002E968;
    }
}

loc_8002E98C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
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
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF0001FF gpr_write=0xFF0009DB gpr_return=0x00000018 fpr_read=0x8000003F fpr_write=0x8000003F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8002E660 func_8002E660 preserves=false fpr_mask=0x80000000
