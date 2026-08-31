#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052D46C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052D46C;

loc_8052D46C:
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
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
    r31 = r3;
    r20 = 0;
    r22 = 0;
    r21 = 0x809C0000u;
    goto loc_8052D4CC;
}

loc_8052D49C:
{
    r4 = (r22 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514148u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16(r3);
}

loc_8052D4B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_8052D4C8;
    }
}

loc_8052D4B4:
{
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8052D4BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8052D4C8;
    }
}

loc_8052D4C0:
{
    r0 = (r20 + 1);
    r20 = (r0 & 65535);
}

loc_8052D4C8:
{
    r22 = (r22 + 1);
}

loc_8052D4CC:
{
    r3 = MemoryInline::FlatRead32((r21 + -10520));
    r5 = (r22 & 65535);
    r4 = MemoryInline::FlatRead32((r3 + 40));
}

loc_8052D4DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8052D4E8;
    }
}

loc_8052D4E0:
{
    r0 = 0;
    goto loc_8052D4EC;
}

loc_8052D4E8:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_8052D4EC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8052D4F0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052D49C;
    }
}

loc_8052D4F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_8052D4F8:
{
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r20));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052D510;
    }
}

loc_8052D500:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & 262140);
    ctx->lr = 0x8052D508u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_8052D520;
}

loc_8052D510:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    r3 = r31;
    goto loc_8052D808;
}

loc_8052D520:
{
    r3 = 0x80890000u;
    r24 = 0;
    f31.d = MemoryInline::FlatReadFloat64((r3 + -104));
    r23 = 0;
    r26 = 0;
    r30 = 255;
    r29 = 0x80380000u;
    r28 = 1127219200;
    r27 = 0x809C0000u;
    goto loc_8052D614;
}

loc_8052D548:
{
    r4 = (r23 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514148u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32(r3);
    r22 = r3;
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8052D560:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_8052D610;
    }
}

loc_8052D564:
{
    r0 = MemoryInline::FlatRead16((r4 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8052D56C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052D610;
    }
}

loc_8052D570:
{
    r3 = 16;
    ctx->lr = 0x8052D578u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052D57C:
{
    r25 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052D5D8;
    }
}

loc_8052D584:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r26);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r26));
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam32(r3, r22);
    r4 = MemoryInline::FlatRead32(r22);
    r5 = MemoryInline::FlatRead32((r29 + 24576));
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
    r0 = (r0 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 116));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32(r22);
    r0 = MemoryInline::FlatRead16((r4 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
}

loc_8052D5D8:
{
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r26));
    r4 = MemoryInline::FlatRead32(r25);
    r3 = MemoryInline::FlatRead32((r27 + -10520));
    r5 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead8((r25 + 10));
    r5 = MemoryInline::FlatRead16((r5 + 42));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_2 & 134217727);
    ctx->lr = 0x8052D600u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80517750u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r31);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r24 = (r24 + 1);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_2, r25);
}

loc_8052D610:
{
    r23 = (r23 + 1);
}

loc_8052D614:
{
    r3 = MemoryInline::FlatRead32((r27 + -10520));
    r5 = (r23 & 65535);
    r4 = MemoryInline::FlatRead32((r3 + 40));
}

loc_8052D624:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8052D630;
    }
}

loc_8052D628:
{
    r0 = 0;
    goto loc_8052D634;
}

loc_8052D630:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_8052D634:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8052D638:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052D548;
    }
}

loc_8052D63C:
{
    r3 = 0x80890000u;
    r22 = 0;
    f31.d = MemoryInline::FlatReadFloat64((r3 + -104));
    r27 = 0x809C0000u;
    r28 = 0;
    r29 = 255;
    r30 = 0x80380000u;
    r21 = 1127219200;
    r24 = 1;
    goto loc_8052D7F4;
}

loc_8052D664:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 262140);
    r3_addr_5 = (r3 + r0);
    r23 = MemoryInline::FlatRead32(r3_addr_5);
    r26 = MemoryInline::FlatRead8((r23 + 10));
    goto loc_8052D67C;
}

loc_8052D678:
{
    r23 = r0;
}

