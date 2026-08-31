#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D2730(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_10 = 0;
    uint32_t r10_rot_11 = 0;
    uint32_t r10_rot_12 = 0;
    uint32_t r10_rot_13 = 0;
    uint32_t r10_rot_14 = 0;
    uint32_t r10_rot_15 = 0;
    uint32_t r10_rot_16 = 0;
    uint32_t r10_rot_17 = 0;
    uint32_t r10_rot_18 = 0;
    uint32_t r10_rot_19 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r10_rot_9 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_10 = 0;
    uint32_t r11_rot_11 = 0;
    uint32_t r11_rot_12 = 0;
    uint32_t r11_rot_13 = 0;
    uint32_t r11_rot_14 = 0;
    uint32_t r11_rot_15 = 0;
    uint32_t r11_rot_16 = 0;
    uint32_t r11_rot_17 = 0;
    uint32_t r11_rot_18 = 0;
    uint32_t r11_rot_19 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_rot_7 = 0;
    uint32_t r11_rot_8 = 0;
    uint32_t r11_rot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_10 = 0;
    uint32_t r12_rot_11 = 0;
    uint32_t r12_rot_12 = 0;
    uint32_t r12_rot_13 = 0;
    uint32_t r12_rot_14 = 0;
    uint32_t r12_rot_15 = 0;
    uint32_t r12_rot_16 = 0;
    uint32_t r12_rot_17 = 0;
    uint32_t r12_rot_18 = 0;
    uint32_t r12_rot_19 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_10 = 0;
    uint32_t r30_rot_11 = 0;
    uint32_t r30_rot_12 = 0;
    uint32_t r30_rot_13 = 0;
    uint32_t r30_rot_14 = 0;
    uint32_t r30_rot_15 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r30_rot_6 = 0;
    uint32_t r30_rot_7 = 0;
    uint32_t r30_rot_8 = 0;
    uint32_t r30_rot_9 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_10 = 0;
    uint32_t r31_rot_11 = 0;
    uint32_t r31_rot_12 = 0;
    uint32_t r31_rot_13 = 0;
    uint32_t r31_rot_14 = 0;
    uint32_t r31_rot_15 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r31_rot_6 = 0;
    uint32_t r31_rot_7 = 0;
    uint32_t r31_rot_8 = 0;
    uint32_t r31_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_15 = 0;
    uint32_t r4_addr_16 = 0;
    uint32_t r4_addr_17 = 0;
    uint32_t r4_addr_18 = 0;
    uint32_t r4_addr_19 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_20 = 0;
    uint32_t r4_addr_21 = 0;
    uint32_t r4_addr_22 = 0;
    uint32_t r4_addr_23 = 0;
    uint32_t r4_addr_24 = 0;
    uint32_t r4_addr_25 = 0;
    uint32_t r4_addr_26 = 0;
    uint32_t r4_addr_27 = 0;
    uint32_t r4_addr_28 = 0;
    uint32_t r4_addr_29 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_30 = 0;
    uint32_t r4_addr_31 = 0;
    uint32_t r4_addr_32 = 0;
    uint32_t r4_addr_33 = 0;
    uint32_t r4_addr_34 = 0;
    uint32_t r4_addr_35 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D2730;

loc_801D2730:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 96u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r10 = 20;
    r5 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r31);
    r4 = (r1 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r30);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r29);
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 84u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 8));
            r8 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 16));
            r11 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 20));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 28));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r3 + 36));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r3 + 40));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r3 + 44));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r3 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r3 + 52));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r3 + 56));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r3 + 60));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r3 + 64));
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r3 + 68));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r3 + 72));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r3 + 76));
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r11);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r3 + 80));
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r11);
    ctr = r10;
}

loc_801D27E4:
{
    r11 = (r6 & r7);
    r10 = (r8 & ~r6);
    r10 = (r11 | r10);
}

loc_801D27F4:
{
    r29 = (r10 + 1518469120);
    r29 = (r29 + 31129);
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(16))) {
        goto loc_801D2848;
    }
}

