#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80590338_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80590834_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80590338_statefree_v0(uint32_t, uint32_t);
extern "C" uint64_t func_80590834_statefree_v0(uint32_t, uint32_t);

extern "C" void func_80693E94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80537B88_loc_0 = 0;
    uint32_t addr_lfsx_80537B88_loc_1 = 0;
    uint32_t addr_lfsx_80537B88_loc_2 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80693E94;

loc_80693E94:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    r3 = MemoryInline::FlatRead32((r3 + 280));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f0.d = MemoryInline::FlatReadFloat32(r3);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 1844u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1740u, (r31 + 1744), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1744u, (r31 + 1748), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1748u, (r31 + 1752), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    // inline leaf 0x8059152C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 80));
    // end of inlined leaf 0x8059152C
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = 16842752;
    r4 = (r3 + 257);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r0 = (r4 & ~r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 4), static_cast<uint8_t>(r0));
    // inline leaf 0x80590264 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 156);
    // end of inlined leaf 0x80590264
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r3);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1776u, (r31 + 1780), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1780u, (r31 + 1784), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1784u, (r31 + 1788), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1788u, (r31 + 1792), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1792u, (r31 + 1796), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1796u, (r31 + 1800), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1800u, (r31 + 1804), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1804u, (r31 + 1808), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1808u, (r31 + 1812), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1812u, (r31 + 1816), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1816u, (r31 + 1820), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1820u, (r31 + 1824), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r30 = 0;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1832u, (r31 + 1836), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1836u, (r31 + 1840), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1840u, (r31 + 1844), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    // inline leaf 0x80590DA4 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 44));
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590DA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(14));
}

loc_80693F88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80693FA4;
    }
}

loc_80693F8C:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80693FA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80693FA8;
    }
}

loc_80693FA4:
{
    r30 = 1;
}

loc_80693FA8:
{
    MemoryInline::FlatWrite8((r31 + 73), static_cast<uint8_t>(r30));
    r3 = r31;
    ctx->lr = 0x80693FB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B345Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 280));
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r31 + 1756), f0.d);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 1760), f0.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 1764), f2.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80693FECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r31 + 1768), f1.d);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    MemoryInline::FlatWriteFloat32((r31 + 1832), f1.d);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -10560));
    MemoryInline::FlatWriteFloat32((r31 + 1776), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80694018:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80694020;
    }
}

loc_8069401C:
{
    MemoryInline::FlatWriteFloat32((r31 + 1776), f0.d);
}

loc_80694020:
{
    r0 = MemoryInline::FlatRead32((r31 + 292));
}

loc_80694028:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80694350;
    }
}

loc_8069402C:
{
    r0 = MemoryInline::FlatRead8((r31 + 296));
}

loc_80694034:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806941C4;
    }
}

loc_80694038:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = 2;
    // inline leaf 0x80590390 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 96);
    // end of inlined leaf 0x80590390
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r4 = 3;
    MemoryInline::FlatWriteFloat32((r31 + 1980), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 1984), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 1988), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    // inline leaf 0x80590390 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 96);
    // end of inlined leaf 0x80590390
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r4 = 2;
    MemoryInline::FlatWriteFloat32((r31 + 1992), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 1996), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 2000), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590338u) && KnownTranslatedCpuCall<0x80590338u>::kAvailable && !KnownTranslatedCpuCall<0x80590338u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590338u>()) {
        const auto state_free_result_80590338_338D = func_80590338_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590338_338D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite8((r31 + 1977), static_cast<uint8_t>(r3));
    r4 = 3;
    r3 = MemoryInline::FlatRead32((r31 + 280));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590338u) && KnownTranslatedCpuCall<0x80590338u>::kAvailable && !KnownTranslatedCpuCall<0x80590338u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590338u>()) {
        const auto state_free_result_80590338_38F8 = func_80590338_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590338_38F8);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite8((r31 + 1978), static_cast<uint8_t>(r3));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 280));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590338u) && KnownTranslatedCpuCall<0x80590338u>::kAvailable && !KnownTranslatedCpuCall<0x80590338u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590338u>()) {
        const auto state_free_result_80590338_3E63 = func_80590338_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590338_3E63);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_806940B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806940DC;
    }
}

