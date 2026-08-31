#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D820C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lbzux_801D84F4_loc_0 = 0;
    uint32_t addr_lbzux_801D86D0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r17_addr_0 = 0;
    uint32_t r17_addr_1 = 0;
    uint32_t r17_addr_2 = 0;
    uint32_t r17_addr_3 = 0;
    uint32_t r17_addr_4 = 0;
    uint32_t r17_addr_5 = 0;
    uint32_t r17_addr_6 = 0;
    uint32_t r18_addr_0 = 0;
    uint32_t r18_addr_1 = 0;
    uint32_t r18_addr_2 = 0;
    uint32_t r18_addr_3 = 0;
    uint32_t r18_addr_4 = 0;
    uint32_t r18_addr_5 = 0;
    uint32_t r18_addr_6 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r23_addr_5 = 0;
    uint32_t r23_addr_6 = 0;
    uint32_t r23_addr_7 = 0;
    uint32_t r23_addr_8 = 0;
    uint32_t r23_addr_9 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r29_addr_7 = 0;
    uint32_t r29_addr_8 = 0;
    uint32_t r29_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t xer = ctx->xer;

    goto loc_801D820C;

loc_801D820C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80021574 (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021574
    r16 = r3;
    ctx->lr = 0x801D8228u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D9E94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r17 = r3;
    // inline leaf 0x801D9F08 (2 guest instruction(s))
    r3 = (r3 + 2056);
    // end of inlined leaf 0x801D9F08
    r4 = MemoryInline::FlatRead32(r3);
    r3 = r17;
    r22 = MemoryInline::FlatRead32((r4 + 12));
    r21 = MemoryInline::FlatRead32((r22 + 44));
    // inline leaf 0x801D9EFC (1 guest instruction(s))
    // end of inlined leaf 0x801D9EFC
    r27 = r3;
    r3 = r17;
    // inline leaf 0x801D9F18 (2 guest instruction(s))
    r3 = (r3 + 2060);
    // end of inlined leaf 0x801D9F18
    r20 = r3;
    r4 = r22;
    ctx->lr = 0x801D825Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D9A64u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
    r19 = r3;
    r3 = r17;
    // inline leaf 0x801D9F10 (2 guest instruction(s))
    r3 = (r3 + 2112);
    // end of inlined leaf 0x801D9F10
    r0 = MemoryInline::FlatRead32((r22 + 28));
    r18 = (r3 + 864);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801D8274:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D829C;
    }
}

loc_801D8278:
{
    r0 = MemoryInline::FlatRead32((r21 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(204));
}

loc_801D8280:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D829C;
    }
}

loc_801D8284:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(304));
}

loc_801D8288:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D829C;
    }
}

loc_801D828C:
{
}

loc_801D8290:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_801D82A4;
    }
}

loc_801D8294:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(200));
}

loc_801D8298:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D82A4;
    }
}

loc_801D829C:
{
    r3 = 1;
    goto loc_801D87E4;
}

loc_801D82A4:
{
    r3 = r19;
    r4 = 0;
    // inline leaf 0x801D9F20 (4 guest instruction(s))
}

loc_inl5_0x801D9F20:
{
}

loc_inl5_0x801D9F24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x801D9F28:
{
    MemoryInline::FlatWrite32((r3 + 44), r4);
    goto loc_inl5_cont_801D9F20;
}

loc_inl5_return:
{
}

loc_inl5_cont_801D9F20:
{
    // end of inlined leaf 0x801D9F20
}

loc_801D82B4:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_801D82C0;
    }
}

loc_801D82B8:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r19, r0);
}

loc_801D82C0:
{
    r4 = MemoryInline::FlatRead32((r16 + 812));
}

loc_801D82C8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_801D83F0;
    }
}

loc_801D82CC:
{
    r3 = r19;
    // inline leaf 0x801D9F20 (4 guest instruction(s))
}

loc_inl6_0x801D9F20:
{
}

loc_inl6_0x801D9F24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x801D9F28:
{
    MemoryInline::FlatWrite32((r3 + 44), r4);
    goto loc_inl6_cont_801D9F20;
}

loc_inl6_return:
{
}

loc_inl6_cont_801D9F20:
{
    // end of inlined leaf 0x801D9F20
    r18 = 6;
    r17 = 512;
    goto loc_801D839C;
}

loc_801D82E0:
{
    r0 = MemoryInline::FlatRead32((r16 + 816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801D82E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D8310;
    }
}

loc_801D82EC:
{
    r3 = r20;
    r4 = r21;
    ctx->lr = 0x801D82F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D62B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
}

loc_801D82FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801D8310;
    }
}

