#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C3318(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C3318;

loc_801C3318:
{
    MemoryInline::FlatWriteRam32((r1 + -1136), r1);
    r1 = (r1 + -1136);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1140), r0);
    r11 = (r1 + 1136);
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
    r6 = 0x80350000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = (r6 + 2352);
    r31 = r3;
    r6_addr_0 = (r6 + r0);
    r29 = MemoryInline::FlatRead32(r6_addr_0);
    r27 = r4;
    r28 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r26 = MemoryInline::FlatRead32((r29 + 2104));
    r25 = MemoryInline::FlatRead8((r29 + 2252));
    r24 = MemoryInline::FlatRead32((r29 + 2236));
    r30 = MemoryInline::FlatRead32((r29 + 2268));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C3364:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(-1))) {
        goto loc_801C435C;
    }
}

loc_801C3368:
{
}

loc_801C336C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801C3378;
    }
}

loc_801C3370:
{
    r24 = -2;
    goto loc_801C435C;
}

loc_801C3378:
{
}

loc_801C337C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_801C379C;
    }
}

loc_801C3380:
{
}

loc_801C3384:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_801C3390;
    }
}

loc_801C3388:
{
    r24 = 0;
    goto loc_801C435C;
}

loc_801C3390:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C33BC;
    }
}

loc_801C33B0:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C33BC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r4 = (r26 + 3);
    r0 = (r3 + -1);
}

loc_801C33D0:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_801C378C;
    }
}

loc_801C33D4:
{
    r12 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 1026), static_cast<uint16_t>(r0));
    r31 = 19;
    r10 = MemoryInline::FlatRead32((r1 + 1008));
    MemoryInline::FlatWrite8((r29 + 2252), static_cast<uint8_t>(r27));
    r9 = MemoryInline::FlatRead32((r1 + 1012));
    MemoryInline::FlatWriteRam8((r1 + 1004), static_cast<uint8_t>(r12));
    r8 = MemoryInline::FlatRead32((r1 + 1016));
    r11 = MemoryInline::FlatRead32((r1 + 1004));
    r7 = MemoryInline::FlatRead32((r1 + 1020));
    r6 = MemoryInline::FlatRead32((r1 + 1024));
    r5 = MemoryInline::FlatRead32((r1 + 1028));
    r4 = MemoryInline::FlatRead32((r1 + 1032));
    r3 = MemoryInline::FlatRead32((r1 + 1036));
    r0 = MemoryInline::FlatRead32((r1 + 1040));
    MemoryInline::FlatWriteRam32((r1 + 1000), r31);
    MemoryInline::FlatWriteRam32((r1 + 1044), r12);
    MemoryInline::FlatWriteRam32((r1 + 1048), r31);
    MemoryInline::FlatWriteRam32((r1 + 1052), r11);
    MemoryInline::FlatWriteRam32((r1 + 1056), r10);
    MemoryInline::FlatWriteRam32((r1 + 1060), r9);
    MemoryInline::FlatWriteRam32((r1 + 1064), r8);
    MemoryInline::FlatWriteRam32((r1 + 1068), r7);
    MemoryInline::FlatWriteRam32((r1 + 1072), r6);
    MemoryInline::FlatWriteRam32((r1 + 1076), r5);
    MemoryInline::FlatWriteRam32((r1 + 1080), r4);
    MemoryInline::FlatWriteRam32((r1 + 1084), r3);
    MemoryInline::FlatWriteRam32((r1 + 1088), r0);
    MemoryInline::FlatWriteRam32((r1 + 1092), r12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C3478;
    }
}

loc_801C346C:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C3478:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801C3488:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C3498;
    }
}

loc_801C348C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C350C;
}

