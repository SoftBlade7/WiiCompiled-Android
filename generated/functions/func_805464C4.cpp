#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805464C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
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

    goto loc_805464C4;

loc_805464C4:
{
    r7 = 65536;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & 524280);
    r0 = (r7 + -29504);
    r0 = (r6 * r0);
    r3 = (r3 + r0);
    r0 = (r3 + 8);
    r5 = (r0 + r5);
    r3 = MemoryInline::FlatRead32((r5 + 22064));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805464E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80546520;
    }
}

loc_805464EC:
{
    r0 = MemoryInline::FlatRead32((r5 + 22068));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r6 = (r6_rot_0 & 1023);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(15));
    r7 = (r7_rot_0 & 127);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r8 = (r8_rot_0 & 127);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r3 = (r3_rot_0 & 7);
    r5 = 1;
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r4 + 16), r3);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80546520:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805464C4 func_805464C4 preserves=true fpr_mask=0x00000000
