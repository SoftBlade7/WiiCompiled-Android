#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80590338_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80590834_statefree(uint32_t, uint32_t);

extern "C" void func_80696CF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80696CF0;

loc_80696CF0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 280), 0, 1841u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1488u, (r3 + 1768));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 372), 0, 1656u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 1400u, (r3 + 1772), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 280));
    // inline leaf 0x805911D8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead16((r3 + 252));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x805911D8
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 1700u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1700u, (r31 + 1980));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1704u, (r31 + 1984));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 1708u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1708u, (r31 + 1988));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1712u, (r31 + 1992));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 1716u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1716u, (r31 + 1996));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1720u, (r31 + 2000));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 76u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r31 + 356));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r31 + 360));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 84u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r31 + 364));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r31 + 368));
        }
    }
    MemoryInline::WriteResolved16(guest_range_1, 1580u, (r31 + 1952), static_cast<uint16_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1632u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 1632u, (r31 + 2004), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 1636u, (r31 + 2008), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1640u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 1640u, (r31 + 2012), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 1644u, (r31 + 2016), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 1648u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 1648u, (r31 + 2020), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 1652u, (r31 + 2024), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 372), r6);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 376), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 380), r4);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 384), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1840u, (r31 + 2120));
}

loc_80696D74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80696D90;
    }
}

loc_80696D78:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2124));
    MemoryInline::FlatWriteFloat32((r31 + 2172), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2128));
    MemoryInline::FlatWriteFloat32((r31 + 2176), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2132));
    MemoryInline::FlatWriteFloat32((r31 + 2180), f0.d);
}

loc_80696D90:
{
    r0 = MemoryInline::FlatRead8((r31 + 2121));
}

loc_80696D98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80696DB4;
    }
}

loc_80696D9C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2136));
    MemoryInline::FlatWriteFloat32((r31 + 2184), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2140));
    MemoryInline::FlatWriteFloat32((r31 + 2188), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2144));
    MemoryInline::FlatWriteFloat32((r31 + 2192), f0.d);
}

loc_80696DB4:
{
    r0 = MemoryInline::FlatRead8((r31 + 2122));
}

loc_80696DBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80696DD8;
    }
}

loc_80696DC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2148));
    MemoryInline::FlatWriteFloat32((r31 + 2196), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2152));
    MemoryInline::FlatWriteFloat32((r31 + 2200), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2156));
    MemoryInline::FlatWriteFloat32((r31 + 2204), f0.d);
}

loc_80696DD8:
{
    r0 = MemoryInline::FlatRead8((r31 + 2123));
}

loc_80696DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80696DFC;
    }
}

loc_80696DE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2160));
    MemoryInline::FlatWriteFloat32((r31 + 2208), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2164));
    MemoryInline::FlatWriteFloat32((r31 + 2212), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2168));
    MemoryInline::FlatWriteFloat32((r31 + 2216), f0.d);
}

loc_80696DFC:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r7 = 0x808A0000u;
    r5 = MemoryInline::FlatRead8((r31 + 144));
    r6 = 0;
    r8 = MemoryInline::FlatRead32(r3);
    r4 = 0x802A0000u;
    r0 = MemoryInline::FlatRead8((r31 + 107));
    r3 = (r4 + 16688);
    r8 = MemoryInline::FlatRead32((r8 + 4));
    r30 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r7 + -10592));
    r7 = MemoryInline::FlatRead32((r8 + 4));
    r7 = (r7 & 1);
    MemoryInline::FlatWrite8((r31 + 2412), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteFloat32((r31 + 1964), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 1960), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 1956), f0.d);
    MemoryInline::FlatWrite32((r31 + 1968), r6);
    MemoryInline::FlatWrite8((r31 + 41), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 49), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 145), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 144), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 172), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 108), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 107), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 146), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 147), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 148), static_cast<uint8_t>(r6));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    MemoryInline::FlatWriteFloat32((r31 + 1856), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 1860), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 1864), f0.d);
    goto loc_80696EC4;
}

loc_80696E88:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590338u) && KnownTranslatedCpuCall<0x80590338u>::kAvailable && !KnownTranslatedCpuCall<0x80590338u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590338u>()) {
        const auto state_free_result_80590338_2959 = func_80590338_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80590338_2959[0]);
        r3 = static_cast<uint32_t>(state_free_result_80590338_2959[1]);
    } else {
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80590338u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80696E98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80696EC0;
    }
}

loc_80696E9C:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80590834u) && KnownTranslatedCpuCall<0x80590834u>::kAvailable && !KnownTranslatedCpuCall<0x80590834u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590834u>()) {
        const auto state_free_result_80590834_2FFD = func_80590834_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80590834_2FFD[0]);
        r3 = static_cast<uint32_t>(state_free_result_80590834_2FFD[1]);
    } else {
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80590834u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 1856), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::FlatWriteFloat32((r31 + 1860), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    MemoryInline::FlatWriteFloat32((r31 + 1864), f0.d);
}

loc_80696EC0:
{
    r30 = (r30 + 1);
}

loc_80696EC4:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    // inline leaf 0x805902EC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r3 + 14));
    // end of inlined leaf 0x805902EC
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80696ED4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80696E88;
    }
}

loc_80696ED8:
{
    r4 = 0x802A0000u;
    r3 = (r31 + 1856);
    r4 = (r4 + 16712);
    r5 = (r31 + 1868);
    ctx->lr = 0x80696EECu;
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
    ctx->fpr[5] = f5;
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
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 1744));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1748));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1752));
    MemoryInline::FlatWriteFloat32((r31 + 1880), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 1896), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 1912), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001E gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80696CF0 func_80696CF0 preserves=true fpr_mask=0x00000000
