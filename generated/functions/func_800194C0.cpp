#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800194C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800194C0;

loc_800194C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r6 & 2146435072);
    r3 = (r3 + -2146435072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(0));
}

loc_800194DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800194F4;
    }
}

loc_800194E0:
{
    f0.d = (f1.d * f1.d);
    r0 = 33;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    f1.d = (f1.d + f0.d);
    goto loc_80019700;
}

loc_800194F4:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800194F8:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80019524;
    }
}

loc_800194FC:
{
    r3 = (r6 & 2147483647);
    r3 = (r0 | r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001950C;
    }
}

loc_80019508:
{
    goto loc_80019700;
}

loc_8001950C:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80019524;
    }
}

loc_80019510:
{
    r3 = 0x80380000u;
    r0 = 33;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 19488));
    goto loc_80019700;
}

loc_80019524:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(20) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r6) >> 20);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80019578;
    }
}

loc_8001952C:
{
    goto loc_80019540;
}

loc_80019530:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r4 = (r4_rot_2 & 2097151);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_2 & -2097152);
    r6 = (r6 | r4);
    r3 = (r3 + -21);
}

loc_80019540:
{
}

loc_80019544:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80019530;
    }
}

loc_80019548:
{
    r7 = 0;
    goto loc_80019558;
}

loc_80019550:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r7 = (r7 + 1);
}

loc_80019558:
{
    r4 = (r6 & 1048576);
}

loc_8001955C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80019550;
    }
}

loc_80019560:
{
    r4 = (32 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r5 = (r7 + -1);
    r4 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r3 = (r3 - r5);
    r6 = (r6 | r4);
}

loc_80019578:
{
    r4 = (r3 + -1023);
    r5 = (r6 & 1048575);
    r4 = (r4 & 1);
}

loc_80019584:
{
    r6 = (r5 | 1048576);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8001959C;
    }
}

loc_8001958C:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r4 = (r6 + r6);
    r6 = (r5 + r4);
    r0 = (r0 + r0);
}

loc_8001959C:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r4 = (r6 + r6);
    r6 = (r5 + r4);
    r0 = (r0 + r0);
    r9 = 0;
    r11 = 0;
    r10 = 0;
    r12 = 0;
    r7 = 2097152;
    goto loc_800195F0;
}

loc_800195C4:
{
    r4 = (r11 + r7);
}

loc_800195CC:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r6))) {
        goto loc_800195DC;
    }
}

loc_800195D0:
{
    r11 = (r4 + r7);
    r6 = (r6 - r4);
    r12 = (r12 + r7);
}

loc_800195DC:
{
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_5 & 1);
    r4 = (r6 + r6);
    r6 = (r5 + r4);
    r0 = (r0 + r0);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r7 = (r7_rot_2 & 2147483647);
}

loc_800195F0:
{
}

loc_800195F4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800195C4;
    }
}

loc_800195F8:
{
    r7 = 0x80000000u;
    goto loc_80019668;
}

loc_80019600:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r6));
}

loc_80019604:
{
    r5 = r11;
    r8 = (r9 + r7);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8001961C;
    }
}

loc_80019610:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80019654;
    }
}

loc_80019614:
{
}

loc_80019618:
{
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(r0))) {
        goto loc_80019654;
    }
}

loc_8001961C:
{
    r4 = (r8 & -2147483648);
    r9 = (r8 + r7);
    r4 = (r4 + -2147483648);
}

loc_8001962C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(0))) {
        goto loc_8001963C;
    }
}

loc_80019630:
{
    r4 = (r9 & -2147483648);
}

loc_80019634:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8001963C;
    }
}

loc_80019638:
{
    r11 = (r11 + 1);
}

loc_8001963C:
{
}

loc_80019640:
{
    r6 = (r6 - r5);
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_8001964C;
    }
}

loc_80019648:
{
    r6 = (r6 + -1);
}

loc_8001964C:
{
    r0 = (r0 - r8);
    r10 = (r10 + r7);
}

loc_80019654:
{
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_7 & 1);
    r4 = (r6 + r6);
    r6 = (r5 + r4);
    r0 = (r0 + r0);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r7 = (r7_rot_4 & 2147483647);
}

loc_80019668:
{
}

loc_8001966C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80019600;
    }
}

loc_80019670:
{
    r0 = (r6 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800196CC;
    }
}

loc_80019678:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31592));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f0.d);
}

loc_80019684:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800196CC;
    }
}

loc_8001968C:
{
    r0 = (r10 + 65536);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80019698:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800196A8;
    }
}

loc_8001969C:
{
    r10 = 0;
    r12 = (r12 + 1);
    goto loc_800196CC;
}

loc_800196A8:
{
    SetCRFloatResident(cr, 0, f0.d, f0.d);
}

loc_800196AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800196C4;
    }
}

loc_800196B0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65534));
}

loc_800196B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800196BC;
    }
}

loc_800196B8:
{
    r12 = (r12 + 1);
}

loc_800196BC:
{
    r10 = (r10 + 2);
    goto loc_800196CC;
}

loc_800196C4:
{
    r0 = (r10 & 1);
    r10 = (r10 + r0);
}

loc_800196CC:
{
    r0 = (r12 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r12);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r12) >> 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800196D8:
{
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(31));
    r5 = (r5_rot_8 & 2147483647);
    r4 = (r4 + 1071644672);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800196E8;
    }
}

loc_800196E4:
{
    r5 = (r5 | -2147483648);
}

loc_800196E8:
{
    r0 = (r3 + -1023);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r0 = (r0_rot_4 & -1048576);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
}

loc_80019700:
{
    r1 = (r1 + 32);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800194C0 func_800194C0 preserves=true fpr_mask=0x00000000
