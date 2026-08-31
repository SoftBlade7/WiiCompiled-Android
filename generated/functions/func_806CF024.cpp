#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CF024(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CF024;

loc_806CF024:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_806CF030:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CF05C;
    }
}

loc_806CF048:
{
}

loc_806CF04C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806CF064;
    }
}

loc_806CF050:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(5));
}

loc_806CF054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CF0F0;
    }
}

loc_806CF058:
{
    goto loc_806CF17C;
}

loc_806CF05C:
{
    r3 = r31;
    goto loc_806CF180;
}

loc_806CF064:
{
    r0 = MemoryInline::FlatRead8((r3 + 338));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CF06C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CF0E8;
    }
}

loc_806CF070:
{
    r3 = r4;
    r4 = 0;
    ctx->lr = 0x806CF07Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80590478u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 268));
    r0 = 1;
    f3.d = MemoryInline::FlatReadFloat32((r30 + 272));
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 276));
    r4 = 0x808C0000u;
    MemoryInline::FlatWrite8((r30 + 338), static_cast<uint8_t>(r0));
    r3 = 0x808A0000u;
    r6 = 0x808A0000u;
    r0 = 1127219200;
    MemoryInline::FlatWrite16((r30 + 340), static_cast<uint16_t>(r5));
    r5 = 0x808C0000u;
    f2.d = MemoryInline::FlatReadFloat32((r6 + -720));
    MemoryInline::FlatWriteFloat32((r30 + 344), f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r3 + -736));
    MemoryInline::FlatWriteFloat32((r30 + 348), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 352), f0.d);
    r3 = MemoryInline::FlatRead32((r4 + 19040));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 19044));
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 360), f0.d);
}

loc_806CF0E8:
{
    r3 = r31;
    goto loc_806CF180;
}

loc_806CF0F0:
{
    r0 = MemoryInline::FlatRead8((r3 + 338));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CF0F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CF174;
    }
}

loc_806CF0FC:
{
    r3 = r4;
    r4 = 0;
    ctx->lr = 0x806CF108u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80590478u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 268));
    r0 = 1;
    f3.d = MemoryInline::FlatReadFloat32((r30 + 272));
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 276));
    r4 = 0x808C0000u;
    MemoryInline::FlatWrite8((r30 + 338), static_cast<uint8_t>(r0));
    r3 = 0x808A0000u;
    r6 = 0x808A0000u;
    r0 = 1127219200;
    MemoryInline::FlatWrite16((r30 + 340), static_cast<uint16_t>(r5));
    r5 = 0x808C0000u;
    f2.d = MemoryInline::FlatReadFloat32((r6 + -720));
    MemoryInline::FlatWriteFloat32((r30 + 344), f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r3 + -736));
    MemoryInline::FlatWriteFloat32((r30 + 348), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 352), f0.d);
    r3 = MemoryInline::FlatRead32((r4 + 19040));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 19044));
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 360), f0.d);
}

loc_806CF174:
{
    r3 = r31;
    goto loc_806CF180;
}

loc_806CF17C:
{
    r3 = r31;
}

loc_806CF180:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806CF024 func_806CF024 preserves=true fpr_mask=0x00000000
