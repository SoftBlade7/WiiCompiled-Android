#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066C618(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r8_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066C618;

loc_8066C618:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066C620:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066C664;
    }
}

loc_8066C624:
{
    r5 = 0x80000000u;
    r6 = MemoryInline::FlatRead32((r3 + 56));
    r8 = MemoryInline::FlatRead32((r5 + 248));
    r0 = 0;
    r7 = MemoryInline::FlatRead32((r3 + 52));
    r5 = (r0 * r6);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(30));
    r8 = (r8_rot_0 & 1073741823);
    r3 = 1;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r8) * static_cast<uint64_t>(r6)) >> 32));
    r6 = (r8 * r6);
    r5 = (r0 + r5);
    MemoryInline::FlatWrite32((r4 + 4), r6);
    r0 = (r8 * r7);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_8066C664:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066C618 func_8066C618 preserves=true fpr_mask=0x00000000
