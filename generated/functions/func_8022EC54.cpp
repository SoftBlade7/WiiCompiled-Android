#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022EC54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8022EC54;

loc_8022EC54:
{
    r8 = 0;
    r7 = 0;
    r6 = 0;
    goto loc_8022ECA4;
}

loc_8022EC64:
{
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r4_addr_2 = (r4 + r0);
    r5 = MemoryInline::FlatRead32(r4_addr_2);
    r4 = MemoryInline::FlatRead16((r5 + 118));
    r0 = (r4 & 1);
}

loc_8022EC78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022ECA0;
    }
}

loc_8022EC7C:
{
    r0 = (r4 & 32);
}

loc_8022EC80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022ECA0;
    }
}

loc_8022EC84:
{
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r8 = (r8 + 1);
    r4_addr_3 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_3, r5);
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_8022EC9C:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_8022ECB4;
    }
}

loc_8022ECA0:
{
    r7 = (r7 + 1);
}

loc_8022ECA4:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_8022ECB0:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_8022EC64;
    }
}

loc_8022ECB4:
{
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r5 = 0;
    goto loc_8022ECD0;
}

loc_8022ECC0:
{
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r8 = (r8 + 1);
    r4_addr_7 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_7, r5);
    r6 = (r6 + 4);
}

loc_8022ECD0:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_8022ECD8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022ECC0;
    }
}

loc_8022ECDC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022EC54 func_8022EC54 preserves=true fpr_mask=0x00000000
