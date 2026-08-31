#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007A170(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8007A170;

loc_8007A170:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
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
    r31 = r4;
    r4 = 1380712448;
    r30 = r3;
    r14 = r5;
    r4 = (r4 + 22868);
    r3 = r31;
    // inline leaf 0x80084340 (10 guest instruction(s))
}

loc_inl1_0x80084340:
{
    r0 = MemoryInline::FlatRead32(r3);
    r5 = 0;
}

loc_inl1_0x8008434C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x80084360;
    }
}

loc_inl1_0x80084350:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl1_0x80084358:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65279))) {
        goto loc_inl1_0x80084360;
    }
}

loc_inl1_0x8008435C:
{
    r5 = 1;
}

loc_inl1_0x80084360:
{
    r3 = r5;
}

loc_inl1_cont_80084340:
{
    // end of inlined leaf 0x80084340
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8007A1A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8007A1B0;
    }
}

loc_8007A1A8:
{
    r3 = 0;
    goto loc_8007A4A4;
}

loc_8007A1B0:
{
    r3 = MemoryInline::FlatRead16((r31 + 6));
    r4 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
}

loc_8007A1BC:
{
    r3 = (r3 & 255);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8007A1E4;
    }
}

loc_8007A1C4:
{
    r0 = (r3 + -8);
    r3 = 0;
}

loc_8007A1D0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8007A1D8;
    }
}

loc_8007A1D4:
{
    r3 = 1;
}

loc_8007A1D8:
{
}

loc_8007A1DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007A1E4;
    }
}

loc_8007A1E0:
{
    r4 = 1;
}

loc_8007A1E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8007A1E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8007A1F4;
    }
}

loc_8007A1EC:
{
    r3 = 0;
    goto loc_8007A4A4;
}

loc_8007A1F4:
{
    r22 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r14);
    r28 = 1885405184;
    r20 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r22);
    r23 = (r28 + 25905);
    r19 = 0;
    r18 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r22);
    r17 = 0;
    r15 = 0;
    r14 = 1835073536;
    MemoryInline::FlatWriteRam32((r1 + 16), r22);
    r29 = 1954021376;
    r25 = 1651376128;
    r26 = 1819869184;
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r27 = 1735524352;
    r24 = 1718484992;
    r16 = (r31 + r0);
    goto loc_8007A494;
}

loc_8007A248:
{
    r3 = MemoryInline::FlatRead32(r16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r23));
}

loc_8007A250:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A3C4;
    }
}

loc_8007A254:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007A2C8;
    }
}

loc_8007A258:
{
    r0 = (r27 + 28721);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8007A260:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A3D0;
    }
}

loc_8007A264:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007A298;
    }
}

loc_8007A268:
{
    r0 = (r24 + 27697);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8007A270:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A360;
    }
}

loc_8007A274:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007A288;
    }
}

loc_8007A278:
{
    r0 = (r25 + 25649);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8007A280:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A370;
    }
}

loc_8007A284:
{
    goto loc_8007A488;
}

loc_8007A288:
{
    r0 = (r27 + 25905);
}

loc_8007A290:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8007A484;
    }
}

loc_8007A294:
{
    goto loc_8007A488;
}

loc_8007A298:
{
    r0 = (r26 + 29745);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8007A2A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A344;
    }
}

loc_8007A2A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007A2B8;
    }
}

loc_8007A2A8:
{
    r0 = (r27 + 29489);
}

loc_8007A2B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8007A47C;
    }
}

loc_8007A2B4:
{
    goto loc_8007A488;
}

loc_8007A2B8:
{
    r0 = (r14 + 29745);
}

loc_8007A2C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8007A368;
    }
}

loc_8007A2C4:
{
    goto loc_8007A488;
}

loc_8007A2C8:
{
    r0 = (r29 + 27697);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8007A2D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A358;
    }
}

loc_8007A2D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007A30C;
    }
}

loc_8007A2D8:
{
    r0 = (r28 + 29489);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8007A2E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A3BC;
    }
}

loc_8007A2E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007A2F8;
    }
}

loc_8007A2E8:
{
    r0 = (r28 + 28209);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8007A2F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A370;
    }
}

loc_8007A2F4:
{
    goto loc_8007A488;
}

loc_8007A2F8:
{
    r4 = 1885929472;
    r0 = (r4 + 25393);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8007A304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A370;
    }
}

