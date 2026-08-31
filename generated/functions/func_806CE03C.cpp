#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CE03C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CE03C;

loc_806CE03C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead16((r4 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 14));
}

loc_806CE064:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_806CE0C8;
    }
}

loc_806CE068:
{
    r4 = MemoryInline::FlatRead8((r3 + 357));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 357), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_806CE07C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_806CE0B4;
    }
}

loc_806CE080:
{
    r4 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 340));
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::FlatRead32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CE09C:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CE0A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CE158;
    }
}

loc_806CE0A8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 278), static_cast<uint8_t>(r0));
    goto loc_806CE158;
}

loc_806CE0B4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806CE0B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CE158;
    }
}

loc_806CE0BC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 278), static_cast<uint8_t>(r0));
    goto loc_806CE158;
}

loc_806CE0C8:
{
}

loc_806CE0CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_806CE134;
    }
}

loc_806CE0D0:
{
    r4 = MemoryInline::FlatRead16((r4 + 12));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r4 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + -864));
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + -964));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 424), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::FlatRead32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CE118:
{
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CE120:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CE158;
    }
}

loc_806CE124:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 278), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 420), static_cast<uint8_t>(r0));
    goto loc_806CE158;
}

loc_806CE134:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_806CE138:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CE158;
    }
}

loc_806CE13C:
{
    r0 = MemoryInline::FlatRead8((r3 + 357));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806CE144:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806CE158;
    }
}

loc_806CE148:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 278), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 428), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CC43Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_806CE158:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806CE03C func_806CE03C preserves=true fpr_mask=0x00000000
