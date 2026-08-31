#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806559F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806559F0;

loc_806559F0:
{
    r0 = 6;
    r9 = 0;
    r7 = 0x809C0000u;
    r5 = 1;
    ctr = r0;
}

loc_80655A04:
{
    r8 = MemoryInline::FlatRead32((r7 + 8408));
    r0 = (r9 & 255);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r6 = MemoryInline::FlatRead32((r8 + 10524));
    r0 = (r6 * 88);
    r6 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80655A84;
    }
}

loc_80655A28:
{
    r0 = MemoryInline::FlatRead8((r6 + 89));
}

loc_80655A30:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(r0))) {
        goto loc_80655A84;
    }
}

loc_80655A34:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 8160);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 1020);
    r4 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 10144));
    r0 = (r0 * 48);
    r0 = (r8 + r0);
    r4 = (r0 + r6);
    r4 = MemoryInline::FlatRead32((r4 + 336));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_80655A60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80655A84;
    }
}

loc_80655A64:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32(r4);
}

loc_80655A70:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80655A84;
    }
}

loc_80655A74:
{
    r4 = MemoryInline::FlatRead16((r4 + 18));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80655A7C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_80655A84;
    }
}

loc_80655A80:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
}

loc_80655A84:
{
    r8 = MemoryInline::FlatRead32((r7 + 8408));
    r9 = (r9 + 1);
    r0 = (r9 & 255);
    r6 = MemoryInline::FlatRead32((r8 + 10524));
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 * 88);
    r6 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80655B08;
    }
}

loc_80655AAC:
{
    r0 = MemoryInline::FlatRead8((r6 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
}

loc_80655AB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80655B08;
    }
}

loc_80655AB8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & 8160);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_4 & 1020);
    r4 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 10144));
    r0 = (r0 * 48);
    r0 = (r8 + r0);
    r4 = (r0 + r6);
    r4 = MemoryInline::FlatRead32((r4 + 336));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80655AE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80655B08;
    }
}

loc_80655AE8:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80655AF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80655B08;
    }
}

loc_80655AF8:
{
    r4 = MemoryInline::FlatRead16((r4 + 18));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80655B00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80655B08;
    }
}

loc_80655B04:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
}

loc_80655B08:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80655A04;
    }
}

loc_80655B10:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806559F0 func_806559F0 preserves=true fpr_mask=0x00000000
