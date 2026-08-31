#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BA9D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_807BAAF0_loc_0 = 0;
    uint32_t addr_lfsx_807BAB4C_loc_0 = 0;
    uint32_t addr_lfsx_807BABA0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807BA9D8;

loc_807BA9D8:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r11 = (r1 + 176);
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
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r30 = 0x808A0000u;
    r31 = MemoryInline::FlatRead8(r4);
    r26 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BAA00:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    r14 = r5;
    r28 = r6;
    r29 = r7;
    r30 = (r30 + 25320);
    r27 = (r4 + 2);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BAA30;
    }
}

loc_807BAA20:
{
    r3 = (r31 * 38);
    MemoryInline::FlatWrite32(r5, r31);
    ctx->lr = 0x807BAA2Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r14 + 4), r3);
}

loc_807BAA30:
{
    r5 = 0x809C0000u;
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r23 = 0x809C0000u;
    r18 = MemoryInline::FlatRead32((r14 + 4));
    r23 = (r23 + 13984);
    r20 = MemoryInline::FlatRead8((r4 + 14523));
    r12 = (r30 + 4);
    r19 = MemoryInline::FlatRead8((r3 + 14520));
    r8 = (r30 + 16);
    r21 = MemoryInline::FlatRead8((r5 + 14521));
    r14 = (r30 + 44);
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 76u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 68u, (r30 + 72));
    r4 = (r30 + 24);
    r3 = (r30 + 36);
    r17 = 0;
    r22 = 0;
    r0 = 1127219200;
    goto loc_807BACE0;
}

loc_807BAA7C:
{
    r5 = 0x809C0000u;
}

loc_807BAA84:
{
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r9 = 0;
    r16 = MemoryInline::FlatRead32((r23 + 12));
    r15 = MemoryInline::FlatRead32((r5 + 2944));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 60u, (r30 + 64));
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_807BAB04;
    }
}

loc_807BAA9C:
{
}

loc_807BAAA0:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_807BAB04;
    }
}

loc_807BAAA4:
{
}

loc_807BAAA8:
{
    if ((static_cast<int32_t>(r19) > static_cast<int32_t>(4))) {
        goto loc_807BAAB4;
    }
}

loc_807BAAAC:
{
    r15 = 1;
    goto loc_807BAB04;
}

loc_807BAAB4:
{
}

loc_807BAAB8:
{
    if ((static_cast<int32_t>(r19) > static_cast<int32_t>(8))) {
        goto loc_807BAB04;
    }
}

loc_807BAABC:
{
    r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 4));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    r25 = MemoryInline::FlatRead32((r12 + 4));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    r11 = MemoryInline::FlatRead32((r12 + 8));
    r10 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r30 + 16));
    r9 = MemoryInline::FlatRead16((r8 + 2));
    r7 = MemoryInline::FlatRead16((r8 + 4));
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r10));
    r10 = (r1 + 56);
    MemoryInline::FlatWriteRam32((r1 + 56), r24);
    MemoryInline::FlatWriteRam32((r1 + 60), r25);
    MemoryInline::FlatWriteRam32((r1 + 64), r11);
    addr_lfsx_807BAAF0_loc_0 = (r10 + r6);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_807BAAF0_loc_0);
    r6 = (r1 + 24);
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r9));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r7));
    r6_addr_2 = (r6 + r5);
    r9 = MemoryInline::FlatRead16(r6_addr_2);
}

loc_807BAB04:
{
}

loc_807BAB08:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(1))) {
        goto loc_807BAB18;
    }
}

loc_807BAB0C:
{
}

loc_807BAB10:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(2))) {
        goto loc_807BAB64;
    }
}

loc_807BAB14:
{
    goto loc_807BABB4;
}

loc_807BAB18:
{
    r24 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r30 + 24));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -4);
    r15 = MemoryInline::FlatRead32((r4 + 4));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(1));
    r6 = (r6_rot_5 & -2);
    r11 = MemoryInline::FlatRead32((r4 + 8));
    r5 = MemoryInline::ReadResolved16(guest_range_1, 32u, (r30 + 36));
    r10 = MemoryInline::FlatRead16((r3 + 2));
    r9 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r5));
    r5 = (r1 + 44);
    MemoryInline::FlatWriteRam32((r1 + 44), r24);
    MemoryInline::FlatWriteRam32((r1 + 48), r15);
    MemoryInline::FlatWriteRam32((r1 + 52), r11);
    addr_lfsx_807BAB4C_loc_0 = (r5 + r7);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_807BAB4C_loc_0);
    r5 = (r1 + 16);
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r10));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r9));
    r5_addr_2 = (r5 + r6);
    r9 = MemoryInline::FlatRead16(r5_addr_2);
    goto loc_807BABB4;
}

