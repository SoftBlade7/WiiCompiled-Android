#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079B4AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079B4AC;

loc_8079B4AC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_8079B4B8:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 20952);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079B500;
    }
}

loc_8079B4EC:
{
}

loc_8079B4F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079B4FC;
    }
}

loc_8079B4F4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13860));
}

loc_8079B4FC:
{
    r3 = (r3 + 2);
}

loc_8079B500:
{
}

loc_8079B504:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079B510;
    }
}

loc_8079B508:
{
    r28 = (r4 + 120);
    goto loc_8079B514;
}

loc_8079B510:
{
    r28 = 0;
}

loc_8079B514:
{
}

loc_8079B518:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079B524;
    }
}

loc_8079B51C:
{
    r5 = (r4 + 109);
    goto loc_8079B528;
}

loc_8079B524:
{
    r5 = 0;
}

loc_8079B528:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079B52C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B538;
    }
}

loc_8079B530:
{
    r4 = (r4 + 12);
    goto loc_8079B53C;
}

loc_8079B538:
{
    r4 = 0;
}

loc_8079B53C:
{
    r6 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079B338u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_8079B548:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8079B568;
    }
}

loc_8079B54C:
{
}

loc_8079B550:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079B560;
    }
}

loc_8079B554:
{
    r0 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_8079B568;
}

loc_8079B560:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_8079B568:
{
}

loc_8079B56C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B578;
    }
}

loc_8079B570:
{
    r0 = (r29 + 68);
    goto loc_8079B57C;
}

loc_8079B578:
{
    r0 = 0;
}

loc_8079B57C:
{
}

loc_8079B580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B59C;
    }
}

loc_8079B584:
{
}

loc_8079B588:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B594;
    }
}

loc_8079B58C:
{
    r0 = (r29 + 68);
    goto loc_8079B5A0;
}

loc_8079B594:
{
    r0 = 0;
    goto loc_8079B5A0;
}

loc_8079B59C:
{
    r0 = 0;
}

loc_8079B5A0:
{
}

loc_8079B5A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B65C;
    }
}

loc_8079B5A8:
{
}

loc_8079B5AC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079B604;
    }
}

loc_8079B5B0:
{
}

loc_8079B5B4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B5C0;
    }
}

loc_8079B5B8:
{
    r0 = (r29 + 68);
    goto loc_8079B5C4;
}

loc_8079B5C0:
{
    r0 = 0;
}

loc_8079B5C4:
{
}

loc_8079B5C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B5E4;
    }
}

loc_8079B5CC:
{
}

loc_8079B5D0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B5DC;
    }
}

loc_8079B5D4:
{
    r4 = (r29 + 68);
    goto loc_8079B5E8;
}

loc_8079B5DC:
{
    r4 = 0;
    goto loc_8079B5E8;
}

loc_8079B5E4:
{
    r4 = 0;
}

loc_8079B5E8:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    goto loc_8079B65C;
}

loc_8079B604:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079B60C:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B630;
    }
}

loc_8079B628:
{
    r0 = (r29 + 68);
    goto loc_8079B634;
}

loc_8079B630:
{
    r0 = 0;
}

loc_8079B634:
{
}

loc_8079B638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B654;
    }
}

loc_8079B63C:
{
}

loc_8079B640:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B64C;
    }
}

loc_8079B644:
{
    r4 = (r29 + 68);
    goto loc_8079B658;
}

loc_8079B64C:
{
    r4 = 0;
    goto loc_8079B658;
}

loc_8079B654:
{
    r4 = 0;
}

loc_8079B658:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079B65C:
{
}

loc_8079B660:
{
    r3 = (r3 + 6);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B670;
    }
}

loc_8079B668:
{
    r0 = (r29 + 68);
    goto loc_8079B674;
}

loc_8079B670:
{
    r0 = 0;
}

loc_8079B674:
{
}

loc_8079B678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B698;
    }
}

loc_8079B67C:
{
}

loc_8079B680:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B68C;
    }
}

loc_8079B684:
{
    r4 = (r29 + 68);
    goto loc_8079B690;
}

loc_8079B68C:
{
    r4 = 0;
}

loc_8079B690:
{
    r0 = (r4 + 4);
    goto loc_8079B69C;
}

