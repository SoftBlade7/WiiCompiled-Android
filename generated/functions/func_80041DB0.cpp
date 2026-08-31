#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80041DB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_80041DB0;

loc_80041DB0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    r6 = MemoryInline::FlatRead8((r4 + 154));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 68));
}

loc_80041DD4:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80041E10;
    }
}

loc_80041DE8:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 52), r6);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30128));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30144));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
}

loc_80041E10:
{
    r3 = MemoryInline::FlatRead8((r4 + 155));
}

loc_80041E18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80041E48;
    }
}

loc_80041E1C:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -30128));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30144));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
}

loc_80041E48:
{
    r3 = MemoryInline::FlatRead8((r4 + 156));
}

loc_80041E50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80041E80;
    }
}

loc_80041E54:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -30128));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30144));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
}

loc_80041E80:
{
    r3 = MemoryInline::FlatRead32((r4 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80041E88:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30168));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30160));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80041EF0;
    }
}

loc_80041EDC:
{
}

loc_80041EE0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_80041F50;
    }
}

loc_80041EE4:
{
}

loc_80041EE8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_80041FB0;
    }
}

loc_80041EEC:
{
    goto loc_80042010;
}

loc_80041EF0:
{
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_80041EF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80041F08;
    }
}

loc_80041EF8:
{
    f1.d = (-(f5.d));
    r3 = (r1 + 28);
    r4 = (r1 + 24);
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
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80041F08:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = (-(f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30168));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30160));
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r31, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 4), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 12), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 20), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 24), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 36), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 40), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 44), f0.d);
    }
    goto loc_80042100;
}

loc_80041F50:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80041F54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80041F68;
    }
}

loc_80041F58:
{
    f1.d = (-(f4.d));
    r3 = (r1 + 20);
    r4 = (r1 + 16);
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
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80041F68:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = (-(f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30168));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30160));
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r31, f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 4), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 8), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 32), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 40), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 44), f1.d);
    }
    goto loc_80042100;
}

loc_80041FB0:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80041FB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80041FC8;
    }
}

loc_80041FB8:
{
    f1.d = (-(f2.d));
    r3 = (r1 + 12);
    r4 = (r1 + 8);
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
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80041FC8:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = (-(f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30168));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30160));
    guest_range_2 = MemoryInline::ResolveRangeHost(r31, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r31, f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r31 + 4), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r31 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r31 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r31 + 16), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r31 + 20), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r31 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r31 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r31 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r31 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r31 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r31 + 44), f1.d);
    }
    goto loc_80042100;
}

loc_80042010:
{
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_80042014:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80042028;
    }
}

loc_80042018:
{
    f1.d = (-(f5.d));
    r3 = (r1 + 28);
    r4 = (r1 + 24);
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
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80042028:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30168));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80042034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80042048;
    }
}

loc_80042038:
{
    f1.d = (-(f0.d));
    r3 = (r1 + 20);
    r4 = (r1 + 16);
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
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80042048:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30168));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80042054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80042068;
    }
}

loc_80042058:
{
    f1.d = (-(f0.d));
    r3 = (r1 + 12);
    r4 = (r1 + 8);
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
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80042068:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f10.d = (-(f0.d));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = PpcFmulsInline(f8.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f13.d = PpcFmulsInline(f9.d, f0.d);
    f1.d = PpcFmulsInline(f9.d, f6.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f4.d = PpcFmulsInline(f2.d, f6.d);
    f3.d = PpcFmulsInline(f9.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30168));
    f2.d = PpcFmulsInline(f2.d, f5.d);
    f11.d = PpcFmulsInline(f7.d, f9.d);
    guest_range_3 = MemoryInline::ResolveRangeHost(r31, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r31 + 12), f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r31 + 28), f0.d);
    f1.d = PpcFmulsInline(f7.d, f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r31 + 24), f3.d);
    f12.d = PpcFmulsInline(f8.d, f7.d);
    f9.d = PpcFmulsInline(f7.d, f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r31 + 8), f2.d);
    f4.d = PpcFmulsInline(f13.d, f6.d);
    f3.d = PpcFmulsInline(f8.d, f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r31, f1.d);
    f2.d = PpcFmulsInline(f13.d, f5.d);
    f1.d = PpcFmulsInline(f8.d, f6.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r31 + 16), f9.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r31 + 20), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r31 + 4), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r31 + 32), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r31 + 36), f11.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f12.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r31 + 40), f12.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r31 + 44), f0.d);
    }
}

loc_80042100:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0x8000007F gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80041DB0 func_80041DB0 preserves=true fpr_mask=0x00000000
