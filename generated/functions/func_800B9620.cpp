#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B9620(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r1_addr_0 = 0;
    uint32_t r1_addr_1 = 0;
    uint32_t r1_addr_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B9620;

loc_800B9620:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 240), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 236), r31);
    r31 = r1;
    MemoryInline::FlatWriteRam32((r1 + 232), r30);
    MemoryInline::FlatWriteRam32((r1 + 228), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 224), r28);
    r28 = r4;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_800B9674;
    }
}

loc_800B9654:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 40), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 0u, (r31 + 40), f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 8u, (r31 + 48), f2.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 16u, (r31 + 56), f3.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 24u, (r31 + 64), f4.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r31 + 72), f5.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r31 + 80), f6.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r31 + 88), f7.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 56u, (r31 + 96), f8.d);
}

loc_800B9674:
{
    r30 = MemoryInline::FlatRead32((r13 + -27000));
    r11 = (r31 + 264);
    r0 = (r31 + 8);
    r12 = 33554432;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800B9688:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 108u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 20), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r31 + 24), r7);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 28), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 36), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r31 + 104), r12);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r31 + 108), r11);
    }
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r31 + 112), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B96BC;
    }
}

loc_800B96B8:
{
    goto loc_800B96D4;
}

loc_800B96BC:
{
    r3 = MemoryInline::FlatRead32((r13 + -32300));
    r0 = MemoryInline::FlatRead32(r1);
    r30 = (0 - r3);
    r30 = (r30 & -8);
    r1_addr_1 = (r1 + r30);
    MemoryInline::FlatWrite32(r1_addr_1, r0);
    r1 = r1_addr_1;
    r30 = (r1 + 8);
}

loc_800B96D4:
{
    r4 = MemoryInline::FlatRead32((r13 + -32300));
    r3 = r30;
    r5 = r28;
    r6 = (r31 + 104);
    ctx->lr = 0x800B96E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001790Cu>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -32300));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_800B96F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B96FC;
    }
}

loc_800B96F8:
{
    r3 = r0;
}

loc_800B96FC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r29, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r29);
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 116), 0, 100u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r31 + 116), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r29 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r31 + 117), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r29 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r31 + 118), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r29 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r31 + 119), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r29 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r31 + 120), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r29 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r31 + 121), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r29 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r31 + 122), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r29 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r31 + 123), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r29 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r31 + 124), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r29 + 9));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r31 + 125), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 10u, (r29 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 10u, (r31 + 126), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r29 + 11));
    MemoryInline::WriteResolved8(guest_range_3, 11u, (r31 + 127), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r29 + 12));
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r31 + 128), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 13u, (r29 + 13));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r31 + 129), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 14u, (r29 + 14));
    MemoryInline::WriteResolved8(guest_range_3, 14u, (r31 + 130), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 15u, (r29 + 15));
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r31 + 131), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 16u, (r29 + 16));
    MemoryInline::WriteResolved8(guest_range_3, 16u, (r31 + 132), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 17u, (r29 + 17));
    MemoryInline::WriteResolved8(guest_range_3, 17u, (r31 + 133), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 18u, (r29 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 18u, (r31 + 134), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 19u, (r29 + 19));
    MemoryInline::WriteResolved8(guest_range_3, 19u, (r31 + 135), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 20u, (r29 + 20));
    MemoryInline::WriteResolved8(guest_range_3, 20u, (r31 + 136), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 21u, (r29 + 21));
    MemoryInline::WriteResolved8(guest_range_3, 21u, (r31 + 137), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 22u, (r29 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 22u, (r31 + 138), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 23u, (r29 + 23));
    MemoryInline::WriteResolved8(guest_range_3, 23u, (r31 + 139), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 24u, (r29 + 24));
    MemoryInline::WriteResolved8(guest_range_3, 24u, (r31 + 140), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r29 + 25));
    MemoryInline::WriteResolved8(guest_range_3, 25u, (r31 + 141), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 26u, (r29 + 26));
    MemoryInline::WriteResolved8(guest_range_3, 26u, (r31 + 142), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 27u, (r29 + 27));
    MemoryInline::WriteResolved8(guest_range_3, 27u, (r31 + 143), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 28u, (r29 + 28));
    MemoryInline::WriteResolved8(guest_range_3, 28u, (r31 + 144), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 29u, (r29 + 29));
    MemoryInline::WriteResolved8(guest_range_3, 29u, (r31 + 145), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 30u, (r29 + 30));
    MemoryInline::WriteResolved8(guest_range_3, 30u, (r31 + 146), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 31u, (r29 + 31));
    MemoryInline::WriteResolved8(guest_range_3, 31u, (r31 + 147), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r29 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r31 + 148), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r29 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r29 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r31 + 156), r0);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r31 + 152), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 44u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r29 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r29 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r31 + 164), r0);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r31 + 160), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r29 + 52));
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r31 + 168), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r29 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r29 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r31 + 176), r0);
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r31 + 172), r4);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_2, 64u, (r29 + 64));
    MemoryInline::WriteResolved8(guest_range_3, 64u, (r31 + 180), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 65u, (r29 + 65));
    MemoryInline::WriteResolved8(guest_range_3, 65u, (r31 + 181), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 66u, (r29 + 66));
    MemoryInline::WriteResolved8(guest_range_3, 66u, (r31 + 182), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 67u, (r29 + 67));
    MemoryInline::WriteResolved8(guest_range_3, 67u, (r31 + 183), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r29 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 68u, (r31 + 184), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r29 + 72));
    MemoryInline::WriteResolved32(guest_range_3, 72u, (r31 + 188), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 76u, (r29 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r31 + 192), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 80u, (r29 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, (r31 + 196), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 84u, (r29 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 84u, (r31 + 200), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 88u, (r29 + 88));
    r5 = r3;
    MemoryInline::WriteResolved32(guest_range_3, 88u, (r31 + 204), r0);
    r4 = r30;
    r3 = (r31 + 116);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 92u, (r29 + 92));
    MemoryInline::WriteResolved32(guest_range_3, 92u, (r31 + 208), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r29 + 96));
    MemoryInline::WriteResolved32(guest_range_3, 96u, (r31 + 212), r0);
    ctx->lr = 0x800B98ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BA950u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 164));
    f31.d = f1.d;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 160));
    r3 = (r31 + 116);
    MemoryInline::FlatWriteFloat32((r29 + 44), f2.d);
    r4 = 0;
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    ctx->lr = 0x800B98CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B2EB0u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r10 = r31;
    f1.d = f31.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r31 + 240));
    r31 = MemoryInline::FlatRead32((r31 + 236));
    r30 = MemoryInline::FlatRead32((r10 + 232));
    r29 = MemoryInline::FlatRead32((r10 + 228));
    r28 = MemoryInline::FlatRead32((r10 + 224));
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r1 = r10;
    ctx->lr = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x800B9620 func_800B9620 preserves=false fpr_mask=0x80000000
