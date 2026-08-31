#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80191958(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80191A54_loc_0 = 0;
    uint32_t addr_lfsx_80191B8C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;

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

    goto loc_80191958;

loc_80191958:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x80250000u;
    r31 = (r31 + 11288);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r6 + 24));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = (r4 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80191994:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801919CC;
    }
}

loc_80191998:
{
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 48), r4);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r4 = MemoryInline::FlatRead32((r6 + 28));
    r0 = (r4 + -2147483648);
}

loc_801919B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80191AE8;
    }
}

loc_801919B8:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r0 = MemoryInline::FlatRead32((r6 + 32));
    MemoryInline::FlatWrite32((r3 + 52), r0);
    goto loc_80191AE8;
}

loc_801919CC:
{
    r5 = MemoryInline::FlatRead8((r3 + 14));
    r3 = MemoryInline::FlatRead32((r6 + 40));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801919E0;
    }
}

loc_801919D8:
{
    r4 = 0;
    goto loc_80191A90;
}

loc_801919E0:
{
    r0 = (r3 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_801919E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80191A2C;
    }
}

loc_801919EC:
{
    r0 = (r4 ^ -2147483648);
    f3.d = MemoryInline::FlatReadFloat64((r31 + 24));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat64(r31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x80191A10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r4 = fctiwzword0;
    goto loc_80191A90;
}

loc_80191A2C:
{
    r0 = (r3 ^ -2147483648);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 0x80290000u;
    f4.d = MemoryInline::FlatReadFloat64((r31 + 24));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r3 = (r3 + -8296);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    addr_lfsx_80191A54_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_80191A54_loc_0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat64(r31);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x80191A78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r4 = fctiwzword1;
}

loc_80191A90:
{
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r3 = (r3 + r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80191ACC;
    }
}

loc_80191AA8:
{
    r0 = 6553600;
    r4 = 0;
    r3 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    MemoryInline::FlatWrite32((r30 + 56), r4);
    r0 = -62914560;
    MemoryInline::FlatWrite32((r30 + 52), r0);
    MemoryInline::FlatWrite32((r30 + 48), r4);
    MemoryInline::FlatWrite32((r30 + 60), r3);
    goto loc_80191AE8;
}

loc_80191ACC:
{
    r4 = 0;
    r3 = 6553600;
    r0 = -62914560;
    MemoryInline::FlatWrite32((r30 + 56), r4);
    MemoryInline::FlatWrite32((r30 + 60), r3);
    MemoryInline::FlatWrite32((r30 + 52), r0);
    MemoryInline::FlatWrite32((r30 + 48), r4);
}

loc_80191AE8:
{
    r0 = MemoryInline::FlatRead32((r30 + 48));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80191AF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80191BF8;
    }
}

loc_80191AF4:
{
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r5 = MemoryInline::FlatRead8((r30 + 13));
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    r0 = (r3 + -2147483648);
}

loc_80191B0C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80191B18;
    }
}

loc_80191B10:
{
    r4 = 0;
    goto loc_80191BC8;
}

loc_80191B18:
{
    r0 = (r4 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80191B20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80191B64;
    }
}

loc_80191B24:
{
    r0 = (r3 ^ -2147483648);
    f3.d = MemoryInline::FlatReadFloat64((r31 + 24));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat64(r31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x80191B48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword2;
    goto loc_80191BC8;
}

loc_80191B64:
{
    r0 = (r4 ^ -2147483648);
    r4 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80290000u;
    f4.d = MemoryInline::FlatReadFloat64((r31 + 24));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1020);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r3 = (r3 + -8296);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    addr_lfsx_80191B8C_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_80191B8C_loc_0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat64(r31);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x80191BB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword3;
}

loc_80191BC8:
{
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r3 = (r3 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80191BF0;
    }
}

loc_80191BE0:
{
    r0 = -62914560;
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_80191BF8;
}

loc_80191BF0:
{
    r0 = -62914560;
    MemoryInline::FlatWrite32((r30 + 64), r0);
}

loc_80191BF8:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWrite32((r30 + 68), r0);
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32((r30 + 72), r0);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0xC0003FFF gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80191958 func_80191958 preserves=true fpr_mask=0x00000000
