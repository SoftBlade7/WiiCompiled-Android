#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F55A8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_801F55A8;

loc_801F55A8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r30 = 0;
    r27 = r7;
    MemoryInline::FlatWrite32(r8, r30);
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r28 = r8;
    r29 = r27;
    r31 = (r6 + r7);
}

loc_801F55E4:
{
}

loc_801F55E8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801F55F4;
    }
}

loc_801F55EC:
{
    r30 = MemoryInline::FlatRead32(r24);
    goto loc_801F5630;
}

loc_801F55F4:
{
    r30 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32(r24);
}

loc_801F5600:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_801F5630;
    }
}

loc_801F5604:
{
    r30 = 0;
    goto loc_801F5640;
}

loc_801F5610:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = (r3 + 65536);
}

loc_801F561C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801F562C;
    }
}

loc_801F5620:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_801F5640;
}

loc_801F562C:
{
    r30 = MemoryInline::FlatRead32((r30 + 32));
}

loc_801F5630:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 & 1);
}

loc_801F5638:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F5610;
    }
}

loc_801F563C:
{
    r30 = 0;
}

loc_801F5640:
{
}

loc_801F5644:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801F591C;
    }
}

loc_801F5648:
{
    r7 = MemoryInline::FlatRead32((r30 + 24));
    r0 = (r7 + 65536);
}

loc_801F5654:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801F591C;
    }
}

loc_801F5658:
{
}

loc_801F565C:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(r26))) {
        goto loc_801F5714;
    }
}

loc_801F5660:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r7 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801F566C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F5714;
    }
}

loc_801F5670:
{
    r5 = MemoryInline::FlatRead8((r23 + 32));
    r0 = (r26 - r7);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = r25;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5 = PPC_Slw(static_cast<uint32_t>(r27), static_cast<uint32_t>(r5));
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r27 + -1);
    r3 = (r3 + r29);
    r29 = 0;
    MemoryInline::FlatWrite32(r28, r3);
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r5 = MemoryInline::FlatRead8((r23 + 32));
    r6 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r26 - r3);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
}

loc_801F56C0:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r3 = (r4 + r3);
    r4 = (r3 + r0);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801F56EC;
    }
}

loc_801F56D0:
{
}

loc_801F56D4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r6))) {
        goto loc_801F56DC;
    }
}

loc_801F56D8:
{
    r3 = 0;
}

loc_801F56DC:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_801F56E4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_801F56EC;
    }
}

loc_801F56E8:
{
    r4 = 0;
}

loc_801F56EC:
{
    r0 = MemoryInline::FlatRead16(r30);
}

loc_801F56F4:
{
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F5704;
    }
}

loc_801F5700:
{
    MemoryInline::FlatWrite32((r30 + 12), r3);
}

loc_801F5704:
{
}

loc_801F5708:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801F591C;
    }
}

loc_801F570C:
{
    MemoryInline::FlatWrite32((r30 + 16), r4);
    goto loc_801F591C;
}

loc_801F5714:
{
}

loc_801F5718:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r26))) {
        goto loc_801F579C;
    }
}

loc_801F571C:
{
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r7 + r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801F5728:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801F579C;
    }
}

loc_801F572C:
{
    r5 = MemoryInline::FlatRead8((r23 + 32));
    r0 = (r7 - r26);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r4 = (r25 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32(r28);
    r29 = (r29 - r3);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r28, r0);
    r5 = MemoryInline::FlatRead32((r30 + 4));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead16(r30);
}

loc_801F576C:
{
    r3 = MemoryInline::FlatRead8((r23 + 32));
    r4 = (r4 + -1);
    r0 = (r0 | 2);
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r0 = (r5 + r3);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801F578C;
    }
}

loc_801F5788:
{
    MemoryInline::FlatWrite32((r30 + 12), r5);
}

loc_801F578C:
{
}

loc_801F5790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F591C;
    }
}

loc_801F5794:
{
    MemoryInline::FlatWrite32((r30 + 16), r0);
    goto loc_801F591C;
}

loc_801F579C:
{
}

loc_801F57A0:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r26))) {
        goto loc_801F5854;
    }
}

loc_801F57A4:
{
}

loc_801F57A8:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r31))) {
        goto loc_801F5854;
    }
}

loc_801F57AC:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r7 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801F57B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F5854;
    }
}

loc_801F57BC:
{
    r5 = MemoryInline::FlatRead8((r23 + 32));
    r4 = (r7 - r26);
    r0 = (r31 - r7);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r4 = (r25 + r4);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r30 + 24));
    r4 = (r27 + r26);
    r0 = MemoryInline::FlatRead32(r28);
    r3 = (r4 + -1);
    r4 = (r4 - r5);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32(r28, r0);
    r29 = (r29 - r4);
    r4 = MemoryInline::FlatRead32((r30 + 24));
    r5 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r3 - r4);
    r0 = MemoryInline::FlatRead8((r23 + 32));
}

