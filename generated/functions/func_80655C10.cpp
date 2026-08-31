#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80655C10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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

    goto loc_80655C10;

loc_80655C10:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 84u, (r1 + 84), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 40), r22);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 44), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 48), r24);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 56), r26);
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 60), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 64), r28);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 68), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 72), r30);
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r1 + 76), r31);
    }
    r30 = r3;
    r31 = r4;
    // inline leaf 0x80008E84 (3 guest instruction(s))
    r3 = 0x802A0000u;
    r3 = (r3 + 16512);
    // end of inlined leaf 0x80008E84
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 108), static_cast<uint8_t>(r0));
    r3 = (r30 + 8);
    MemoryInline::FlatWrite32((r30 + 40), r0);
    ctx->lr = 0x80655C40u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A7EE4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80655C48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80655C58;
    }
}

loc_80655C4C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 44), r0);
    MemoryInline::FlatWrite32((r30 + 48), r0);
}

loc_80655C58:
{
    r3 = (r30 + 8);
    ctx->lr = 0x80655C60u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0;
    r0 = 255;
    MemoryInline::FlatWrite32((r30 + 232), r4);
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite32((r30 + 236), r4);
    MemoryInline::FlatWrite8((r30 + 864), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 10068), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 10069), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 10070), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 10071), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 10072), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r30 + 10076), r4);
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80655C9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80655CBC;
    }
}

loc_80655CA0:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_80655CC0;
}

loc_80655CBC:
{
    r3 = 0;
}

loc_80655CC0:
{
    // inline leaf 0x80549898 (14 guest instruction(s))
    r4 = (r3 + 65536);
    r3 = 15;
    r5 = MemoryInline::FlatRead8((r4 + -27668));
    r0 = MemoryInline::FlatRead8((r4 + -27670));
    r4 = MemoryInline::FlatRead8((r4 + -27669));
    r0 = (r5 + r0);
    r0 = (r4 + r0);
    r4 = (r0 & 65535);
    r0 = (r4 + -15);
    r3 = (r4 | ~r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80549898
    r0 = 3;
    r4 = 0;
    r5 = r30;
    r6 = r30;
    MemoryInline::FlatWrite32((r30 + 10080), r3);
    MemoryInline::FlatWrite32((r30 + 10084), r4);
    MemoryInline::FlatWrite32((r30 + 10088), r4);
    ctr = r0;
}

loc_80655CE4:
{
    MemoryInline::FlatWrite32((r5 + 10092), r4);
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 10140), 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r6 + 10140), r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r6 + 10144), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r6 + 10148), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r6 + 10152), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r6 + 10156), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r6 + 10160), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r6 + 10164), r4);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r6 + 10168), r4);
    }
    MemoryInline::FlatWrite32((r5 + 10096), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r6 + 10172), r4);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r6 + 10176), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r6 + 10180), r4);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r6 + 10184), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r6 + 10188), r4);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r6 + 10192), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r6 + 10196), r4);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r6 + 10200), r4);
    }
    MemoryInline::FlatWrite32((r5 + 10100), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r6 + 10204), r4);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r6 + 10208), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r6 + 10212), r4);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r6 + 10216), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r6 + 10220), r4);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r6 + 10224), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r6 + 10228), r4);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r6 + 10232), r4);
    }
    MemoryInline::FlatWrite32((r5 + 10104), r4);
    r5 = (r5 + 16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r6 + 10236), r4);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r6 + 10240), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r6 + 10244), r4);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r6 + 10248), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r6 + 10252), r4);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r6 + 10256), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r6 + 10260), r4);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r6 + 10264), r4);
    }
    r6 = (r6 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80655CE4;
    }
}

