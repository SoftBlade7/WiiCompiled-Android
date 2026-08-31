#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80511500(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80511500;

loc_80511500:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r18 = r6;
    r26 = r7;
    r27 = r8;
    r29 = 0;
    r28 = 0;
    goto loc_8051154C;
}

loc_80511538:
{
    r3 = r23;
    r4 = (r29 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80515C24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r28));
    r29 = (r29 + 1);
}

loc_8051154C:
{
    r4 = MemoryInline::FlatRead32((r23 + 32));
    r3 = (r29 & 65535);
}

loc_80511558:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80511564;
    }
}

loc_8051155C:
{
    r0 = 0;
    goto loc_80511568;
}

loc_80511564:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_80511568:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8051156C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80511538;
    }
}

loc_80511570:
{
    r3 = r23;
    r4 = r18;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80515C24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r30 = r3;
    r4 = r25;
    r5 = r26;
    r29 = -1;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80510D7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r4 = 1;
    r0 = MemoryInline::FlatRead16((r30 + 24));
    r31 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r24));
}

loc_805115A0:
{
    r0 = (r0 | r31);
    MemoryInline::FlatWrite16((r30 + 24), static_cast<uint16_t>(r0));
    r28 = 0;
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_805115B4;
    }
}

loc_805115B0:
{
    r28 = 6;
}

loc_805115B4:
{
}

loc_805115B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805115D0;
    }
}

loc_805115BC:
{
}

loc_805115C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_805115DC;
    }
}

loc_805115C4:
{
}

loc_805115C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80511A50;
    }
}

loc_805115CC:
{
    goto loc_80511C7C;
}

loc_805115D0:
{
    r0 = MemoryInline::FlatRead16((r30 + 26));
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80511C7C;
}

loc_805115DC:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32(r26);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -1832));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805115EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80511820;
    }
}

loc_805115F0:
{
    r20 = r30;
    r21 = 0;
    goto loc_80511648;
}

loc_805115FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r0));
}

loc_80511600:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r6 = 1;
    r7 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80511620;
    }
}

loc_80511618:
{
    r8 = MemoryInline::FlatRead32((r20 + 56));
    goto loc_80511624;
}

loc_80511620:
{
    r8 = 0;
}

loc_80511624:
{
    r9 = r26;
    r10 = r28;
    ctx->lr = 0x80511630u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_8051163C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511654;
    }
}

loc_80511640:
{
    r20 = (r20 + 24);
    r21 = (r21 + 1);
}

loc_80511648:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_80511650:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r0))) {
        goto loc_805115FC;
    }
}

loc_80511654:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_8051165C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_805117AC;
    }
}

loc_80511660:
{
    r20 = r30;
    r19 = 0;
    goto loc_805116F4;
}

loc_8051166C:
{
}

loc_80511670:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(r0))) {
        goto loc_8051167C;
    }
}

loc_80511674:
{
    r22 = MemoryInline::FlatRead32((r20 + 56));
    goto loc_80511680;
}

loc_8051167C:
{
    r22 = 0;
}

loc_80511680:
{
    r21 = r22;
    r18 = 0;
    goto loc_805116E0;
}

loc_8051168C:
{
}

loc_80511690:
{
    if ((static_cast<int32_t>(r18) >= static_cast<int32_t>(r0))) {
        goto loc_8051169C;
    }
}

loc_80511694:
{
    r8 = MemoryInline::FlatRead32((r21 + 32));
    goto loc_805116A0;
}

loc_8051169C:
{
    r8 = 0;
}

loc_805116A0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r30));
}

loc_805116A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805116D8;
    }
}

loc_805116A8:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r9 = r26;
    r10 = r28;
    r6 = 1;
    r7 = 1;
    ctx->lr = 0x805116C8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_805116D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_805116EC;
    }
}

loc_805116D8:
{
    r21 = (r21 + 4);
    r18 = (r18 + 1);
}

