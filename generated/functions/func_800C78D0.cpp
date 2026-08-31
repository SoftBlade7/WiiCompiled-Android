#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C78D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_13 = 0;
    uint32_t r7_rot_14 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800C78D0;

loc_800C78D0:
{
    r6 = 0;
    r7 = 0;
    r0 = 2;
    goto loc_800C79B0;
}

loc_800C78E0:
{
    r8 = MemoryInline::FlatRead8(r3);
    r9 = 0;
    ctr = r0;
    // nop
}

loc_800C78F0:
{
    r5 = (r7 & 32768);
}

loc_800C78F4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C7904;
    }
}

loc_800C78F8:
{
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & 65534);
    r7 = (r7 ^ 4129);
    goto loc_800C7908;
}

loc_800C7904:
{
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & 65534);
}

loc_800C7908:
{
    r5 = (r8 & 128);
}

loc_800C790C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C7918;
    }
}

loc_800C7910:
{
    r5 = (r7 ^ 1);
    r7 = (r5 & 65535);
}

loc_800C7918:
{
    r5 = (r7 & 32768);
}

loc_800C791C:
{
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_3 & 254);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C7930;
    }
}

loc_800C7924:
{
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_6 & 65534);
    r7 = (r7 ^ 4129);
    goto loc_800C7934;
}

loc_800C7930:
{
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_7 & 65534);
}

loc_800C7934:
{
    r5 = (r8 & 128);
}

loc_800C7938:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C7944;
    }
}

loc_800C793C:
{
    r5 = (r7 ^ 1);
    r7 = (r5 & 65535);
}

loc_800C7944:
{
    r5 = (r7 & 32768);
}

loc_800C7948:
{
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_4 & 254);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C795C;
    }
}

loc_800C7950:
{
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_9 & 65534);
    r7 = (r7 ^ 4129);
    goto loc_800C7960;
}

loc_800C795C:
{
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_10 & 65534);
}

loc_800C7960:
{
    r5 = (r8 & 128);
}

loc_800C7964:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C7970;
    }
}

loc_800C7968:
{
    r5 = (r7 ^ 1);
    r7 = (r5 & 65535);
}

loc_800C7970:
{
    r5 = (r7 & 32768);
}

loc_800C7974:
{
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_5 & 254);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C7988;
    }
}

loc_800C797C:
{
    r7_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_12 & 65534);
    r7 = (r7 ^ 4129);
    goto loc_800C798C;
}

loc_800C7988:
{
    r7_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_13 & 65534);
}

loc_800C798C:
{
    r5 = (r8 & 128);
}

loc_800C7990:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800C799C;
    }
}

loc_800C7994:
{
    r5 = (r7 ^ 1);
    r7 = (r5 & 65535);
}

loc_800C799C:
{
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_6 & 254);
    r9 = (r9 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800C78F0;
    }
}

loc_800C79A8:
{
    r3 = (r3 + 1);
    r6 = (r6 + 1);
}

loc_800C79B0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_800C79B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800C78E0;
    }
}

loc_800C79B8:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C78D0 func_800C78D0 preserves=true fpr_mask=0x00000000
