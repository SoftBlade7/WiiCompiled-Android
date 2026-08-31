#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D0880(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806D0880;

loc_806D0880:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 17200));
    r0 = MemoryInline::FlatRead8((r4 + 85));
}

loc_806D0890:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806D08DC;
    }
}

loc_806D0894:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806D089C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D08D0;
    }
}

loc_806D08A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 300));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806D08A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D08B4;
    }
}

loc_806D08AC:
{
    r5 = 32;
    goto loc_806D08D4;
}

loc_806D08B4:
{
    r3 = 0x808A0000u;
    r5 = 10;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -664));
    MemoryInline::FlatWriteFloat32((r7 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 4), f0.d);
    MemoryInline::FlatWriteFloat32(r7, f0.d);
    goto loc_806D08D4;
}

loc_806D08D0:
{
    r5 = 8;
}

loc_806D08D4:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_806D08DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 300));
}

loc_806D08E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_806D0908;
    }
}

loc_806D08E8:
{
}

loc_806D08EC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(32))) {
        goto loc_806D08F4;
    }
}

loc_806D08F0:
{
    r5 = 10;
}

loc_806D08F4:
{
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -664));
    MemoryInline::FlatWriteFloat32((r7 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r7 + 4), f0.d);
    MemoryInline::FlatWriteFloat32(r7, f0.d);
}

loc_806D0908:
{
}

loc_806D090C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806D091C;
    }
}

loc_806D0910:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(5));
}

loc_806D0914:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806D0948;
    }
}

loc_806D0918:
{
    goto loc_806D0970;
}

loc_806D091C:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806D0924:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806D0970;
    }
}

loc_806D0928:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 17200));
    r0 = MemoryInline::FlatRead8((r4 + 85));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806D0938:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D0970;
    }
}

loc_806D093C:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 188), r0);
    goto loc_806D0970;
}

loc_806D0948:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806D0950:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806D0970;
    }
}

loc_806D0954:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 17200));
    r0 = MemoryInline::FlatRead8((r4 + 85));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806D0964:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D0970;
    }
}

loc_806D0968:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 188), r0);
}

loc_806D0970:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806D0880 func_806D0880 preserves=true fpr_mask=0x00000000
