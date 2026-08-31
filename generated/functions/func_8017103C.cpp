#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017103C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8017103C;

loc_8017103C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_80171040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80171068;
    }
}

loc_80171044:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80171054;
    }
}

loc_80171048:
{
}

loc_8017104C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_80171060;
    }
}

loc_80171050:
{
    goto loc_80171074;
}

loc_80171054:
{
}

loc_80171058:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(3))) {
        goto loc_80171074;
    }
}

loc_8017105C:
{
    goto loc_80171070;
}

loc_80171060:
{
    r6 = 3;
    goto loc_80171074;
}

loc_80171068:
{
    r6 = 4;
    goto loc_80171074;
}

loc_80171070:
{
    r6 = 5;
}

loc_80171074:
{
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(2));
}

loc_8017107C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r0_mrot_0 = (r0_rot_0 & 32767);
    r0_mdest_0 = (r0 & -32768);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(15));
    r0_mrot_1 = (r0_rot_1 & 229376);
    r0_mdest_1 = (r0 & -229377);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r0_mrot_2 = (r0_rot_2 & 1835008);
    r0_mdest_2 = (r0 & -1835009);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32(r3, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801710C0;
    }
}

loc_80171090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801710A4;
    }
}

loc_80171094:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80171098:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801710B0;
    }
}

loc_8017109C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801710B8;
    }
}

loc_801710A0:
{
    goto loc_801710CC;
}

loc_801710A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(4));
}

loc_801710A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801710CC;
    }
}

loc_801710AC:
{
    goto loc_801710C8;
}

loc_801710B0:
{
    r6 = 3;
    goto loc_801710CC;
}

loc_801710B8:
{
    r6 = 4;
    goto loc_801710CC;
}

loc_801710C0:
{
    r6 = 5;
    goto loc_801710CC;
}

loc_801710C8:
{
    r6 = 0;
}

loc_801710CC:
{
    r5 = 0;
    r0 = 1;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r5_mrot_0 = (r5_rot_0 & 32767);
    r5_mdest_0 = (r5 & -32768);
    r5 = (r5_mdest_0 | r5_mrot_0);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r4));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(15));
    r5_mrot_1 = (r5_rot_1 & 229376);
    r5_mdest_1 = (r5 & -229377);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r5_mrot_2 = (r5_rot_2 & 1835008);
    r5_mdest_2 = (r5 & -1835009);
    r5 = (r5_mdest_2 | r5_mrot_2);
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8017103C func_8017103C preserves=true fpr_mask=0x00000000
