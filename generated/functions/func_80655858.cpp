#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80655858(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80655858;

loc_80655858:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80655864:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80655878;
    }
}

loc_80655868:
{
    r4 = 0x809C0000u;
    r0 = 1;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    MemoryInline::FlatWrite8((r4 + 46), static_cast<uint8_t>(r0));
}

loc_80655878:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80655880:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_806558C4;
    }
}

loc_80655884:
{
    r4 = (r0 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r5 = 0x808A0000u;
    r4 = 0x80380000u;
    f1.d = MemoryInline::FlatReadFloat64((r5 + -24184));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r4 + 24576));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 124));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_806558C4:
{
    r0 = 6;
    r8 = 0;
    r7 = 0x809C0000u;
    r5 = 1;
    ctr = r0;
}

loc_806558D8:
{
    r9 = MemoryInline::FlatRead32((r7 + 8408));
    r0 = (r8 & 255);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r6 = MemoryInline::FlatRead32((r9 + 10524));
    r0 = (r6 * 88);
    r6 = (r9 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80655958;
    }
}

loc_806558FC:
{
    r0 = MemoryInline::FlatRead8((r6 + 89));
}

loc_80655904:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r0))) {
        goto loc_80655958;
    }
}

loc_80655908:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 8160);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 1020);
    r4 = (r9 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 10144));
    r0 = (r0 * 48);
    r0 = (r9 + r0);
    r4 = (r0 + r6);
    r4 = MemoryInline::FlatRead32((r4 + 336));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_80655934:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80655958;
    }
}

loc_80655938:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32(r4);
}

loc_80655944:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80655958;
    }
}

loc_80655948:
{
    r4 = MemoryInline::FlatRead16((r4 + 18));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80655950:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_80655958;
    }
}

loc_80655954:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
}

loc_80655958:
{
    r9 = MemoryInline::FlatRead32((r7 + 8408));
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r6 = MemoryInline::FlatRead32((r9 + 10524));
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 * 88);
    r6 = (r9 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806559DC;
    }
}

loc_80655980:
{
    r0 = MemoryInline::FlatRead8((r6 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_80655988:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806559DC;
    }
}

loc_8065598C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & 8160);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r6 = (r6_rot_4 & 1020);
    r4 = (r9 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 10144));
    r0 = (r0 * 48);
    r0 = (r9 + r0);
    r4 = (r0 + r6);
    r4 = MemoryInline::FlatRead32((r4 + 336));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806559B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806559DC;
    }
}

loc_806559BC:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806559C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806559DC;
    }
}

loc_806559CC:
{
    r4 = MemoryInline::FlatRead16((r4 + 18));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_806559D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806559DC;
    }
}

loc_806559D8:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
}

loc_806559DC:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806558D8;
    }
}

loc_806559E4:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003F3 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80655858 func_80655858 preserves=true fpr_mask=0x00000000