loc_8052D67C:
{
    r0 = MemoryInline::FlatRead32((r23 + 4));
}

loc_8052D684:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052D678;
    }
}

loc_8052D688:
{
    r3 = MemoryInline::FlatRead32(r23);
}

loc_8052D690:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052D6A0;
    }
}

loc_8052D694:
{
    r3 = MemoryInline::FlatRead32(r3);
    r25 = MemoryInline::FlatRead16((r3 + 48));
    r25 = (r25 << 16);
    r25 = (static_cast<int32_t>(r25) >> 16);
    goto loc_8052D6A4;
}

loc_8052D6A0:
{
    r25 = -1;
}

loc_8052D6A4:
{
}

loc_8052D6A8:
{
    if ((static_cast<int32_t>(r25) <= static_cast<int32_t>(0))) {
        goto loc_8052D7F0;
    }
}

loc_8052D6AC:
{
    r20 = 0;
    goto loc_8052D6E4;
}

loc_8052D6B4:
{
    r4 = (r20 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514148u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8052D6C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_8052D6E0;
    }
}

loc_8052D6CC:
{
    r0 = MemoryInline::FlatRead16((r4 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8052D6D4:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(r0))) {
        goto loc_8052D6E0;
    }
}

loc_8052D6D8:
{
    r20 = r3;
    goto loc_8052D710;
}

loc_8052D6E0:
{
    r20 = (r20 + 1);
}

loc_8052D6E4:
{
    r3 = MemoryInline::FlatRead32((r27 + -10520));
    r5 = (r20 & 65535);
    r4 = MemoryInline::FlatRead32((r3 + 40));
}

loc_8052D6F4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8052D700;
    }
}

loc_8052D6F8:
{
    r0 = 0;
    goto loc_8052D704;
}

loc_8052D700:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_8052D704:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8052D708:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052D6B4;
    }
}

loc_8052D70C:
{
    r20 = 0;
}

loc_8052D710:
{
    r5 = MemoryInline::FlatRead16((r31 + 4));
    r4 = 0;
    goto loc_8052D758;
}

loc_8052D71C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 262140);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    goto loc_8052D74C;
}

loc_8052D72C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8052D734:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r20))) {
        goto loc_8052D73C;
    }
}

loc_8052D738:
{
    goto loc_8052D768;
}

loc_8052D73C:
{
    r0 = MemoryInline::FlatRead8((r3 + 14));
}

loc_8052D744:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052D754;
    }
}

loc_8052D748:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8052D74C:
{
}

loc_8052D750:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052D72C;
    }
}

loc_8052D754:
{
    r4 = (r4 + 1);
}

loc_8052D758:
{
    r0 = (r4 & 65535);
}

loc_8052D760:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_8052D71C;
    }
}

loc_8052D764:
{
    r3 = 0;
}

loc_8052D768:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052D76C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052D7DC;
    }
}

loc_8052D770:
{
    r3 = 16;
    ctx->lr = 0x8052D778u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052D77C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052D7D0;
    }
}

loc_8052D780:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r28);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r28));
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r3 + 14), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam32(r3, r20);
    r4 = MemoryInline::FlatRead32(r20);
    r5 = MemoryInline::FlatRead32((r30 + 24576));
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 16), r21);
    r0 = (r0 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 116));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r26));
}

loc_8052D7D0:
{
    MemoryInline::FlatWrite32((r23 + 4), r3);
    r23 = r3;
    goto loc_8052D7E8;
}

loc_8052D7DC:
{
    MemoryInline::FlatWrite32((r23 + 4), r3);
    MemoryInline::FlatWrite8((r23 + 14), static_cast<uint8_t>(r24));
    goto loc_8052D7F0;
}

loc_8052D7E8:
{
}

loc_8052D7EC:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(0))) {
        goto loc_8052D688;
    }
}

loc_8052D7F0:
{
    r22 = (r22 + 1);
}

loc_8052D7F4:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r3 = (r22 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8052D800:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052D664;
    }
}

loc_8052D804:
{
    r3 = r31;
}

loc_8052D808:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8052D46C func_8052D46C preserves=false fpr_mask=0x80000000
