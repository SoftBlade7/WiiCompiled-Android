#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AB520(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AB520;

loc_801AB520:
{
    r5 = MemoryInline::FlatRead16(r3);
}

loc_801AB528:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801AB530;
    }
}

loc_801AB52C:
{
    r3 = (r3 + 2);
}

loc_801AB530:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(55296));
}

loc_801AB534:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801AB540;
    }
}

loc_801AB538:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(57343));
}

loc_801AB53C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801AB548;
    }
}

loc_801AB540:
{
    r6 = r5;
    goto loc_801AB588;
}

loc_801AB548:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(56319));
}

loc_801AB54C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801AB580;
    }
}

loc_801AB550:
{
    r0 = MemoryInline::FlatRead16(r3);
    r3 = (r3 + 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(56320));
}

loc_801AB55C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801AB578;
    }
}

loc_801AB560:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(57343));
}

loc_801AB564:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801AB578;
    }
}

loc_801AB568:
{
    r6 = (r0 & 1023);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r6_mrot_0 = (r6_rot_0 & 1047552);
    r6_mdest_0 = (r6 & -1047553);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r6 = (r6 + 65536);
    goto loc_801AB588;
}

loc_801AB578:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_801AB580:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_801AB588:
{
    MemoryInline::FlatWrite32(r4, r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801AB520 func_801AB520 preserves=true fpr_mask=0x00000000
