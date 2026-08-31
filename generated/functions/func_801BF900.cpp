#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BF900(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801BF900;

loc_801BF900:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -640), 0, 648u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -640), r1);
    r1 = (r1 + -640);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 644u, (r1 + 644), r0);
    r11 = (r1 + 640);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 616u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 616u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 620u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 624u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 624u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 628u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 632u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 632u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 636u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r5 = 0x80350000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_801BF91C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r27 = r3;
    r5 = (r5 + 2352);
    r26 = r4;
    r5_addr_0 = (r5 + r0);
    r29 = MemoryInline::FlatRead32(r5_addr_0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C01D0;
    }
}

loc_801BF934:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r26));
    r0 = 0;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 134217727);
    MemoryInline::FlatWrite32((r29 + 2272), r4);
    MemoryInline::FlatWrite32((r29 + 2236), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801BF954:
{
    r31 = 42;
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_801BF960;
    }
}

loc_801BF95C:
{
    r31 = 20;
}

loc_801BF960:
{
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r26));
    r0 = MemoryInline::FlatRead32((r29 + 2272));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 1);
    r4 = 1;
    r5 = (0 - r3);
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801BF978:
{
    r28 = (r5 & 5996);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801BF97C:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r27));
    r3 = 0x802A0000u;
    r4 = 0x802A0000u;
    r27 = (r0 & 255);
    r3 = (r3 + -7308);
    r4 = (r4 + -7252);
    if (((cr & 0x00000020u) != 0)) {
        goto loc_801BF99C;
    }
}

loc_801BF998:
{
    r4 = (r13 + -28464);
}

loc_801BF99C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r30 = 0x801C0000u;
    r5 = MemoryInline::FlatRead8((r29 + 2446));
    r3 = (r29 + 352);
    r4 = 0;
    r6 = (r30 + -2020);
    ctx->lr = 0x801BF9BCu;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C45C8u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 538), static_cast<uint16_t>(r3));
    r12 = (r30 + -2020);
    r30 = 26;
    r10 = MemoryInline::FlatRead32((r1 + 520));
    MemoryInline::FlatWriteRam8((r1 + 516), static_cast<uint8_t>(r0));
    r9 = MemoryInline::FlatRead32((r1 + 524));
    r11 = MemoryInline::FlatRead32((r1 + 516));
    r8 = MemoryInline::FlatRead32((r1 + 528));
    r7 = MemoryInline::FlatRead32((r1 + 532));
    r6 = MemoryInline::FlatRead32((r1 + 536));
    r5 = MemoryInline::FlatRead32((r1 + 540));
    r4 = MemoryInline::FlatRead32((r1 + 544));
    r3 = MemoryInline::FlatRead32((r1 + 548));
    r0 = MemoryInline::FlatRead32((r1 + 552));
    MemoryInline::FlatWriteRam32((r1 + 512), r30);
    MemoryInline::FlatWriteRam32((r1 + 556), r12);
    MemoryInline::FlatWriteRam32((r1 + 560), r30);
    MemoryInline::FlatWriteRam32((r1 + 564), r11);
    MemoryInline::FlatWriteRam32((r1 + 568), r10);
    MemoryInline::FlatWriteRam32((r1 + 572), r9);
    MemoryInline::FlatWriteRam32((r1 + 576), r8);
    MemoryInline::FlatWriteRam32((r1 + 580), r7);
    MemoryInline::FlatWriteRam32((r1 + 584), r6);
    MemoryInline::FlatWriteRam32((r1 + 588), r5);
    MemoryInline::FlatWriteRam32((r1 + 592), r4);
    MemoryInline::FlatWriteRam32((r1 + 596), r3);
    MemoryInline::FlatWriteRam32((r1 + 600), r0);
    MemoryInline::FlatWriteRam32((r1 + 604), r12);
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
        goto loc_801BFA60;
    }
}

loc_801BFA54:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801BFA60:
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

loc_801BFA70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BFA80;
    }
}

loc_801BFA74:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801BFAF4;
}

