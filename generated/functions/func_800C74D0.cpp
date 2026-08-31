#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C74D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C74D0;

loc_800C74D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C74D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C74E0;
    }
}

loc_800C74D8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_800C74E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C74EC;
    }
}

loc_800C74E4:
{
    r4 = 0;
    goto loc_800C750C;
}

loc_800C74EC:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = 0;
}

loc_800C74F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C7508;
    }
}

loc_800C74FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800C7504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C750C;
    }
}

loc_800C7508:
{
    r4 = 1;
}

loc_800C750C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800C7510:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C751C;
    }
}

loc_800C7514:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_800C751C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C7520:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C752C;
    }
}

loc_800C7524:
{
    r0 = 0;
    goto loc_800C7570;
}

loc_800C752C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C7538;
    }
}

loc_800C7530:
{
    r4 = 0;
    goto loc_800C7558;
}

loc_800C7538:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = 0;
}

loc_800C7544:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C7554;
    }
}

loc_800C7548:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800C7550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C7558;
    }
}

loc_800C7554:
{
    r4 = 1;
}

loc_800C7558:
{
}

loc_800C755C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C7568;
    }
}

loc_800C7560:
{
    r0 = 0;
    goto loc_800C7570;
}

loc_800C7568:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
}

loc_800C7570:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C7574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C7580;
    }
}

loc_800C7578:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_800C7580:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r3 = (r0 ^ 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C74D0 func_800C74D0 preserves=true fpr_mask=0x00000000