loc_8079B698:
{
    r0 = 0;
}

loc_8079B69C:
{
}

loc_8079B6A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B760;
    }
}

loc_8079B6A4:
{
}

loc_8079B6A8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079B704;
    }
}

loc_8079B6AC:
{
}

loc_8079B6B0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B6BC;
    }
}

loc_8079B6B4:
{
    r0 = (r29 + 68);
    goto loc_8079B6C0;
}

loc_8079B6BC:
{
    r0 = 0;
}

loc_8079B6C0:
{
}

loc_8079B6C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B6E4;
    }
}

loc_8079B6C8:
{
}

loc_8079B6CC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B6D8;
    }
}

loc_8079B6D0:
{
    r4 = (r29 + 68);
    goto loc_8079B6DC;
}

loc_8079B6D8:
{
    r4 = 0;
}

loc_8079B6DC:
{
    r4 = (r4 + 4);
    goto loc_8079B6E8;
}

loc_8079B6E4:
{
    r4 = 0;
}

loc_8079B6E8:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword1;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_8079B760;
}

loc_8079B704:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079B70C:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B730;
    }
}

loc_8079B728:
{
    r0 = (r29 + 68);
    goto loc_8079B734;
}

loc_8079B730:
{
    r0 = 0;
}

loc_8079B734:
{
}

loc_8079B738:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B758;
    }
}

loc_8079B73C:
{
}

loc_8079B740:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B74C;
    }
}

loc_8079B744:
{
    r4 = (r29 + 68);
    goto loc_8079B750;
}

loc_8079B74C:
{
    r4 = 0;
}

loc_8079B750:
{
    r4 = (r4 + 4);
    goto loc_8079B75C;
}

loc_8079B758:
{
    r4 = 0;
}

loc_8079B75C:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079B760:
{
}

loc_8079B764:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B770;
    }
}

loc_8079B768:
{
    r0 = (r29 + 68);
    goto loc_8079B774;
}

loc_8079B770:
{
    r0 = 0;
}

loc_8079B774:
{
}

loc_8079B778:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B798;
    }
}

loc_8079B77C:
{
}

loc_8079B780:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B78C;
    }
}

loc_8079B784:
{
    r4 = (r29 + 68);
    goto loc_8079B790;
}

loc_8079B78C:
{
    r4 = 0;
}

loc_8079B790:
{
    r0 = (r4 + 8);
    goto loc_8079B79C;
}

loc_8079B798:
{
    r0 = 0;
}

loc_8079B79C:
{
}

loc_8079B7A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B860;
    }
}

loc_8079B7A4:
{
}

loc_8079B7A8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079B804;
    }
}

loc_8079B7AC:
{
}

loc_8079B7B0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B7BC;
    }
}

loc_8079B7B4:
{
    r0 = (r29 + 68);
    goto loc_8079B7C0;
}

loc_8079B7BC:
{
    r0 = 0;
}

loc_8079B7C0:
{
}

loc_8079B7C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B7E4;
    }
}

loc_8079B7C8:
{
}

loc_8079B7CC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B7D8;
    }
}

loc_8079B7D0:
{
    r4 = (r29 + 68);
    goto loc_8079B7DC;
}

loc_8079B7D8:
{
    r4 = 0;
}

loc_8079B7DC:
{
    r4 = (r4 + 8);
    goto loc_8079B7E8;
}

loc_8079B7E4:
{
    r4 = 0;
}

loc_8079B7E8:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword2;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    goto loc_8079B860;
}

loc_8079B804:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079B80C:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B830;
    }
}

loc_8079B828:
{
    r0 = (r29 + 68);
    goto loc_8079B834;
}

loc_8079B830:
{
    r0 = 0;
}

loc_8079B834:
{
}

loc_8079B838:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079B858;
    }
}

loc_8079B83C:
{
}

loc_8079B840:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B84C;
    }
}

loc_8079B844:
{
    r4 = (r29 + 68);
    goto loc_8079B850;
}

loc_8079B84C:
{
    r4 = 0;
}

loc_8079B850:
{
    r4 = (r4 + 8);
    goto loc_8079B85C;
}

loc_8079B858:
{
    r4 = 0;
}

loc_8079B85C:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079B860:
{
}

loc_8079B864:
{
    r3 = (r3 + 4);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B874;
    }
}