loc_801C3498:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C34B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 1048);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C350C:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 930), static_cast<uint16_t>(r3));
    r27 = 26;
    r10 = MemoryInline::FlatRead32((r1 + 912));
    r12 = 0x801C0000u;
    MemoryInline::FlatWriteRam8((r1 + 908), static_cast<uint8_t>(r0));
    r12 = (r12 + 13032);
    r9 = MemoryInline::FlatRead32((r1 + 916));
    r11 = MemoryInline::FlatRead32((r1 + 908));
    r8 = MemoryInline::FlatRead32((r1 + 920));
    r7 = MemoryInline::FlatRead32((r1 + 924));
    r6 = MemoryInline::FlatRead32((r1 + 928));
    r5 = MemoryInline::FlatRead32((r1 + 932));
    r4 = MemoryInline::FlatRead32((r1 + 936));
    r3 = MemoryInline::FlatRead32((r1 + 940));
    r0 = MemoryInline::FlatRead32((r1 + 944));
    MemoryInline::FlatWriteRam32((r1 + 904), r27);
    MemoryInline::FlatWriteRam32((r1 + 948), r12);
    MemoryInline::FlatWriteRam32((r1 + 952), r27);
    MemoryInline::FlatWriteRam32((r1 + 956), r11);
    MemoryInline::FlatWriteRam32((r1 + 960), r10);
    MemoryInline::FlatWriteRam32((r1 + 964), r9);
    MemoryInline::FlatWriteRam32((r1 + 968), r8);
    MemoryInline::FlatWriteRam32((r1 + 972), r7);
    MemoryInline::FlatWriteRam32((r1 + 976), r6);
    MemoryInline::FlatWriteRam32((r1 + 980), r5);
    MemoryInline::FlatWriteRam32((r1 + 984), r4);
    MemoryInline::FlatWriteRam32((r1 + 988), r3);
    MemoryInline::FlatWriteRam32((r1 + 992), r0);
    MemoryInline::FlatWriteRam32((r1 + 996), r12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C35B4;
    }
}

loc_801C35A8:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C35B4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801C35C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C35D4;
    }
}

loc_801C35C8:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C3648;
}

loc_801C35D4:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C35F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 952);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C3648:
{
    r11 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 834), static_cast<uint16_t>(r0));
    r12 = 21;
    r9 = MemoryInline::FlatRead32((r1 + 816));
    MemoryInline::FlatWriteRam8((r1 + 812), static_cast<uint8_t>(r11));
    r8 = MemoryInline::FlatRead32((r1 + 820));
    r10 = MemoryInline::FlatRead32((r1 + 812));
    r7 = MemoryInline::FlatRead32((r1 + 824));
    r6 = MemoryInline::FlatRead32((r1 + 828));
    r5 = MemoryInline::FlatRead32((r1 + 832));
    r4 = MemoryInline::FlatRead32((r1 + 836));
    r3 = MemoryInline::FlatRead32((r1 + 840));
    r0 = MemoryInline::FlatRead32((r1 + 844));
    MemoryInline::FlatWriteRam32((r1 + 808), r12);
    MemoryInline::FlatWriteRam32((r1 + 852), r28);
    MemoryInline::FlatWriteRam32((r1 + 848), r11);
    MemoryInline::FlatWriteRam32((r1 + 856), r12);
    MemoryInline::FlatWriteRam32((r1 + 860), r10);
    MemoryInline::FlatWriteRam32((r1 + 864), r9);
    MemoryInline::FlatWriteRam32((r1 + 868), r8);
    MemoryInline::FlatWriteRam32((r1 + 872), r7);
    MemoryInline::FlatWriteRam32((r1 + 876), r6);
    MemoryInline::FlatWriteRam32((r1 + 880), r5);
    MemoryInline::FlatWriteRam32((r1 + 884), r4);
    MemoryInline::FlatWriteRam32((r1 + 888), r3);
    MemoryInline::FlatWriteRam32((r1 + 892), r0);
    MemoryInline::FlatWriteRam32((r1 + 896), r11);
    MemoryInline::FlatWriteRam32((r1 + 900), r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C36E8;
    }
}

loc_801C36DC:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C36E8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801C36F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C3708;
    }
}

loc_801C36FC:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C377C;
}

loc_801C3708:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C3728u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 856);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C377C:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_801C437C;
}

loc_801C378C:
{
    r3 = r30;
    r24 = -2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C435C;
}

loc_801C379C:
{
}

loc_801C37A0:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r25))) {
        goto loc_801C435C;
    }
}

