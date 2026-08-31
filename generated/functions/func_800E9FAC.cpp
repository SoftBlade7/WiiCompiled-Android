#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E9FAC(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800E9FAC;

loc_800E9FAC:
{
    r0 = 256;
    r6 = 0;
    ctr = r0;
}

loc_800E9FB8:
{
    r0 = (r6 & 1);
}

loc_800E9FBC:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(31));
    r5 = (r5_rot_2 & 2147483647);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9FC8;
    }
}

loc_800E9FC4:
{
    r5 = (r5 ^ r4);
}

loc_800E9FC8:
{
    r0 = (r5 & 1);
}

loc_800E9FCC:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_3 & 2147483647);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9FD8;
    }
}

loc_800E9FD4:
{
    r5 = (r5 ^ r4);
}

loc_800E9FD8:
{
    r0 = (r5 & 1);
}

loc_800E9FDC:
{
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_4 & 2147483647);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9FE8;
    }
}

loc_800E9FE4:
{
    r5 = (r5 ^ r4);
}

loc_800E9FE8:
{
    r0 = (r5 & 1);
}

loc_800E9FEC:
{
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_5 & 2147483647);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9FF8;
    }
}

loc_800E9FF4:
{
    r5 = (r5 ^ r4);
}

loc_800E9FF8:
{
    r0 = (r5 & 1);
}

loc_800E9FFC:
{
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_6 & 2147483647);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EA008;
    }
}

loc_800EA004:
{
    r5 = (r5 ^ r4);
}

loc_800EA008:
{
    r0 = (r5 & 1);
}

loc_800EA00C:
{
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_7 & 2147483647);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EA018;
    }
}

loc_800EA014:
{
    r5 = (r5 ^ r4);
}

loc_800EA018:
{
    r0 = (r5 & 1);
}

loc_800EA01C:
{
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_8 & 2147483647);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EA028;
    }
}

loc_800EA024:
{
    r5 = (r5 ^ r4);
}

loc_800EA028:
{
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800EA02C:
{
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_9 & 2147483647);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EA038;
    }
}

loc_800EA034:
{
    r5 = (r5 ^ r4);
}

loc_800EA038:
{
    MemoryInline::FlatWrite32(r3, r5);
    r3 = (r3 + 4);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E9FB8;
    }
}

loc_800EA048:
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
// RECOMP_REGISTRATION base 0x800E9FAC func_800E9FAC preserves=true fpr_mask=0x00000000