loc_80655D80:
{
    r29 = 0;
    MemoryInline::FlatWrite32((r30 + 10524), r29);
    MemoryInline::FlatWrite32((r30 + 484), r29);
    MemoryInline::FlatWrite32((r30 + 480), r29);
    MemoryInline::FlatWrite32((r30 + 676), r29);
    MemoryInline::FlatWrite32((r30 + 672), r29);
    MemoryInline::FlatWrite32((r30 + 492), r29);
    MemoryInline::FlatWrite32((r30 + 488), r29);
    MemoryInline::FlatWrite32((r30 + 684), r29);
    MemoryInline::FlatWrite32((r30 + 680), r29);
    MemoryInline::FlatWrite32((r30 + 500), r29);
    MemoryInline::FlatWrite32((r30 + 496), r29);
    MemoryInline::FlatWrite32((r30 + 692), r29);
    MemoryInline::FlatWrite32((r30 + 688), r29);
    MemoryInline::FlatWrite32((r30 + 508), r29);
    MemoryInline::FlatWrite32((r30 + 504), r29);
    MemoryInline::FlatWrite32((r30 + 700), r29);
    MemoryInline::FlatWrite32((r30 + 696), r29);
    MemoryInline::FlatWrite32((r30 + 516), r29);
    MemoryInline::FlatWrite32((r30 + 512), r29);
    MemoryInline::FlatWrite32((r30 + 708), r29);
    MemoryInline::FlatWrite32((r30 + 704), r29);
    MemoryInline::FlatWrite32((r30 + 524), r29);
    MemoryInline::FlatWrite32((r30 + 520), r29);
    MemoryInline::FlatWrite32((r30 + 716), r29);
    MemoryInline::FlatWrite32((r30 + 712), r29);
    MemoryInline::FlatWrite32((r30 + 532), r29);
    MemoryInline::FlatWrite32((r30 + 528), r29);
    MemoryInline::FlatWrite32((r30 + 724), r29);
    MemoryInline::FlatWrite32((r30 + 720), r29);
    MemoryInline::FlatWrite32((r30 + 540), r29);
    MemoryInline::FlatWrite32((r30 + 536), r29);
    MemoryInline::FlatWrite32((r30 + 732), r29);
    MemoryInline::FlatWrite32((r30 + 728), r29);
    MemoryInline::FlatWrite32((r30 + 548), r29);
    MemoryInline::FlatWrite32((r30 + 544), r29);
    MemoryInline::FlatWrite32((r30 + 740), r29);
    MemoryInline::FlatWrite32((r30 + 736), r29);
    MemoryInline::FlatWrite32((r30 + 556), r29);
    MemoryInline::FlatWrite32((r30 + 552), r29);
    MemoryInline::FlatWrite32((r30 + 748), r29);
    MemoryInline::FlatWrite32((r30 + 744), r29);
    MemoryInline::FlatWrite32((r30 + 564), r29);
    MemoryInline::FlatWrite32((r30 + 560), r29);
    MemoryInline::FlatWrite32((r30 + 756), r29);
    MemoryInline::FlatWrite32((r30 + 752), r29);
    MemoryInline::FlatWrite32((r30 + 572), r29);
    MemoryInline::FlatWrite32((r30 + 568), r29);
    MemoryInline::FlatWrite32((r30 + 764), r29);
    MemoryInline::FlatWrite32((r30 + 760), r29);
    MemoryInline::FlatWrite32((r30 + 580), r29);
    r3 = r30;
    MemoryInline::FlatWrite32((r30 + 576), r29);
    MemoryInline::FlatWrite32((r30 + 772), r29);
    MemoryInline::FlatWrite32((r30 + 768), r29);
    MemoryInline::FlatWrite32((r30 + 588), r29);
    MemoryInline::FlatWrite32((r30 + 584), r29);
    MemoryInline::FlatWrite32((r30 + 780), r29);
    MemoryInline::FlatWrite32((r30 + 776), r29);
    MemoryInline::FlatWrite32((r30 + 596), r29);
    MemoryInline::FlatWrite32((r30 + 592), r29);
    MemoryInline::FlatWrite32((r30 + 788), r29);
    MemoryInline::FlatWrite32((r30 + 784), r29);
    MemoryInline::FlatWrite32((r30 + 604), r29);
    MemoryInline::FlatWrite32((r30 + 600), r29);
    MemoryInline::FlatWrite32((r30 + 796), r29);
    MemoryInline::FlatWrite32((r30 + 792), r29);
    MemoryInline::FlatWrite32((r30 + 612), r29);
    MemoryInline::FlatWrite32((r30 + 608), r29);
    MemoryInline::FlatWrite32((r30 + 804), r29);
    MemoryInline::FlatWrite32((r30 + 800), r29);
    MemoryInline::FlatWrite32((r30 + 620), r29);
    MemoryInline::FlatWrite32((r30 + 616), r29);
    MemoryInline::FlatWrite32((r30 + 812), r29);
    MemoryInline::FlatWrite32((r30 + 808), r29);
    MemoryInline::FlatWrite32((r30 + 628), r29);
    MemoryInline::FlatWrite32((r30 + 624), r29);
    MemoryInline::FlatWrite32((r30 + 820), r29);
    MemoryInline::FlatWrite32((r30 + 816), r29);
    MemoryInline::FlatWrite32((r30 + 636), r29);
    MemoryInline::FlatWrite32((r30 + 632), r29);
    MemoryInline::FlatWrite32((r30 + 828), r29);
    MemoryInline::FlatWrite32((r30 + 824), r29);
    MemoryInline::FlatWrite32((r30 + 644), r29);
    MemoryInline::FlatWrite32((r30 + 640), r29);
    MemoryInline::FlatWrite32((r30 + 836), r29);
    MemoryInline::FlatWrite32((r30 + 832), r29);
    MemoryInline::FlatWrite32((r30 + 652), r29);
    MemoryInline::FlatWrite32((r30 + 648), r29);
    MemoryInline::FlatWrite32((r30 + 844), r29);
    MemoryInline::FlatWrite32((r30 + 840), r29);
    MemoryInline::FlatWrite32((r30 + 660), r29);
    MemoryInline::FlatWrite32((r30 + 656), r29);
    MemoryInline::FlatWrite32((r30 + 852), r29);
    MemoryInline::FlatWrite32((r30 + 848), r29);
    MemoryInline::FlatWrite32((r30 + 668), r29);
    MemoryInline::FlatWrite32((r30 + 664), r29);
    MemoryInline::FlatWrite32((r30 + 860), r29);
    MemoryInline::FlatWrite32((r30 + 856), r29);
    ctx->lr = 0x80655F10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80658D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r0 = 5;
    r4 = r30;
    r3 = 1;
    ctr = r0;
}

