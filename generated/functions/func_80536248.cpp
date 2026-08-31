#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80536248(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80536248;

loc_80536248:
{
    r5 = 0x809C0000u;
    r7 = 0;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = (r4 * 240);
    r8 = 0;
    r6 = (r5 + 40);
    r5 = (r6 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 204));
    ctr = r4;
}

loc_80536270:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(0))) {
        goto loc_8053629C;
    }
}

loc_80536274:
{
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_80536288:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80536294;
    }
}

loc_8053628C:
{
    r0 = (r7 + 1);
    r7 = (r0 & 255);
}

loc_80536294:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80536274;
    }
}

loc_8053629C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_805362A0:
{
    r5 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805362AC;
    }
}

loc_805362A8:
{
    r5 = 6;
}

loc_805362AC:
{
    r4 = MemoryInline::FlatRead8((r3 + 36));
    r3 = 715849728;
    r0 = (r3 + -21845);
    r4 = (r4 + r7);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 6);
    r0 = (r4 - r0);
    r0 = (r5 + r0);
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80536248 func_80536248 preserves=true fpr_mask=0x00000000