loc_8007A308:
{
    goto loc_8007A488;
}

loc_8007A30C:
{
    r4 = 1970470912;
    r0 = (r4 + 25649);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8007A318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A3B4;
    }
}

loc_8007A31C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007A330;
    }
}

loc_8007A320:
{
    r0 = (r29 + 29745);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8007A328:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A370;
    }
}

loc_8007A32C:
{
    goto loc_8007A488;
}

loc_8007A330:
{
    r4 = 2003697664;
    r0 = (r4 + 25649);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8007A33C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A370;
    }
}

loc_8007A340:
{
    goto loc_8007A488;
}

loc_8007A344:
{
    f0.d = MemoryInline::FlatReadFloat32((r16 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r16 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    goto loc_8007A488;
}

loc_8007A358:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r16);
    goto loc_8007A488;
}

loc_8007A360:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r16);
    goto loc_8007A488;
}

loc_8007A368:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r16);
    goto loc_8007A488;
}

loc_8007A370:
{
    r4 = r16;
    r5 = (r1 + 8);
    ctx->lr = 0x8007A37Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8007AB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8007A380:
{
    r21 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007A488;
    }
}

loc_8007A388:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_8007A390:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8007A398;
    }
}

loc_8007A394:
{
    MemoryInline::FlatWrite32((r30 + 16), r3);
}

loc_8007A398:
{
}

loc_8007A39C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8007A3AC;
    }
}

loc_8007A3A0:
{
    r3 = r20;
    r4 = r21;
    ctx->lr = 0x8007A3ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80078C00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_8007A3AC:
{
    r19 = r21;
    goto loc_8007A488;
}

loc_8007A3B4:
{
    MemoryInline::FlatWrite32((r19 + 180), r16);
    goto loc_8007A488;
}

loc_8007A3BC:
{
    r20 = r19;
    goto loc_8007A488;
}

loc_8007A3C4:
{
    r19 = r20;
    r20 = MemoryInline::FlatRead32((r20 + 12));
    goto loc_8007A488;
}

loc_8007A3D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_8007A3D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8007A41C;
    }
}

loc_8007A3D8:
{
    r3 = MemoryInline::FlatRead32((r13 + -27280));
    r18 = 1;
    r4 = 12;
    ctx->lr = 0x8007A3E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8007A3EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A410;
    }
}

loc_8007A3F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A414;
    }
}

loc_8007A3F4:
{
    MemoryInline::FlatWrite32((r3 + 4), r22);
    r4 = (r3 + 4);
    MemoryInline::FlatWrite32((r3 + 8), r22);
    MemoryInline::FlatWrite32(r3, r22);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    goto loc_8007A414;
}

loc_8007A410:
{
    r3 = 0;
}

loc_8007A414:
{
    MemoryInline::FlatWrite32((r30 + 20), r3);
    goto loc_8007A488;
}

loc_8007A41C:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
}

loc_8007A424:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007A488;
    }
}

loc_8007A428:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(1));
}

loc_8007A42C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8007A488;
    }
}

loc_8007A430:
{
    r21 = MemoryInline::FlatRead32((r30 + 16));
    r4 = 44;
    r3 = MemoryInline::FlatRead32((r13 + -27280));
    ctx->lr = 0x8007A440u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8007A444:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A464;
    }
}

loc_8007A448:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007A468;
    }
}

loc_8007A450:
{
    r4 = r16;
    r5 = r21;
    ctx->lr = 0x8007A45Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80079980u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_8007A468;
}

loc_8007A464:
{
    r4 = 0;
}

loc_8007A468:
{
}

loc_8007A46C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007A488;
    }
}

loc_8007A470:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    ctx->lr = 0x8007A478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80079CB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    goto loc_8007A488;
}

loc_8007A47C:
{
    r17 = (r17 + 1);
    goto loc_8007A488;
}

loc_8007A484:
{
    r17 = (r17 + -1);
}

loc_8007A488:
{
    r0 = MemoryInline::FlatRead32((r16 + 4));
    r15 = (r15 + 1);
    r16 = (r16 + r0);
}

loc_8007A494:
{
    r0 = MemoryInline::FlatRead16((r31 + 14));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(r0));
}

loc_8007A49C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8007A248;
    }
}

loc_8007A4A0:
{
    r3 = 1;
}

loc_8007A4A4:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8007A170 func_8007A170 preserves=true fpr_mask=0x00000000
