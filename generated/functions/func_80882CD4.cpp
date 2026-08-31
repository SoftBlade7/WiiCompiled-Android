#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80882CD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80882CD4;

loc_80882CD4:
{
    r0 = MemoryInline::FlatRead8((r3 + 17278));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80882CDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80882CE0:
{
    r0 = MemoryInline::FlatRead8((r3 + 7917));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80882CE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80882CEC:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10448));
    r0 = MemoryInline::FlatRead8((r5 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80882CFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80882D00:
{
    r5 = (r4 * 28);
    r4 = (r3 + r5);
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r7 = MemoryInline::FlatRead32((r6 + 360));
    r4 = MemoryInline::FlatRead32((r6 + 352));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80882D20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80882D24:
{
    r0 = MemoryInline::FlatRead32((r6 + 356));
    r4 = 0;
}

loc_80882D30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r7))) {
        goto loc_80882D44;
    }
}

loc_80882D34:
{
    r0 = MemoryInline::FlatRead8((r6 + 365));
}

loc_80882D3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80882D44;
    }
}

loc_80882D40:
{
    r4 = 1;
}

loc_80882D44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80882D48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80882D50;
    }
}

loc_80882D4C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80882D50:
{
    r3 = (r3 + r5);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
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

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80882CD4 func_80882CD4 preserves=true fpr_mask=0x00000000
