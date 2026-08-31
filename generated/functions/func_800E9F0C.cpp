#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E9F0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800E9F0C;

loc_800E9F0C:
{
    r0 = 256;
    r6 = 0;
    ctr = r0;
}

loc_800E9F18:
{
    r0 = (r6 & 128);
}

loc_800E9F1C:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9F28;
    }
}

loc_800E9F24:
{
    r5 = (r5 ^ r4);
}

loc_800E9F28:
{
    r0 = (r5 & 128);
}

loc_800E9F2C:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9F38;
    }
}

loc_800E9F34:
{
    r5 = (r5 ^ r4);
}

loc_800E9F38:
{
    r0 = (r5 & 128);
}

loc_800E9F3C:
{
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & -2);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9F48;
    }
}

loc_800E9F44:
{
    r5 = (r5 ^ r4);
}

loc_800E9F48:
{
    r0 = (r5 & 128);
}

loc_800E9F4C:
{
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_5 & -2);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9F58;
    }
}

loc_800E9F54:
{
    r5 = (r5 ^ r4);
}

loc_800E9F58:
{
    r0 = (r5 & 128);
}

loc_800E9F5C:
{
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_6 & -2);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9F68;
    }
}

loc_800E9F64:
{
    r5 = (r5 ^ r4);
}

loc_800E9F68:
{
    r0 = (r5 & 128);
}

loc_800E9F6C:
{
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_7 & -2);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9F78;
    }
}

loc_800E9F74:
{
    r5 = (r5 ^ r4);
}

loc_800E9F78:
{
    r0 = (r5 & 128);
}

loc_800E9F7C:
{
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_8 & -2);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9F88;
    }
}

loc_800E9F84:
{
    r5 = (r5 ^ r4);
}

loc_800E9F88:
{
    r0 = (r5 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E9F8C:
{
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_9 & -2);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E9F98;
    }
}

loc_800E9F94:
{
    r5 = (r5 ^ r4);
}

loc_800E9F98:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    r6 = (r6 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E9F18;
    }
}

loc_800E9FA8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E9F0C func_800E9F0C preserves=true fpr_mask=0x00000000
