#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80849948(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80849948;

loc_80849948:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r25);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r1 + 108), r27);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r1 + 112), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r29);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r1 + 120), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r1 + 124), r31);
    r28 = r3;
    r29 = r4;
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r30 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r30));
}

loc_8084996C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80849BC4;
    }
}

loc_80849970:
{
    r5 = (r29 * 372);
    r4 = MemoryInline::FlatRead32((r28 + 1620));
    r3 = r28;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r28 + 1620), r0);
    r5 = (r28 + r5);
    r31 = (r5 + 1984);
    r6 = 0;
    r5 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_8084999C:
{
    r0 = (r29 + 2);
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(2))) {
        goto loc_808499A8;
    }
}

loc_808499A4:
{
    r0 = r29;
}

loc_808499A8:
{
}

loc_808499AC:
{
    r27 = 0x808E0000u;
    r27 = (r27 + -25684);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_808499C0;
    }
}

loc_808499B8:
{
    r27 = 0x808E0000u;
    r27 = (r27 + -25672);
}

loc_808499C0:
{
}

loc_808499C4:
{
    r5 = 0x808E0000u;
    r3 = (r1 + 40);
    r0 = (r29 + 2);
    r5 = (r5 + -25688);
    r4 = 4;
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(2))) {
        goto loc_808499E0;
    }
}

loc_808499DC:
{
    r0 = r29;
}

loc_808499E0:
{
}

loc_808499E4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_808499FC;
    }
}

loc_808499E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_808499EC:
{
    r6 = (r29 + 2);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80849A10;
    }
}

loc_808499F4:
{
    r6 = r29;
    goto loc_80849A10;
}

loc_808499FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_80849A00:
{
    r6 = (r29 + 2);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80849A0C;
    }
}

loc_80849A08:
{
    r6 = r29;
}

loc_80849A0C:
{
    r6 = (r6 + -2);
}

loc_80849A10:
{
    r6 = (r6 + 1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80849A1Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r31;
    r3 = (r1 + 48);
    // inline leaf 0x805C2C18 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x805C2C18
    r4 = 0x808E0000u;
    r5 = r27;
    r3 = (r1 + 48);
    r6 = (r1 + 40);
    r4 = (r4 + -25696);
    r7 = 0;
    ctx->lr = 0x80849A44u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805C2C60u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 48);
    r4 = -1;
    ctx->lr = 0x80849A50u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805C2C20u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r30 + -2);
    r3 = r31;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
    r4 = (r4 + 1);
    ctx->lr = 0x80849A68u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063D268u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r29 * 1480);
    r3 = r31;
    r4 = 0;
    r5 = (r28 + r0);
    r26 = (r5 + 3472);
    r5 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8063D278u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r3 = 0x808B0000u;
}

loc_80849A8C:
{
    r3 = (r3 + -9304);
    r5 = (r3 + 16);
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(2))) {
        goto loc_80849A9C;
    }
}

loc_80849A98:
{
    r5 = r3;
}

loc_80849A9C:
{
    r3 = 0x808B0000u;
}

loc_80849AA4:
{
    r3 = (r3 + -9304);
    r10 = (r3 + 50);
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(2))) {
        goto loc_80849AB4;
    }
}

loc_80849AB0:
{
    r10 = (r3 + 33);
}

loc_80849AB4:
{
    r3 = 0x808B0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_80849ABC:
{
    r3 = (r3 + -9304);
    r8 = (r3 + 86);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80849ACC;
    }
}

loc_80849AC8:
{
    r8 = (r3 + 68);
}

loc_80849ACC:
{
    r27 = 0x808B0000u;
    r11 = 1;
    r27 = (r27 + -9304);
    r0 = 0;
    r25 = (r29 * 1140);
    r3 = (r27 + 149);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r3);
    r6 = (r27 + 105);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r5);
    r4 = (r28 + r25);
    r4 = (r4 + 9764);
    r3 = r26;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r4);
    r7 = (r27 + 113);
    r9 = (r27 + 131);
    r4 = 3;
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r11);
    r5 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r11);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r11);
    }
    ctx->lr = 0x80849B28u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063EBDCu>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r28 + 16232));
    r3 = r26;
    // inline leaf 0x8063F020 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 668), r4);
    // end of inlined leaf 0x8063F020
    r4 = MemoryInline::FlatRead32((r28 + 16236));
    r3 = r26;
    // inline leaf 0x8063F028 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 672), r4);
    // end of inlined leaf 0x8063F028
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_80849B44:
{
    r6 = (r27 + 172);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80849B50;
    }
}

loc_80849B4C:
{
    r6 = (r27 + 166);
}

loc_80849B50:
{
    r3 = (r28 + r25);
    r8 = 0x808B0000u;
    r8 = (r8 + -9304);
    r27 = (r3 + 9392);
    r3 = r27;
    r4 = (r8 + 179);
    r5 = (r8 + 187);
    r7 = (r8 + 206);
    r8 = (r8 + 224);
    ctx->lr = 0x80849B78u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806406B0u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r28 + 16240));
    r3 = r27;
    // inline leaf 0x806407D4 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 376), r4);
    // end of inlined leaf 0x806407D4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_80849B88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80849BBC;
    }
}

loc_80849B8C:
{
    r0 = (r29 * 388);
    r3 = r31;
    r4 = 1;
    r5 = (r28 + r0);
    r27 = (r5 + 16248);
    r5 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8063D278u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r3 = r27;
    r5 = r29;
    r4 = 7;
    r6 = 1;
    ctx->lr = 0x80849BBCu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807E7A38u>(ctx);
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

loc_80849BBC:
{
    r3 = r31;
    goto loc_80849C10;
}

loc_80849BC4:
{
    r29 = (r29 - r30);
    r4 = MemoryInline::FlatRead32((r28 + 1620));
    r27 = (r29 * 388);
    r0 = MemoryInline::FlatRead32((r28 + 16244));
    r3 = (r4 + 1);
    MemoryInline::FlatWrite32((r28 + 1620), r3);
    r6 = 0;
    r3 = r28;
    r5 = (r0 + r27);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8060246Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r0 = MemoryInline::FlatRead32((r28 + 16244));
    r4 = 0x808B0000u;
    r4 = (r4 + -9304);
    r5 = r29;
    r3 = (r0 + r27);
    r4 = (r4 + 229);
    ctx->lr = 0x80849C08u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805F3A50u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 16244));
    r3 = (r0 + r27);
}

loc_80849C10:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 100), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 100));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 108));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 116));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 120));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 124));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
// RECOMP_REGISTRATION base 0x80849948 func_80849948 preserves=true fpr_mask=0x00000000