loc_805116E0:
{
    r0 = MemoryInline::FlatRead16((r22 + 6));
}

loc_805116E8:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_8051168C;
    }
}

loc_805116EC:
{
    r20 = (r20 + 24);
    r19 = (r19 + 1);
}

loc_805116F4:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_805116FC:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_8051166C;
    }
}

loc_80511700:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80511708:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_805117AC;
    }
}

loc_8051170C:
{
    r20 = r30;
    r18 = 0;
    goto loc_805117A0;
}

loc_80511718:
{
}

loc_8051171C:
{
    if ((static_cast<int32_t>(r18) >= static_cast<int32_t>(r0))) {
        goto loc_80511728;
    }
}

loc_80511720:
{
    r22 = MemoryInline::FlatRead32((r20 + 32));
    goto loc_8051172C;
}

loc_80511728:
{
    r22 = 0;
}

loc_8051172C:
{
    r21 = r22;
    r19 = 0;
    goto loc_8051178C;
}

loc_80511738:
{
}

loc_8051173C:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(r0))) {
        goto loc_80511748;
    }
}

loc_80511740:
{
    r8 = MemoryInline::FlatRead32((r21 + 56));
    goto loc_8051174C;
}

loc_80511748:
{
    r8 = 0;
}

loc_8051174C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r30));
}

loc_80511750:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80511784;
    }
}

loc_80511754:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r9 = r26;
    r10 = r28;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x80511774u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_80511780:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511798;
    }
}

loc_80511784:
{
    r21 = (r21 + 24);
    r19 = (r19 + 1);
}

loc_8051178C:
{
    r0 = MemoryInline::FlatRead16((r22 + 4));
}

loc_80511794:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_80511738;
    }
}

loc_80511798:
{
    r20 = (r20 + 4);
    r18 = (r18 + 1);
}

loc_805117A0:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_805117A8:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_80511718;
    }
}

loc_805117AC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_805117B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511C7C;
    }
}

loc_805117B8:
{
    r20 = r30;
    r18 = 0;
    goto loc_80511810;
}

loc_805117C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(r0));
}

loc_805117C8:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r6 = 1;
    r7 = 1;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805117E8;
    }
}

loc_805117E0:
{
    r8 = MemoryInline::FlatRead32((r20 + 32));
    goto loc_805117EC;
}

loc_805117E8:
{
    r8 = 0;
}

loc_805117EC:
{
    r9 = r26;
    r10 = r28;
    ctx->lr = 0x805117F8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_80511804:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511C7C;
    }
}

loc_80511808:
{
    r20 = (r20 + 4);
    r18 = (r18 + 1);
}

loc_80511810:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_80511818:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_805117C4;
    }
}

loc_8051181C:
{
    goto loc_80511C7C;
}

loc_80511820:
{
    r20 = r30;
    r18 = 0;
    goto loc_80511878;
}

loc_8051182C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(r0));
}

loc_80511830:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r6 = 1;
    r7 = 1;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80511850;
    }
}

loc_80511848:
{
    r8 = MemoryInline::FlatRead32((r20 + 32));
    goto loc_80511854;
}

loc_80511850:
{
    r8 = 0;
}

loc_80511854:
{
    r9 = r26;
    r10 = r28;
    ctx->lr = 0x80511860u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_8051186C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511884;
    }
}

loc_80511870:
{
    r20 = (r20 + 4);
    r18 = (r18 + 1);
}

loc_80511878:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_80511880:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_8051182C;
    }
}

loc_80511884:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_8051188C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_805119DC;
    }
}

loc_80511890:
{
    r20 = r30;
    r18 = 0;
    goto loc_80511924;
}

loc_8051189C:
{
}

loc_805118A0:
{
    if ((static_cast<int32_t>(r18) >= static_cast<int32_t>(r0))) {
        goto loc_805118AC;
    }
}

