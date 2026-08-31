#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80196398(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80196398;

loc_80196398:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801963C8;
    }
}

loc_801963BC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r0));
    goto loc_8019694C;
}

loc_801963C8:
{
    f4.d = MemoryInline::FlatReadFloat32((r3 + 176));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1172));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 180));
    f3.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1176));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    r0 = MemoryInline::FlatRead8((r3 + 94));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196430;
    }
}

loc_80196404:
{
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32((r3 + 52), r4);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r4 = MemoryInline::FlatRead32((r13 + -25560));
    r0 = MemoryInline::FlatRead32((r13 + -25556));
    MemoryInline::FlatWrite32((r3 + 60), r4);
    MemoryInline::FlatWrite32((r3 + 64), r0);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    goto loc_801965F8;
}

loc_80196430:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 1324));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
}

loc_80196464:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019652C;
    }
}

loc_80196468:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 140));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80196470:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196480;
    }
}

loc_80196478:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    goto loc_8019648C;
}

loc_80196480:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f4.d = PpcFmulsInline(f4.d, f4.d);
    f4.d = PpcFmulsInline(f4.d, f4.d);
}

loc_8019648C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 144));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f3.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 64), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r30 + 52), r3);
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    MemoryInline::FlatWrite32((r30 + 56), r0);
    goto loc_801965F8;
}

loc_8019652C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 140));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80196534:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801965E0;
    }
}

loc_80196538:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 144));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f3.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 64), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r30 + 52), r3);
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    MemoryInline::FlatWrite32((r30 + 56), r0);
    goto loc_801965F8;
}

loc_801965E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -25560));
    r0 = MemoryInline::FlatRead32((r13 + -25556));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWrite32((r30 + 60), r3);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
}

loc_801965F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1296));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 1168));
    r0 = MemoryInline::FlatRead8((r30 + 94));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196624;
    }
}

loc_80196610:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteFloat32((r30 + 72), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    goto loc_80196714;
}

loc_80196624:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80196634:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80196640;
    }
}

loc_80196638:
{
    f3.d = (-(f4.d));
    goto loc_80196644;
}

loc_80196640:
{
    f3.d = f4.d;
}

loc_80196644:
{
    r0 = MemoryInline::FlatRead32((r30 + 1328));
}

loc_8019664C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801966B4;
    }
}

loc_80196650:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 148));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80196658:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196668;
    }
}

loc_80196660:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    goto loc_80196674;
}

loc_80196668:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
}

loc_80196674:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 152));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = PpcFmulsInline(f3.d, f4.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80196688:
{
    MemoryInline::FlatWriteFloat32((r30 + 76), f1.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019669C;
    }
}

loc_80196690:
{
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    goto loc_801966A0;
}

loc_8019669C:
{
    MemoryInline::FlatWriteFloat32((r30 + 80), f1.d);
}

loc_801966A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    goto loc_80196714;
}

loc_801966B4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 148));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_801966BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80196708;
    }
}

loc_801966C0:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 152));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801966DC:
{
    MemoryInline::FlatWriteFloat32((r30 + 76), f1.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801966F0;
    }
}

loc_801966E4:
{
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    goto loc_801966F4;
}

loc_801966F0:
{
    MemoryInline::FlatWriteFloat32((r30 + 80), f1.d);
}

loc_801966F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    goto loc_80196714;
}

loc_80196708:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80196714:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 94), 0, 1086u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1082u, (r30 + 1176));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 86u, (r30 + 180));
    f1.d = (-(f2.d));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 94));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1078u, (r30 + 1172));
    f3.d = PpcFmulsInline(f2.d, f0.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 82u, (r30 + 176));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 150u, (r30 + 244));
    f2.d = PpcFmulsInline(f1.d, f4.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 162u, (r30 + 256));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 154u, (r30 + 248));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 166u, (r30 + 260));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f8.d = MemoryInline::FlatReadFloat32((r2 + -26524));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 78u, (r30 + 172));
    f7.d = PpcFmulsInline(f8.d, f7.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 74u, (r30 + 168));
    f5.d = PpcFmulsInline(f8.d, f6.d);
    f9.d = PpcFmulsInline(f3.d, f7.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 90u, (r30 + 184));
    f7.d = PpcFmulsInline(f2.d, f7.d);
    f0.d = PpcFmulsInline(f3.d, f5.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 94u, (r30 + 188));
    f8.d = PpcFmulsInline(f2.d, f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 98u, (r30 + 192));
    f2.d = (-(f4.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f0.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f8.d));
    f0.d = (-(f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f7.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f8.d));
    f6.d = PpcFmulsInline(f5.d, f6.d);
    f5.d = PpcFmulsInline(f5.d, f3.d);
    f3.d = PpcFmulsInline(f2.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f6.d);
    f2.d = PpcFmulsInline(f1.d, f5.d);
    f1.d = PpcFmulsInline(f0.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f5.d);
    f0.d = PpcFmulsInline(f4.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196808;
    }
}

loc_801967DC:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32((r30 + 32), r3);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWrite32((r30 + 36), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25560));
    r0 = MemoryInline::FlatRead32((r13 + -25556));
    MemoryInline::FlatWrite32((r30 + 40), r3);
    MemoryInline::FlatWrite32((r30 + 44), r0);
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    goto loc_80196948;
}

loc_80196808:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 1320));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
}

loc_8019683C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801968C0;
    }
}

loc_80196840:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 132));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80196848:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196858;
    }
}

loc_80196850:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    goto loc_80196864;
}

loc_80196858:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f0.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
}

loc_80196864:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f3.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 48), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    goto loc_80196948;
}

loc_801968C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 132));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_801968C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80196930;
    }
}

loc_801968CC:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f3.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f3.d);
    f0.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 48), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    goto loc_80196948;
}

loc_80196930:
{
    r3 = MemoryInline::FlatRead32((r13 + -25560));
    r0 = MemoryInline::FlatRead32((r13 + -25556));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWrite32((r30 + 40), r3);
    MemoryInline::FlatWrite32((r30 + 44), r0);
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
}

loc_80196948:
{
    MemoryInline::FlatWrite8((r30 + 94), static_cast<uint8_t>(r31));
}

loc_8019694C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0003FFF gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80196398 func_80196398 preserves=true fpr_mask=0x00000000