loc_806940B4:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590834u) && KnownTranslatedCpuCall<0x80590834u>::kAvailable && !KnownTranslatedCpuCall<0x80590834u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590834u>()) {
        const auto state_free_result_80590834_441A = func_80590834_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590834_441A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    goto loc_806940FC;
}

loc_806940DC:
{
    r4 = 0x802A0000u;
    r3 = (r4 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
}

loc_806940FC:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = 3;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590338u) && KnownTranslatedCpuCall<0x80590338u>::kAvailable && !KnownTranslatedCpuCall<0x80590338u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590338u>()) {
        const auto state_free_result_80590338_4C50 = func_80590338_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590338_4C50);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8069410C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80694138;
    }
}

loc_80694110:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = 3;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590834u) && KnownTranslatedCpuCall<0x80590834u>::kAvailable && !KnownTranslatedCpuCall<0x80590834u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590834u>()) {
        const auto state_free_result_80590834_523E = func_80590834_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590834_523E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    goto loc_80694158;
}

loc_80694138:
{
    r4 = 0x802A0000u;
    r3 = (r4 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
}

loc_80694158:
{
    r3 = (r1 + 56);
    r4 = (r1 + 92);
    r5 = (r1 + 80);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    ctx->lr = 0x80694188u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 44);
    r4 = (r31 + 1780);
    r5 = 2;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    r3 = (r1 + 68);
    r4 = (r1 + 44);
    r5 = (r31 + 2072);
    ctx->lr = 0x806941A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B41E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 1744));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1748));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1752));
    MemoryInline::FlatWriteFloat32((r31 + 2084), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 2100), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 2116), f0.d);
    goto loc_80694448;
}

loc_806941C4:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = 1;
    // inline leaf 0x80590390 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 96);
    // end of inlined leaf 0x80590390
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r4 = 2;
    MemoryInline::FlatWriteFloat32((r31 + 1980), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 1984), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 1988), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    // inline leaf 0x80590390 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 96);
    // end of inlined leaf 0x80590390
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r4 = 1;
    MemoryInline::FlatWriteFloat32((r31 + 1992), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 1996), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 2000), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590338u) && KnownTranslatedCpuCall<0x80590338u>::kAvailable && !KnownTranslatedCpuCall<0x80590338u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590338u>()) {
        const auto state_free_result_80590338_6E87 = func_80590338_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590338_6E87);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite8((r31 + 1977), static_cast<uint8_t>(r3));
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r31 + 280));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590338u) && KnownTranslatedCpuCall<0x80590338u>::kAvailable && !KnownTranslatedCpuCall<0x80590338u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590338u>()) {
        const auto state_free_result_80590338_73F2 = func_80590338_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590338_73F2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite8((r31 + 1978), static_cast<uint8_t>(r3));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 280));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590338u) && KnownTranslatedCpuCall<0x80590338u>::kAvailable && !KnownTranslatedCpuCall<0x80590338u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590338u>()) {
        const auto state_free_result_80590338_795D = func_80590338_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590338_795D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8069423C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80694268;
    }
}

loc_80694240:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590834u) && KnownTranslatedCpuCall<0x80590834u>::kAvailable && !KnownTranslatedCpuCall<0x80590834u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590834u>()) {
        const auto state_free_result_80590834_7F14 = func_80590834_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590834_7F14);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    goto loc_80694288;
}

loc_80694268:
{
    r4 = 0x802A0000u;
    r3 = (r4 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
}

loc_80694288:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = 2;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590338u) && KnownTranslatedCpuCall<0x80590338u>::kAvailable && !KnownTranslatedCpuCall<0x80590338u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590338u>()) {
        const auto state_free_result_80590338_874A = func_80590338_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590338_874A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80694298:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806942C4;
    }
}

loc_8069429C:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = 2;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590834u) && KnownTranslatedCpuCall<0x80590834u>::kAvailable && !KnownTranslatedCpuCall<0x80590834u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590834u>()) {
        const auto state_free_result_80590834_8D38 = func_80590834_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590834_8D38);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    goto loc_806942E4;
}

