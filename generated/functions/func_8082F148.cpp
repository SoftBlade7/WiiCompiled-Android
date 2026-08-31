#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082F148(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8082F148;

loc_8082F148:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
    r5 = MemoryInline::FlatRead32((r3 + 212));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_8082F15C:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082F194;
    }
}

loc_8082F164:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 196));
    f3.d = MemoryInline::FlatReadFloat64((r4 + -14040));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 176));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    goto loc_8082F30C;
}

loc_8082F194:
{
    r7 = MemoryInline::FlatRead32((r3 + 204));
    r6 = (r5 + r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r6));
}

loc_8082F1A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082F1E0;
    }
}

loc_8082F1A4:
{
    r0 = (r4 - r5);
    r4 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r4 + -14040));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 176));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 224));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 200));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    goto loc_8082F30C;
}

loc_8082F1E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 216));
    r0 = (r0 + r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8082F1EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082F248;
    }
}

loc_8082F1F0:
{
    r0 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 176));
    r0 = (r4 - r6);
    f5.d = MemoryInline::FlatReadFloat64((r5 + -14040));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 200));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 224));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 196));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = PpcFmulsInline(f4.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    goto loc_8082F30C;
}

loc_8082F248:
{
    r5 = MemoryInline::FlatRead32((r3 + 208));
    r6 = (r5 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r6));
}

loc_8082F254:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082F294;
    }
}

loc_8082F258:
{
    r0 = (r4 - r0);
    r4 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r4 + -14040));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 176));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 228));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 200));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    goto loc_8082F30C;
}

loc_8082F294:
{
    r0 = MemoryInline::FlatRead32((r3 + 220));
    r0 = (r0 + r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8082F2A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082F2FC;
    }
}

loc_8082F2A4:
{
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 176));
    r0 = (r4 - r6);
    f5.d = MemoryInline::FlatReadFloat64((r5 + -14040));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 200));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 228));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 196));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = PpcFmulsInline(f4.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    goto loc_8082F30C;
}

loc_8082F2FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 232));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
}

loc_8082F30C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 236));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000030 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082F148 func_8082F148 preserves=true fpr_mask=0x00000000
