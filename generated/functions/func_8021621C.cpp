#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021621C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_addic_src_1 = 0;
    uint32_t r0_addic_src_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8021621C;

loc_8021621C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r5 = 16;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = r3;
    r4 = (r31 + 20);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80197380u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r31 + 2132), r3);
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C0990u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8021625C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021626C;
    }
}

loc_80216260:
{
}

loc_80216264:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80216298;
    }
}

loc_80216268:
{
    goto loc_802162A4;
}

loc_8021626C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80216274:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(253))) {
        goto loc_80216288;
    }
}

loc_80216278:
{
    r0 = MemoryInline::FlatRead8((r31 + 2136));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r31 + 2136), static_cast<uint8_t>(r0));
    goto loc_802162A4;
}

loc_80216288:
{
    r0 = MemoryInline::FlatRead8((r31 + 2136));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r31 + 2136), static_cast<uint8_t>(r0));
    goto loc_802162A4;
}

loc_80216298:
{
    r0 = MemoryInline::FlatRead8((r31 + 2136));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r31 + 2136), static_cast<uint8_t>(r0));
}

loc_802162A4:
{
    r0 = MemoryInline::FlatRead32((r31 + 2132));
}

loc_802162AC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80216320;
    }
}

loc_802162B0:
{
    r0 = MemoryInline::FlatRead8((r31 + 112));
    r30 = (r31 + 20);
    r29 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_802162C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802162D4;
    }
}

loc_802162C4:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80215CBCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_802162DC;
}

loc_802162D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_802162DC:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r7 = MemoryInline::FlatRead32(r30);
    r9 = (r0 & ~r29);
    r8 = (r29 & ~r0);
    r6 = (r0 & 983040);
    r5 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r9 & 983040);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r8 & 983040);
    r6 = (r7 | r6);
    r4 = (r5 | r4);
    MemoryInline::FlatWrite32((r31 + 12), r9);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r31 + 16), r8);
    MemoryInline::FlatWrite32(r30, r6);
    MemoryInline::FlatWrite32((r30 + 4), r4);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_80216320:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 2184), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 2184));
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 2232), 0, 49u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r31 + 2232), f0.d);
    r4 = r31;
    r3 = (r1 + 56);
    r30 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 2188));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 2236), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 2192));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 2240), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 2196));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 2244), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 2200));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 2248), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 2204));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 2252), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 2208));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 2256), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 2212));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 2260), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 2216));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 2264), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 2220));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 2268), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 2224));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 2272), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 2228));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 2276), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 48u, (r31 + 2280), static_cast<uint8_t>(r0));
    // inline leaf 0x802161F8 (9 guest instruction(s))
}

loc_inl0_0x802161F8:
{
    r4 = (r4 + 20);
}

loc_inl0_0x80216200:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
}

loc_inl0_cont_802161F8:
{
    // end of inlined leaf 0x802161F8
    r0 = 3;
    r5 = r31;
    r6 = (r1 + 56);
    r8 = 0;
    r3 = 1;
    ctr = r0;
}

loc_802163B0:
{
    f2.d = MemoryInline::FlatReadFloat32(r6);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 2140));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2300));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802163C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80216400;
    }
}

loc_802163C8:
{
    r4 = MemoryInline::FlatRead32((r5 + 2288));
    r7 = MemoryInline::FlatRead32((r31 + 2284));
    r0 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_802163D8:
{
    MemoryInline::FlatWrite32((r5 + 2288), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80216414;
    }
}

loc_802163E0:
{
    MemoryInline::FlatWrite32((r5 + 2288), r7);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r4 = MemoryInline::FlatRead8((r31 + 2280));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r31 + 2280), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32(r6);
    MemoryInline::FlatWriteFloat32((r5 + 2304), f0.d);
    goto loc_80216414;
}

loc_80216400:
{
    r4 = MemoryInline::FlatRead8((r31 + 2280));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite8((r31 + 2280), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r5 + 2288), r30);
}

loc_80216414:
{
    r5 = (r5 + 4);
    r6 = (r6 + 4);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802163B0;
    }
}

loc_80216424:
{
    r3 = r31;
    r4 = (r31 + 2184);
    r5 = 1;
    ctx->lr = 0x80216434u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80215EA4u>(ctx);
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
    r0 = MemoryInline::FlatRead8((r31 + 2168));
}

loc_8021643C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802164BC;
    }
}

loc_80216440:
{
    r0 = MemoryInline::FlatRead8((r31 + 2177));
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r31 + 2164));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80216468;
    }
}

loc_80216458:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C0EC4u>(ctx);
    goto loc_80216474;
}

loc_80216468:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C0EC4u>(ctx);
}

loc_80216474:
{
    r3 = MemoryInline::FlatRead8((r31 + 2177));
}

loc_8021647C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80216490;
    }
}

loc_80216480:
{
    r3 = MemoryInline::FlatRead8((r31 + 2176));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 2177), static_cast<uint8_t>(r0));
    goto loc_80216498;
}

loc_80216490:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 2177), static_cast<uint8_t>(r0));
}

loc_80216498:
{
    r0 = MemoryInline::FlatRead32((r31 + 2172));
    r0_addic_src_1 = r0;
    r0 = (r0_addic_src_1 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_1)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_802164A0:
{
    MemoryInline::FlatWrite32((r31 + 2172), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802164BC;
    }
}

loc_802164A8:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C0EC4u>(ctx);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2168), static_cast<uint8_t>(r0));
}

loc_802164BC:
{
    r3 = MemoryInline::FlatRead32((r31 + 2180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802164C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802164CC;
    }
}

loc_802164C8:
{
    ctx->lr = 0x802164CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80217600u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802164CC:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r29 = 1;
}

loc_802164D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802164E0;
    }
}

loc_802164DC:
{
    r29 = 0;
}

loc_802164E0:
{
}

loc_802164E4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80216534;
    }
}

loc_802164E8:
{
    r4 = r31;
    r3 = (r1 + 32);
    // inline leaf 0x802161F8 (9 guest instruction(s))
}

loc_inl1_0x802161F8:
{
    r4 = (r4 + 20);
}

loc_inl1_0x80216200:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
}

loc_inl1_cont_802161F8:
{
    // end of inlined leaf 0x802161F8
    r3 = (r1 + 44);
    r4 = (r31 + 2140);
    r5 = (r1 + 32);
    // inline leaf 0x802165EC (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x802165EC
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25776));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021652C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80216534;
    }
}

loc_80216530:
{
    r29 = 0;
}

loc_80216534:
{
}

loc_80216538:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8021657C;
    }
}

loc_8021653C:
{
    r4 = r31;
    r3 = (r1 + 16);
    // inline leaf 0x80215E7C (5 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 52));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x80215E7C
    r3 = (r1 + 24);
    r4 = (r31 + 2152);
    r5 = (r1 + 16);
    // inline leaf 0x802165C8 (9 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x802165C8
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25772));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80216574:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021657C;
    }
}

loc_80216578:
{
    r29 = 0;
}

loc_8021657C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80216580:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802165A4;
    }
}

loc_80216584:
{
    r3 = 196608;
    r4 = MemoryInline::FlatRead32((r31 + 2160));
    r0 = (r3 + 19392);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80216594:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802165AC;
    }
}

loc_80216598:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 2160), r0);
    goto loc_802165AC;
}

loc_802165A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 2160), r0);
}

loc_802165AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
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
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00023FF gpr_write=0xE00003FB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021621C func_8021621C preserves=true fpr_mask=0x00000000
