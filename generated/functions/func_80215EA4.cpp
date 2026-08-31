#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80215EA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
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
    PPC_FPR f13 = ctx->fpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80215EA4;

loc_80215EA4:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80215EB0:
{
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    MemoryInline::FlatWriteRam32((r1 + 204), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 200), r30);
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80215ED8;
    }
}

loc_80215EC8:
{
    r0 = MemoryInline::FlatRead8((r3 + 2280));
    r0 = (r0 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_80215ED4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802161B8;
    }
}

loc_80215ED8:
{
    r4 = r30;
    r3 = (r1 + 80);
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
    r3 = (r1 + 188);
    r4 = (r1 + 80);
    // inline leaf 0x802161D0 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x802161D0
    r5 = MemoryInline::FlatRead32((r1 + 188));
    r3 = (r1 + 176);
    r4 = MemoryInline::FlatRead32((r1 + 192));
    r0 = MemoryInline::FlatRead32((r1 + 196));
    MemoryInline::FlatWriteRam32((r1 + 176), r5);
    MemoryInline::FlatWriteRam32((r1 + 180), r4);
    MemoryInline::FlatWriteRam32((r1 + 184), r0);
    ctx->lr = 0x80215F10u;
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
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f5.d = MemoryInline::FlatReadFloat32((r2 + -25792));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25784));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 140), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r1 + 164), f5.d);
    f4.d = MemoryInline::FlatReadFloat32((r2 + -25780));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r1 + 168), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r1 + 172), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 152), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 156), f5.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r1 + 160), f5.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 2232), 0, 44u, true, false);
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r30 + 2272));
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 2240));
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 2256));
    f3.d = PpcFmulsInline(f4.d, f13.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 2232));
    f2.d = PpcFmulsInline(f5.d, f11.d);
    f1.d = PpcFmulsInline(f5.d, f12.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 2248));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 2264));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 2236));
    f0.d = PpcFmulsInline(f0.d, f13.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 2252));
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r30 + 2268));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 140), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 144), f7.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80215F80:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 140u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 136u, (r1 + 148), f8.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 116u, (r1 + 128), f9.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 28), f10.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f12.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 104u, (r1 + 116), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 108u, (r1 + 120), f12.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 112u, (r1 + 124), f13.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, (r1 + 104), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 96u, (r1 + 108), f5.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 100u, (r1 + 112), f4.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, (r1 + 92), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 84u, (r1 + 96), f5.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r1 + 100), f5.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80215FC4;
    }
}

loc_80215FB8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f4.d);
}

loc_80215FC4:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 72u, true, false);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r1 + 92));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 48u, (r1 + 140));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 60u, (r1 + 152));
    f5.d = PpcFmulsInline(f6.d, f1.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r1 + 96));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 52u, (r1 + 144));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 64u, (r1 + 156));
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r1 + 100));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 56u, (r1 + 148));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 68u, (r1 + 160));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f7.d = PpcFmulsInline(f9.d, f8.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f2.d, f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80216014:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80216024;
    }
}

loc_80216018:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f9.d);
}

loc_80216024:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 176));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 184));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25792));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_80216058:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80216060;
    }
}

loc_8021605C:
{
    goto loc_80216064;
}

loc_80216060:
{
    f5.d = (-(f5.d));
}

loc_80216064:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 176));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 184));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25792));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80216098:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802160A0;
    }
}

loc_8021609C:
{
    goto loc_802160A4;
}

loc_802160A0:
{
    f1.d = (-(f1.d));
}

loc_802160A4:
{
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_802160A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80216110;
    }
}

loc_802160AC:
{
    r3 = (r1 + 68);
    r4 = (r1 + 176);
    r5 = (r1 + 164);
    // inline leaf 0x80214968 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80214968
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    r3 = (r1 + 152);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
    ctx->lr = 0x802160DCu;
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
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 56);
    r4 = (r1 + 152);
    r5 = (r1 + 176);
    // inline leaf 0x80214968 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80214968
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r3 = (r1 + 164);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f0.d);
    ctx->lr = 0x8021610Cu;
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
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_80216170;
}

loc_80216110:
{
    r3 = (r1 + 44);
    r4 = (r1 + 152);
    r5 = (r1 + 176);
    // inline leaf 0x80214968 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80214968
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r3 = (r1 + 164);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f0.d);
    ctx->lr = 0x80216140u;
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
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 32);
    r4 = (r1 + 176);
    r5 = (r1 + 164);
    // inline leaf 0x80214968 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80214968
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 152);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
    ctx->lr = 0x80216170u;
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
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80216170:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 152), 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, (r1 + 152));
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r31, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 4u, (r1 + 156));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 8u, (r1 + 160));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 24u, (r1 + 176));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 28u, (r1 + 180));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 32u, (r1 + 184));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 12u, (r1 + 164));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 16u, (r1 + 168));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 20u, (r1 + 172));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 40), f0.d);
}

loc_802161B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 212));
    r31 = MemoryInline::FlatRead32((r1 + 204));
    r30 = MemoryInline::FlatRead32((r1 + 200));
    ctx->lr = r0;
    r1 = (r1 + 208);
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003F gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80215EA4 func_80215EA4 preserves=true fpr_mask=0x00000000