loc_80655F20:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 9708), 0, 70u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r4 + 9708), r29);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 9712), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 9713), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 9714), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 9715), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r4 + 9716), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r4 + 9717), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 9720), r29);
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r4 + 9724), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r4 + 9725), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r4 + 9726), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r4 + 9727), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r4 + 9728), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r4 + 9729), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 9732), r29);
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r4 + 9736), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r4 + 9737), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r4 + 9738), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r4 + 9739), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r4 + 9740), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r4 + 9741), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + 9744), r29);
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r4 + 9748), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r4 + 9749), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r4 + 9750), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r4 + 9751), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r4 + 9752), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r4 + 9753), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r4 + 9756), r29);
    MemoryInline::WriteResolved8(guest_range_1, 52u, (r4 + 9760), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 53u, (r4 + 9761), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 54u, (r4 + 9762), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 55u, (r4 + 9763), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 56u, (r4 + 9764), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 57u, (r4 + 9765), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r4 + 9768), r29);
    MemoryInline::WriteResolved8(guest_range_1, 64u, (r4 + 9772), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 65u, (r4 + 9773), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 66u, (r4 + 9774), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 67u, (r4 + 9775), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 68u, (r4 + 9776), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 69u, (r4 + 9777), static_cast<uint8_t>(r3));
    r4 = (r4 + 72);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80655F20;
    }
}

loc_80655FD0:
{
    r24 = r30;
    r26 = 0;
    r29 = 0;
}

loc_80655FDC:
{
    r23 = r24;
    r27 = 0;
}

loc_80655FE4:
{
    r22 = MemoryInline::FlatRead32((r23 + 240));
    r28 = 0;
}

loc_80655FEC:
{
    r25 = MemoryInline::FlatRead32(r22);
    r4 = 0;
    r3 = MemoryInline::FlatRead32(r25);
    r5 = MemoryInline::FlatRead32((r25 + 4));
    ctx->lr = 0x80656000u;
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
    r28 = (r28 + 1);
    MemoryInline::FlatWrite32((r25 + 8), r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(8));
}

loc_8065600C:
{
    r22 = (r22 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80655FEC;
    }
}

loc_80656014:
{
    r22 = MemoryInline::FlatRead32((r23 + 336));
    r28 = 0;
}

loc_8065601C:
{
    r25 = MemoryInline::FlatRead32(r22);
    r4 = 0;
    r3 = MemoryInline::FlatRead32(r25);
    r5 = MemoryInline::FlatRead32((r25 + 4));
    ctx->lr = 0x80656030u;
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
    r28 = (r28 + 1);
    MemoryInline::FlatWrite32((r25 + 8), r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(8));
}

loc_8065603C:
{
    r22 = (r22 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065601C;
    }
}

loc_80656044:
{
    r27 = (r27 + 1);
    r23 = (r23 + 4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(12));
}

