#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066B5F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066B5F0;

loc_8066B5F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066B614:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066B82C;
    }
}

loc_8066B618:
{
}

loc_8066B61C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8066B630;
    }
}

loc_8066B620:
{
    r0 = (r4 * 448);
    r3 = (r3 + r0);
    r31 = (r3 + 2320);
    goto loc_8066B63C;
}

loc_8066B630:
{
    r0 = (r4 * 448);
    r3 = (r3 + r0);
    r31 = (r3 + 2096);
}

loc_8066B63C:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r29 = 0;
    r3 = 0;
    r4 = 0;
}

loc_8066B650:
{
    r5 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066B668;
    }
}

loc_8066B658:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_8066B660:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066B668;
    }
}

loc_8066B664:
{
    r5 = 1;
}

loc_8066B668:
{
}

loc_8066B66C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8066B680;
    }
}

loc_8066B670:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8066B678:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8066B680;
    }
}

loc_8066B67C:
{
    r4 = 1;
}

loc_8066B680:
{
}

loc_8066B684:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8066B698;
    }
}

loc_8066B688:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8066B690:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(100))) {
        goto loc_8066B698;
    }
}

loc_8066B694:
{
    r3 = 1;
}

loc_8066B698:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066B69C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066B6B4;
    }
}

loc_8066B6A0:
{
    r3 = (r31 + 12);
    ctx->lr = 0x8066B6A8u;
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
    InvokeDirectCpu<0x800CB8B0u>(ctx);
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
}

loc_8066B6AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066B6B4;
    }
}

loc_8066B6B0:
{
    r29 = 1;
}

loc_8066B6B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8066B6B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066B824;
    }
}

loc_8066B6BC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = 1127219200;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 31u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r3);
    r8 = 0x808A0000u;
    r7 = 0x808A0000u;
    r5 = 1172832256;
    r10 = MemoryInline::FlatRead32((r31 + 8));
    r6 = (r5 + -19853);
    r9 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 65536;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 274857984;
    r0 = (r9 - r10);
    f0.d = MemoryInline::FlatReadFloat32((r7 + -21984));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r8 + -21976));
    r10 = (r4 + -5536);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r3 + 19923);
    r7 = 1;
    r3 = (r30 + 32);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r4 = (r31 + 12);
    r5 = 100;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r30 + 4), f0.d);
    r29 = MemoryInline::FlatRead32((r31 + 4));
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r29))) >> 32));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r30 + 18), static_cast<uint8_t>(r7));
    r11 = (static_cast<int32_t>(r8) >> 14);
    r8 = (static_cast<int32_t>(r8) >> 14);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r12 = (r12_rot_0 & 1);
    r8 = (r8 + r9);
    r8 = (r8 * r10);
    r9 = (r11 + r12);
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r30 + 12), static_cast<uint16_t>(r9));
    r8 = (r29 - r8);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r9 = (static_cast<int32_t>(r8) >> 6);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r29))) >> 32));
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r11 = (r11_rot_0 & 1);
    r9 = (r9 + r11);
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r30 + 14), static_cast<uint8_t>(r9));
    r8 = (static_cast<int32_t>(r8) >> 6);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
    r8 = (r8 + r9);
    r8 = (r8 * 1000);
    r8 = (r29 - r8);
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r30 + 16), static_cast<uint16_t>(r8));
    r11 = MemoryInline::FlatRead32((r31 + 8));
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r11))) >> 32));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r30 + 30), static_cast<uint8_t>(r7));
    r8 = (static_cast<int32_t>(r6) >> 14);
    r6 = (static_cast<int32_t>(r6) >> 14);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 1);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r6 = (r6 + r7);
    r6 = (r6 * r10);
    r7 = (r8 + r9);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r30 + 24), static_cast<uint16_t>(r7));
    r6 = (r11 - r6);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r11))) >> 32));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r6 = (r6 + r7);
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r30 + 26), static_cast<uint8_t>(r6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 6);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r0 = (r0 + r6);
    r0 = (r0 * 1000);
    r0 = (r11 - r0);
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r30 + 28), static_cast<uint16_t>(r0));
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
    r0 = MemoryInline::FlatRead8((r31 + 88));
    r3 = (r30 + 124);
    MemoryInline::FlatWrite32((r30 + 108), r0);
    r4 = (r31 + 92);
    r5 = 100;
    r0 = MemoryInline::FlatRead8((r31 + 89));
    MemoryInline::FlatWrite32((r30 + 112), r0);
    r0 = MemoryInline::FlatRead8((r31 + 90));
    MemoryInline::FlatWrite32((r30 + 116), r0);
    r0 = MemoryInline::FlatRead8((r31 + 91));
    MemoryInline::FlatWrite8((r30 + 120), static_cast<uint8_t>(r0));
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
    r3 = 1;
    goto loc_8066B830;
}

loc_8066B824:
{
    r3 = 0;
    goto loc_8066B830;
}

loc_8066B82C:
{
    r3 = 0;
}

loc_8066B830:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8001FFB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8066B5F0 func_8066B5F0 preserves=true fpr_mask=0x00000000
