#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F4680(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F4680;

loc_800F4680:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(127));
}

loc_800F4684:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800F4694;
    }
}

loc_800F4688:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_800F4694:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2047));
}

loc_800F4698:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800F46BC;
    }
}

loc_800F469C:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r5 = (r5_rot_0 & 1023);
    r0 = (r3 & 63);
    r5 = (r5 | 192);
    r3 = 2;
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_800F46BC:
{
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r6 = (r6_rot_0 & 15);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r5 = (r5_rot_1 & 63);
    r0 = (r3 & 63);
    r3 = 3;
    r6 = (r6 | 224);
    r5 = (r5 | 128);
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F4680 func_800F4680 preserves=true fpr_mask=0x00000000