loc_801D8300:
{
    MemoryInline::FlatWrite32((r16 + 816), r18);
    r0 = (r16 + 260);
    MemoryInline::FlatWrite32((r21 + 40), r0);
    MemoryInline::FlatWrite32((r21 + 28), r17);
}

loc_801D8310:
{
    r0 = MemoryInline::FlatRead32((r16 + 816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801D8318:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D833C;
    }
}

loc_801D831C:
{
    r5 = MemoryInline::FlatRead32((r27 + 2000));
    r3 = r20;
    r7 = MemoryInline::FlatRead32((r16 + 812));
    r4 = r22;
    r6 = 0;
    r8 = 0;
    ctx->lr = 0x801D8338u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D4028u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
    goto loc_801D8358;
}

loc_801D833C:
{
    r5 = MemoryInline::FlatRead32((r27 + 2000));
    r3 = r20;
    r6 = MemoryInline::FlatRead32((r21 + 4));
    r4 = r22;
    r7 = MemoryInline::FlatRead32((r16 + 812));
    r8 = 0;
    ctx->lr = 0x801D8358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D4028u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
}

loc_801D8358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D835C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D8368;
    }
}

loc_801D8360:
{
    r3 = 0;
    goto loc_801D87E4;
}

loc_801D8368:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D83A8;
    }
}

loc_801D836C:
{
    r0 = MemoryInline::FlatRead32((r16 + 816));
}

loc_801D8374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801D8390;
    }
}

loc_801D8378:
{
    r0 = MemoryInline::FlatRead32((r21 + 4));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r21 + 4), r0);
    r0 = MemoryInline::FlatRead32((r21 + 8));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r21 + 8), r0);
}

loc_801D8390:
{
    r0 = MemoryInline::FlatRead32((r16 + 812));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r16 + 812), r0);
}

loc_801D839C:
{
    r0 = MemoryInline::FlatRead32((r16 + 812));
}

loc_801D83A4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801D82E0;
    }
}

loc_801D83A8:
{
    r0 = MemoryInline::FlatRead32((r16 + 816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801D83B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D87B4;
    }
}

loc_801D83B4:
{
    r0 = MemoryInline::FlatRead32((r16 + 812));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D83BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D83E4;
    }
}

loc_801D83C0:
{
    r4 = MemoryInline::FlatRead32((r21 + 4));
    r3 = r21;
    // inline leaf 0x801D3FEC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r4 - r3);
    r3 = (r4 | ~r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x801D3FEC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D83D0:
{
    r0 = 10;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D83DC;
    }
}

loc_801D83D8:
{
    r0 = 6;
}

loc_801D83DC:
{
    MemoryInline::FlatWrite32((r16 + 816), r0);
    goto loc_801D87B4;
}

loc_801D83E4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r16 + 816), r0);
    goto loc_801D87B4;
}

loc_801D83F0:
{
    r0 = MemoryInline::FlatRead32((r16 + 828));
    r3 = 10;
    MemoryInline::FlatWrite32((r16 + 816), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D8400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D8700;
    }
}

loc_801D8404:
{
    r29 = (r1 + 12);
    r23 = (r1 + 16);
    r24 = -1;
    r30 = 6;
    r31 = 512;
    r28 = 0;
}

loc_801D841C:
{
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite32((r16 + 808), r28);
    goto loc_801D8568;
}

loc_801D842C:
{
    r5 = MemoryInline::FlatRead32((r27 + 2000));
    r3 = r20;
    r4 = r22;
    r6 = (r18 + r0);
    r7 = 1;
    r8 = 0;
    ctx->lr = 0x801D8448u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D5100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D844C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D8458;
    }
}

loc_801D8450:
{
    r3 = 0;
    goto loc_801D87E4;
}

loc_801D8458:
{
    r17 = MemoryInline::FlatRead32((r16 + 808));
    r18_addr_3 = (r18 + r17);
    r3 = MemoryInline::FlatRead8(r18_addr_3);
    r4 = (r17 & 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r23_addr_3 = (r23 + r4);
    MemoryInline::FlatWrite8(r23_addr_3, static_cast<uint8_t>(r3));
}

loc_801D8470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(59))) {
        goto loc_801D8494;
    }
}

loc_801D8474:
{
}

loc_801D8478:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_801D855C;
    }
}

loc_801D847C:
{
    r0 = (r17 + -1);
    r0 = (r0 & 1);
    r23_addr_4 = (r23 + r0);
    r0 = MemoryInline::FlatRead8(r23_addr_4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801D8490:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_801D855C;
    }
}

