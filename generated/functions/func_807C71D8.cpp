#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C71D8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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

    goto loc_807C71D8;

loc_807C71D8:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 40), r14);
    MemoryInline::FlatWriteRam32((r1 + 44), r15);
    MemoryInline::FlatWriteRam32((r1 + 48), r16);
    MemoryInline::FlatWriteRam32((r1 + 52), r17);
    MemoryInline::FlatWriteRam32((r1 + 56), r18);
    MemoryInline::FlatWriteRam32((r1 + 60), r19);
    MemoryInline::FlatWriteRam32((r1 + 64), r20);
    MemoryInline::FlatWriteRam32((r1 + 68), r21);
    MemoryInline::FlatWriteRam32((r1 + 72), r22);
    MemoryInline::FlatWriteRam32((r1 + 76), r23);
    MemoryInline::FlatWriteRam32((r1 + 80), r24);
    MemoryInline::FlatWriteRam32((r1 + 84), r25);
    MemoryInline::FlatWriteRam32((r1 + 88), r26);
    MemoryInline::FlatWriteRam32((r1 + 92), r27);
    MemoryInline::FlatWriteRam32((r1 + 96), r28);
    MemoryInline::FlatWriteRam32((r1 + 100), r29);
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r16 = 0x808A0000u;
    r16 = (r16 + 29320);
    r18 = (r3 + 15800);
    r15 = (r16 + 205);
    MemoryInline::FlatWriteRam32((r1 + 36), r15);
    r15 = (r16 + 212);
    r0 = (r16 + 191);
    MemoryInline::FlatWriteRam32((r1 + 8), r15);
    r15 = (r16 + 220);
    r17 = (r16 + 9);
    r19 = (r16 + 16);
    MemoryInline::FlatWriteRam32((r1 + 12), r15);
    r15 = (r16 + 229);
    r20 = (r16 + 23);
    r21 = (r16 + 32);
    MemoryInline::FlatWriteRam32((r1 + 16), r15);
    r15 = (r16 + 238);
    r22 = (r16 + 39);
    r23 = (r16 + 46);
    MemoryInline::FlatWriteRam32((r1 + 20), r15);
    r15 = (r16 + 247);
    r24 = (r16 + 55);
    r25 = (r16 + 60);
    MemoryInline::FlatWriteRam32((r1 + 24), r15);
    r15 = (r16 + 256);
    r26 = (r16 + 67);
    r27 = (r16 + 74);
    MemoryInline::FlatWriteRam32((r1 + 28), r15);
    r15 = (r16 + 266);
    r28 = (r16 + 83);
    r29 = (r16 + 90);
    MemoryInline::FlatWriteRam32((r1 + 32), r15);
    r30 = (r16 + 97);
    r31 = (r16 + 106);
    r12 = (r16 + 113);
    r11 = (r16 + 118);
    r10 = (r16 + 126);
    r9 = (r16 + 137);
    r8 = (r16 + 148);
    guest_range_0 = MemoryInline::ResolveRangeHost((r18 + 4), 0, 140u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r18 + 100), r0);
    r7 = (r16 + 155);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r6 = (r16 + 162);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r18 + 108), r0);
    r5 = (r16 + 169);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r16 + 175);
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r18 + 112), r0);
    r14 = (r16 + 198);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r15 = (r16 + 276);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r18 + 116), r0);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r18 + 120), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r18 + 124), r0);
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r18 + 128), r0);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r18 + 132), r0);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r3 + 15800), r16);
    r3 = (r16 + 183);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r18 + 4), r17);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r18 + 8), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r18 + 12), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r18 + 16), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r18 + 20), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r18 + 24), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r18 + 28), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r18 + 32), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r18 + 36), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r18 + 40), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r18 + 44), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r18 + 48), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r18 + 52), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r18 + 56), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r18 + 60), r12);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r18 + 64), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r18 + 68), r10);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r18 + 72), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r18 + 76), r8);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r18 + 80), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r18 + 84), r6);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r18 + 88), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r18 + 92), r4);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r18 + 96), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r18 + 104), r14);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r18 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r18 + 140), r15);
    }
    r14 = MemoryInline::FlatRead32((r1 + 40));
    r15 = MemoryInline::FlatRead32((r1 + 44));
    r16 = MemoryInline::FlatRead32((r1 + 48));
    r17 = MemoryInline::FlatRead32((r1 + 52));
    r18 = MemoryInline::FlatRead32((r1 + 56));
    r19 = MemoryInline::FlatRead32((r1 + 60));
    r20 = MemoryInline::FlatRead32((r1 + 64));
    r21 = MemoryInline::FlatRead32((r1 + 68));
    r22 = MemoryInline::FlatRead32((r1 + 72));
    r23 = MemoryInline::FlatRead32((r1 + 76));
    r24 = MemoryInline::FlatRead32((r1 + 80));
    r25 = MemoryInline::FlatRead32((r1 + 84));
    r26 = MemoryInline::FlatRead32((r1 + 88));
    r27 = MemoryInline::FlatRead32((r1 + 92));
    r28 = MemoryInline::FlatRead32((r1 + 96));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r1 = (r1 + 112);
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFC002 gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807C71D8 func_807C71D8 preserves=true fpr_mask=0x00000000
