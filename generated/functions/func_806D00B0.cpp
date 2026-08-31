#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D00B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806D00B0;

loc_806D00B0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 326), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r3 + 32));
    r5 = MemoryInline::FlatRead16((r4 + 72));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_806D00C4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806D00D4;
    }
}

loc_806D00C8:
{
    r6 = MemoryInline::FlatRead16((r4 + 70));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
}

loc_806D00D0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_806D00FC;
    }
}

loc_806D00D4:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 52));
    r4 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 328));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 19036));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806D00EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_806D00F0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 326), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_806D00FC:
{
    r4 = MemoryInline::FlatRead16((r3 + 336));
    r0 = (r4 + -1);
}

loc_806D0108:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r5))) {
        goto loc_806D0114;
    }
}

loc_806D010C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r6));
}

loc_806D0110:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806D0114:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 52));
    r4 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 332));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 19036));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806D012C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_806D0130:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 326), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806D00B0 func_806D00B0 preserves=true fpr_mask=0x00000000