loc_801D8494:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801D849C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_801D84A8;
    }
}

loc_801D84A0:
{
    r17 = (r17 + -1);
    goto loc_801D852C;
}

loc_801D84A8:
{
    r26 = MemoryInline::FlatRead32((r27 + 2000));
    r25 = 0;
    r24 = 0;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r25));
    goto loc_801D84EC;
}

loc_801D84C0:
{
    r3 = r20;
    r4 = r22;
    r5 = r26;
    r7 = 1;
    r8 = 0;
    ctx->lr = 0x801D84D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D5100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
}

loc_801D84DC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_801D84E4;
    }
}

loc_801D84E0:
{
    goto loc_801D851C;
}

loc_801D84E4:
{
    r25 = (r25 + r3);
    r24 = (r24 + 1);
}

loc_801D84EC:
{
    r0 = (r24 & 1);
    r6 = (r1 + 12);
    addr_lbzux_801D84F4_loc_0 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(addr_lbzux_801D84F4_loc_0);
    r6 = addr_lbzux_801D84F4_loc_0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_801D84FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D84C0;
    }
}

loc_801D8500:
{
    r0 = (r24 + -1);
    r0 = (r0 & 1);
    r29_addr_4 = (r29 + r0);
    r0 = MemoryInline::FlatRead8(r29_addr_4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_801D8514:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D84C0;
    }
}

loc_801D8518:
{
    r3 = r25;
}

loc_801D851C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D8520:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801D852C;
    }
}

loc_801D8524:
{
    r3 = 0;
    goto loc_801D87E4;
}

loc_801D852C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(0));
}

loc_801D8530:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D853C;
    }
}

loc_801D8534:
{
    r3 = 0;
    goto loc_801D87E4;
}

loc_801D853C:
{
    r3 = r18;
    r4 = r17;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D5750u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D854C:
{
    r24 = r3;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D8574;
    }
}

loc_801D8554:
{
    r3 = 0;
    goto loc_801D87E4;
}

loc_801D855C:
{
    r3 = MemoryInline::FlatRead32((r16 + 808));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r16 + 808), r0);
}

loc_801D8568:
{
    r0 = MemoryInline::FlatRead32((r16 + 808));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(256));
}

loc_801D8570:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801D842C;
    }
}

loc_801D8574:
{
    r0 = MemoryInline::FlatRead32((r16 + 808));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(256));
}

loc_801D857C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D8590;
    }
}

loc_801D8580:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r16 + 816), r0);
    goto loc_801D87E4;
}

loc_801D8590:
{
}

loc_801D8594:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(0))) {
        goto loc_801D8688;
    }
}

loc_801D8598:
{
    r3 = r19;
    r4 = r24;
    // inline leaf 0x801D9F20 (4 guest instruction(s))
}

loc_inl8_0x801D9F20:
{
}

loc_inl8_0x801D9F24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x801D9F28:
{
    MemoryInline::FlatWrite32((r3 + 44), r4);
    goto loc_inl8_cont_801D9F20;
}

loc_inl8_return:
{
}

loc_inl8_cont_801D9F20:
{
    // end of inlined leaf 0x801D9F20
    goto loc_801D867C;
}

loc_801D85A8:
{
    r0 = MemoryInline::FlatRead32((r16 + 816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801D85B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D85D8;
    }
}

loc_801D85B4:
{
    r3 = r20;
    r4 = r21;
    ctx->lr = 0x801D85C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D62B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
}

loc_801D85C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801D85D8;
    }
}

loc_801D85C8:
{
    MemoryInline::FlatWrite32((r16 + 816), r30);
    r0 = (r16 + 260);
    MemoryInline::FlatWrite32((r21 + 40), r0);
    MemoryInline::FlatWrite32((r21 + 28), r31);
}

loc_801D85D8:
{
    r0 = MemoryInline::FlatRead32((r16 + 816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801D85E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D8604;
    }
}

loc_801D85E4:
{
    r5 = MemoryInline::FlatRead32((r27 + 2000));
    r3 = r20;
    r4 = r22;
    r7 = r24;
    r6 = 0;
    r8 = 0;
    ctx->lr = 0x801D8600u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D4028u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
    goto loc_801D8620;
}

loc_801D8604:
{
    r5 = MemoryInline::FlatRead32((r27 + 2000));
    r3 = r20;
    r6 = MemoryInline::FlatRead32((r21 + 4));
    r4 = r22;
    r7 = r24;
    r8 = 0;
    ctx->lr = 0x801D8620u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D4028u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
}

loc_801D8620:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D8624:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801D8630;
    }
}