loc_801BFA80:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801BFAA0u;
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
    r4 = (r1 + 560);
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
    r3 = r30;
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

loc_801BFAF4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 240);
    r3 = 1;
    MemoryInline::FlatWriteRam16((r1 + 442), static_cast<uint16_t>(r3));
    r27 = 17;
    r10 = MemoryInline::FlatRead32((r1 + 424));
    r12 = 0x801C0000u;
    MemoryInline::FlatWriteRam8((r1 + 420), static_cast<uint8_t>(r0));
    r12 = (r12 + -2020);
    r9 = MemoryInline::FlatRead32((r1 + 428));
    r11 = MemoryInline::FlatRead32((r1 + 420));
    r8 = MemoryInline::FlatRead32((r1 + 432));
    r7 = MemoryInline::FlatRead32((r1 + 436));
    r6 = MemoryInline::FlatRead32((r1 + 440));
    r5 = MemoryInline::FlatRead32((r1 + 444));
    r4 = MemoryInline::FlatRead32((r1 + 448));
    r3 = MemoryInline::FlatRead32((r1 + 452));
    r0 = MemoryInline::FlatRead32((r1 + 456));
    MemoryInline::FlatWriteRam32((r1 + 416), r27);
    MemoryInline::FlatWriteRam32((r1 + 460), r12);
    MemoryInline::FlatWriteRam32((r1 + 464), r27);
    MemoryInline::FlatWriteRam32((r1 + 468), r11);
    MemoryInline::FlatWriteRam32((r1 + 472), r10);
    MemoryInline::FlatWriteRam32((r1 + 476), r9);
    MemoryInline::FlatWriteRam32((r1 + 480), r8);
    MemoryInline::FlatWriteRam32((r1 + 484), r7);
    MemoryInline::FlatWriteRam32((r1 + 488), r6);
    MemoryInline::FlatWriteRam32((r1 + 492), r5);
    MemoryInline::FlatWriteRam32((r1 + 496), r4);
    MemoryInline::FlatWriteRam32((r1 + 500), r3);
    MemoryInline::FlatWriteRam32((r1 + 504), r0);
    MemoryInline::FlatWriteRam32((r1 + 508), r12);
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
        goto loc_801BFB9C;
    }
}

loc_801BFB90:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801BFB9C:
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

loc_801BFBAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BFBBC;
    }
}

loc_801BFBB0:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801BFC30;
}

loc_801BFBBC:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801BFBDCu;
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
    r4 = (r1 + 464);
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
    r3 = r30;
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

loc_801BFC30:
{
    r6 = 0x801C0000u;
    r3 = 42;
    r6 = (r6 + -2020);
    r8 = 56;
    r7 = 23;
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 324);
    r4 = (r1 + 24);
    r5 = 4;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteRam32((r1 + 320), r7);
    MemoryInline::FlatWriteRam16((r1 + 346), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 364), r6);
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
    r3 = (r1 + 328);
    r4 = (r1 + 12);
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
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r27 = (r29 + 2356);
    r12 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam16((r1 + 352), static_cast<uint16_t>(r0));
    r11 = MemoryInline::FlatRead32((r1 + 320));
    r10 = MemoryInline::FlatRead32((r1 + 324));
    r9 = MemoryInline::FlatRead32((r1 + 328));
    r8 = MemoryInline::FlatRead32((r1 + 332));
    r7 = MemoryInline::FlatRead32((r1 + 336));
    r6 = MemoryInline::FlatRead32((r1 + 340));
    r5 = MemoryInline::FlatRead32((r1 + 344));
    r4 = MemoryInline::FlatRead32((r1 + 352));
    r3 = MemoryInline::FlatRead32((r1 + 360));
    r0 = MemoryInline::FlatRead32((r1 + 364));
    MemoryInline::FlatWriteRam32((r1 + 348), r27);
    MemoryInline::FlatWriteRam32((r1 + 356), r12);
    MemoryInline::FlatWriteRam32((r1 + 368), r11);
    MemoryInline::FlatWriteRam32((r1 + 372), r10);
    MemoryInline::FlatWriteRam32((r1 + 376), r9);
    MemoryInline::FlatWriteRam32((r1 + 380), r8);
    MemoryInline::FlatWriteRam32((r1 + 384), r7);
    MemoryInline::FlatWriteRam32((r1 + 388), r6);
    MemoryInline::FlatWriteRam32((r1 + 392), r5);
    MemoryInline::FlatWriteRam32((r1 + 396), r27);
    MemoryInline::FlatWriteRam32((r1 + 400), r4);
    MemoryInline::FlatWriteRam32((r1 + 404), r12);
    MemoryInline::FlatWriteRam32((r1 + 408), r3);
    MemoryInline::FlatWriteRam32((r1 + 412), r0);
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
        goto loc_801BFD18;
    }
}

