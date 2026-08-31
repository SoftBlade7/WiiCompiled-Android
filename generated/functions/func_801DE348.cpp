#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DE348(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DE348;

loc_801DE348:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
}

loc_801DE34C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DE358;
    }
}

loc_801DE350:
{
    r3 = -3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_801DE358:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r6 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE360:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE36C;
    }
}

loc_801DE364:
{
    r0 = (r6 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE368:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE374;
    }
}

loc_801DE36C:
{
    r5 = -7;
    goto loc_801DE3A0;
}

loc_801DE374:
{
    r0 = (r6 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE384;
    }
}

loc_801DE37C:
{
    r0 = (r6 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE38C;
    }
}

loc_801DE384:
{
    r5 = -4;
    goto loc_801DE3A0;
}

loc_801DE38C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 65280);
    r5 = 0;
    r0 = (r0 | 524288);
    r0_mrot_0 = (r4 & 255);
    r0_mdest_0 = (r0 & -256);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r3 + 24), r0);
}

loc_801DE3A0:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DE348 func_801DE348 preserves=true fpr_mask=0x00000000
