#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80519B1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80519B1C;

loc_80519B1C:
{
    r0 = 5;
    r8 = -1;
    r9 = 0;
    ctr = r0;
}

loc_80519B2C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
}

loc_80519B34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80519B58;
    }
}

loc_80519B38:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r7 = (r7_rot_2 & 2040);
    r7 = (r3 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 120));
    r7 = (r7 + 65536);
}

loc_80519B4C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(65535))) {
        goto loc_80519B58;
    }
}

loc_80519B50:
{
    r8 = (r9 & 255);
    goto loc_80519B74;
}

loc_80519B58:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 2040);
    r7 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 120));
}

loc_80519B68:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80519B74;
    }
}

loc_80519B6C:
{
    r8 = (r9 & 255);
    goto loc_80519BCC;
}

loc_80519B74:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r9 = (r9 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80519B80:
{
    r0 = (r9 & 255);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519BA8;
    }
}

loc_80519B88:
{
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r7 = (r7_rot_5 & 2040);
    r7 = (r3 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 120));
    r7 = (r7 + 65536);
}

loc_80519B9C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(65535))) {
        goto loc_80519BA8;
    }
}

loc_80519BA0:
{
    r8 = r0;
    goto loc_80519BC4;
}

loc_80519BA8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & 2040);
    r7 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 120));
}

loc_80519BB8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80519BC4;
    }
}

loc_80519BBC:
{
    r8 = (r9 & 255);
    goto loc_80519BCC;
}

loc_80519BC4:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80519B2C;
    }
}

loc_80519BCC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80519CA8;
    }
}

loc_80519BD4:
{
    r0 = 2;
    r9 = r4;
    r10 = 0;
    ctr = r0;
}

loc_80519BE4:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & 2040);
    r7 = (r3 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 120));
}

loc_80519BF4:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r9))) {
        goto loc_80519C00;
    }
}

loc_80519BF8:
{
    r8 = (r10 & 255);
    r9 = r7;
}

loc_80519C00:
{
    r10 = (r10 + 1);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & 2040);
    r7 = (r3 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 120));
    r0 = (r10 & 255);
}

loc_80519C18:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r9))) {
        goto loc_80519C24;
    }
}

loc_80519C1C:
{
    r8 = r0;
    r9 = r7;
}

loc_80519C24:
{
    r10 = (r10 + 1);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & 2040);
    r7 = (r3 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 120));
    r0 = (r10 & 255);
}

loc_80519C3C:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r9))) {
        goto loc_80519C48;
    }
}

loc_80519C40:
{
    r8 = r0;
    r9 = r7;
}

loc_80519C48:
{
    r10 = (r10 + 1);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r0 = (r0_rot_11 & 2040);
    r7 = (r3 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 120));
    r0 = (r10 & 255);
}

loc_80519C60:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r9))) {
        goto loc_80519C6C;
    }
}

loc_80519C64:
{
    r8 = r0;
    r9 = r7;
}

loc_80519C6C:
{
    r10 = (r10 + 1);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & 2040);
    r7 = (r3 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 120));
    r0 = (r10 & 255);
}

loc_80519C84:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r9))) {
        goto loc_80519C90;
    }
}

loc_80519C88:
{
    r8 = r0;
    r9 = r7;
}

loc_80519C90:
{
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80519BE4;
    }
}

loc_80519C98:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80519CA8;
    }
}

loc_80519CA0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80519CA8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r9 = MemoryInline::FlatRead16((r5 + 4));
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r10 = (r10_rot_0 & -8);
    r7 = 99;
    r8 = (r3 + r10);
}

loc_80519CC0:
{
    MemoryInline::FlatWrite32((r8 + 120), r4);
    if ((static_cast<uint32_t>(r9) > static_cast<uint32_t>(99))) {
        goto loc_80519CCC;
    }
}

loc_80519CC8:
{
    r7 = r9;
}

loc_80519CCC:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r8 = (r3 + r10);
    r4 = MemoryInline::FlatRead32((r8 + 124));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r4_mrot_0 = (r4_rot_0 & 2130706432);
    r4_mdest_0 = (r4 & -2130706433);
    r4 = (r4_mdest_0 | r4_mrot_0);
}

loc_80519CE0:
{
    MemoryInline::FlatWrite32((r8 + 124), r4);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_80519CF0;
    }
}

loc_80519CE8:
{
    r7 = 59;
    goto loc_80519CF4;
}

loc_80519CF0:
{
    r7 = MemoryInline::FlatRead8((r5 + 6));
}

loc_80519CF4:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r4 = MemoryInline::FlatRead32((r8 + 124));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(17));
    r4_mrot_1 = (r4_rot_1 & 16646144);
    r4_mdest_1 = (r4 & -16646145);
    r4 = (r4_mdest_1 | r4_mrot_1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80519D04:
{
    MemoryInline::FlatWrite32((r8 + 124), r4);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80519D14;
    }
}

loc_80519D0C:
{
    r5 = 999;
    goto loc_80519D18;
}

loc_80519D14:
{
    r5 = MemoryInline::FlatRead16((r5 + 8));
}

loc_80519D18:
{
    r4 = (r3 + r10);
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r4 + 124));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r0_mrot_0 = (r0_rot_14 & 130944);
    r0_mdest_0 = (r0 & -130945);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0_mrot_1 = (r0_rot_15 & 112);
    r0_mdest_1 = (r0 & -113);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r4 + 124), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007B9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80519B1C func_80519B1C preserves=true fpr_mask=0x00000000