loc_801C37A4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C37D0;
    }
}

loc_801C37C4:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C37D0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r4 = (r26 + 8);
    r0 = (r3 + -1);
}

loc_801C37E4:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_801C4350;
    }
}

loc_801C37E8:
{
    r3 = 1;
    r0 = 4;
    MemoryInline::FlatWriteRam16((r1 + 738), static_cast<uint16_t>(r3));
    r31 = 19;
    r12 = 0;
    r10 = MemoryInline::FlatRead32((r1 + 720));
    MemoryInline::FlatWrite8((r29 + 2252), static_cast<uint8_t>(r27));
    r9 = MemoryInline::FlatRead32((r1 + 724));
    MemoryInline::FlatWriteRam8((r1 + 716), static_cast<uint8_t>(r0));
    r8 = MemoryInline::FlatRead32((r1 + 728));
    r11 = MemoryInline::FlatRead32((r1 + 716));
    r7 = MemoryInline::FlatRead32((r1 + 732));
    r6 = MemoryInline::FlatRead32((r1 + 736));
    r5 = MemoryInline::FlatRead32((r1 + 740));
    r4 = MemoryInline::FlatRead32((r1 + 744));
    r3 = MemoryInline::FlatRead32((r1 + 748));
    r0 = MemoryInline::FlatRead32((r1 + 752));
    MemoryInline::FlatWriteRam32((r1 + 712), r31);
    MemoryInline::FlatWriteRam32((r1 + 756), r12);
    MemoryInline::FlatWriteRam32((r1 + 760), r31);
    MemoryInline::FlatWriteRam32((r1 + 764), r11);
    MemoryInline::FlatWriteRam32((r1 + 768), r10);
    MemoryInline::FlatWriteRam32((r1 + 772), r9);
    MemoryInline::FlatWriteRam32((r1 + 776), r8);
    MemoryInline::FlatWriteRam32((r1 + 780), r7);
    MemoryInline::FlatWriteRam32((r1 + 784), r6);
    MemoryInline::FlatWriteRam32((r1 + 788), r5);
    MemoryInline::FlatWriteRam32((r1 + 792), r4);
    MemoryInline::FlatWriteRam32((r1 + 796), r3);
    MemoryInline::FlatWriteRam32((r1 + 800), r0);
    MemoryInline::FlatWriteRam32((r1 + 804), r12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C3890;
    }
}

loc_801C3884:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C3890:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801C38A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C38B0;
    }
}

loc_801C38A4:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C3924;
}

loc_801C38B0:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C38D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 760);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C3924:
{
    r3 = 1;
    r0 = 4;
    MemoryInline::FlatWriteRam16((r1 + 642), static_cast<uint16_t>(r3));
    r31 = 26;
    r12 = 0;
    r10 = MemoryInline::FlatRead32((r1 + 624));
    MemoryInline::FlatWriteRam8((r1 + 620), static_cast<uint8_t>(r0));
    r9 = MemoryInline::FlatRead32((r1 + 628));
    r11 = MemoryInline::FlatRead32((r1 + 620));
    r8 = MemoryInline::FlatRead32((r1 + 632));
    r7 = MemoryInline::FlatRead32((r1 + 636));
    r6 = MemoryInline::FlatRead32((r1 + 640));
    r5 = MemoryInline::FlatRead32((r1 + 644));
    r4 = MemoryInline::FlatRead32((r1 + 648));
    r3 = MemoryInline::FlatRead32((r1 + 652));
    r0 = MemoryInline::FlatRead32((r1 + 656));
    MemoryInline::FlatWriteRam32((r1 + 616), r31);
    MemoryInline::FlatWriteRam32((r1 + 660), r12);
    MemoryInline::FlatWriteRam32((r1 + 664), r31);
    MemoryInline::FlatWriteRam32((r1 + 668), r11);
    MemoryInline::FlatWriteRam32((r1 + 672), r10);
    MemoryInline::FlatWriteRam32((r1 + 676), r9);
    MemoryInline::FlatWriteRam32((r1 + 680), r8);
    MemoryInline::FlatWriteRam32((r1 + 684), r7);
    MemoryInline::FlatWriteRam32((r1 + 688), r6);
    MemoryInline::FlatWriteRam32((r1 + 692), r5);
    MemoryInline::FlatWriteRam32((r1 + 696), r4);
    MemoryInline::FlatWriteRam32((r1 + 700), r3);
    MemoryInline::FlatWriteRam32((r1 + 704), r0);
    MemoryInline::FlatWriteRam32((r1 + 708), r12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C39C8;
    }
}

