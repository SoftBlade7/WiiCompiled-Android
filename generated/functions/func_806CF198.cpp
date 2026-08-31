#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CF198(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CF198;

loc_806CF198:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
}

loc_806CF1A4:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806CF1CC;
    }
}

loc_806CF1B0:
{
}

loc_806CF1B4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_806CF240;
    }
}

loc_806CF1B8:
{
}

loc_806CF1BC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_806CF2B4;
    }
}

loc_806CF1C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_806CF1C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CF328;
    }
}

loc_806CF1C8:
{
    goto loc_806CF398;
}

loc_806CF1CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 338));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CF1D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CF398;
    }
}

loc_806CF1D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 268));
    r4 = 1;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 272));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    r6 = 0x808C0000u;
    MemoryInline::FlatWrite8((r3 + 338), static_cast<uint8_t>(r4));
    r8 = 0x808A0000u;
    r7 = 0x808C0000u;
    f2.d = MemoryInline::FlatReadFloat32((r8 + -720));
    MemoryInline::FlatWrite16((r3 + 340), static_cast<uint16_t>(r0));
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteFloat32((r3 + 344), f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r4 + -736));
    MemoryInline::FlatWriteFloat32((r3 + 348), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 352), f0.d);
    r0 = MemoryInline::FlatRead32((r6 + 19040));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 19044));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 360), f0.d);
    goto loc_806CF398;
}

loc_806CF240:
{
    r0 = MemoryInline::FlatRead8((r3 + 338));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CF248:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CF398;
    }
}

loc_806CF24C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 268));
    r4 = 1;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 272));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    r6 = 0x808C0000u;
    MemoryInline::FlatWrite8((r3 + 338), static_cast<uint8_t>(r4));
    r8 = 0x808A0000u;
    r7 = 0x808C0000u;
    f2.d = MemoryInline::FlatReadFloat32((r8 + -720));
    MemoryInline::FlatWrite16((r3 + 340), static_cast<uint16_t>(r0));
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteFloat32((r3 + 344), f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r4 + -736));
    MemoryInline::FlatWriteFloat32((r3 + 348), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 352), f0.d);
    r0 = MemoryInline::FlatRead32((r6 + 19040));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 19044));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 360), f0.d);
    goto loc_806CF398;
}

loc_806CF2B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 338));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CF2BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CF398;
    }
}

loc_806CF2C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 268));
    r4 = 1;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 272));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    r6 = 0x808C0000u;
    MemoryInline::FlatWrite8((r3 + 338), static_cast<uint8_t>(r4));
    r8 = 0x808A0000u;
    r7 = 0x808C0000u;
    f2.d = MemoryInline::FlatReadFloat32((r8 + -720));
    MemoryInline::FlatWrite16((r3 + 340), static_cast<uint16_t>(r0));
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteFloat32((r3 + 344), f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r4 + -736));
    MemoryInline::FlatWriteFloat32((r3 + 348), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 352), f0.d);
    r0 = MemoryInline::FlatRead32((r6 + 19040));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 19044));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 360), f0.d);
    goto loc_806CF398;
}

loc_806CF328:
{
    r0 = MemoryInline::FlatRead8((r3 + 338));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CF330:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CF398;
    }
}

loc_806CF334:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 268));
    r4 = 1;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 272));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    r6 = 0x808C0000u;
    MemoryInline::FlatWrite8((r3 + 338), static_cast<uint8_t>(r4));
    r8 = 0x808A0000u;
    r7 = 0x808C0000u;
    f2.d = MemoryInline::FlatReadFloat32((r8 + -720));
    MemoryInline::FlatWrite16((r3 + 340), static_cast<uint16_t>(r0));
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteFloat32((r3 + 344), f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r4 + -736));
    MemoryInline::FlatWriteFloat32((r3 + 348), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 352), f0.d);
    r0 = MemoryInline::FlatRead32((r6 + 19040));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 19044));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 360), f0.d);
}

loc_806CF398:
{
    r3 = r5;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001DB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806CF198 func_806CF198 preserves=true fpr_mask=0x00000000
