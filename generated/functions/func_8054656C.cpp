#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054656C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8054656C;

loc_8054656C:
{
    r7 = 65536;
    r0 = (r7 + -29504);
    r0 = (r6 * r0);
    r6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r6 + 452));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80546588:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805465BC;
    }
}

loc_8054658C:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r7 = (r7_rot_0 & 1023);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r8 = (r8_rot_0 & 127);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r3 = (r3_rot_0 & 127);
    r0 = 1;
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead32((r6 + 452));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_1 & 63);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_805465C4;
}

loc_805465BC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r0));
}

loc_805465C4:
{
    r3 = MemoryInline::FlatRead8((r4 + 10));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x000001C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054656C func_8054656C preserves=true fpr_mask=0x00000000