loc_801BFD0C:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801BFD18:
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

loc_801BFD28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BFD38;
    }
}

loc_801BFD2C:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801BFDAC;
}

loc_801BFD38:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801BFD58u;
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
    r4 = (r1 + 368);
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
    r3 = r30;
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

loc_801BFDAC:
{
    r6 = 0x801C0000u;
    r3 = 98;
    r6 = (r6 + -2020);
    r8 = 56;
    r7 = 23;
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 228);
    r4 = (r1 + 20);
    r5 = 4;
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteRam32((r1 + 224), r7);
    MemoryInline::FlatWriteRam16((r1 + 250), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 268), r6);
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
    r3 = (r1 + 232);
    r4 = (r1 + 10);
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
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r27 = (r29 + 2356);
    r12 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam16((r1 + 256), static_cast<uint16_t>(r0));
    r11 = MemoryInline::FlatRead32((r1 + 224));
    r10 = MemoryInline::FlatRead32((r1 + 228));
    r9 = MemoryInline::FlatRead32((r1 + 232));
    r8 = MemoryInline::FlatRead32((r1 + 236));
    r7 = MemoryInline::FlatRead32((r1 + 240));
    r6 = MemoryInline::FlatRead32((r1 + 244));
    r5 = MemoryInline::FlatRead32((r1 + 248));
    r4 = MemoryInline::FlatRead32((r1 + 256));
    r3 = MemoryInline::FlatRead32((r1 + 264));
    r0 = MemoryInline::FlatRead32((r1 + 268));
    MemoryInline::FlatWriteRam32((r1 + 252), r27);
    MemoryInline::FlatWriteRam32((r1 + 260), r12);
    MemoryInline::FlatWriteRam32((r1 + 272), r11);
    MemoryInline::FlatWriteRam32((r1 + 276), r10);
    MemoryInline::FlatWriteRam32((r1 + 280), r9);
    MemoryInline::FlatWriteRam32((r1 + 284), r8);
    MemoryInline::FlatWriteRam32((r1 + 288), r7);
    MemoryInline::FlatWriteRam32((r1 + 292), r6);
    MemoryInline::FlatWriteRam32((r1 + 296), r5);
    MemoryInline::FlatWriteRam32((r1 + 300), r27);
    MemoryInline::FlatWriteRam32((r1 + 304), r4);
    MemoryInline::FlatWriteRam32((r1 + 308), r12);
    MemoryInline::FlatWriteRam32((r1 + 312), r3);
    MemoryInline::FlatWriteRam32((r1 + 316), r0);
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
        goto loc_801BFE94;
    }
}

loc_801BFE88:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801BFE94:
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

loc_801BFEA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BFEB4;
    }
}

loc_801BFEA8:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801BFF28;
}

loc_801BFEB4:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801BFED4u;
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
    r4 = (r1 + 272);
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
    r3 = r30;
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