loc_80656050:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80655FE4;
    }
}

loc_80656054:
{
    r26 = (r26 + 1);
    r24 = (r24 + 48);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
}

loc_80656060:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80655FDC;
    }
}

loc_80656064:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 10540), r0);
    r3 = (r30 + 865);
    r4 = 0;
    MemoryInline::FlatWrite32((r30 + 10544), r0);
    r5 = 8832;
    ctx->lr = 0x80656080u;
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
    r3 = 0x809C0000u;
    r4 = (r30 + 10548);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8067686Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80656094:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80656140;
    }
}

loc_80656098:
{
    r11 = 0x808C0000u;
    r11 = (r11 + 2408);
    guest_range_2 = MemoryInline::ResolveRangeHost(r11, 0, 20u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_2, 2u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r11 + 2));
            r9 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r11 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_2, 6u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r11 + 6));
            r7 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r11 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_2, 10u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r11 + 10));
            r5 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r11 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_2, 14u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r11 + 14));
            r3 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r11 + 16));
        }
    }
    r0 = MemoryInline::ReadResolved16(guest_range_2, 18u, (r11 + 18));
    r11 = MemoryInline::ReadResolved16(guest_range_2, 0u, r11);
    guest_range_4 = MemoryInline::ResolveRangeHost((r30 + 10548), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_4, 0u, (r30 + 10548), r11);
        MemoryInline::WriteResolved16(guest_range_4, 2u, (r30 + 10550), r10);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_4, 4u, (r30 + 10552), r9);
        MemoryInline::WriteResolved16(guest_range_4, 6u, (r30 + 10554), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_4, 8u, (r30 + 10556), r7);
        MemoryInline::WriteResolved16(guest_range_4, 10u, (r30 + 10558), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 12u, (r30 + 10560), r5);
        MemoryInline::WriteResolved16(guest_range_4, 14u, (r30 + 10562), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_4, 16u, (r30 + 10564), r3);
        MemoryInline::WriteResolved16(guest_range_4, 18u, (r30 + 10566), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_4, 20u, (r30 + 10568), r11);
        MemoryInline::WriteResolved16(guest_range_4, 22u, (r30 + 10570), r10);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_4, 24u, (r30 + 10572), r9);
        MemoryInline::WriteResolved16(guest_range_4, 26u, (r30 + 10574), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_4, 28u, (r30 + 10576), r7);
        MemoryInline::WriteResolved16(guest_range_4, 30u, (r30 + 10578), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 32u, (r30 + 10580), r5);
        MemoryInline::WriteResolved16(guest_range_4, 34u, (r30 + 10582), r4);
    }
    MemoryInline::WriteResolved16(guest_range_4, 36u, (r30 + 10584), static_cast<uint16_t>(r3));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 20u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_5, 0u, (r1 + 8), r11);
        MemoryInline::WriteResolved16(guest_range_5, 2u, (r1 + 10), r10);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_5, 4u, (r1 + 12), r9);
        MemoryInline::WriteResolved16(guest_range_5, 6u, (r1 + 14), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_5, 8u, (r1 + 16), r7);
        MemoryInline::WriteResolved16(guest_range_5, 10u, (r1 + 18), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_5, 12u, (r1 + 20), r5);
        MemoryInline::WriteResolved16(guest_range_5, 14u, (r1 + 22), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_5, 16u, (r1 + 24), r3);
        MemoryInline::WriteResolved16(guest_range_5, 18u, (r1 + 26), r0);
    }
    MemoryInline::WriteResolved16(guest_range_4, 38u, (r30 + 10586), static_cast<uint16_t>(r0));
}

loc_80656140:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r30 + 10528), static_cast<uint8_t>(r0));
    r4 = 0x80650000u;
    r5 = r30;
    MemoryInline::FlatWrite8((r30 + 10529), static_cast<uint8_t>(r0));
    r4 = (r4 + 29952);
    r6 = 0;
    MemoryInline::FlatWrite8((r30 + 10530), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 10531), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 10532), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 10533), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 10534), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 10535), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 10536), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 10537), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 10538), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 10539), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 88), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    MemoryInline::FlatWrite8((r30 + 176), static_cast<uint8_t>(r31));
    ctx->lr = 0x80656194u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80242C18u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 40));
            r23 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 48));
            r25 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r1 + 56));
            r27 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r1 + 64));
            r29 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 72));
            r31 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r1 + 76));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80655C10 func_80655C10 preserves=true fpr_mask=0x00000000