loc_8079B86C:
{
    r5 = (r29 + 188);
    goto loc_8079B878;
}

loc_8079B874:
{
    r5 = 0;
}

loc_8079B878:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079B87C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B888;
    }
}

loc_8079B880:
{
    r4 = (r29 + 68);
    goto loc_8079B88C;
}

loc_8079B888:
{
    r4 = 0;
}

loc_8079B88C:
{
    r6 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079AF08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8079B898:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B8A4;
    }
}

loc_8079B89C:
{
    r0 = (r29 + 80);
    goto loc_8079B8A8;
}

loc_8079B8A4:
{
    r0 = 0;
}

loc_8079B8A8:
{
}

loc_8079B8AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BA5C;
    }
}

loc_8079B8B0:
{
}

loc_8079B8B4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079BA5C;
    }
}

loc_8079B8B8:
{
}

loc_8079B8BC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B8C8;
    }
}

loc_8079B8C0:
{
    r4 = (r29 + 80);
    goto loc_8079B8CC;
}

loc_8079B8C8:
{
    r4 = 0;
}

loc_8079B8CC:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079B8D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079B8FC;
    }
}

loc_8079B8DC:
{
}

loc_8079B8E0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B8EC;
    }
}

loc_8079B8E4:
{
    r4 = (r29 + 80);
    goto loc_8079B8F0;
}

loc_8079B8EC:
{
    r4 = 0;
}

loc_8079B8F0:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    r0 = 1;
    goto loc_8079B900;
}

loc_8079B8FC:
{
    r0 = 0;
}

loc_8079B900:
{
}

loc_8079B904:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079B944;
    }
}

loc_8079B908:
{
}

loc_8079B90C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B918;
    }
}

loc_8079B910:
{
    r4 = (r29 + 80);
    goto loc_8079B91C;
}

loc_8079B918:
{
    r4 = 0;
}

loc_8079B91C:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079B928:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079B944;
    }
}

loc_8079B92C:
{
}

loc_8079B930:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B93C;
    }
}

loc_8079B934:
{
    r4 = (r29 + 80);
    goto loc_8079B940;
}

loc_8079B93C:
{
    r4 = 0;
}

loc_8079B940:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079B944:
{
}

loc_8079B948:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B954;
    }
}

loc_8079B94C:
{
    r4 = (r29 + 80);
    goto loc_8079B958;
}

loc_8079B954:
{
    r4 = 0;
}

loc_8079B958:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079B964:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079B988;
    }
}

loc_8079B968:
{
}

loc_8079B96C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B978;
    }
}

loc_8079B970:
{
    r4 = (r29 + 80);
    goto loc_8079B97C;
}

loc_8079B978:
{
    r4 = 0;
}

loc_8079B97C:
{
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r0 = 1;
    goto loc_8079B98C;
}

loc_8079B988:
{
    r0 = 0;
}

loc_8079B98C:
{
}

loc_8079B990:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079B9D0;
    }
}

loc_8079B994:
{
}

loc_8079B998:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B9A4;
    }
}

loc_8079B99C:
{
    r4 = (r29 + 80);
    goto loc_8079B9A8;
}

loc_8079B9A4:
{
    r4 = 0;
}

loc_8079B9A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079B9B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079B9D0;
    }
}

loc_8079B9B8:
{
}

loc_8079B9BC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B9C8;
    }
}

loc_8079B9C0:
{
    r4 = (r29 + 80);
    goto loc_8079B9CC;
}

loc_8079B9C8:
{
    r4 = 0;
}

loc_8079B9CC:
{
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
}

loc_8079B9D0:
{
}

loc_8079B9D4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079B9E0;
    }
}

loc_8079B9D8:
{
    r4 = (r29 + 80);
    goto loc_8079B9E4;
}

loc_8079B9E0:
{
    r4 = 0;
}

loc_8079B9E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079B9F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079BA14;
    }
}

loc_8079B9F4:
{
}

loc_8079B9F8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BA04;
    }
}

loc_8079B9FC:
{
    r4 = (r29 + 80);
    goto loc_8079BA08;
}

loc_8079BA04:
{
    r4 = 0;
}

loc_8079BA08:
{
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r0 = 1;
    goto loc_8079BA18;
}