loc_801BFF28:
{
    r6 = 0x801C0000u;
    r7 = 23;
    r6 = (r6 + -2232);
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r3 = (r1 + 132);
    r4 = (r1 + 16);
    r5 = 4;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam32((r1 + 128), r7);
    MemoryInline::FlatWriteRam16((r1 + 154), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 172), r6);
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
    r3 = (r1 + 136);
    r4 = (r1 + 8);
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
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r27 = (r29 + 2356);
    r12 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam16((r1 + 160), static_cast<uint16_t>(r0));
    r11 = MemoryInline::FlatRead32((r1 + 128));
    r10 = MemoryInline::FlatRead32((r1 + 132));
    r9 = MemoryInline::FlatRead32((r1 + 136));
    r8 = MemoryInline::FlatRead32((r1 + 140));
    r7 = MemoryInline::FlatRead32((r1 + 144));
    r6 = MemoryInline::FlatRead32((r1 + 148));
    r5 = MemoryInline::FlatRead32((r1 + 152));
    r4 = MemoryInline::FlatRead32((r1 + 160));
    r3 = MemoryInline::FlatRead32((r1 + 168));
    r0 = MemoryInline::FlatRead32((r1 + 172));
    MemoryInline::FlatWriteRam32((r1 + 156), r27);
    MemoryInline::FlatWriteRam32((r1 + 164), r12);
    MemoryInline::FlatWriteRam32((r1 + 176), r11);
    MemoryInline::FlatWriteRam32((r1 + 180), r10);
    MemoryInline::FlatWriteRam32((r1 + 184), r9);
    MemoryInline::FlatWriteRam32((r1 + 188), r8);
    MemoryInline::FlatWriteRam32((r1 + 192), r7);
    MemoryInline::FlatWriteRam32((r1 + 196), r6);
    MemoryInline::FlatWriteRam32((r1 + 200), r5);
    MemoryInline::FlatWriteRam32((r1 + 204), r27);
    MemoryInline::FlatWriteRam32((r1 + 208), r4);
    MemoryInline::FlatWriteRam32((r1 + 212), r12);
    MemoryInline::FlatWriteRam32((r1 + 216), r3);
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r26 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C0008;
    }
}

loc_801BFFFC:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C0008:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C0018:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C0028;
    }
}

loc_801C001C:
{
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C009C;
}

loc_801C0028:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C0048u;
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
    r4 = (r1 + 176);
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
    r3 = r26;
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

loc_801C009C:
{
    r11 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r12 = 21;
    r9 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r11));
    r8 = MemoryInline::FlatRead32((r1 + 44));
    r10 = MemoryInline::FlatRead32((r1 + 36));
    r7 = MemoryInline::FlatRead32((r1 + 48));
    r6 = MemoryInline::FlatRead32((r1 + 52));
    r5 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead32((r1 + 60));
    r3 = MemoryInline::FlatRead32((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 32), r12);
    MemoryInline::FlatWriteRam32((r1 + 76), r11);
    MemoryInline::FlatWriteRam32((r1 + 72), r11);
    MemoryInline::FlatWriteRam32((r1 + 80), r12);
    MemoryInline::FlatWriteRam32((r1 + 84), r10);
    MemoryInline::FlatWriteRam32((r1 + 88), r9);
    MemoryInline::FlatWriteRam32((r1 + 92), r8);
    MemoryInline::FlatWriteRam32((r1 + 96), r7);
    MemoryInline::FlatWriteRam32((r1 + 100), r6);
    MemoryInline::FlatWriteRam32((r1 + 104), r5);
    MemoryInline::FlatWriteRam32((r1 + 108), r4);
    MemoryInline::FlatWriteRam32((r1 + 112), r3);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 120), r11);
    MemoryInline::FlatWriteRam32((r1 + 124), r11);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r26 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801C013C;
    }
}

loc_801C0130:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801C013C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801C014C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C015C;
    }
}

loc_801C0150:
{
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C01D0;
}

loc_801C015C:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->lr = 0x801C017Cu;
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
    r4 = (r1 + 80);
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
    r3 = r26;
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

loc_801C01D0:
{
    r11 = (r1 + 640);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 644));
    ctx->lr = r0;
    r1 = (r1 + 640);
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC003FFB gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801BF900 func_801BF900 preserves=true fpr_mask=0x00000000