loc_801F5810:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r4 + r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801F582C;
    }
}

loc_801F5820:
{
}

loc_801F5824:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r3))) {
        goto loc_801F582C;
    }
}

loc_801F5828:
{
    r3 = 0;
}

loc_801F582C:
{
    r0 = MemoryInline::FlatRead16(r30);
}

loc_801F5834:
{
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801F5844;
    }
}

loc_801F5840:
{
    MemoryInline::FlatWrite32((r30 + 12), r4);
}

loc_801F5844:
{
}

loc_801F5848:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F591C;
    }
}

loc_801F584C:
{
    MemoryInline::FlatWrite32((r30 + 16), r3);
    goto loc_801F591C;
}

loc_801F5854:
{
}

loc_801F5858:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r26))) {
        goto loc_801F591C;
    }
}

loc_801F585C:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = (r7 + r0);
}

loc_801F5868:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r26))) {
        goto loc_801F591C;
    }
}

loc_801F586C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_801F5870:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801F591C;
    }
}

loc_801F5874:
{
    r6 = MemoryInline::FlatRead8((r23 + 32));
    r3 = (r26 - r7);
    r5 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 - r3);
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r6));
    r4 = r25;
    r3 = (r5 + r3);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 24));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r4 = (r26 - r0);
    r0 = MemoryInline::FlatRead32(r28);
    r3 = (r3 - r4);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r28, r0);
    r29 = (r29 - r3);
    r0 = MemoryInline::FlatRead32((r30 + 24));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r4 = MemoryInline::FlatRead8((r23 + 32));
    r0 = (r26 - r0);
}

loc_801F58CC:
{
    r5 = MemoryInline::FlatRead32((r30 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r6 = (r5 + r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F58E8;
    }
}

loc_801F58DC:
{
}

loc_801F58E0:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r3))) {
        goto loc_801F58E8;
    }
}

loc_801F58E4:
{
    r6 = 0;
}

loc_801F58E8:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
}

loc_801F58F0:
{
    r0 = MemoryInline::FlatRead16(r30);
    r3 = (r3 + -1);
    r0 = (r0 | 2);
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r0 = (r5 + r3);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801F5910;
    }
}

loc_801F590C:
{
    MemoryInline::FlatWrite32((r30 + 12), r6);
}

loc_801F5910:
{
}

loc_801F5914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F591C;
    }
}

loc_801F5918:
{
    MemoryInline::FlatWrite32((r30 + 16), r0);
}

loc_801F591C:
{
}

loc_801F5920:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801F592C;
    }
}

loc_801F5924:
{
}

loc_801F5928:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801F55E4;
    }
}

loc_801F592C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801F5930:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F5940;
    }
}

loc_801F5934:
{
    r0 = MemoryInline::FlatRead32((r23 + 5584));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F593C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5980;
    }
}

loc_801F5940:
{
    r3 = r23;
    r4 = r25;
    r5 = r26;
    r6 = r27;
    r7 = r28;
    ctx->lr = 0x801F5958u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801F07A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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

loc_801F595C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5964;
    }
}

loc_801F5960:
{
    goto loc_801F59CC;
}

loc_801F5964:
{
    r3 = r23;
    r4 = 1;
    ctx->lr = 0x801F5970u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x8020C5B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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

loc_801F5974:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5980;
    }
}

loc_801F5978:
{
    r3 = 17;
    goto loc_801F59CC;
}

loc_801F5980:
{
    r0 = MemoryInline::FlatRead32((r23 + 5584));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F5988:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F59C8;
    }
}

loc_801F598C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r29));
}

loc_801F5990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F59C8;
    }
}

loc_801F5994:
{
    r5 = MemoryInline::FlatRead32((r23 + 5600));
    r0 = 0;
    r6 = r5;
}

loc_801F59A0:
{
    r4 = MemoryInline::FlatRead16(r6);
    r3 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F59A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F59C8;
    }
}

loc_801F59AC:
{
    r3 = (r4 & -3);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r6 + 12), r0);
    MemoryInline::FlatWrite32((r6 + 16), r0);
    r6 = MemoryInline::FlatRead32((r6 + 32));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_801F59C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F59A0;
    }
}

loc_801F59C8:
{
    r3 = 0;
}

loc_801F59CC:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
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
    ctx->gpr[11] = r11;
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
// RECOMP_REGISTRATION base 0x801F55A8 func_801F55A8 preserves=true fpr_mask=0x00000000