loc_8079BA14:
{
    r0 = 0;
}

loc_8079BA18:
{
}

loc_8079BA1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079BA5C;
    }
}

loc_8079BA20:
{
}

loc_8079BA24:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BA30;
    }
}

loc_8079BA28:
{
    r4 = (r29 + 80);
    goto loc_8079BA34;
}

loc_8079BA30:
{
    r4 = 0;
}

loc_8079BA34:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079BA40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079BA5C;
    }
}

loc_8079BA44:
{
}

loc_8079BA48:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BA54;
    }
}

loc_8079BA4C:
{
    r4 = (r29 + 80);
    goto loc_8079BA58;
}

loc_8079BA54:
{
    r4 = 0;
}

loc_8079BA58:
{
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
}

loc_8079BA5C:
{
}

loc_8079BA60:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BA6C;
    }
}

loc_8079BA64:
{
    r0 = (r29 + 80);
    goto loc_8079BA70;
}

loc_8079BA6C:
{
    r0 = 0;
}

loc_8079BA70:
{
}

loc_8079BA74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BA90;
    }
}

loc_8079BA78:
{
}

loc_8079BA7C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BA88;
    }
}

loc_8079BA80:
{
    r0 = (r29 + 80);
    goto loc_8079BA94;
}

loc_8079BA88:
{
    r0 = 0;
    goto loc_8079BA94;
}

loc_8079BA90:
{
    r0 = 0;
}

loc_8079BA94:
{
}

loc_8079BA98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BB54;
    }
}

loc_8079BA9C:
{
}

loc_8079BAA0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079BAF8;
    }
}

loc_8079BAA4:
{
}

loc_8079BAA8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BAB4;
    }
}

loc_8079BAAC:
{
    r0 = (r29 + 80);
    goto loc_8079BAB8;
}

loc_8079BAB4:
{
    r0 = 0;
}

loc_8079BAB8:
{
}

loc_8079BABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BAD8;
    }
}

loc_8079BAC0:
{
}

loc_8079BAC4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BAD0;
    }
}

loc_8079BAC8:
{
    r4 = (r29 + 80);
    goto loc_8079BADC;
}

loc_8079BAD0:
{
    r4 = 0;
    goto loc_8079BADC;
}

loc_8079BAD8:
{
    r4 = 0;
}

loc_8079BADC:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_8079BB54;
}

loc_8079BAF8:
{
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079BB00:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079BB28;
    }
}

loc_8079BB20:
{
    r0 = (r29 + 80);
    goto loc_8079BB2C;
}

loc_8079BB28:
{
    r0 = 0;
}

loc_8079BB2C:
{
}

loc_8079BB30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BB4C;
    }
}

loc_8079BB34:
{
}

loc_8079BB38:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BB44;
    }
}

loc_8079BB3C:
{
    r4 = (r29 + 80);
    goto loc_8079BB50;
}

loc_8079BB44:
{
    r4 = 0;
    goto loc_8079BB50;
}

loc_8079BB4C:
{
    r4 = 0;
}

loc_8079BB50:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079BB54:
{
}

loc_8079BB58:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BB64;
    }
}

loc_8079BB5C:
{
    r0 = (r29 + 80);
    goto loc_8079BB68;
}

loc_8079BB64:
{
    r0 = 0;
}

loc_8079BB68:
{
}

loc_8079BB6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BB8C;
    }
}

loc_8079BB70:
{
}

loc_8079BB74:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BB80;
    }
}

loc_8079BB78:
{
    r4 = (r29 + 80);
    goto loc_8079BB84;
}

loc_8079BB80:
{
    r4 = 0;
}

loc_8079BB84:
{
    r0 = (r4 + 4);
    goto loc_8079BB90;
}

loc_8079BB8C:
{
    r0 = 0;
}

loc_8079BB90:
{
}

loc_8079BB94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BC50;
    }
}

loc_8079BB98:
{
}

loc_8079BB9C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079BBF4;
    }
}

loc_8079BBA0:
{
}

loc_8079BBA4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BBB0;
    }
}

loc_8079BBA8:
{
    r0 = (r29 + 80);
    goto loc_8079BBB4;
}

loc_8079BBB0:
{
    r0 = 0;
}

loc_8079BBB4:
{
}

loc_8079BBB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BBD8;
    }
}