loc_801C39BC:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C39C8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801C39D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C39E8;
    }
}

loc_801C39DC:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C3A5C;
}

loc_801C39E8:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C3A08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 664);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C3A5C:
{
    r3 = 78643200;
    r9 = 1;
    r8 = (r3 + 48);
    r7 = 22;
    r6 = 21;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r9));
    r3 = (r1 + 572);
    r4 = (r1 + 32);
    r5 = 4;
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam32((r1 + 568), r7);
    MemoryInline::FlatWriteRam16((r1 + 594), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 612), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 576);
    r4 = (r1 + 14);
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 577);
    r4 = (r1 + 15);
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 568), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 568));
            r12 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 572));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 576));
            r10 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 580));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 584));
            r8 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 588));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 592));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 596));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 600));
            r4 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 604));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 608));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 612));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 520), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 520), r31);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 524), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 528), r11);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 532), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 536), r9);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 540), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 544), r7);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 548), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 552), r5);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 556), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 560), r3);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 564), r0);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C3B48;
    }
}

loc_801C3B3C:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C3B48:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801C3B58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C3B68;
    }
}

loc_801C3B5C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C3BDC;
}

loc_801C3B68:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C3B88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 520);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C3BDC:
{
    r5 = MemoryInline::FlatRead8((r13 + -24519));
    r9 = 78643200;
    r4 = 0x80250000u;
    r3 = 9;
    r8 = (r5 + -1);
    r5 = 22;
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r7 = (r7_rot_1 & -8);
    r6 = 21;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r3));
    r7 = (r7 + r8);
    r4 = (r4 + 12048);
    MemoryInline::FlatWriteRam32((r1 + 424), r5);
    r26 = (r4 + r7);
    r3 = (r1 + 428);
    r4 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 28), r9);
    r5 = 4;
    MemoryInline::FlatWriteRam16((r1 + 450), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 468), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 432);
    r4 = (r1 + 13);
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r26;
    r3 = (r1 + 433);
    r5 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 424), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r1 + 424));
            r12 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r1 + 428));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r1 + 432));
            r10 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r1 + 436));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r1 + 440));
            r8 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r1 + 444));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r1 + 448));
            r6 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r1 + 452));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 456));
            r4 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r1 + 460));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r1 + 464));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r1 + 468));
        }
    }
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 472), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 472), r31);
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 476), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 480), r11);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 484), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 488), r9);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 492), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 496), r7);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 500), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r1 + 504), r5);
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r1 + 508), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r1 + 512), r3);
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r1 + 516), r0);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C3CDC;
    }
}

loc_801C3CD0:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C3CDC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801C3CEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C3CFC;
    }
}

loc_801C3CF0:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C3D70;
}

