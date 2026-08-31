#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80124DC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r8_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80124DC0;

loc_80124DC0:
{
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r9 = MemoryInline::FlatRead32(r3);
    r0 = (r7 * 12);
    r8 = MemoryInline::FlatRead32((r9 + 4));
    r6 = (r8 + r0);
}

loc_80124DD4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_80124DDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80124DEC;
    }
}

loc_80124DE0:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
}

loc_80124DE8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80124DF4;
    }
}

loc_80124DEC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80124DF4:
{
    MemoryInline::FlatWrite32(r4, r9);
    MemoryInline::FlatWrite32((r4 + 4), r7);
    r0 = MemoryInline::FlatRead32(r6);
    r5 = (r0 & -16777216);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead32(r6);
    r5 = MemoryInline::FlatRead32((r9 + 16));
    r0 = (r0 & 16777215);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80124E30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_80124E4C;
    }
}

loc_80124E34:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80124E4C;
    }
}

loc_80124E40:
{
    r6 = (r6 + 12);
    r7 = (r7 + 1);
    goto loc_80124DD4;
}

loc_80124E4C:
{
    r4 = (r7 * 12);
    r8_addr_0 = (r8 + r4);
    r0 = MemoryInline::FlatRead32(r8_addr_0);
    r0 = (r0 & -16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80124E58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80124E68;
    }
}

loc_80124E5C:
{
    r4 = (r8 + r4);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    goto loc_80124E6C;
}

loc_80124E68:
{
    r0 = (r7 + 1);
}

loc_80124E6C:
{
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80124DC0 func_80124DC0 preserves=true fpr_mask=0x00000000