loc_8079BBBC:
{
}

loc_8079BBC0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BBCC;
    }
}

loc_8079BBC4:
{
    r4 = (r29 + 80);
    goto loc_8079BBD0;
}

loc_8079BBCC:
{
    r4 = 0;
}

loc_8079BBD0:
{
    r4 = (r4 + 4);
    goto loc_8079BBDC;
}

loc_8079BBD8:
{
    r4 = 0;
}

loc_8079BBDC:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_8079BC50;
}

loc_8079BBF4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079BBFC:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079BC20;
    }
}

loc_8079BC18:
{
    r0 = (r29 + 80);
    goto loc_8079BC24;
}

loc_8079BC20:
{
    r0 = 0;
}

loc_8079BC24:
{
}

loc_8079BC28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BC48;
    }
}

loc_8079BC2C:
{
}

loc_8079BC30:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BC3C;
    }
}

loc_8079BC34:
{
    r4 = (r29 + 80);
    goto loc_8079BC40;
}

loc_8079BC3C:
{
    r4 = 0;
}

loc_8079BC40:
{
    r4 = (r4 + 4);
    goto loc_8079BC4C;
}

loc_8079BC48:
{
    r4 = 0;
}

loc_8079BC4C:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079BC50:
{
}

loc_8079BC54:
{
    r4 = (r3 + 2);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BC64;
    }
}

loc_8079BC5C:
{
    r0 = (r29 + 80);
    goto loc_8079BC68;
}

loc_8079BC64:
{
    r0 = 0;
}

loc_8079BC68:
{
}

loc_8079BC6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BC8C;
    }
}

loc_8079BC70:
{
}

loc_8079BC74:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BC80;
    }
}

loc_8079BC78:
{
    r3 = (r29 + 80);
    goto loc_8079BC84;
}

loc_8079BC80:
{
    r3 = 0;
}

loc_8079BC84:
{
    r0 = (r3 + 8);
    goto loc_8079BC90;
}

loc_8079BC8C:
{
    r0 = 0;
}

loc_8079BC90:
{
}

loc_8079BC94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BD58;
    }
}

loc_8079BC98:
{
}

loc_8079BC9C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079BCF8;
    }
}

loc_8079BCA0:
{
}

loc_8079BCA4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BCB0;
    }
}

loc_8079BCA8:
{
    r0 = (r29 + 80);
    goto loc_8079BCB4;
}

loc_8079BCB0:
{
    r0 = 0;
}

loc_8079BCB4:
{
}

loc_8079BCB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BCD8;
    }
}

loc_8079BCBC:
{
}

loc_8079BCC0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BCCC;
    }
}

loc_8079BCC4:
{
    r3 = (r29 + 80);
    goto loc_8079BCD0;
}

loc_8079BCCC:
{
    r3 = 0;
}

loc_8079BCD0:
{
    r3 = (r3 + 8);
    goto loc_8079BCDC;
}

loc_8079BCD8:
{
    r3 = 0;
}

loc_8079BCDC:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword5;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_8079BD58;
}

loc_8079BCF8:
{
    r0 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079BD00:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079BD28;
    }
}

loc_8079BD20:
{
    r0 = (r29 + 80);
    goto loc_8079BD2C;
}

loc_8079BD28:
{
    r0 = 0;
}

loc_8079BD2C:
{
}

loc_8079BD30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079BD50;
    }
}

loc_8079BD34:
{
}

loc_8079BD38:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079BD44;
    }
}

loc_8079BD3C:
{
    r3 = (r29 + 80);
    goto loc_8079BD48;
}

loc_8079BD44:
{
    r3 = 0;
}

loc_8079BD48:
{
    r3 = (r3 + 8);
    goto loc_8079BD54;
}

loc_8079BD50:
{
    r3 = 0;
}

loc_8079BD54:
{
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_8079BD58:
{
    r3 = (r4 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8079BD5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079BD74;
    }
}

loc_8079BD60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8079BD64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079BD74;
    }
}

loc_8079BD68:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_11 & 15);
    MemoryInline::FlatWrite8((r29 + 108), static_cast<uint8_t>(r0));
}

loc_8079BD74:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001BB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8079B4AC func_8079B4AC preserves=true fpr_mask=0x00000000