loc_801C3CFC:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C3D1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 472);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C3D70:
{
    r3 = MemoryInline::FlatRead8((r13 + -24519));
    r4 = 78643200;
    r8 = (r4 + 26);
    r5 = 22;
    r7 = (r3 + -1);
    r4 = 0x80250000u;
    r3 = 2;
    r6 = 21;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & -2);
    r4 = (r4 + 12096);
    MemoryInline::FlatWriteRam32((r1 + 328), r5);
    r26 = (r4 + r7);
    r3 = (r1 + 332);
    r4 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 24), r8);
    r5 = 4;
    MemoryInline::FlatWriteRam16((r1 + 354), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 372), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 336);
    r4 = (r1 + 12);
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r26;
    r3 = (r1 + 337);
    r5 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 328), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 328));
            r12 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 332));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 336));
            r10 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r1 + 340));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r1 + 344));
            r8 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r1 + 348));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r1 + 352));
            r6 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r1 + 356));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 360));
            r4 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r1 + 364));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r1 + 368));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r1 + 372));
        }
    }
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 376), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_7, 0u, (r1 + 376), r31);
        MemoryInline::WriteResolved32(guest_range_7, 4u, (r1 + 380), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_7, 8u, (r1 + 384), r11);
        MemoryInline::WriteResolved32(guest_range_7, 12u, (r1 + 388), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_7, 16u, (r1 + 392), r9);
        MemoryInline::WriteResolved32(guest_range_7, 20u, (r1 + 396), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_7, 24u, (r1 + 400), r7);
        MemoryInline::WriteResolved32(guest_range_7, 28u, (r1 + 404), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_7, 32u, (r1 + 408), r5);
        MemoryInline::WriteResolved32(guest_range_7, 36u, (r1 + 412), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 40u, (r1 + 416), r3);
        MemoryInline::WriteResolved32(guest_range_7, 44u, (r1 + 420), r0);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C3E70;
    }
}

loc_801C3E64:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C3E70:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801C3E80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C3E90;
    }
}

loc_801C3E84:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C3F04;
}

loc_801C3E90:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C3EB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 376);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C3F04:
{
    r3 = 78643200;
    r8 = 1;
    r9 = (r3 + 51);
    r7 = 22;
    r6 = 21;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r27));
    r3 = (r1 + 284);
    r4 = (r1 + 20);
    r5 = 4;
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam32((r1 + 280), r7);
    MemoryInline::FlatWriteRam16((r1 + 306), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 324), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 288);
    r4 = (r1 + 10);
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 289);
    r4 = (r1 + 11);
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 280), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r1 + 280));
            r12 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r1 + 284));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r1 + 288));
            r10 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r1 + 292));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r1 + 296));
            r8 = MemoryInline::ReadResolved32(guest_range_8, 20u, (r1 + 300));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r1 + 304));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r1 + 308));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_8, 32u, (r1 + 312));
            r4 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r1 + 316));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r1 + 320));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 44u, (r1 + 324));
        }
    }
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 232), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_9, 0u, (r1 + 232), r27);
        MemoryInline::WriteResolved32(guest_range_9, 4u, (r1 + 236), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_9, 8u, (r1 + 240), r11);
        MemoryInline::WriteResolved32(guest_range_9, 12u, (r1 + 244), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_9, 16u, (r1 + 248), r9);
        MemoryInline::WriteResolved32(guest_range_9, 20u, (r1 + 252), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 24u, (r1 + 256), r7);
        MemoryInline::WriteResolved32(guest_range_9, 28u, (r1 + 260), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_9, 32u, (r1 + 264), r5);
        MemoryInline::WriteResolved32(guest_range_9, 36u, (r1 + 268), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_9, 40u, (r1 + 272), r3);
        MemoryInline::WriteResolved32(guest_range_9, 44u, (r1 + 276), r0);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C3FF0;
    }
}

loc_801C3FE4:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C3FF0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801C4000:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C4010;
    }
}

loc_801C4004:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C4084;
}