loc_806942C4:
{
    r4 = 0x802A0000u;
    r3 = (r4 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
}

loc_806942E4:
{
    r3 = (r1 + 32);
    r4 = (r1 + 92);
    r5 = (r1 + 80);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    ctx->lr = 0x80694314u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 20);
    r4 = (r31 + 1780);
    r5 = 2;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_1 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_1);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    r3 = (r1 + 68);
    r4 = (r1 + 20);
    r5 = (r31 + 2072);
    ctx->lr = 0x80694334u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B41E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 1744));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1748));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1752));
    MemoryInline::FlatWriteFloat32((r31 + 2084), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 2100), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 2116), f0.d);
    goto loc_80694448;
}

loc_80694350:
{
}

loc_80694354:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80694448;
    }
}

loc_80694358:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = 0;
    // inline leaf 0x80590390 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 96);
    // end of inlined leaf 0x80590390
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r4 = 1;
    MemoryInline::FlatWriteFloat32((r31 + 1980), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 1984), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 1988), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    // inline leaf 0x80590390 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 96);
    // end of inlined leaf 0x80590390
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r4 = 0;
    MemoryInline::FlatWriteFloat32((r31 + 1992), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 1996), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 2000), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 280));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590338u) && KnownTranslatedCpuCall<0x80590338u>::kAvailable && !KnownTranslatedCpuCall<0x80590338u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590338u>()) {
        const auto state_free_result_80590338_AA14 = func_80590338_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590338_AA14);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite8((r31 + 1977), static_cast<uint8_t>(r3));
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r31 + 280));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590338u) && KnownTranslatedCpuCall<0x80590338u>::kAvailable && !KnownTranslatedCpuCall<0x80590338u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590338u>()) {
        const auto state_free_result_80590338_AF7F = func_80590338_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590338_AF7F);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806943C0:
{
    MemoryInline::FlatWrite8((r31 + 1978), static_cast<uint8_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806943F0;
    }
}

loc_806943C8:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590834u) && KnownTranslatedCpuCall<0x80590834u>::kAvailable && !KnownTranslatedCpuCall<0x80590834u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590834u>()) {
        const auto state_free_result_80590834_B5CA = func_80590834_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590834_B5CA);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80590834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 2060), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::FlatWriteFloat32((r31 + 2064), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    MemoryInline::FlatWriteFloat32((r31 + 2068), f0.d);
    goto loc_80694410;
}

loc_806943F0:
{
    r3 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16688));
    r3 = (r3 + 16688);
    MemoryInline::FlatWriteFloat32((r31 + 2060), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 2064), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 2068), f0.d);
}

loc_80694410:
{
    r3 = (r1 + 8);
    r4 = (r31 + 1780);
    r5 = 2;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_2 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_2);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    r3 = (r31 + 2060);
    r4 = (r1 + 8);
    r5 = (r31 + 2072);
    ctx->lr = 0x80694430u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B41E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 1992));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1996));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2000));
    MemoryInline::FlatWriteFloat32((r31 + 2084), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 2100), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 2116), f0.d);
}

loc_80694448:
{
    r4 = MemoryInline::FlatRead32((r31 + 280));
    r0 = MemoryInline::FlatRead8((r31 + 105));
    r3 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80694458:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & 1);
    MemoryInline::FlatWrite8((r31 + 70), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_12 & 1);
    MemoryInline::FlatWrite8((r31 + 125), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_13 & 1);
    MemoryInline::FlatWrite8((r31 + 71), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & 1);
    MemoryInline::FlatWrite8((r31 + 72), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1);
    MemoryInline::FlatWrite8((r31 + 185), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806944C4;
    }
}

loc_806944BC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 120), static_cast<uint8_t>(r0));
}

loc_806944C4:
{
    r3 = MemoryInline::FlatRead32((r31 + 100));
}

loc_806944CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_806944E4;
    }
}

loc_806944D0:
{
    r0 = MemoryInline::FlatRead32((r31 + 96));
}

loc_806944D8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_806944E4;
    }
}

loc_806944DC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 100), r0);
}

loc_806944E4:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r6 = 0;
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_15 & 1);
}

loc_806944FC:
{
    MemoryInline::FlatWrite8((r31 + 150), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80694514;
    }
}

loc_80694504:
{
    r0 = MemoryInline::FlatRead8((r31 + 151));
}