loc_805118A4:
{
    r22 = MemoryInline::FlatRead32((r20 + 32));
    goto loc_805118B0;
}

loc_805118AC:
{
    r22 = 0;
}

loc_805118B0:
{
    r21 = r22;
    r19 = 0;
    goto loc_80511910;
}

loc_805118BC:
{
}

loc_805118C0:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(r0))) {
        goto loc_805118CC;
    }
}

loc_805118C4:
{
    r8 = MemoryInline::FlatRead32((r21 + 56));
    goto loc_805118D0;
}

loc_805118CC:
{
    r8 = 0;
}

loc_805118D0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r30));
}

loc_805118D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80511908;
    }
}

loc_805118D8:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r9 = r26;
    r10 = r28;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x805118F8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_80511904:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_8051191C;
    }
}

loc_80511908:
{
    r21 = (r21 + 24);
    r19 = (r19 + 1);
}

loc_80511910:
{
    r0 = MemoryInline::FlatRead16((r22 + 4));
}

loc_80511918:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_805118BC;
    }
}

loc_8051191C:
{
    r20 = (r20 + 4);
    r18 = (r18 + 1);
}

loc_80511924:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_8051192C:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_8051189C;
    }
}

loc_80511930:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80511938:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_805119DC;
    }
}

loc_8051193C:
{
    r20 = r30;
    r18 = 0;
    goto loc_805119D0;
}

loc_80511948:
{
}

loc_8051194C:
{
    if ((static_cast<int32_t>(r18) >= static_cast<int32_t>(r0))) {
        goto loc_80511958;
    }
}

loc_80511950:
{
    r22 = MemoryInline::FlatRead32((r20 + 56));
    goto loc_8051195C;
}

loc_80511958:
{
    r22 = 0;
}

loc_8051195C:
{
    r21 = r22;
    r19 = 0;
    goto loc_805119BC;
}

loc_80511968:
{
}

loc_8051196C:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(r0))) {
        goto loc_80511978;
    }
}

loc_80511970:
{
    r8 = MemoryInline::FlatRead32((r21 + 32));
    goto loc_8051197C;
}

loc_80511978:
{
    r8 = 0;
}

loc_8051197C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r30));
}

loc_80511980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805119B4;
    }
}

loc_80511984:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r9 = r26;
    r10 = r28;
    r6 = 1;
    r7 = 1;
    ctx->lr = 0x805119A4u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_805119B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_805119C8;
    }
}

loc_805119B4:
{
    r21 = (r21 + 4);
    r19 = (r19 + 1);
}

loc_805119BC:
{
    r0 = MemoryInline::FlatRead16((r22 + 6));
}

loc_805119C4:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_80511968;
    }
}

loc_805119C8:
{
    r20 = (r20 + 24);
    r18 = (r18 + 1);
}

loc_805119D0:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_805119D8:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_80511948;
    }
}

loc_805119DC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_805119E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511C7C;
    }
}

loc_805119E8:
{
    r20 = r30;
    r18 = 0;
    goto loc_80511A40;
}

loc_805119F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(r0));
}

loc_805119F8:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r6 = 1;
    r7 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80511A18;
    }
}

loc_80511A10:
{
    r8 = MemoryInline::FlatRead32((r20 + 56));
    goto loc_80511A1C;
}

loc_80511A18:
{
    r8 = 0;
}

loc_80511A1C:
{
    r9 = r26;
    r10 = r28;
    ctx->lr = 0x80511A28u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_80511A34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511C7C;
    }
}

loc_80511A38:
{
    r20 = (r20 + 24);
    r18 = (r18 + 1);
}

loc_80511A40:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_80511A48:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_805119F4;
    }
}

loc_80511A4C:
{
    goto loc_80511C7C;
}

loc_80511A50:
{
    r20 = r30;
    r18 = 0;
    goto loc_80511AE4;
}

loc_80511A5C:
{
}