loc_801D8628:
{
    r3 = 0;
    goto loc_801D87E4;
}

loc_801D8630:
{
    r0 = MemoryInline::FlatRead32((r21 + 4));
    r24 = (r24 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r21 + 4), r0);
    r0 = MemoryInline::FlatRead32((r21 + 8));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r21 + 8), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D867C;
    }
}

loc_801D8650:
{
    r5 = MemoryInline::FlatRead32((r27 + 2000));
    r3 = r20;
    r4 = r22;
    r6 = r18;
    r7 = 2;
    r8 = 0;
    ctx->lr = 0x801D866Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D5100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D8670:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801D867C;
    }
}

loc_801D8674:
{
    r3 = 0;
    goto loc_801D87E4;
}

loc_801D867C:
{
}

loc_801D8680:
{
    if ((static_cast<int32_t>(r24) > static_cast<int32_t>(0))) {
        goto loc_801D85A8;
    }
}

loc_801D8684:
{
    goto loc_801D841C;
}

loc_801D8688:
{
    r18 = MemoryInline::FlatRead32((r27 + 2000));
    r0 = 0;
    r17 = (r1 + 8);
    r19 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    goto loc_801D86C8;
}

loc_801D86A4:
{
    r3 = r20;
    r4 = r22;
    r5 = r18;
    r7 = 1;
    r8 = 0;
    ctx->lr = 0x801D86BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D5100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D86C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D86F4;
    }
}

loc_801D86C4:
{
    r19 = (r19 + 1);
}

loc_801D86C8:
{
    r0 = (r19 & 1);
    r6 = (r1 + 8);
    addr_lbzux_801D86D0_loc_0 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(addr_lbzux_801D86D0_loc_0);
    r6 = addr_lbzux_801D86D0_loc_0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_801D86D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D86A4;
    }
}

loc_801D86DC:
{
    r0 = (r19 + -1);
    r0 = (r0 & 1);
    r17_addr_3 = (r17 + r0);
    r0 = MemoryInline::FlatRead8(r17_addr_3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_801D86F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D86A4;
    }
}

loc_801D86F4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r16 + 816), r0);
    goto loc_801D87B4;
}

loc_801D8700:
{
    r18 = 6;
    r17 = 512;
}

loc_801D8708:
{
    r3 = r20;
    r4 = r21;
    ctx->lr = 0x801D8714u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D62B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
}

loc_801D8718:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801D872C;
    }
}

loc_801D871C:
{
    MemoryInline::FlatWrite32((r16 + 816), r18);
    r0 = (r16 + 260);
    MemoryInline::FlatWrite32((r21 + 40), r0);
    MemoryInline::FlatWrite32((r21 + 28), r17);
}

loc_801D872C:
{
    r0 = MemoryInline::FlatRead32((r16 + 816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801D8734:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D8754;
    }
}

loc_801D8738:
{
    r5 = MemoryInline::FlatRead32((r27 + 2000));
    r3 = r20;
    r4 = r22;
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x801D8750u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D4008u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
    goto loc_801D876C;
}

loc_801D8754:
{
    r5 = MemoryInline::FlatRead32((r27 + 2000));
    r3 = r20;
    r6 = MemoryInline::FlatRead32((r21 + 4));
    r4 = r22;
    r7 = 0;
    ctx->lr = 0x801D876Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D4008u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
}

loc_801D876C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D8770:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D877C;
    }
}

loc_801D8774:
{
    r3 = 0;
    goto loc_801D87E4;
}

loc_801D877C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D8798;
    }
}

loc_801D8780:
{
    r0 = MemoryInline::FlatRead32((r16 + 816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801D8788:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D87B4;
    }
}

loc_801D878C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r16 + 816), r0);
    goto loc_801D87B4;
}

loc_801D8798:
{
    r0 = MemoryInline::FlatRead32((r21 + 4));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r21 + 4), r0);
    r0 = MemoryInline::FlatRead32((r21 + 8));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r21 + 8), r0);
    goto loc_801D8708;
}

loc_801D87B4:
{
    r3 = r20;
    r4 = r21;
    ctx->lr = 0x801D87C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D9A6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r16 + 816));
    r4 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D87CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D87E0;
    }
}

loc_801D87D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D87D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D87E0;
    }
}

loc_801D87D8:
{
    r3 = r20;
    ctx->lr = 0x801D87E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801D9D24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    xer = ctx->xer;
}

loc_801D87E0:
{
    r3 = 1;
}

loc_801D87E4:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215C0 (17 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801D820C func_801D820C preserves=true fpr_mask=0x00000000
