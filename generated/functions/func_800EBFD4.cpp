#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EBFD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r11_mdest_0 = 0;
    uint32_t r11_mdest_1 = 0;
    uint32_t r11_mdest_2 = 0;
    uint32_t r11_mrot_0 = 0;
    uint32_t r11_mrot_1 = 0;
    uint32_t r11_mrot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r12_mdest_0 = 0;
    uint32_t r12_mdest_1 = 0;
    uint32_t r12_mdest_2 = 0;
    uint32_t r12_mrot_0 = 0;
    uint32_t r12_mrot_1 = 0;
    uint32_t r12_mrot_2 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r30_mdest_0 = 0;
    uint32_t r30_mdest_1 = 0;
    uint32_t r30_mdest_2 = 0;
    uint32_t r30_mrot_0 = 0;
    uint32_t r30_mrot_1 = 0;
    uint32_t r30_mrot_2 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
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
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_800EBFD4;

loc_800EBFD4:
{
    MemoryInline::FlatWriteRam32((r1 + -1152), r1);
    r1 = (r1 + -1152);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1156), r0);
    r11 = (r1 + 1152);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    r4 = -306642944;
    r31 = r3;
    r3 = (r1 + 72);
    r4 = (r4 + -31968);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800E9FACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctr = ctx->ctr;
    r0 = 2;
    r28 = r31;
    r27 = (r1 + 8);
    ctr = r0;
}

loc_800EC00C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r28, 0, 32u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r28);
    r21 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r28 + 8));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r4 = (r4_rot_2 & 16711680);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -16777216);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r28 + 4));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r4_mrot_2 = (r4_rot_3 & 255);
    r4_mdest_2 = (r4 & -256);
    r4 = (r4_mdest_2 | r4_mrot_2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_3 & 65280);
    r0_mdest_2 = (r0 & -65281);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r22 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r28 + 12));
    r4 = (r4 | r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r3 = (r3_rot_2 & 16711680);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -16777216);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(24));
    r30 = (r30_rot_2 & 16711680);
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r29 = (r29_rot_2 & -1);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(8));
    r12 = (r12_rot_2 & -16777216);
    r23 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r28 + 16));
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(24));
    r11 = (r11_rot_2 & 16711680);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(8));
    r10 = (r10_rot_2 & -16777216);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r3_mrot_2 = (r3_rot_3 & 255);
    r3_mdest_2 = (r3 & -256);
    r3 = (r3_mdest_2 | r3_mrot_2);
    r24 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r28 + 20));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_5 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r9 = (r9_rot_2 & 16711680);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(8));
    r8 = (r8_rot_2 & -16777216);
    r25 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r28 + 24));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(24));
    r7 = (r7_rot_2 & 16711680);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(8));
    r6 = (r6_rot_2 & -16777216);
    r0 = (r3 | r0);
    r26 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r28 + 28));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(24));
    r5 = (r5_rot_2 & 16711680);
    guest_range_2 = MemoryInline::ResolveRangeHost(r27, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r27, r29);
    r29_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r29 = (r29_rot_3 & -1);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(8));
    r4 = (r4_rot_4 & -16777216);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r3 = (r3_rot_4 & 16711680);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -16777216);
    r30_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(24));
    r30_mrot_2 = (r30_rot_3 & 255);
    r30_mdest_2 = (r30 & -256);
    r30 = (r30_mdest_2 | r30_mrot_2);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(8));
    r12_mrot_2 = (r12_rot_3 & 65280);
    r12_mdest_2 = (r12 & -65281);
    r12 = (r12_mdest_2 | r12_mrot_2);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r27 + 4), r29);
    r12 = (r30 | r12);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(24));
    r11_mrot_2 = (r11_rot_3 & 255);
    r11_mdest_2 = (r11 & -256);
    r11 = (r11_mdest_2 | r11_mrot_2);
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(16));
    r12 = (r12_rot_4 & -1);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(8));
    r10_mrot_2 = (r10_rot_3 & 65280);
    r10_mdest_2 = (r10 & -65281);
    r10 = (r10_mdest_2 | r10_mrot_2);
    r10 = (r11 | r10);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r27 + 8), r12);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r10 = (r10_rot_4 & -1);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r9_mrot_2 = (r9_rot_3 & 255);
    r9_mdest_2 = (r9 & -256);
    r9 = (r9_mdest_2 | r9_mrot_2);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(8));
    r8_mrot_2 = (r8_rot_3 & 65280);
    r8_mdest_2 = (r8 & -65281);
    r8 = (r8_mdest_2 | r8_mrot_2);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r27 + 12), r10);
    r8 = (r9 | r8);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(24));
    r7_mrot_2 = (r7_rot_3 & 255);
    r7_mdest_2 = (r7 & -256);
    r7 = (r7_mdest_2 | r7_mrot_2);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r8 = (r8_rot_4 & -1);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(8));
    r6_mrot_2 = (r6_rot_3 & 65280);
    r6_mdest_2 = (r6 & -65281);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r6 = (r7 | r6);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r27 + 16), r8);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_4 & -1);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(24));
    r5_mrot_2 = (r5_rot_3 & 255);
    r5_mdest_2 = (r5 & -256);
    r5 = (r5_mdest_2 | r5_mrot_2);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(8));
    r4_mrot_3 = (r4_rot_5 & 65280);
    r4_mdest_3 = (r4 & -65281);
    r4 = (r4_mdest_3 | r4_mrot_3);
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r27 + 20), r6);
    r4 = (r5 | r4);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r3_mrot_3 = (r3_rot_5 & 255);
    r3_mdest_3 = (r3 & -256);
    r3 = (r3_mdest_3 | r3_mrot_3);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_6 & -1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
    r0_mrot_4 = (r0_rot_7 & 65280);
    r0_mdest_4 = (r0 & -65281);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r0 = (r3 | r0);
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r27 + 24), r4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & -1);
    r28 = (r28 + 32);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r27 + 28), r0);
    r27 = (r27 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800EC00C;
    }
}

loc_800EC118:
{
    r3 = (r1 + 72);
    r4 = (r1 + 8);
    r5 = 60;
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
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800EA11Cu>(ctx);
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
    r31 = ctx->gpr[31];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r31 + 60));
    r11 = (r1 + 1152);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_6 & 134217727);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 1156));
    ctx->lr = r0;
    r1 = (r1 + 1152);
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
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFE0006A gpr_write=0xFFE01FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EBFD4 func_800EBFD4 preserves=true fpr_mask=0x00000000
