#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80547E28(CpuContext* MKW_RESTRICT ctx)
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80547E28;

loc_80547E28:
{
    r8 = 65536;
}

loc_80547E30:
{
    r0 = (r8 + -29504);
    r0 = (r7 * r0);
    r3 = (r3 + r0);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(99))) {
        goto loc_80547E44;
    }
}

loc_80547E40:
{
    r4 = 7;
}

loc_80547E44:
{
    r0 = (r5 + 255);
    r0 = (r0 & 255);
}

loc_80547E50:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(11))) {
        goto loc_80547E58;
    }
}

loc_80547E54:
{
    r5 = 1;
}

loc_80547E58:
{
    r0 = (r6 + 255);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
}

loc_80547E64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80547E6C;
    }
}

loc_80547E68:
{
    r6 = 1;
}

loc_80547E6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 22152));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(25));
    r0_mrot_0 = (r0_rot_0 & -33554432);
    r0_mdest_0 = (r0 & 33554431);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(21));
    r0_mrot_1 = (r0_rot_1 & 31457280);
    r0_mdest_1 = (r0 & -31457281);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0_mrot_2 = (r0_rot_2 & 2031616);
    r0_mdest_2 = (r0 & -2031617);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r3 + 22152), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F8 gpr_write=0x00000179 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80547E28 func_80547E28 preserves=true fpr_mask=0x00000000
