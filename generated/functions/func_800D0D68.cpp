#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D0D68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
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
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_800D0D68;

loc_800D0D68:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r28 = MemoryInline::FlatRead32((r1 + 56));
    r3 = 0x80270000u;
    r24 = r4;
    r25 = r5;
    r4 = (r3 + 25688);
    r26 = r7;
    r30 = r8;
    r29 = r9;
    r27 = r10;
    r3 = 4;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D0DACu;
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
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r3 = 4;
    r4 = 5176;
    ctx->lr = 0x800D0DB8u;
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
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CCDC0u>(ctx);
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
    r13 = ctx->gpr[13];
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
    MemoryInline::FlatWrite32((r13 + -26896), r3);
    r4 = 0;
    r5 = 5176;
    ctx->lr = 0x800D0DC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // inline leaf 0x800CCC38 (7 guest instruction(s))
}

loc_inl1_0x800CCC38:
{
    r0 = MemoryInline::FlatRead32((r13 + -26968));
}

loc_inl1_0x800CCC40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800CCC44:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26968), r0);
    MemoryInline::FlatWrite32((r13 + -26964), r0);
    goto loc_inl1_cont_800CCC38;
}

loc_inl1_return:
{
}

loc_inl1_cont_800CCC38:
{
    // end of inlined leaf 0x800CCC38
    r3 = MemoryInline::FlatRead32((r13 + -26896));
    r0 = 0;
    r4 = 0x800E0000u;
    r7 = 0x800D0000u;
    MemoryInline::FlatWrite32(r3, r0);
    r6 = 0x800D0000u;
    r5 = 0x800D0000u;
    r4 = (r4 + -29064);
    r3 = MemoryInline::FlatRead32((r13 + -26896));
    r7 = (r7 + 14264);
    r6 = (r6 + 16160);
}

loc_800D0DFC:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r5 = (r5 + 16172);
    r4 = 8192;
    r3 = MemoryInline::FlatRead32((r13 + -26896));
    MemoryInline::FlatWrite32((r3 + 8), r7);
    r3 = MemoryInline::FlatRead32((r13 + -26896));
    MemoryInline::FlatWrite32((r3 + 12), r6);
    r3 = MemoryInline::FlatRead32((r13 + -26896));
    MemoryInline::FlatWrite32((r3 + 16), r5);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800D0E28;
    }
}

loc_800D0E24:
{
    r4 = r30;
}

loc_800D0E28:
{
    r3 = MemoryInline::FlatRead32((r13 + -26896));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800D0E30:
{
    r0 = 8192;
    MemoryInline::FlatWrite32((r3 + 20), r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D0E40;
    }
}

loc_800D0E3C:
{
    r0 = r29;
}

loc_800D0E40:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r13 + -26896), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    r30 = 0x802F0000u;
    r31 = 0x802F0000u;
    r3 = 0x802F0000u;
    MemoryInline::FlatWrite32((r4 + 24), r0);
    r0 = 0;
    r29 = 255;
    r30 = (r30 + 13856);
    r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    r31 = (r31 + 14112);
    r3 = (r3 + 4960);
    r4 = 0;
    MemoryInline::FlatWrite32((r5 + 28), r0);
    r5 = 128;
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 32), r24);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 36), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 40), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite8((r6 + 44), static_cast<uint8_t>(r29));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite8((r6 + 45), static_cast<uint8_t>(r0));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 100), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 104), r30);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 108), r31);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 112), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 116), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 120), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 124), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 128), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 132), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 136), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 140), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 144), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r13 + -26896));
    MemoryInline::FlatWrite32((r6 + 148), r0);
    ctx->lr = 0x800D0F0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x802F0000u;
    r4 = 0;
    r3 = (r3 + 5088);
    r5 = 256;
    ctx->lr = 0x800D0F20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r8 = MemoryInline::FlatRead32((r13 + -26896));
    r9 = 0x800D0000u;
    r7 = MemoryInline::FlatRead32((r24 + 36));
    r4 = r24;
    r6 = r25;
    r3 = (r8 + 152);
    r5 = (r8 + 28);
    r8 = (r8 + 48);
    r9 = (r9 + 12060);
    r10 = 0;
    ctx->lr = 0x800D0F4Cu;
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
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CFF58u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r5 = MemoryInline::FlatRead32((r13 + -26896));
    r6 = r27;
    r7 = r28;
    r3 = (r5 + 768);
    r4 = (r5 + 28);
    r5 = (r5 + 48);
    // inline leaf 0x800CE414 (52 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -26928), r3);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 28), r6);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 34), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 44), r5);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 60), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 64), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 68), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 72), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 76), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 80), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 84), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 88), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 92), r0);
    // end of inlined leaf 0x800CE414
    r5 = MemoryInline::FlatRead32((r13 + -26896));
    r7 = r30;
    r8 = r31;
    r9 = r27;
    r10 = r28;
    r3 = (r5 + 864);
    r4 = (r5 + 28);
    r6 = (r5 + 4);
    ctx->lr = 0x800D0F8Cu;
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
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800D4BBCu>(ctx);
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
    r13 = ctx->gpr[13];
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
    r3 = MemoryInline::FlatRead32((r13 + -26896));
    r3 = (r3 + 3104);
    ctx->lr = 0x800D0F98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E87C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(256));
}

loc_800D0FA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D0FB4;
    }
}

loc_800D0FA8:
{
    r3 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r29 = r3;
}

loc_800D0FB4:
{
    r24 = 0x802F0000u;
    r4 = r26;
    r5 = r29;
    r3 = (r24 + 14112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E941Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r24 + 14112);
    r0 = 0;
    r3_addr_0 = (r3 + r29);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r0));
    r11 = (r1 + 48);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800D0D68 func_800D0D68 preserves=true fpr_mask=0x00000000