loc_801D2800:
{
    r30 = (r5 + -3);
    r12 = (r5 + -8);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r31 = (r31_rot_2 & 60);
    r11 = (r5 + -16);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r30 = (r30_rot_2 & 60);
    r10 = (r5 + -14);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r12 = (r12_rot_2 & 60);
    r4_addr_2 = (r4 + r31);
    r31 = MemoryInline::FlatRead32(r4_addr_2);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r11 = (r11_rot_2 & 60);
    r4_addr_3 = (r4 + r30);
    r30 = MemoryInline::FlatRead32(r4_addr_3);
    r4_addr_4 = (r4 + r12);
    r12 = MemoryInline::FlatRead32(r4_addr_4);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r10 = (r10_rot_2 & 60);
    r4_addr_5 = (r4 + r11);
    r11 = MemoryInline::FlatRead32(r4_addr_5);
    r30 = (r31 ^ r30);
    r11 = (r12 ^ r11);
    r11 = (r30 ^ r11);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_3 & -1);
    r4_addr_6 = (r4 + r10);
    MemoryInline::FlatWrite32(r4_addr_6, r11);
}

loc_801D2848:
{
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r10 = (r10_rot_4 & 60);
    r9 = (r29 + r9);
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r12 = (r12_rot_4 & -1);
    r4_addr_8 = (r4 + r10);
    r11 = MemoryInline::FlatRead32(r4_addr_8);
    r10 = (r12 + r9);
    r9 = r8;
    r29 = (r11 + r10);
    r8 = r7;
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r7 = (r7_rot_2 & -1);
    r6 = r0;
    r0 = r29;
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D27E4;
    }
}

loc_801D287C:
{
    r10 = (40 - r5);
    r4 = (r1 + 8);
    ctr = r10;
}

loc_801D288C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(40))) {
        goto loc_801D2924;
    }
}

loc_801D2890:
{
    r10 = (r8 ^ r6);
}

loc_801D2898:
{
    r10 = (r10 ^ r7);
    r29 = (r10 + 1859780608);
    r29 = (r29 + -5215);
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(16))) {
        goto loc_801D28F0;
    }
}

loc_801D28A8:
{
    r30 = (r5 + -3);
    r12 = (r5 + -8);
    r31_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r31 = (r31_rot_5 & 60);
    r11 = (r5 + -16);
    r30_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r30 = (r30_rot_5 & 60);
    r10 = (r5 + -14);
    r12_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r12 = (r12_rot_6 & 60);
    r4_addr_10 = (r4 + r31);
    r31 = MemoryInline::FlatRead32(r4_addr_10);
    r11_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r11 = (r11_rot_6 & 60);
    r4_addr_11 = (r4 + r30);
    r30 = MemoryInline::FlatRead32(r4_addr_11);
    r4_addr_12 = (r4 + r12);
    r12 = MemoryInline::FlatRead32(r4_addr_12);
    r10_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r10 = (r10_rot_6 & 60);
    r4_addr_13 = (r4 + r11);
    r11 = MemoryInline::FlatRead32(r4_addr_13);
    r30 = (r31 ^ r30);
    r11 = (r12 ^ r11);
    r11 = (r30 ^ r11);
    r11_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_7 & -1);
    r4_addr_14 = (r4 + r10);
    MemoryInline::FlatWrite32(r4_addr_14, r11);
}

loc_801D28F0:
{
    r10_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r10 = (r10_rot_8 & 60);
    r9 = (r29 + r9);
    r12_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r12 = (r12_rot_8 & -1);
    r4_addr_16 = (r4 + r10);
    r11 = MemoryInline::FlatRead32(r4_addr_16);
    r10 = (r12 + r9);
    r9 = r8;
    r29 = (r11 + r10);
    r8 = r7;
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r7 = (r7_rot_4 & -1);
    r6 = r0;
    r0 = r29;
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D2890;
    }
}

loc_801D2924:
{
    r10 = (60 - r5);
    r4 = (r1 + 8);
    ctr = r10;
}

loc_801D2934:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(60))) {
        goto loc_801D29D4;
    }
}

loc_801D2938:
{
    r10 = (r7 | r8);
    r11 = (r7 & r8);
    r10 = (r6 & r10);
}

loc_801D2948:
{
    r10 = (r11 | r10);
    r29 = (r10 + -1893990400);
    r29 = (r29 + -17188);
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(16))) {
        goto loc_801D29A0;
    }
}

