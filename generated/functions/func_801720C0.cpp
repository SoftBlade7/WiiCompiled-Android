#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801720C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801720C0;

loc_801720C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(19));
}

loc_801720C4:
{
    r7 = 0;
    r0 = 244;
    r7_mrot_0 = (r5 & 16777215);
    r7_mdest_0 = (r7 & -16777216);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r7_mrot_1 = (r7_rot_0 & -16777216);
    r7_mdest_1 = (r7 & 16777215);
    r7 = (r7_mdest_1 | r7_mrot_1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801720FC;
    }
}

loc_801720D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801720E8;
    }
}

loc_801720DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(17));
}

loc_801720E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801720F4;
    }
}

loc_801720E4:
{
    goto loc_8017210C;
}

loc_801720E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(22));
}

loc_801720EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80172104;
    }
}

loc_801720F0:
{
    goto loc_8017210C;
}

loc_801720F4:
{
    r5 = 0;
    goto loc_80172110;
}

loc_801720FC:
{
    r5 = 1;
    goto loc_80172110;
}

loc_80172104:
{
    r5 = 2;
    goto loc_80172110;
}

loc_8017210C:
{
    r5 = 2;
}

loc_80172110:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r6 = 0;
    r6_mrot_0 = (r5 & 3);
    r6_mdest_0 = (r6 & -4);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r5 = 245;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r7));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6_mrot_1 = (r6_rot_0 & 12);
    r6_mdest_1 = (r6 & -13);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r6_mrot_2 = (r6_rot_1 & -16777216);
    r6_mdest_2 = (r6 & 16777215);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x000000BC gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801720C0 func_801720C0 preserves=true fpr_mask=0x00000000
