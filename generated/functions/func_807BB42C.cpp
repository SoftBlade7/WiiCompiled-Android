#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80550730_statefree();

extern "C" void func_807BB42C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lbzux_807BB560_loc_0 = 0;
    uint32_t addr_lbzux_807BB570_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r16_addr_0 = 0;
    uint32_t r16_addr_1 = 0;
    uint32_t r16_addr_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
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

    goto loc_807BB42C;

loc_807BB42C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r9 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r16);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r18);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r22);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r24);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r26);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r28);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r30);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r31);
    }
    r31 = r3;
    r22 = r4;
    r21 = r5;
    r20 = r6;
    r19 = r7;
    r18 = r8;
    r24 = 20;
    r0 = MemoryInline::FlatRead8((r9 + 14523));
}

loc_807BB464:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807BB5E4;
    }
}

loc_807BB468:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r4 + 14521));
}

loc_807BB474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807BB5E4;
    }
}

loc_807BB478:
{
    r5 = 0x809C0000u;
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r5 + 14520));
    r6 = 1;
    r5 = MemoryInline::FlatRead32((r4 + -10448));
    r7 = 0;
    ctr = r0;
}

loc_807BB498:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807BB4D0;
    }
}

loc_807BB49C:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r0 & 16);
}

loc_807BB4B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807BB4C8;
    }
}

loc_807BB4B4:
{
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r0 = (r6 & 255);
}

loc_807BB4C0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_807BB4C8;
    }
}

loc_807BB4C4:
{
    r6 = r4;
}

loc_807BB4C8:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807BB49C;
    }
}

loc_807BB4D0:
{
    r4 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r6 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_807BB4DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BB5E4;
    }
}

loc_807BB4E0:
{
    r17 = 0x808A0000u;
    MemoryInline::FlatWrite32((r3 + 68), r0);
    r17 = (r17 + 25688);
    r3 = 0x808D0000u;
    r0 = (r17 + 150);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r3 + 10152);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r16 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = MemoryInline::FlatRead32((r16 + -10440));
    r5 = (r17 + 165);
    r4 = 1;
    r6 = 0;
    ctx->lr = 0x807BB520u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x805411FCu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807BB524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BB52C;
    }
}

loc_807BB528:
{
    goto loc_807BB540;
}

loc_807BB52C:
{
    r3 = MemoryInline::FlatRead32((r16 + -10440));
    r5 = (r17 + 197);
    r4 = 0;
    r6 = 0;
    ctx->lr = 0x807BB540u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x805411FCu>(ctx);
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

loc_807BB540:
{
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r8 = (r3 + 3);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r3 = r31;
    r5 = (r31 + 24);
    r6 = 0;
    r0 = (r0 * r4);
    r7 = 0;
    addr_lbzux_807BB560_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BB560_loc_0);
    r8 = addr_lbzux_807BB560_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    addr_lbzux_807BB570_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BB570_loc_0);
    r8 = addr_lbzux_807BB570_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    r4 = (r8 + r0);
    ctx->lr = 0x807BB588u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x807BA9D8u>(ctx);
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
    r4 = r3;
    r3 = r31;
    r5 = (r31 + 16);
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x807BB5A0u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x807BA9D8u>(ctx);
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
    r4 = r3;
    r3 = r31;
    r5 = (r31 + 32);
    r6 = 1;
    r7 = 1;
    ctx->lr = 0x807BB5B8u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x807BA9D8u>(ctx);
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
    r3 = r31;
    r4 = (r31 + 16);
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BAD20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r31 + 24);
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BAD20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808D0000u;
    r3 = (r1 + 8);
    r4 = (r4 + 10152);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80550730u) && KnownTranslatedCpuCall<0x80550730u>::kAvailable && !KnownTranslatedCpuCall<0x80550730u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80550730u>()) {
        const auto state_free_result_80550730_46DA = func_80550730_statefree();
        r3 = static_cast<uint32_t>(state_free_result_80550730_46DA);
    } else {
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80550730u>(ctx);
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
}