loc_80511A60:
{
    if ((static_cast<int32_t>(r18) >= static_cast<int32_t>(r0))) {
        goto loc_80511A6C;
    }
}

loc_80511A64:
{
    r22 = MemoryInline::FlatRead32((r20 + 56));
    goto loc_80511A70;
}

loc_80511A6C:
{
    r22 = 0;
}

loc_80511A70:
{
    r21 = r22;
    r19 = 0;
    goto loc_80511AD0;
}

loc_80511A7C:
{
}

loc_80511A80:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(r0))) {
        goto loc_80511A8C;
    }
}

loc_80511A84:
{
    r8 = MemoryInline::FlatRead32((r21 + 32));
    goto loc_80511A90;
}

loc_80511A8C:
{
    r8 = 0;
}

loc_80511A90:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r30));
}

loc_80511A94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80511AC8;
    }
}

loc_80511A98:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r9 = r26;
    r10 = r28;
    r6 = 1;
    r7 = 1;
    ctx->lr = 0x80511AB8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_80511AC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511ADC;
    }
}

loc_80511AC8:
{
    r21 = (r21 + 4);
    r19 = (r19 + 1);
}

loc_80511AD0:
{
    r0 = MemoryInline::FlatRead16((r22 + 6));
}

loc_80511AD8:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_80511A7C;
    }
}

loc_80511ADC:
{
    r20 = (r20 + 24);
    r18 = (r18 + 1);
}

loc_80511AE4:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_80511AEC:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_80511A5C;
    }
}

loc_80511AF0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80511AF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511B9C;
    }
}

loc_80511AFC:
{
    r21 = r30;
    r18 = 0;
    goto loc_80511B90;
}

loc_80511B08:
{
}

loc_80511B0C:
{
    if ((static_cast<int32_t>(r18) >= static_cast<int32_t>(r0))) {
        goto loc_80511B18;
    }
}

loc_80511B10:
{
    r22 = MemoryInline::FlatRead32((r21 + 32));
    goto loc_80511B1C;
}

loc_80511B18:
{
    r22 = 0;
}

loc_80511B1C:
{
    r20 = r22;
    r19 = 0;
    goto loc_80511B7C;
}

loc_80511B28:
{
}

loc_80511B2C:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(r0))) {
        goto loc_80511B38;
    }
}

loc_80511B30:
{
    r8 = MemoryInline::FlatRead32((r20 + 56));
    goto loc_80511B3C;
}

loc_80511B38:
{
    r8 = 0;
}

loc_80511B3C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r30));
}

loc_80511B40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80511B74;
    }
}

loc_80511B44:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r9 = r26;
    r10 = r28;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x80511B64u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_80511B70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511B88;
    }
}

loc_80511B74:
{
    r20 = (r20 + 24);
    r19 = (r19 + 1);
}

loc_80511B7C:
{
    r0 = MemoryInline::FlatRead16((r22 + 4));
}

loc_80511B84:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_80511B28;
    }
}

loc_80511B88:
{
    r21 = (r21 + 4);
    r18 = (r18 + 1);
}

loc_80511B90:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_80511B98:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_80511B08;
    }
}

loc_80511B9C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80511BA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511C0C;
    }
}

loc_80511BA8:
{
    r22 = r30;
    r18 = 0;
    goto loc_80511C00;
}

loc_80511BB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(r0));
}

loc_80511BB8:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r6 = 1;
    r7 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80511BD8;
    }
}

loc_80511BD0:
{
    r8 = MemoryInline::FlatRead32((r22 + 56));
    goto loc_80511BDC;
}

loc_80511BD8:
{
    r8 = 0;
}

loc_80511BDC:
{
    r9 = r26;
    r10 = r28;
    ctx->lr = 0x80511BE8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_80511BF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511C0C;
    }
}

loc_80511BF8:
{
    r22 = (r22 + 24);
    r18 = (r18 + 1);
}

loc_80511C00:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_80511C08:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_80511BB4;
    }
}

