#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015BC30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015BC30;

loc_8015BC30:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_8015BC34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8015BC38:
{
    r5 = (r3 + -1);
    r8 = 0;
    r3 = 65536;
    goto loc_8015BC70;
}

loc_8015BC48:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 131070);
    r7 = (r4 + r0);
    r6 = MemoryInline::FlatRead16((r7 + 80));
    r0 = MemoryInline::FlatRead16((r7 + 78));
}

loc_8015BC5C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8015BC6C;
    }
}

loc_8015BC60:
{
    MemoryInline::FlatWrite16((r7 + 78), static_cast<uint16_t>(r6));
    r8 = (r3 + -1);
    MemoryInline::FlatWrite16((r7 + 80), static_cast<uint16_t>(r0));
}

loc_8015BC6C:
{
    r8 = (r8 + 1);
}

loc_8015BC70:
{
    r0 = (r8 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_8015BC78:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015BC48;
    }
}

loc_8015BC7C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001D9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015BC30 func_8015BC30 preserves=true fpr_mask=0x00000000