loc_807BAB64:
{
    r15 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r30 + 44));
    r7 = (r30 + 56);
    r11 = MemoryInline::FlatRead32((r14 + 4));
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r6 = (r6_rot_4 & -4);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & -2);
    r10 = MemoryInline::FlatRead32((r14 + 8));
    r16 = (r30 + 56);
    r9 = MemoryInline::ReadResolved16(guest_range_1, 52u, (r30 + 56));
    r7 = MemoryInline::FlatRead16((r7 + 2));
    r16 = MemoryInline::FlatRead16((r16 + 4));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r9));
    r9 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 32), r15);
    MemoryInline::FlatWriteRam32((r1 + 36), r11);
    MemoryInline::FlatWriteRam32((r1 + 40), r10);
    addr_lfsx_807BABA0_loc_0 = (r9 + r6);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_807BABA0_loc_0);
    r6 = (r1 + 8);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r7));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r16));
    r6_addr_4 = (r6 + r5);
    r9 = MemoryInline::FlatRead16(r6_addr_4);
}

loc_807BABB4:
{
    r6 = (r18 + r22);
    r10 = 0;
    r7 = 0;
    goto loc_807BACCC;
}

loc_807BABC4:
{
}

loc_807BABC8:
{
    r5 = MemoryInline::FlatRead8(r27);
    r27 = (r27 + 1);
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_807BABFC;
    }
}

loc_807BABD4:
{
    r5 = (r5 + r9);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword0;
}

loc_807BABFC:
{
}

loc_807BAC00:
{
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r5));
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807BACC0;
    }
}

loc_807BAC08:
{
}

loc_807BAC0C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_807BACC0;
    }
}

loc_807BAC10:
{
    r5 = (r5 & 65535);
}

loc_807BAC14:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807BACC0;
    }
}

loc_807BAC18:
{
    r5 = MemoryInline::FlatRead32((r26 + 40));
    r15 = 0;
    r11 = MemoryInline::FlatRead32(r5);
    r16 = r5;
    ctr = r11;
}

loc_807BAC30:
{
    if ((static_cast<uint32_t>(r11) <= static_cast<uint32_t>(0))) {
        goto loc_807BAC4C;
    }
}

loc_807BAC34:
{
    r11 = MemoryInline::FlatRead32((r16 + 4));
}

loc_807BAC3C:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(r11))) {
        goto loc_807BAC44;
    }
}

loc_807BAC40:
{
    r15 = 1;
}

loc_807BAC44:
{
    r16 = (r16 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807BAC34;
    }
}

loc_807BAC4C:
{
}

loc_807BAC50:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(0))) {
        goto loc_807BAC6C;
    }
}

loc_807BAC54:
{
    r15 = MemoryInline::FlatRead32(r5);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r11 = (r11_rot_3 & -4);
    r15 = (r15 + 1);
    r11 = (r5 + r11);
    MemoryInline::FlatWrite32((r11 + 4), r17);
    MemoryInline::FlatWrite32(r5, r15);
}

loc_807BAC6C:
{
    r5 = MemoryInline::FlatRead32((r26 + 44));
    r15 = 0;
    r5_addr_5 = (r5 + r7);
    r11 = MemoryInline::FlatRead32(r5_addr_5);
    r5 = r5_addr_5;
    r16 = r5;
    ctr = r11;
}

loc_807BAC84:
{
    if ((static_cast<uint32_t>(r11) <= static_cast<uint32_t>(0))) {
        goto loc_807BACA0;
    }
}

loc_807BAC88:
{
    r11 = MemoryInline::FlatRead32((r16 + 4));
}

loc_807BAC90:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(r11))) {
        goto loc_807BAC98;
    }
}

loc_807BAC94:
{
    r15 = 1;
}

loc_807BAC98:
{
    r16 = (r16 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807BAC88;
    }
}

loc_807BACA0:
{
}

loc_807BACA4:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(0))) {
        goto loc_807BACC0;
    }
}

loc_807BACA8:
{
    r15 = MemoryInline::FlatRead32(r5);
    r11_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r11 = (r11_rot_5 & -4);
    r15 = (r15 + 1);
    r11 = (r5 + r11);
    MemoryInline::FlatWrite32((r11 + 4), r17);
    MemoryInline::FlatWrite32(r5, r15);
}

loc_807BACC0:
{
    r6 = (r6 + 38);
    r7 = (r7 + 80);
    r10 = (r10 + 1);
}

loc_807BACCC:
{
}

loc_807BACD0:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r31))) {
        goto loc_807BABC4;
    }
}

loc_807BACD4:
{
    r23 = (r23 + 28);
    r22 = (r22 + 2);
    r17 = (r17 + 1);
}

loc_807BACE0:
{
    r5 = MemoryInline::FlatRead32((r1 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(r5));
}

loc_807BACE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807BAA7C;
    }
}

loc_807BACEC:
{
    r11 = (r1 + 176);
    r3 = r27;
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807BA9D8 func_807BA9D8 preserves=true fpr_mask=0x00000000
