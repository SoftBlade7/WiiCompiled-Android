#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806604D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806604D4;

loc_806604D4:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806604F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80660508;
    }
}

loc_806604F4:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 28));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80660508:
{
    r4 = (r4 * 56);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 84));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806604D4 func_806604D4 preserves=true fpr_mask=0x00000000