loc_807BB5E4:
{
}

loc_807BB5E8:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_807BB5FC;
    }
}

loc_807BB5EC:
{
    r0 = (r22 + -1);
    r5 = (r31 + 32);
    r21 = (r0 & 255);
    goto loc_807BB614;
}

loc_807BB5FC:
{
}

loc_807BB600:
{
    r21 = (r21 + -1);
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_807BB610;
    }
}

loc_807BB608:
{
    r5 = (r31 + 16);
    goto loc_807BB614;
}

loc_807BB610:
{
    r5 = (r31 + 24);
}

loc_807BB614:
{
    r3 = 0x809C0000u;
    r4 = (r21 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 14521));
    r3 = (r4 * 38);
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_807BB62C:
{
    r23 = (r4 + r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807BB664;
    }
}

loc_807BB634:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    // inline leaf 0x80654810 (4 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8432));
    r3 = MemoryInline::FlatRead32((r3 + 11140));
    // end of inlined leaf 0x80654810
    r16 = r3;
    r3 = 2;
    // inline leaf 0x8079D720 (9 guest instruction(s))
    r0 = (r3 * 116);
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r0 & 255);
    r0 = (r3 + 2);
    r3 = (r0 & 255);
    // end of inlined leaf 0x8079D720
    r4 = (r3 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1020);
    r0 = (r0 - r4);
}

loc_807BB65C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r16))) {
        goto loc_807BB664;
    }
}

loc_807BB660:
{
    r19 = 1;
}

loc_807BB664:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = MemoryInline::FlatRead32((r3 + 1068));
}

loc_807BB674:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807BB67C;
    }
}

loc_807BB678:
{
    r19 = 1;
}

loc_807BB67C:
{
    r3 = 0x809C0000u;
    r22 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_807BB694:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_807BB6A4;
    }
}

loc_807BB698:
{
}

loc_807BB69C:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_807BB6A4;
    }
}

loc_807BB6A0:
{
    r0 = 1;
}

loc_807BB6A4:
{
}

loc_807BB6A8:
{
    r27 = 19;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807BB6B4;
    }
}

loc_807BB6B0:
{
    r27 = 16;
}

loc_807BB6B4:
{
    r26 = 0x809C0000u;
    r16 = 0x809C0000u;
    r21 = 0;
    r17 = 0;
    r26 = (r26 + 13984);
    r16 = (r16 + 13940);
    r30 = 0x809C0000u;
    r28 = 0x809C0000u;
    r29 = 0x809C0000u;
    goto loc_807BB854;
}

loc_807BB6DC:
{
    r25 = MemoryInline::FlatRead32((r26 + 4));
}

loc_807BB6E4:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(6))) {
        goto loc_807BB704;
    }
}

loc_807BB6E8:
{
}

loc_807BB6EC:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(5))) {
        goto loc_807BB718;
    }
}

loc_807BB6F0:
{
}

loc_807BB6F4:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(10))) {
        goto loc_807BB72C;
    }
}

loc_807BB6F8:
{
}

loc_807BB6FC:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(11))) {
        goto loc_807BB740;
    }
}

loc_807BB700:
{
    goto loc_807BB754;
}

loc_807BB704:
{
    r3 = MemoryInline::FlatRead32((r31 + 52));
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & 1);
    goto loc_807BB758;
}

loc_807BB718:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 1);
    goto loc_807BB758;
}

loc_807BB72C:
{
    r3 = MemoryInline::FlatRead32((r31 + 60));
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & 1);
    goto loc_807BB758;
}

loc_807BB740:
{
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    goto loc_807BB758;
}

loc_807BB754:
{
    r0 = 0;
}

loc_807BB758:
{
}

loc_807BB75C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807BB840;
    }
}

loc_807BB760:
{
}