loc_801C4010:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C4030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 232);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C4084:
{
    r3 = 78643200;
    r6 = 0x801C0000u;
    r9 = (r3 + 48);
    r8 = 1;
    r3 = 8;
    r6 = (r6 + 13032);
    r7 = 22;
    r0 = 21;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    r3 = (r1 + 188);
    r4 = (r1 + 16);
    r5 = 4;
    MemoryInline::FlatWriteRam32((r1 + 16), r9);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam32((r1 + 184), r7);
    MemoryInline::FlatWriteRam16((r1 + 210), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 228), r6);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 192);
    r4 = (r1 + 8);
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 193);
    r4 = (r1 + 9);
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_10 = MemoryInline::ResolveRangeHost((r1 + 184), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r1 + 184));
            r12 = MemoryInline::ReadResolved32(guest_range_10, 4u, (r1 + 188));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_10, 8u, (r1 + 192));
            r10 = MemoryInline::ReadResolved32(guest_range_10, 12u, (r1 + 196));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_10, 16u, (r1 + 200));
            r8 = MemoryInline::ReadResolved32(guest_range_10, 20u, (r1 + 204));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_10, 24u, (r1 + 208));
            r6 = MemoryInline::ReadResolved32(guest_range_10, 28u, (r1 + 212));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_10, 32u, (r1 + 216));
            r4 = MemoryInline::ReadResolved32(guest_range_10, 36u, (r1 + 220));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_10, 40u, (r1 + 224));
            r0 = MemoryInline::ReadResolved32(guest_range_10, 44u, (r1 + 228));
        }
    }
    guest_range_11 = MemoryInline::ResolveRangeHost((r1 + 136), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_11, 0u, (r1 + 136), r27);
        MemoryInline::WriteResolved32(guest_range_11, 4u, (r1 + 140), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_11, 8u, (r1 + 144), r11);
        MemoryInline::WriteResolved32(guest_range_11, 12u, (r1 + 148), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_11, 16u, (r1 + 152), r9);
        MemoryInline::WriteResolved32(guest_range_11, 20u, (r1 + 156), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 24u, (r1 + 160), r7);
        MemoryInline::WriteResolved32(guest_range_11, 28u, (r1 + 164), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_11, 32u, (r1 + 168), r5);
        MemoryInline::WriteResolved32(guest_range_11, 36u, (r1 + 172), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_11, 40u, (r1 + 176), r3);
        MemoryInline::WriteResolved32(guest_range_11, 44u, (r1 + 180), r0);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C4178;
    }
}

loc_801C416C:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C4178:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801C4188:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C4198;
    }
}

loc_801C418C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C420C;
}

loc_801C4198:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C41B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 136);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C420C:
{
    r11 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 66), static_cast<uint16_t>(r0));
    r12 = 21;
    r9 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r11));
    r8 = MemoryInline::FlatRead32((r1 + 52));
    r10 = MemoryInline::FlatRead32((r1 + 44));
    r7 = MemoryInline::FlatRead32((r1 + 56));
    r6 = MemoryInline::FlatRead32((r1 + 60));
    r5 = MemoryInline::FlatRead32((r1 + 64));
    r4 = MemoryInline::FlatRead32((r1 + 68));
    r3 = MemoryInline::FlatRead32((r1 + 72));
    r0 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 40), r12);
    MemoryInline::FlatWriteRam32((r1 + 84), r28);
    MemoryInline::FlatWriteRam32((r1 + 80), r11);
    MemoryInline::FlatWriteRam32((r1 + 88), r12);
    MemoryInline::FlatWriteRam32((r1 + 92), r10);
    MemoryInline::FlatWriteRam32((r1 + 96), r9);
    MemoryInline::FlatWriteRam32((r1 + 100), r8);
    MemoryInline::FlatWriteRam32((r1 + 104), r7);
    MemoryInline::FlatWriteRam32((r1 + 108), r6);
    MemoryInline::FlatWriteRam32((r1 + 112), r5);
    MemoryInline::FlatWriteRam32((r1 + 116), r4);
    MemoryInline::FlatWriteRam32((r1 + 120), r3);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    MemoryInline::FlatWriteRam32((r1 + 128), r11);
    MemoryInline::FlatWriteRam32((r1 + 132), r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_801C42AC;
    }
}

loc_801C42A0:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C42AC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801C42BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C42CC;
    }
}

loc_801C42C0:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C4340;
}

loc_801C42CC:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C42ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 88);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C4340:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_801C437C;
}

loc_801C4350:
{
    r3 = r30;
    r24 = -2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C435C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801C4360:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C4378;
    }
}

loc_801C4364:
{
    r12 = r28;
    r3 = r31;
    r4 = r24;
    ctr = r12;
    ctx->lr = 0x801C4378u;
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
    InvokeIndirectCpu(ctr, ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801C4378:
{
    r3 = r24;
}

loc_801C437C:
{
    r11 = (r1 + 1136);
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
    r0 = MemoryInline::FlatRead32((r1 + 1140));
    ctx->lr = r0;
    r1 = (r1 + 1136);
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
// RECOMP_REGISTRATION base 0x801C3318 func_801C3318 preserves=true fpr_mask=0x00000000
