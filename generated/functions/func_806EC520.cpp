#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EC520(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806EC520;

loc_806EC520:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = MemoryInline::FlatRead32((r3 + 188));
}

loc_806EC52C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(10))) {
        goto loc_806EC540;
    }
}

loc_806EC530:
{
    r0 = MemoryInline::FlatRead8((r3 + 1024));
}

loc_806EC538:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806EC540;
    }
}

loc_806EC53C:
{
    MemoryInline::FlatWrite32((r3 + 1028), r4);
}

loc_806EC540:
{
    r7 = MemoryInline::FlatRead32((r3 + 1028));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(-1));
}

loc_806EC548:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EC590;
    }
}

loc_806EC54C:
{
    r4 = MemoryInline::FlatRead32((r3 + 188));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r5 = 0x808A0000u;
    r4 = 0x808C0000u;
    f3.d = MemoryInline::FlatReadFloat64((r5 + 2592));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 29992));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1040));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 944));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 944), f0.d);
    goto loc_806EC5E0;
}

loc_806EC590:
{
    r4 = MemoryInline::FlatRead32((r3 + 188));
    r0 = 1127219200;
    r5 = 0x808A0000u;
    r6 = 0x808A0000u;
    r4 = (r4 - r7);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 2592));
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f4.d = MemoryInline::FlatReadFloat32((r6 + 2580));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 1040));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 29992));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 944));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 944), f0.d);
}

loc_806EC5E0:
{
    r1 = (r1 + 16);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000DB gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000010 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806EC520 func_806EC520 preserves=true fpr_mask=0x00000000
