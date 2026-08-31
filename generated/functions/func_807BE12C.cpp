#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BE12C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807BE12C;

loc_807BE12C:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
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
    f0.d = MemoryInline::FlatReadFloat32(r4);
    r15 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r16 = r5;
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 36u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r3 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r3 + 28));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f4.d = PPC_Fctiwz(f5.d);
    f2.d = PPC_Fctiwz(f3.d);
    fctiwzword0 = PPC_FprLowWordInline(f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f4.d);
    f0.d = PPC_Fctiwz(f0.d);
    r29 = fctiwzword0;
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f2.d);
}

loc_807BE194:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r28 = MemoryInline::FlatRead32((r1 + 44));
    r27 = MemoryInline::FlatRead32((r1 + 52));
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_807BE1A8;
    }
}

loc_807BE1A4:
{
    r29 = 0;
}

loc_807BE1A8:
{
}

loc_807BE1AC:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_807BE1B4;
    }
}

loc_807BE1B0:
{
    r28 = 0;
}

loc_807BE1B4:
{
}

loc_807BE1B8:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_807BE1C0;
    }
}

loc_807BE1BC:
{
    r27 = 0;
}

loc_807BE1C0:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r3 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r3 + 28));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = PPC_Fctiwz(f4.d);
    r0 = ~(r0 | r0);
    f1.d = PPC_Fctiwz(f2.d);
    fctiwzword1 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f3.d);
    f0.d = PPC_Fctiwz(f0.d);
    r26 = fctiwzword1;
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f1.d);
}

loc_807BE214:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r25 = MemoryInline::FlatRead32((r1 + 68));
    r24 = MemoryInline::FlatRead32((r1 + 76));
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(r0))) {
        goto loc_807BE228;
    }
}

loc_807BE224:
{
    r26 = r0;
}

loc_807BE228:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 36));
    r0 = ~(r0 | r0);
}

loc_807BE234:
{
    if ((static_cast<int32_t>(r25) <= static_cast<int32_t>(r0))) {
        goto loc_807BE23C;
    }
}

loc_807BE238:
{
    r25 = r0;
}

loc_807BE23C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 40));
    r0 = ~(r0 | r0);
}

loc_807BE248:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r0))) {
        goto loc_807BE250;
    }
}

loc_807BE24C:
{
    r24 = r0;
}

loc_807BE250:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r26));
}

loc_807BE254:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807BE3AC;
    }
}

loc_807BE258:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r25));
}

loc_807BE25C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807BE3AC;
    }
}

loc_807BE260:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r24));
}

loc_807BE264:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807BE26C;
    }
}

loc_807BE268:
{
    goto loc_807BE3AC;
}

loc_807BE26C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 44));
    r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 12));
    r0 = PPC_Srw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r3 = (31 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r23 = PPC_Srw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r4));
    r0 = PPC_Srw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r4));
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r22 = PPC_Srw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r4));
    r21 = PPC_Srw(static_cast<uint32_t>(r27), static_cast<uint32_t>(r4));
    r20 = PPC_Srw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r4));
    r19 = MemoryInline::FlatRead32((r1 + 84));
    r29 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r3));
    r28 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r3));
    r27 = PPC_Slw(static_cast<uint32_t>(r27), static_cast<uint32_t>(r3));
    r26 = PPC_Slw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r3));
    r25 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r3));
    r24 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r3));
    goto loc_807BE3A4;
}

loc_807BE2B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r18 = MemoryInline::FlatRead32((r1 + 80));
    r3 = (r19 - r0);
    r0 = (r0 - r19);
    r31 = ~(r3 | r0);
    goto loc_807BE398;
}

loc_807BE2D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 80));
    r17 = r21;
    r3 = (r18 - r0);
    r0 = (r0 - r18);
    r30 = ~(r3 | r0);
    goto loc_807BE38C;
}

loc_807BE2E8:
{
    r3 = MemoryInline::FlatRead32((r15 + 52));
}

loc_807BE2F0:
{
    r0 = MemoryInline::FlatRead32((r15 + 48));
    r11 = -1;
    r3 = PPC_Slw(static_cast<uint32_t>(r17), static_cast<uint32_t>(r3));
    r3 = (r19 | r3);
    r0 = PPC_Slw(static_cast<uint32_t>(r18), static_cast<uint32_t>(r0));
    r0 = (r3 | r0);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_4 & -4);
    if ((static_cast<uint32_t>(r17) != static_cast<uint32_t>(r20))) {
        goto loc_807BE314;
    }
}

loc_807BE310:
{
    r11 = r24;
}

loc_807BE314:
{
}

loc_807BE318:
{
    r0 = -1;
    if ((static_cast<uint32_t>(r18) != static_cast<uint32_t>(r22))) {
        goto loc_807BE324;
    }
}

loc_807BE320:
{
    r0 = r25;
}

loc_807BE324:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r19), static_cast<uint32_t>(r23));
}

loc_807BE328:
{
    r10 = -1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BE334;
    }
}

loc_807BE330:
{
    r10 = r26;
}

loc_807BE334:
{
    r4 = MemoryInline::FlatRead32(r16);
    r7 = (r17 - r21);
    r3 = MemoryInline::FlatRead32((r16 + 4));
    r6 = (r21 - r17);
    r9 = MemoryInline::FlatRead32((r16 + 8));
    r6 = ~(r7 | r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r8 = (static_cast<int32_t>(r6) >> 31);
    r7 = (static_cast<int32_t>(r30) >> 31);
    r4 = r14;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r31);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r31) >> 31);
    r3 = r15;
    MemoryInline::FlatWriteRam32((r1 + 24), r9);
    r9 = (r27 & r8);
    r8 = (r28 & r7);
    r7 = (r29 & r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 12), r11);
    ctx->lr = 0x807BE388u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BE3C4u>(ctx);
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r17 = (r17 + 1);
}

loc_807BE38C:
{
}

loc_807BE390:
{
    if ((static_cast<uint32_t>(r17) <= static_cast<uint32_t>(r20))) {
        goto loc_807BE2E8;
    }
}

loc_807BE394:
{
    r18 = (r18 + 1);
}

loc_807BE398:
{
}

loc_807BE39C:
{
    if ((static_cast<uint32_t>(r18) <= static_cast<uint32_t>(r22))) {
        goto loc_807BE2D0;
    }
}

loc_807BE3A0:
{
    r19 = (r19 + 1);
}

loc_807BE3A4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r19), static_cast<uint32_t>(r23));
}

loc_807BE3A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807BE2B8;
    }
}

loc_807BE3AC:
{
    r11 = (r1 + 160);
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
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807BE12C func_807BE12C preserves=true fpr_mask=0x00000000