loc_8069450C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80694514;
    }
}

loc_80694510:
{
    r6 = 1;
}

loc_80694514:
{
    r0 = MemoryInline::FlatRead8((r31 + 315));
    r3 = 0;
    r4 = MemoryInline::FlatRead8((r31 + 9));
    r5 = MemoryInline::FlatRead8((r31 + 150));
}

loc_80694528:
{
    MemoryInline::FlatWrite8((r31 + 152), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 151), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80694544;
    }
}

loc_8069453C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
}

loc_80694544:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r31 + 1828));
    r4 = MemoryInline::FlatRead32((r3 + 6584));
    r3 = 0;
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r4 = MemoryInline::FlatRead32((r4 + 24));
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = MemoryInline::FlatRead16((r4 + 820));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_17 & 1);
}

loc_80694568:
{
    MemoryInline::FlatWrite8((r31 + 192), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80694580;
    }
}

loc_80694570:
{
    r0 = MemoryInline::FlatRead8((r31 + 189));
}

loc_80694578:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80694580;
    }
}

loc_8069457C:
{
    r3 = 1;
}

loc_80694580:
{
    r0 = MemoryInline::FlatRead8((r31 + 192));
    r5 = 0;
    MemoryInline::FlatWrite8((r31 + 190), static_cast<uint8_t>(r3));
}

loc_80694590:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806945A4;
    }
}

loc_80694594:
{
    r0 = MemoryInline::FlatRead8((r31 + 189));
}

loc_8069459C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806945A4;
    }
}

loc_806945A0:
{
    r5 = 1;
}

loc_806945A4:
{
    r0 = MemoryInline::FlatRead8((r31 + 315));
    r4 = 0;
    r3 = MemoryInline::FlatRead8((r31 + 192));
}

loc_806945B4:
{
    MemoryInline::FlatWrite8((r31 + 191), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 189), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 244), static_cast<uint8_t>(r4));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80694634;
    }
}

loc_806945C4:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r31 + 302));
    r3 = MemoryInline::FlatRead32((r3 + 6584));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 156));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite8((r31 + 252), static_cast<uint8_t>(r4));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_18 & 134217727);
}

loc_806945EC:
{
    MemoryInline::FlatWrite8((r31 + 253), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 250), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8069460C;
    }
}

loc_806945F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 251));
}

loc_80694600:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069460C;
    }
}

loc_80694604:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 252), static_cast<uint8_t>(r0));
}

loc_8069460C:
{
    r0 = MemoryInline::FlatRead8((r31 + 250));
}

loc_80694614:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069462C;
    }
}

loc_80694618:
{
    r0 = MemoryInline::FlatRead8((r31 + 251));
}

loc_80694620:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8069462C;
    }
}

loc_80694624:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 253), static_cast<uint8_t>(r0));
}

loc_8069462C:
{
    r0 = MemoryInline::FlatRead8((r31 + 250));
    MemoryInline::FlatWrite8((r31 + 251), static_cast<uint8_t>(r0));
}

loc_80694634:
{
    r4 = 0;
    MemoryInline::FlatWrite8((r31 + 248), static_cast<uint8_t>(r4));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r31 + 1828));
    MemoryInline::FlatWrite8((r31 + 249), static_cast<uint8_t>(r4));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 6584));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_21 & 1);
}

loc_80694660:
{
    MemoryInline::FlatWrite8((r31 + 246), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8069467C;
    }
}

loc_80694668:
{
    r0 = MemoryInline::FlatRead8((r31 + 247));
}

loc_80694670:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069467C;
    }
}

loc_80694674:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 248), static_cast<uint8_t>(r0));
}

loc_8069467C:
{
    r0 = MemoryInline::FlatRead8((r31 + 246));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80694684:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8069469C;
    }
}

loc_80694688:
{
    r0 = MemoryInline::FlatRead8((r31 + 247));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80694690:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069469C;
    }
}

loc_80694694:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 249), static_cast<uint8_t>(r0));
}

loc_8069469C:
{
    r0 = MemoryInline::FlatRead8((r31 + 246));
    MemoryInline::FlatWrite8((r31 + 247), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007F gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80693E94 func_80693E94 preserves=true fpr_mask=0x00000000