loc_801D2958:
{
    r30 = (r5 + -3);
    r12 = (r5 + -8);
    r31_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r31 = (r31_rot_9 & 60);
    r11 = (r5 + -16);
    r30_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r30 = (r30_rot_9 & 60);
    r10 = (r5 + -14);
    r12_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r12 = (r12_rot_11 & 60);
    r4_addr_19 = (r4 + r31);
    r31 = MemoryInline::FlatRead32(r4_addr_19);
    r11_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r11 = (r11_rot_11 & 60);
    r4_addr_20 = (r4 + r30);
    r30 = MemoryInline::FlatRead32(r4_addr_20);
    r4_addr_21 = (r4 + r12);
    r12 = MemoryInline::FlatRead32(r4_addr_21);
    r10_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r10 = (r10_rot_11 & 60);
    r4_addr_22 = (r4 + r11);
    r11 = MemoryInline::FlatRead32(r4_addr_22);
    r30 = (r31 ^ r30);
    r11 = (r12 ^ r11);
    r11 = (r30 ^ r11);
    r11_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_12 & -1);
    r4_addr_23 = (r4 + r10);
    MemoryInline::FlatWrite32(r4_addr_23, r11);
}

loc_801D29A0:
{
    r10_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r10 = (r10_rot_13 & 60);
    r9 = (r29 + r9);
    r12_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r12 = (r12_rot_13 & -1);
    r4_addr_25 = (r4 + r10);
    r11 = MemoryInline::FlatRead32(r4_addr_25);
    r10 = (r12 + r9);
    r9 = r8;
    r29 = (r11 + r10);
    r8 = r7;
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r7 = (r7_rot_7 & -1);
    r6 = r0;
    r0 = r29;
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D2938;
    }
}

loc_801D29D4:
{
    r10 = (80 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(80) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4 = (r1 + 8);
    ctr = r10;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(80));
}

loc_801D29E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D2A7C;
    }
}

loc_801D29E8:
{
    r10 = (r8 ^ r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(16));
}

loc_801D29F0:
{
    r10 = (r10 ^ r7);
    r29 = (r10 + -899481600);
    r29 = (r29 + -15914);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801D2A48;
    }
}

loc_801D2A00:
{
    r30 = (r5 + -3);
    r12 = (r5 + -8);
    r30_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r30 = (r30_rot_13 & 60);
    r11 = (r5 + -16);
    r31_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r31 = (r31_rot_13 & 60);
    r10 = (r5 + -14);
    r12_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r12 = (r12_rot_16 & 60);
    r4_addr_28 = (r4 + r30);
    r30 = MemoryInline::FlatRead32(r4_addr_28);
    r11_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r11 = (r11_rot_16 & 60);
    r4_addr_29 = (r4 + r31);
    r31 = MemoryInline::FlatRead32(r4_addr_29);
    r4_addr_30 = (r4 + r12);
    r12 = MemoryInline::FlatRead32(r4_addr_30);
    r10_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r10 = (r10_rot_16 & 60);
    r4_addr_31 = (r4 + r11);
    r11 = MemoryInline::FlatRead32(r4_addr_31);
    r31 = (r30 ^ r31);
    r11 = (r12 ^ r11);
    r11 = (r31 ^ r11);
    r11_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_17 & -1);
    r4_addr_32 = (r4 + r10);
    MemoryInline::FlatWrite32(r4_addr_32, r11);
}

loc_801D2A48:
{
    r10_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r10 = (r10_rot_18 & 60);
    r9 = (r29 + r9);
    r12_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r12 = (r12_rot_18 & -1);
    r4_addr_34 = (r4 + r10);
    r11 = MemoryInline::FlatRead32(r4_addr_34);
    r10 = (r12 + r9);
    r9 = r8;
    r29 = (r11 + r10);
    r8 = r7;
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r7 = (r7_rot_10 & -1);
    r6 = r0;
    r0 = r29;
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D29E8;
    }
}

loc_801D2A7C:
{
    r4 = MemoryInline::FlatRead32(r3);
    r10 = MemoryInline::FlatRead32((r3 + 4));
    r11 = (r4 + r0);
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r6 = (r10 + r6);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r5 = (r5 + r7);
    r4 = (r4 + r8);
    MemoryInline::FlatWrite32(r3, r11);
    r0 = (r0 + r9);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D2730 func_801D2730 preserves=true fpr_mask=0x00000000
