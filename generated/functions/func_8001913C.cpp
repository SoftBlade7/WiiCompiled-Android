#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001913C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001913C;

loc_8001913C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r4 = 1072234496;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r0 = (r4 + 8699);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r31 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = r3;
    r6 = (r31 & 2147483647);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8001916C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80019184;
    }
}

loc_80019170:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31680));
    MemoryInline::FlatWriteFloat64(r3, f1.d);
    MemoryInline::FlatWriteFloat64((r3 + 8), f0.d);
    r3 = 0;
    goto loc_800194A8;
}

loc_80019184:
{
    r4 = 1073938432;
    r0 = (r4 + -9860);
}

loc_80019190:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r0))) {
        goto loc_8001924C;
    }
}

loc_80019194:
{
}

loc_80019198:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(0))) {
        goto loc_800191F4;
    }
}

loc_8001919C:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31672));
    r0 = (r6 + -1073283072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8699));
}

loc_800191A8:
{
    f2.d = (f1.d - f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800191CC;
    }
}

loc_800191B0:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31664));
    f0.d = (f2.d - f1.d);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    f0.d = (f2.d - f0.d);
    f0.d = (f0.d - f1.d);
    MemoryInline::FlatWriteFloat64((r3 + 8), f0.d);
    goto loc_800191EC;
}

loc_800191CC:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31656));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31648));
    f2.d = (f2.d - f0.d);
    f0.d = (f2.d - f1.d);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    f0.d = (f2.d - f0.d);
    f0.d = (f0.d - f1.d);
    MemoryInline::FlatWriteFloat64((r3 + 8), f0.d);
}

loc_800191EC:
{
    r3 = 1;
    goto loc_800194A8;
}

loc_800191F4:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31672));
    r0 = (r6 + -1073283072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8699));
}

loc_80019200:
{
    f2.d = (f0.d + f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80019224;
    }
}

loc_80019208:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31664));
    f0.d = (f1.d + f2.d);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    f0.d = (f2.d - f0.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r3 + 8), f0.d);
    goto loc_80019244;
}

loc_80019224:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31656));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31648));
    f2.d = (f2.d + f0.d);
    f0.d = (f1.d + f2.d);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    f0.d = (f2.d - f0.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r3 + 8), f0.d);
}

loc_80019244:
{
    r3 = -1;
    goto loc_800194A8;
}

loc_8001924C:
{
    r4 = 1094254592;
    r0 = (r4 + 8699);
}

loc_80019258:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_800193A0;
    }
}

loc_8001925C:
{
    f5.d = std::fabs(f1.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -31672), 0, 80u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -31632));
    r0 = 1127219200;
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -31640));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    f4.d = (f0.d * f5.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r2 + -31600));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -31672));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -31664));
    f2.d = (f2.d + f4.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    r5 = fctiwzword0;
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
}

loc_8001929C:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f6.d = (f2.d - f3.d);
    f1.d = (f1.d * f6.d);
    f2.d = (f0.d * f6.d);
    f4.d = (f5.d - f1.d);
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_800192DC;
    }
}

loc_800192B4:
{
    r0 = (r5 + -1);
    r4 = 0x80240000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + 28120);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_800192CC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_800192DC;
    }
}

loc_800192D0:
{
    f0.d = (f4.d - f2.d);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    goto loc_80019368;
}

loc_800192DC:
{
    f0.d = (f4.d - f2.d);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(20) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r6) >> 20);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    r0 = MemoryInline::FlatRead32(r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_3 & 2047);
    r0 = (r4 - r0);
}

loc_800192F8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(16))) {
        goto loc_80019368;
    }
}

loc_800192FC:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -31656));
    f2.d = f4.d;
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -31648));
    f3.d = (f1.d * f6.d);
    f1.d = (f0.d * f6.d);
    f4.d = (f4.d - f3.d);
    f0.d = (f2.d - f4.d);
    f0.d = (f0.d - f3.d);
    f2.d = (f1.d - f0.d);
    f0.d = (f4.d - f2.d);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    r0 = MemoryInline::FlatRead32(r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_4 & 2047);
    r0 = (r4 - r0);
}

loc_80019338:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(49))) {
        goto loc_80019368;
    }
}

loc_8001933C:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -31624));
    f2.d = f4.d;
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -31616));
    f3.d = (f1.d * f6.d);
    f1.d = (f0.d * f6.d);
    f4.d = (f4.d - f3.d);
    f0.d = (f2.d - f4.d);
    f0.d = (f0.d - f3.d);
    f2.d = (f1.d - f0.d);
    f0.d = (f4.d - f2.d);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
}

loc_80019368:
{
    f1.d = MemoryInline::FlatReadFloat64(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80019370:
{
    f0.d = (f4.d - f1.d);
    f0.d = (f0.d - f2.d);
    MemoryInline::FlatWriteFloat64((r3 + 8), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80019398;
    }
}

loc_80019380:
{
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat64(r3, f1.d);
    MemoryInline::FlatWriteFloat64((r3 + 8), f0.d);
    r3 = (0 - r5);
    goto loc_800194A8;
}

loc_80019398:
{
    r3 = r5;
    goto loc_800194A8;
}

loc_800193A0:
{
    r0 = 2146435072;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_800193A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800193C0;
    }
}

loc_800193AC:
{
    f0.d = (f1.d - f1.d);
    MemoryInline::FlatWriteFloat64((r3 + 8), f0.d);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    r3 = 0;
    goto loc_800194A8;
}

loc_800193C0:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(20) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r6) >> 20);
    r0 = 1127219200;
    r5 = (r3 + -1046);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(20));
    r3 = (r3_rot_1 & -1048576);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r3 = (r6 - r3);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31600));
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 48);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31608));
    r6 = 3;
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = PPC_Fctiwz(f2.d);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31680));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f0.d);
    r0 = fctiwzword1;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = (f0.d - f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    f0.d = (f2.d - f0.d);
    f2.d = (f3.d * f0.d);
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r0 = fctiwzword2;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = (f0.d - f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    f0.d = (f2.d - f0.d);
    f0.d = (f3.d * f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    goto loc_80019460;
}

loc_80019458:
{
    r3 = (r3 + -8);
    r6 = (r6 + -1);
}

loc_80019460:
{
    f0.d = MemoryInline::FlatReadFloat64((r3 + -8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80019468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80019458;
    }
}

loc_8001946C:
{
    r8 = 0x80240000u;
    r4 = r30;
    r3 = (r1 + 24);
    r7 = 2;
    r8 = (r8 + 27856);
    ctx->lr = 0x80019484u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80019818u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80019488:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800194A8;
    }
}

loc_8001948C:
{
    f1.d = MemoryInline::FlatReadFloat64(r30);
    r3 = (0 - r3);
    f0.d = MemoryInline::FlatReadFloat64((r30 + 8));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat64(r30, f1.d);
    MemoryInline::FlatWriteFloat64((r30 + 8), f0.d);
}

loc_800194A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001913C func_8001913C preserves=true fpr_mask=0x00000000