loc_80511C0C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80511C14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511C7C;
    }
}

loc_80511C18:
{
    r22 = r30;
    r18 = 0;
    goto loc_80511C70;
}

loc_80511C24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(r0));
}

loc_80511C28:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r6 = 1;
    r7 = 1;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80511C48;
    }
}

loc_80511C40:
{
    r8 = MemoryInline::FlatRead32((r22 + 32));
    goto loc_80511C4C;
}

loc_80511C48:
{
    r8 = 0;
}

loc_80511C4C:
{
    r9 = r26;
    r10 = r28;
    ctx->lr = 0x80511C58u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_80511C64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511C7C;
    }
}

loc_80511C68:
{
    r22 = (r22 + 4);
    r18 = (r18 + 1);
}

loc_80511C70:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_80511C78:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_80511C24;
    }
}

loc_80511C7C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80511C84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511D5C;
    }
}

loc_80511C88:
{
    r22 = r30;
    r18 = 0;
    goto loc_80511CE0;
}

loc_80511C94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(r0));
}

loc_80511C98:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r6 = -1;
    r7 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80511CB8;
    }
}

loc_80511CB0:
{
    r8 = MemoryInline::FlatRead32((r22 + 56));
    goto loc_80511CBC;
}

loc_80511CB8:
{
    r8 = 0;
}

loc_80511CBC:
{
    r9 = r26;
    r10 = 0;
    ctx->lr = 0x80511CC8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_80511CD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511CEC;
    }
}

loc_80511CD8:
{
    r22 = (r22 + 24);
    r18 = (r18 + 1);
}

loc_80511CE0:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_80511CE8:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_80511C94;
    }
}

loc_80511CEC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80511CF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511D5C;
    }
}

loc_80511CF8:
{
    r22 = r30;
    r18 = 0;
    goto loc_80511D50;
}

loc_80511D04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(r0));
}

loc_80511D08:
{
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r6 = -1;
    r7 = 1;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80511D28;
    }
}

loc_80511D20:
{
    r8 = MemoryInline::FlatRead32((r22 + 32));
    goto loc_80511D2C;
}

loc_80511D28:
{
    r8 = 0;
}

loc_80511D2C:
{
    r9 = r26;
    r10 = 0;
    ctx->lr = 0x80511D38u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80511110u>(ctx);
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
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
}

loc_80511D44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80511D5C;
    }
}

loc_80511D48:
{
    r22 = (r22 + 4);
    r18 = (r18 + 1);
}

loc_80511D50:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_80511D58:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_80511D04;
    }
}

loc_80511D5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80511D60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80511DE4;
    }
}

loc_80511D64:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80511D6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80511DE4;
    }
}

loc_80511D70:
{
    r18 = 0;
    goto loc_80511DC0;
}

loc_80511D78:
{
    r3 = r23;
    r4 = (r18 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80515C24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r19 = r3;
    r0 = (r0 & r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80511DBC;
    }
}

loc_80511D94:
{
    r4 = r25;
    r5 = r26;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80510D7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r19 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80511DA8:
{
    r0 = (r0 | r31);
    MemoryInline::FlatWrite16((r19 + 24), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80511DBC;
    }
}

loc_80511DB4:
{
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r18)));
    goto loc_80511DE4;
}

loc_80511DBC:
{
    r18 = (r18 + 1);
}

loc_80511DC0:
{
    r4 = MemoryInline::FlatRead32((r23 + 32));
    r3 = (r18 & 65535);
}

loc_80511DCC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80511DD8;
    }
}

loc_80511DD0:
{
    r0 = 0;
    goto loc_80511DDC;
}

loc_80511DD8:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_80511DDC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80511DE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80511D78;
    }
}

loc_80511DE4:
{
    r11 = (r1 + 64);
    r3 = r29;
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC07FB gpr_write=0xFFFC0FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80511500 func_80511500 preserves=true fpr_mask=0x00000000
