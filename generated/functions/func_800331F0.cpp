#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800331F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_subfic_ra_0 = 0;
    uint32_t r3_subfic_ra_1 = 0;
    uint32_t r3_subfic_ra_2 = 0;
    uint32_t r3_subfic_ra_3 = 0;
    uint32_t r3_subfic_ra_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800331F0;

loc_800331F0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = MemoryInline::FlatRead32((r3 + 200));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r31 = MemoryInline::FlatRead32((r4 + 36));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 269), 0, 5u, true, false);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 269));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_80033214:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80033220;
    }
}

loc_80033218:
{
    r3 = 255;
    goto loc_8003340C;
}

loc_80033220:
{
    r8 = MemoryInline::ReadResolved16(guest_range_0, 1u, (r31 + 270));
    r5 = 346292224;
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r31 + 272));
    r7 = (r5 + 10651);
    r6 = MemoryInline::FlatRead8((r3 + 153));
    r4 = 65536;
    r5 = (r0 * r8);
    r0 = (r4 + -1);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r4 = (r5 * r4);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(10) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 10);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r4 = (r4 + r5);
    r4 = (r8 + r4);
}

loc_80033260:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(65535))) {
        goto loc_80033268;
    }
}

loc_80033264:
{
    r0 = (r4 & 65535);
}

loc_80033268:
{
    r3 = MemoryInline::FlatRead16((r3 + 220));
    r4 = (r0 & 65535);
}

loc_80033274:
{
    r5 = 0;
    r3 = (r3 + -1);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r3 - r0);
    r6 = (r0 & 65535);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(1))) {
        goto loc_800332B4;
    }
}

loc_80033290:
{
}

loc_80033294:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(2))) {
        goto loc_8003330C;
    }
}

loc_80033298:
{
}

loc_8003329C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(3))) {
        goto loc_80033330;
    }
}

loc_800332A0:
{
}

loc_800332A4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(4))) {
        goto loc_80033350;
    }
}

loc_800332A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(5));
}

loc_800332AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003337C;
    }
}

loc_800332B0:
{
    goto loc_800333EC;
}

loc_800332B4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 131070);
}

loc_800332BC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r4))) {
        goto loc_800332E0;
    }
}

loc_800332C0:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 273));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 262140);
    r0 = (r3 * r0);
    r3_subfic_ra_2 = r3;
    r3 = (128 - r3_subfic_ra_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(128) >= static_cast<uint32_t>(r3_subfic_ra_2) ? 1u : 0u) << 29);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r3 + r0);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800333EC;
}

loc_800332E0:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 273));
    r0 = (r5 * r6);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r3 = (r3 - r5);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r0 = (0 - r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r3 = (r3 + r0);
    r0 = (r3 + 128);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800333EC;
}

loc_8003330C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 273));
    r0 = (r3 * r6);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r0 = (0 - r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r3 = (r3 + r0);
    r0 = (r3 + 128);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800333EC;
}

loc_80033330:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 273));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 131070);
    r0 = (r3 * r0);
    r3_subfic_ra_1 = r3;
    r3 = (128 - r3_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(128) >= static_cast<uint32_t>(r3_subfic_ra_1) ? 1u : 0u) << 29);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r3 + r0);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800333EC;
}

loc_80033350:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 131070);
}

loc_80033358:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r4))) {
        goto loc_8003336C;
    }
}

loc_8003335C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 273));
    r0 = (r3 + 128);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800333EC;
}

loc_8003336C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 273));
    r0_subfic_ra_1 = r0;
    r0 = (128 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(128) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800333EC;
}

loc_8003337C:
{
    r30 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -30944));
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30900));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30904));
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r31 + 273));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -30944));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30960));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword0;
}

loc_800333EC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800333F8;
    }
}

loc_800333F4:
{
    r5 = 0;
}

loc_800333F8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(255));
}

loc_80033400:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80033408;
    }
}

loc_80033404:
{
    r5 = 255;
}

loc_80033408:
{
    r3 = (r5 & 255);
}

loc_8003340C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00003FF gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800331F0 func_800331F0 preserves=true fpr_mask=0x00000000