loc_807BB764:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(11))) {
        goto loc_807BB770;
    }
}

loc_807BB768:
{
}

loc_807BB76C:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(14))) {
        goto loc_807BB78C;
    }
}

loc_807BB770:
{
}

loc_807BB774:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_807BB78C;
    }
}

loc_807BB778:
{
    r3 = MemoryInline::FlatRead32(r18);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 32768);
}

loc_807BB788:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807BB840;
    }
}

loc_807BB78C:
{
}

loc_807BB790:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(14))) {
        goto loc_807BB7B0;
    }
}

loc_807BB794:
{
}

loc_807BB798:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_807BB7B0;
    }
}

loc_807BB79C:
{
    r3 = MemoryInline::FlatRead32(r18);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -2147483648);
}

loc_807BB7AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807BB840;
    }
}

loc_807BB7B0:
{
    r0 = MemoryInline::FlatRead8(r26);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BB7B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BB840;
    }
}

loc_807BB7BC:
{
    r0 = (r25 * 36);
    r3 = MemoryInline::FlatRead32((r28 + 13848));
    r3 = (r3 + r0);
    r19 = (r3 + 72);
    r3 = r19;
    ctx->lr = 0x807BB7D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807974ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r19 + 28));
    r0 = (r0 - r3);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807BB840;
    }
}

loc_807BB7E0:
{
}

loc_807BB7E4:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(13))) {
        goto loc_807BB838;
    }
}

loc_807BB7E8:
{
    r3 = MemoryInline::FlatRead32((r29 + -10456));
    r25 = 0;
    r20 = 0;
    r19 = MemoryInline::FlatRead8((r3 + 36));
    goto loc_807BB828;
}

loc_807BB7FC:
{
    r3 = MemoryInline::FlatRead32((r30 + 6392));
    r4 = r20;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x80590100
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 134217728);
}

loc_807BB818:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807BB824;
    }
}

loc_807BB81C:
{
    r25 = 1;
    goto loc_807BB830;
}

loc_807BB824:
{
    r20 = (r20 + 1);
}

loc_807BB828:
{
}

loc_807BB82C:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r19))) {
        goto loc_807BB7FC;
    }
}

loc_807BB830:
{
}

loc_807BB834:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_807BB840;
    }
}

loc_807BB838:
{
    r0 = MemoryInline::FlatRead16(r23);
    r22 = (r22 + r0);
}

loc_807BB840:
{
    r16_addr_2 = (r16 + r17);
    MemoryInline::FlatWrite16(r16_addr_2, static_cast<uint16_t>(r22));
    r26 = (r26 + 28);
    r23 = (r23 + 2);
    r21 = (r21 + 1);
    r17 = (r17 + 2);
}

loc_807BB854:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r27));
}

loc_807BB858:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807BB6DC;
    }
}

loc_807BB85C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BD718u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = (r22 & 65535);
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_0 = r0;
    r0 = (r8 + r0_addc_right_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_0 + r6);
    r0 = (r0 + r0_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r4 = 0x809C0000u;
    r3 = (r3 & 65535);
    r4 = (r4 + 13940);
    r5 = 0;
    ctr = r27;
}

loc_807BB880:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_807BB8A4;
    }
}

loc_807BB884:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_807BB88C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_807BB898;
    }
}

loc_807BB890:
{
    r24 = r5;
    goto loc_807BB8A4;
}

loc_807BB898:
{
    r4 = (r4 + 2);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807BB884;
    }
}

loc_807BB8A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(20));
}

loc_807BB8A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BB8B8;
    }
}

loc_807BB8AC:
{
    r0 = (r22 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BB8B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BB8B8;
    }
}

loc_807BB8B4:
{
    r24 = 4;
}

loc_807BB8B8:
{
    r3 = r24;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 32));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 40));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 56));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 64));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 72));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 80));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 88));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 92));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r1 + 100));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807BB42C func_807BB42C preserves=true fpr_mask=0x00000000
