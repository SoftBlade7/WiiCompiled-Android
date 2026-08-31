#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E3920(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806E3920;

loc_806E3920:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = MemoryInline::FlatRead8((r3 + 212));
}

loc_806E392C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806E39AC;
    }
}

loc_806E3930:
{
    r4 = 0x809C0000u;
    r0 = 1127219200;
    r5 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = MemoryInline::FlatRead32((r5 + 32));
    f2.d = MemoryInline::FlatReadFloat64((r4 + 1952));
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 192), r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806E3968:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E3A5C;
    }
}

loc_806E396C:
{
    r0 = MemoryInline::FlatRead32((r3 + 196));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r3 + 176));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r4 + 184), r5);
    r4 = MemoryInline::FlatRead32((r3 + 196));
    r0 = MemoryInline::FlatRead32((r3 + 188));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 196), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_806E3998:
{
    MemoryInline::FlatWrite8((r3 + 212), static_cast<uint8_t>(r5));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E3A5C;
    }
}

loc_806E39A0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 196), r0);
    goto loc_806E3A5C;
}

loc_806E39AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    r4 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 184));
    r0 = 1127219200;
    f2.d = PPC_Fctiwz(f0.d);
    r6 = MemoryInline::FlatRead32((r4 + -10448));
    f0.d = PPC_Fctiwz(f1.d);
    r4 = 0x808A0000u;
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    r5 = 0x808A0000u;
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r7 = MemoryInline::FlatRead32((r6 + 32));
    r8 = fctiwzword0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 1948));
    r6 = fctiwzword1;
    r7 = (r7 - r8);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r4 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r6));
    f2.d = MemoryInline::FlatReadFloat64((r5 + 1952));
    r0 = (r4 * r6);
    r0 = (r7 - r0);
    MemoryInline::FlatWrite32((r3 + 192), r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806E3A1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E3A44;
    }
}

loc_806E3A20:
{
    r0 = MemoryInline::FlatRead32((r3 + 196));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r3 + 176));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    MemoryInline::FlatWrite32((r4 + 184), r5);
    r4 = MemoryInline::FlatRead32((r3 + 196));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 196), r0);
}

loc_806E3A44:
{
    r4 = MemoryInline::FlatRead32((r3 + 196));
    r0 = MemoryInline::FlatRead32((r3 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_806E3A50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E3A5C;
    }
}

loc_806E3A54:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 196), r0);
}

loc_806E3A5C:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806E3920 func_806E3920 preserves=true fpr_mask=0x00000000
