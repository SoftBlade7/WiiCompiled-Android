#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001B1E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfdx_8001B3EC_loc_0 = 0;
    uint32_t addr_lfdx_8001B3F8_loc_0 = 0;
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

    goto loc_8001B1E8;

loc_8001B1E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r5 = 0x80240000u;
    r0 = 1141899264;
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r5 = (r5 + 28432);
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r6 & 2147483647);
}

loc_8001B208:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8001B228;
    }
}

loc_8001B20C:
{
    r0 = 1071382528;
}

loc_8001B214:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8001B2AC;
    }
}

loc_8001B218:
{
    r0 = 1042284544;
}

loc_8001B220:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8001B2A4;
    }
}

loc_8001B224:
{
    goto loc_8001B28C;
}

loc_8001B228:
{
    r0 = 2146435072;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8001B230:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001B23C;
    }
}

loc_8001B234:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001B248;
    }
}

loc_8001B238:
{
    goto loc_8001B250;
}

loc_8001B23C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001B244:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001B250;
    }
}

loc_8001B248:
{
    f1.d = (f1.d + f1.d);
    goto loc_8001B410;
}

loc_8001B250:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8001B254:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001B270;
    }
}

loc_8001B258:
{
    r4 = (r5 + 0);
    r3 = (r5 + 32);
    f1.d = MemoryInline::FlatReadFloat64((r4 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r3 + 24));
    f1.d = (f1.d + f0.d);
    goto loc_8001B410;
}

loc_8001B270:
{
    r4 = (r5 + 0);
    r3 = (r5 + 32);
    f1.d = MemoryInline::FlatReadFloat64((r4 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r3 + 24));
    f1.d = (-(f1.d));
    f1.d = (f1.d - f0.d);
    goto loc_8001B410;
}

loc_8001B28C:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31336));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31328));
    f2.d = (f2.d + f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8001B29C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001B2A4;
    }
}

loc_8001B2A0:
{
    goto loc_8001B410;
}

loc_8001B2A4:
{
    r0 = -1;
    goto loc_8001B33C;
}

loc_8001B2AC:
{
    r0 = 1072889856;
    f3.d = std::fabs(f1.d);
}

loc_8001B2B8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8001B300;
    }
}

loc_8001B2BC:
{
    r0 = 1072037888;
}

loc_8001B2C4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8001B2E8;
    }
}

loc_8001B2C8:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31320));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31328));
    f2.d = (f0.d * f3.d);
    f0.d = (f0.d + f3.d);
    f1.d = (f2.d - f1.d);
    f1.d = (f1.d / f0.d);
    goto loc_8001B33C;
}

loc_8001B2E8:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31328));
    r0 = 1;
    f1.d = (f3.d - f0.d);
    f0.d = (f0.d + f3.d);
    f1.d = (f1.d / f0.d);
    goto loc_8001B33C;
}

loc_8001B300:
{
    r3 = 1074003968;
    r0 = (r3 + -32768);
}

loc_8001B30C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8001B330;
    }
}

loc_8001B310:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31312));
    r0 = 2;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31328));
    f1.d = (f2.d * f3.d);
    f2.d = (f3.d - f2.d);
    f0.d = (f0.d + f1.d);
    f1.d = (f2.d / f0.d);
    goto loc_8001B33C;
}

loc_8001B330:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31304));
    r0 = 3;
    f1.d = (f0.d / f3.d);
}

loc_8001B33C:
{
    f0.d = (f1.d * f1.d);
    r3 = (r5 + 64);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 80u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r3 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001B34C:
{
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r3 + 72));
    f11.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r3 + 64));
    f13.d = (f0.d * f0.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r3 + 56));
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r3 + 48));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r3 + 40));
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r3 + 32));
    f12.d = (f13.d * f3.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r3 + 24));
    f6.d = (f13.d * f2.d);
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r3 + 16));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r3 + 8));
    f11.d = (f11.d + f12.d);
    f7.d = MemoryInline::FlatReadFloat64((r5 + 64));
    f5.d = (f5.d + f6.d);
    f6.d = (f13.d * f11.d);
    f5.d = (f13.d * f5.d);
    f6.d = (f10.d + f6.d);
    f4.d = (f4.d + f5.d);
    f5.d = (f13.d * f6.d);
    f4.d = (f13.d * f4.d);
    f5.d = (f9.d + f5.d);
    f3.d = (f3.d + f4.d);
    f4.d = (f13.d * f5.d);
    f3.d = (f13.d * f3.d);
    f4.d = (f8.d + f4.d);
    f2.d = (f2.d + f3.d);
    f3.d = (f13.d * f4.d);
    f4.d = (f13.d * f2.d);
    f2.d = (f7.d + f3.d);
    f0.d = (f0.d * f2.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001B3DC;
    }
}

loc_8001B3CC:
{
    f0.d = (f0.d + f4.d);
    f0.d = (f1.d * f0.d);
    f1.d = (f1.d - f0.d);
    goto loc_8001B410;
}

loc_8001B3DC:
{
    f0.d = (f0.d + f4.d);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r5 + 32);
    r4 = (r5 + 0);
    addr_lfdx_8001B3EC_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat64(addr_lfdx_8001B3EC_loc_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8001B3F4:
{
    f3.d = (f1.d * f0.d);
    addr_lfdx_8001B3F8_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_8001B3F8_loc_0);
    f2.d = (f3.d - f2.d);
    f1.d = (f2.d - f1.d);
    f1.d = (f0.d - f1.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001B410;
    }
}

loc_8001B40C:
{
    f1.d = (-(f1.d));
}

loc_8001B410:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8001B1E8 func_8001B1E8 preserves=true fpr_mask=0x00000000
