#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80550F9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80550F9C;

loc_80550F9C:
{
    r3 = 0x809C0000u;
    r3 = (r3 + -5376);
    r0 = MemoryInline::FlatRead32((r3 + 160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80550FAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055104C;
    }
}

loc_80550FB0:
{
    r0 = MemoryInline::FlatRead32((r3 + 176));
}

loc_80550FB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80550FCC;
    }
}

loc_80550FBC:
{
    r3 = MemoryInline::FlatRead32((r3 + 88));
    r0 = (r3 + 31);
    r7 = (r0 & -32);
    goto loc_80550FDC;
}

loc_80550FCC:
{
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r7 = (r0 * 10);
}

loc_80550FDC:
{
    r6 = 0x809C0000u;
    r6 = (r6 + -5376);
    r4 = MemoryInline::FlatRead32((r6 + 128));
    r3 = MemoryInline::FlatRead32((r6 + 132));
    r0 = MemoryInline::FlatRead8((r6 + 167));
    r3 = (r4 * r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80550FF8:
{
    r5 = (r3 + 31);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_0 & 1073741823);
    r0 = (r3 + 31);
    r4 = (r5 & -32);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -128);
    r4 = (r3 - r4);
    r3 = (r0 & -32);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -128);
    r7 = (r7 + r4);
    r0 = (r0 - r3);
    r7 = (r7 + r0);
    r7 = (r7 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551044;
    }
}

loc_8055102C:
{
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r0 * 6);
    r7 = (r7 + r0);
}

loc_80551044:
{
    r3 = (r7 + 4096);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8055104C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000C8 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80550F9C func_80550F9C preserves=true fpr_mask=0x00000000
