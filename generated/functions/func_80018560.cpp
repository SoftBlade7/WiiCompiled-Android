#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80018560(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80018560;

loc_80018560:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1048576;
    r7 = 0;
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r8 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_8001857C:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_800185D0;
    }
}

loc_80018580:
{
    r0 = (r8 & 2147483647);
    r0 = (r0 | r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001859C;
    }
}

loc_8001858C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32128));
    f0.d = MemoryInline::FlatReadFloat64((r13 + -27576));
    f1.d = (f1.d / f0.d);
    goto loc_8001880C;
}

loc_8001859C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_800185A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800185BC;
    }
}

loc_800185A4:
{
    f1.d = (f1.d - f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r13 + -27576));
    r0 = 33;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    f1.d = (f1.d / f0.d);
    goto loc_8001880C;
}

loc_800185BC:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32120));
    r7 = -54;
    f1.d = (f1.d * f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r8 = MemoryInline::FlatRead32((r1 + 8));
}

loc_800185D0:
{
    r0 = 2146435072;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_800185D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800185E4;
    }
}

loc_800185DC:
{
    f1.d = (f1.d + f1.d);
    goto loc_8001880C;
}

loc_800185E4:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(20) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r8) >> 20);
    r8 = (r8 & 1048575);
    r3 = (r8 + 589824);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -32112), 0, 112u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -32112));
    r4 = (r3 + 24420);
    r0 = (r8 + 2);
    r3 = (r4 & 1048576);
    r5 = (r7 + r5);
    r3 = (r3 ^ 1072693248);
    r0 = (r0 & 1048575);
    r3 = (r8 | r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80018618:
{
    r7 = (r5 + -1023);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
    r0 = (r0_rot_1 & 1);
    r7 = (r7 + r0);
    f0.d = (f1.d - f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800186E0;
    }
}

loc_80018630:
{
    f1.d = MemoryInline::FlatReadFloat64((r13 + -27576));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80018638:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001867C;
    }
}

loc_8001863C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80018640:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80018648;
    }
}

loc_80018644:
{
    goto loc_8001880C;
}

loc_80018648:
{
    r3 = (r7 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 104u, (r2 + -32008));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -32104));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -32096));
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d * f2.d);
    f0.d = (f0.d * f2.d);
    f1.d = (f1.d + f0.d);
    goto loc_8001880C;
}

loc_8001867C:
{
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -32080));
    f1.d = (f0.d * f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -32088));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8001868C:
{
    f3.d = (f3.d * f0.d);
    f2.d = (f2.d - f3.d);
    f5.d = (f2.d * f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800186A4;
    }
}

loc_8001869C:
{
    f1.d = (f0.d - f5.d);
    goto loc_8001880C;
}

loc_800186A4:
{
    r3 = (r7 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 104u, (r2 + -32008));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -32096));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -32104));
    f3.d = (f3.d - f4.d);
    f1.d = (f1.d * f3.d);
    f2.d = (f2.d * f3.d);
    f1.d = (f5.d - f1.d);
    f0.d = (f1.d - f0.d);
    f1.d = (f2.d - f0.d);
    goto loc_8001880C;
}

loc_800186E0:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -32072));
    r5 = (r7 ^ -2147483648);
    r4 = 1127219200;
    r3 = 458752;
    f1.d = (f1.d + f0.d);
    r6 = (r8 + -393216);
    r0 = (r3 + -18351);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r2 + -32016));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r2 + -32024));
    r0 = (r0 - r8);
    f1.d = (f0.d / f1.d);
    r6 = (r6 + -5242);
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r2 + -32048));
    r6 = (r6 | r0);
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -32056));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 80u, (r2 + -32032));
    f11.d = (f1.d * f1.d);
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -32064));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r2 + -32040));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 104u, (r2 + -32008));
    f12.d = (f11.d * f11.d);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f9.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f5.d = (f5.d * f12.d);
    f8.d = (f8.d * f12.d);
    f4.d = (f4.d + f5.d);
    f9.d = (f9.d - f10.d);
    f5.d = (f7.d + f8.d);
    f4.d = (f12.d * f4.d);
    f5.d = (f12.d * f5.d);
    f3.d = (f3.d + f4.d);
    f4.d = (f6.d + f5.d);
    f3.d = (f12.d * f3.d);
    f4.d = (f12.d * f4.d);
    f2.d = (f2.d + f3.d);
    f2.d = (f11.d * f2.d);
    f3.d = (f2.d + f4.d);
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_800187D0;
    }
}

loc_8001877C:
{
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -32088));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80018784:
{
    f2.d = (f2.d * f0.d);
    f5.d = (f2.d * f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800187A4;
    }
}

loc_80018790:
{
    f2.d = (f5.d + f3.d);
    f1.d = (f1.d * f2.d);
    f1.d = (f5.d - f1.d);
    f1.d = (f0.d - f1.d);
    goto loc_8001880C;
}

loc_800187A4:
{
    f3.d = (f5.d + f3.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -32096));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -32104));
    f2.d = (f2.d * f9.d);
    f1.d = (f1.d * f3.d);
    f3.d = (f4.d * f9.d);
    f1.d = (f1.d + f2.d);
    f1.d = (f5.d - f1.d);
    f0.d = (f1.d - f0.d);
    f1.d = (f3.d - f0.d);
    goto loc_8001880C;
}

loc_800187D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_800187D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800187E8;
    }
}

loc_800187D8:
{
    f2.d = (f0.d - f3.d);
    f1.d = (f1.d * f2.d);
    f1.d = (f0.d - f1.d);
    goto loc_8001880C;
}

loc_800187E8:
{
    f3.d = (f0.d - f3.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -32096));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -32104));
    f2.d = (f2.d * f9.d);
    f1.d = (f1.d * f3.d);
    f3.d = (f4.d * f9.d);
    f1.d = (f1.d - f2.d);
    f0.d = (f1.d - f0.d);
    f1.d = (f3.d - f0.d);
}

loc_8001880C:
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00001FFF fpr_write=0x00001FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80018560 func_80018560 preserves=true fpr_mask=0x00000000
