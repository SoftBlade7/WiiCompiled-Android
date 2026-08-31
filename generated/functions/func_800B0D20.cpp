#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B0D20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r26_rot_0 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800B0D20;

loc_800B0D20:
{
    MemoryInline::FlatWriteRam32((r1 + -416), r1);
    r1 = (r1 + -416);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 420), r0);
    r11 = (r1 + 416);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r0 = MemoryInline::FlatRead8((r3 + 363));
    r30 = r3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    r31 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800B0D48:
{
    r14 = r5;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B0D60;
    }
}

loc_800B0D50:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800B0D60u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800B0D60:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 139u, true, false);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 30u, (r31 + 30));
    r27 = (r14 & 1);
    MemoryInline::FlatWriteRam32((r1 + 328), r28);
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(31));
    r26 = (r26_rot_0 & 1);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 31u, (r31 + 31));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r31 + 28));
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 32u, (r31 + 32));
    MemoryInline::FlatWriteRam32((r1 + 20), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 33u, (r31 + 33));
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 216), 0, 146u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 28u, (r30 + 244), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 328));
    MemoryInline::FlatWriteRam32((r1 + 24), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 34u, (r31 + 34));
    MemoryInline::WriteResolved8(guest_range_2, 30u, (r30 + 246), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 28), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 35u, (r31 + 35));
    MemoryInline::WriteResolved8(guest_range_2, 31u, (r30 + 247), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 36u, (r31 + 36));
    MemoryInline::WriteResolved8(guest_range_2, 32u, (r30 + 248), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 36), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 37u, (r31 + 37));
    MemoryInline::WriteResolved8(guest_range_2, 33u, (r30 + 249), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 40), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 38u, (r31 + 38));
    MemoryInline::WriteResolved8(guest_range_2, 34u, (r30 + 250), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 39u, (r31 + 39));
    MemoryInline::WriteResolved8(guest_range_2, 35u, (r30 + 251), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 40u, (r31 + 40));
    MemoryInline::WriteResolved8(guest_range_2, 36u, (r30 + 252), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 52), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 41u, (r31 + 41));
    MemoryInline::WriteResolved8(guest_range_2, 37u, (r30 + 253), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 56), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 42u, (r31 + 42));
    MemoryInline::WriteResolved8(guest_range_2, 38u, (r30 + 254), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 60), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 43u, (r31 + 43));
    MemoryInline::WriteResolved8(guest_range_2, 39u, (r30 + 255), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 64), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 44u, (r31 + 44));
    MemoryInline::WriteResolved8(guest_range_2, 40u, (r30 + 256), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 68), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 45u, (r31 + 45));
    MemoryInline::WriteResolved8(guest_range_2, 41u, (r30 + 257), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::FlatWriteRam32((r1 + 72), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 46u, (r31 + 46));
    MemoryInline::WriteResolved8(guest_range_2, 42u, (r30 + 258), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 76), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 47u, (r31 + 47));
    MemoryInline::WriteResolved8(guest_range_2, 43u, (r30 + 259), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 80), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 48u, (r31 + 48));
    MemoryInline::WriteResolved8(guest_range_2, 44u, (r30 + 260), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 72));
    MemoryInline::FlatWriteRam32((r1 + 84), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 49u, (r31 + 49));
    MemoryInline::WriteResolved8(guest_range_2, 45u, (r30 + 261), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 88), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 50u, (r31 + 50));
    MemoryInline::WriteResolved8(guest_range_2, 46u, (r30 + 262), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWriteRam32((r1 + 92), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 51u, (r31 + 51));
    MemoryInline::WriteResolved8(guest_range_2, 47u, (r30 + 263), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWriteRam32((r1 + 96), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 52u, (r31 + 52));
    MemoryInline::WriteResolved8(guest_range_2, 48u, (r30 + 264), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 100), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 53u, (r31 + 53));
    MemoryInline::WriteResolved8(guest_range_2, 49u, (r30 + 265), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWriteRam32((r1 + 104), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 54u, (r31 + 54));
    MemoryInline::WriteResolved8(guest_range_2, 50u, (r30 + 266), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 108), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 55u, (r31 + 55));
    MemoryInline::WriteResolved8(guest_range_2, 51u, (r30 + 267), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam32((r1 + 112), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 56u, (r31 + 56));
    MemoryInline::WriteResolved8(guest_range_2, 52u, (r30 + 268), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::FlatWriteRam32((r1 + 116), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 57u, (r31 + 57));
    MemoryInline::WriteResolved8(guest_range_2, 53u, (r30 + 269), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 108));
    MemoryInline::FlatWriteRam32((r1 + 120), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 58u, (r31 + 58));
    MemoryInline::WriteResolved8(guest_range_2, 54u, (r30 + 270), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::FlatWriteRam32((r1 + 124), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 59u, (r31 + 59));
    MemoryInline::WriteResolved8(guest_range_2, 55u, (r30 + 271), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::FlatWriteRam32((r1 + 128), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 60u, (r31 + 60));
    MemoryInline::WriteResolved8(guest_range_2, 56u, (r30 + 272), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 120));
    MemoryInline::FlatWriteRam32((r1 + 132), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 61u, (r31 + 61));
    MemoryInline::WriteResolved8(guest_range_2, 57u, (r30 + 273), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::FlatWriteRam32((r1 + 136), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 62u, (r31 + 62));
    MemoryInline::WriteResolved8(guest_range_2, 58u, (r30 + 274), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 128));
    MemoryInline::FlatWriteRam32((r1 + 140), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 63u, (r31 + 63));
    MemoryInline::WriteResolved8(guest_range_2, 59u, (r30 + 275), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    MemoryInline::FlatWriteRam32((r1 + 144), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 64u, (r31 + 64));
    MemoryInline::WriteResolved8(guest_range_2, 60u, (r30 + 276), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 136));
    MemoryInline::FlatWriteRam32((r1 + 148), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 65u, (r31 + 65));
    MemoryInline::WriteResolved8(guest_range_2, 61u, (r30 + 277), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 140));
    MemoryInline::FlatWriteRam32((r1 + 152), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 66u, (r31 + 66));
    MemoryInline::WriteResolved8(guest_range_2, 62u, (r30 + 278), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 144));
    MemoryInline::FlatWriteRam32((r1 + 156), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 67u, (r31 + 67));
    MemoryInline::WriteResolved8(guest_range_2, 63u, (r30 + 279), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    MemoryInline::FlatWriteRam32((r1 + 160), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 68u, (r31 + 68));
    MemoryInline::WriteResolved8(guest_range_2, 64u, (r30 + 280), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 152));
    MemoryInline::FlatWriteRam32((r1 + 164), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 69u, (r31 + 69));
    MemoryInline::WriteResolved8(guest_range_2, 65u, (r30 + 281), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 156));
    MemoryInline::FlatWriteRam32((r1 + 168), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 70u, (r31 + 70));
    MemoryInline::WriteResolved8(guest_range_2, 66u, (r30 + 282), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 160));
    MemoryInline::FlatWriteRam32((r1 + 172), r28);
    r28 = MemoryInline::ReadResolved8(guest_range_1, 71u, (r31 + 71));
    MemoryInline::WriteResolved8(guest_range_2, 67u, (r30 + 283), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    MemoryInline::WriteResolved8(guest_range_2, 68u, (r30 + 284), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 168));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, r31);
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r31 + 4));
        }
    }
    r23 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r31 + 8));
    r22 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r31 + 9));
    r21 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r31 + 10));
    r20 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r31 + 11));
    r19 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r31 + 12));
    r18 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r31 + 13));
    r17 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r31 + 14));
    r16 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r31 + 15));
    r15 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r31 + 16));
    r14 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r31 + 17));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r31 + 18));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r31 + 19));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r31 + 20));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r31 + 21));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r31 + 22));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r31 + 23));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r31 + 24));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r31 + 25));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r31 + 26));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 27u, (r31 + 27));
    r29 = MemoryInline::ReadResolved8(guest_range_1, 29u, (r31 + 29));
    MemoryInline::WriteResolved8(guest_range_2, 69u, (r30 + 285), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 172));
    MemoryInline::WriteResolved8(guest_range_2, 70u, (r30 + 286), static_cast<uint8_t>(r0));
    r0 = r28;
    MemoryInline::FlatWriteRam32((r1 + 176), r28);
    MemoryInline::WriteResolved8(guest_range_2, 144u, (r30 + 360), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 145u, (r30 + 361), static_cast<uint8_t>(r26));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r30 + 216), r25);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r30 + 220), r24);
    }
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r30 + 224), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r30 + 225), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r30 + 226), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r30 + 227), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r30 + 228), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r30 + 229), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r30 + 230), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r30 + 231), static_cast<uint8_t>(r16));
    MemoryInline::WriteResolved8(guest_range_2, 16u, (r30 + 232), static_cast<uint8_t>(r15));
    MemoryInline::WriteResolved8(guest_range_2, 17u, (r30 + 233), static_cast<uint8_t>(r14));
    MemoryInline::WriteResolved8(guest_range_2, 18u, (r30 + 234), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_2, 19u, (r30 + 235), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 20u, (r30 + 236), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_2, 21u, (r30 + 237), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 22u, (r30 + 238), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 23u, (r30 + 239), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 24u, (r30 + 240), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 25u, (r30 + 241), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 26u, (r30 + 242), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 27u, (r30 + 243), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_2, 29u, (r30 + 245), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 71u, (r30 + 287), static_cast<uint8_t>(r0));
    r15 = MemoryInline::ReadResolved8(guest_range_1, 98u, (r31 + 98));
    MemoryInline::FlatWriteRam32((r1 + 332), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 99u, (r31 + 99));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 96u, (r31 + 96));
    MemoryInline::FlatWriteRam32((r1 + 180), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 100u, (r31 + 100));
    MemoryInline::FlatWriteRam32((r1 + 184), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 101u, (r31 + 101));
    MemoryInline::WriteResolved8(guest_range_2, 96u, (r30 + 312), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 332));
    MemoryInline::FlatWriteRam32((r1 + 188), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 102u, (r31 + 102));
    MemoryInline::WriteResolved8(guest_range_2, 98u, (r30 + 314), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 180));
    MemoryInline::FlatWriteRam32((r1 + 192), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 103u, (r31 + 103));
    MemoryInline::WriteResolved8(guest_range_2, 99u, (r30 + 315), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 184));
    MemoryInline::FlatWriteRam32((r1 + 196), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 104u, (r31 + 104));
    MemoryInline::WriteResolved8(guest_range_2, 100u, (r30 + 316), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 188));
    MemoryInline::FlatWriteRam32((r1 + 200), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 105u, (r31 + 105));
    MemoryInline::WriteResolved8(guest_range_2, 101u, (r30 + 317), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 192));
    MemoryInline::FlatWriteRam32((r1 + 204), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 106u, (r31 + 106));
    MemoryInline::WriteResolved8(guest_range_2, 102u, (r30 + 318), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 196));
    MemoryInline::FlatWriteRam32((r1 + 208), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 107u, (r31 + 107));
    MemoryInline::WriteResolved8(guest_range_2, 103u, (r30 + 319), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 200));
    MemoryInline::FlatWriteRam32((r1 + 212), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 108u, (r31 + 108));
    MemoryInline::WriteResolved8(guest_range_2, 104u, (r30 + 320), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 204));
    MemoryInline::FlatWriteRam32((r1 + 216), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 109u, (r31 + 109));
    MemoryInline::WriteResolved8(guest_range_2, 105u, (r30 + 321), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 208));
    MemoryInline::FlatWriteRam32((r1 + 220), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 110u, (r31 + 110));
    MemoryInline::WriteResolved8(guest_range_2, 106u, (r30 + 322), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 212));
    MemoryInline::FlatWriteRam32((r1 + 224), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 111u, (r31 + 111));
    MemoryInline::WriteResolved8(guest_range_2, 107u, (r30 + 323), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 216));
    MemoryInline::FlatWriteRam32((r1 + 228), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 112u, (r31 + 112));
    MemoryInline::WriteResolved8(guest_range_2, 108u, (r30 + 324), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 220));
    MemoryInline::FlatWriteRam32((r1 + 232), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 113u, (r31 + 113));
    MemoryInline::WriteResolved8(guest_range_2, 109u, (r30 + 325), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 224));
    MemoryInline::FlatWriteRam32((r1 + 236), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 114u, (r31 + 114));
    MemoryInline::WriteResolved8(guest_range_2, 110u, (r30 + 326), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 228));
    MemoryInline::FlatWriteRam32((r1 + 240), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 115u, (r31 + 115));
    MemoryInline::WriteResolved8(guest_range_2, 111u, (r30 + 327), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 232));
    MemoryInline::FlatWriteRam32((r1 + 244), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 116u, (r31 + 116));
    MemoryInline::WriteResolved8(guest_range_2, 112u, (r30 + 328), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 236));
    MemoryInline::FlatWriteRam32((r1 + 248), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 117u, (r31 + 117));
    MemoryInline::WriteResolved8(guest_range_2, 113u, (r30 + 329), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 240));
    MemoryInline::FlatWriteRam32((r1 + 252), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 118u, (r31 + 118));
    MemoryInline::WriteResolved8(guest_range_2, 114u, (r30 + 330), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 244));
    MemoryInline::FlatWriteRam32((r1 + 256), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 119u, (r31 + 119));
    MemoryInline::WriteResolved8(guest_range_2, 115u, (r30 + 331), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 248));
    MemoryInline::FlatWriteRam32((r1 + 260), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 120u, (r31 + 120));
    MemoryInline::WriteResolved8(guest_range_2, 116u, (r30 + 332), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 252));
    MemoryInline::FlatWriteRam32((r1 + 264), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 121u, (r31 + 121));
    MemoryInline::WriteResolved8(guest_range_2, 117u, (r30 + 333), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 256));
    MemoryInline::FlatWriteRam32((r1 + 268), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 122u, (r31 + 122));
    MemoryInline::WriteResolved8(guest_range_2, 118u, (r30 + 334), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 260));
    MemoryInline::FlatWriteRam32((r1 + 272), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 123u, (r31 + 123));
    MemoryInline::WriteResolved8(guest_range_2, 119u, (r30 + 335), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 264));
    MemoryInline::FlatWriteRam32((r1 + 276), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 124u, (r31 + 124));
    MemoryInline::WriteResolved8(guest_range_2, 120u, (r30 + 336), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 268));
    MemoryInline::FlatWriteRam32((r1 + 280), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 125u, (r31 + 125));
    MemoryInline::WriteResolved8(guest_range_2, 121u, (r30 + 337), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 272));
    MemoryInline::FlatWriteRam32((r1 + 284), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 126u, (r31 + 126));
    MemoryInline::WriteResolved8(guest_range_2, 122u, (r30 + 338), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 276));
    MemoryInline::FlatWriteRam32((r1 + 288), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 127u, (r31 + 127));
    MemoryInline::WriteResolved8(guest_range_2, 123u, (r30 + 339), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 280));
    MemoryInline::FlatWriteRam32((r1 + 292), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 128u, (r31 + 128));
    MemoryInline::WriteResolved8(guest_range_2, 124u, (r30 + 340), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 284));
    MemoryInline::FlatWriteRam32((r1 + 296), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 129u, (r31 + 129));
    MemoryInline::WriteResolved8(guest_range_2, 125u, (r30 + 341), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 288));
    MemoryInline::FlatWriteRam32((r1 + 300), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 130u, (r31 + 130));
    MemoryInline::WriteResolved8(guest_range_2, 126u, (r30 + 342), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 292));
    MemoryInline::FlatWriteRam32((r1 + 304), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 131u, (r31 + 131));
    MemoryInline::WriteResolved8(guest_range_2, 127u, (r30 + 343), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 296));
    MemoryInline::FlatWriteRam32((r1 + 308), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 132u, (r31 + 132));
    MemoryInline::WriteResolved8(guest_range_2, 128u, (r30 + 344), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 300));
    MemoryInline::FlatWriteRam32((r1 + 312), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 133u, (r31 + 133));
    MemoryInline::WriteResolved8(guest_range_2, 129u, (r30 + 345), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 304));
    MemoryInline::FlatWriteRam32((r1 + 316), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 134u, (r31 + 134));
    MemoryInline::WriteResolved8(guest_range_2, 130u, (r30 + 346), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 308));
    MemoryInline::FlatWriteRam32((r1 + 320), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 135u, (r31 + 135));
    MemoryInline::WriteResolved8(guest_range_2, 131u, (r30 + 347), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 312));
    MemoryInline::WriteResolved8(guest_range_2, 132u, (r30 + 348), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 316));
    r16 = MemoryInline::ReadResolved8(guest_range_1, 72u, (r31 + 72));
    r17 = MemoryInline::ReadResolved8(guest_range_1, 73u, (r31 + 73));
    r18 = MemoryInline::ReadResolved8(guest_range_1, 74u, (r31 + 74));
    r19 = MemoryInline::ReadResolved8(guest_range_1, 75u, (r31 + 75));
    r20 = MemoryInline::ReadResolved8(guest_range_1, 76u, (r31 + 76));
    r21 = MemoryInline::ReadResolved8(guest_range_1, 77u, (r31 + 77));
    r22 = MemoryInline::ReadResolved8(guest_range_1, 78u, (r31 + 78));
    r23 = MemoryInline::ReadResolved8(guest_range_1, 79u, (r31 + 79));
    r24 = MemoryInline::ReadResolved8(guest_range_1, 80u, (r31 + 80));
    r25 = MemoryInline::ReadResolved8(guest_range_1, 81u, (r31 + 81));
    r26 = MemoryInline::ReadResolved8(guest_range_1, 82u, (r31 + 82));
    r27 = MemoryInline::ReadResolved8(guest_range_1, 83u, (r31 + 83));
    r28 = MemoryInline::ReadResolved8(guest_range_1, 84u, (r31 + 84));
    r29 = MemoryInline::ReadResolved8(guest_range_1, 85u, (r31 + 85));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 86u, (r31 + 86));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 87u, (r31 + 87));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 88u, (r31 + 88));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 89u, (r31 + 89));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 90u, (r31 + 90));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 91u, (r31 + 91));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 92u, (r31 + 92));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 93u, (r31 + 93));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 94u, (r31 + 94));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 95u, (r31 + 95));
    r14 = MemoryInline::ReadResolved8(guest_range_1, 97u, (r31 + 97));
    MemoryInline::WriteResolved8(guest_range_2, 133u, (r30 + 349), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 320));
    MemoryInline::WriteResolved8(guest_range_2, 134u, (r30 + 350), static_cast<uint8_t>(r0));
    r0 = r15;
    MemoryInline::FlatWriteRam32((r1 + 324), r15);
    MemoryInline::WriteResolved8(guest_range_2, 72u, (r30 + 288), static_cast<uint8_t>(r16));
    MemoryInline::WriteResolved8(guest_range_2, 73u, (r30 + 289), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_2, 74u, (r30 + 290), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_2, 75u, (r30 + 291), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_2, 76u, (r30 + 292), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_2, 77u, (r30 + 293), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_2, 78u, (r30 + 294), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_2, 79u, (r30 + 295), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_2, 80u, (r30 + 296), static_cast<uint8_t>(r24));
    MemoryInline::WriteResolved8(guest_range_2, 81u, (r30 + 297), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_2, 82u, (r30 + 298), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_2, 83u, (r30 + 299), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 84u, (r30 + 300), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 85u, (r30 + 301), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 86u, (r30 + 302), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_2, 87u, (r30 + 303), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 88u, (r30 + 304), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_2, 89u, (r30 + 305), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 90u, (r30 + 306), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 91u, (r30 + 307), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 92u, (r30 + 308), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 93u, (r30 + 309), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 94u, (r30 + 310), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 95u, (r30 + 311), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_2, 97u, (r30 + 313), static_cast<uint8_t>(r14));
    MemoryInline::WriteResolved8(guest_range_2, 135u, (r30 + 351), static_cast<uint8_t>(r0));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 136u, (r31 + 136));
    r3 = (r30 + 216);
    r5 = MemoryInline::ReadResolved8(guest_range_1, 137u, (r31 + 137));
    r4 = (r1 + 12);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 138u, (r31 + 138));
    MemoryInline::WriteResolved8(guest_range_2, 136u, (r30 + 352), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 137u, (r30 + 353), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 138u, (r30 + 354), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8019BF4Cu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800B1428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B1448;
    }
}

loc_800B142C:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800B1434:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B1440;
    }
}

loc_800B1438:
{
    r3 = (r30 + 216);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8019CA80u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800B1440:
{
    r3 = 0;
    goto loc_800B147C;
}

loc_800B1448:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r30 + 20);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r4 = 0;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AFFD0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 363), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r4 = 1;
    MemoryInline::FlatWrite8((r30 + 364), static_cast<uint8_t>(r0));
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r4));
}

loc_800B147C:
{
    r11 = (r1 + 416);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 420));
    ctx->lr = r0;
    r1 = (r1 + 416);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800B0D20 func_800B0D20 preserves=true fpr_mask=0x00000000
