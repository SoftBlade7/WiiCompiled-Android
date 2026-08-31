#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80195024(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80195024;

loc_80195024:
{
    r5 = MemoryInline::FlatRead32((r13 + -25584));
    r6 = 0x80340000u;
    r7 = 0x80340000u;
    r0 = 32;
    r5 = (r5 + -1);
    r6 = (r6 + 22368);
    MemoryInline::FlatWrite32((r13 + -25584), r5);
    r7 = (r7 + 22240);
    r5 = 0;
    ctr = r0;
}

loc_8019504C:
{
    r0 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80195054:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019508C;
    }
}

loc_80195058:
{
    r0 = MemoryInline::FlatRead32(r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80195060:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019508C;
    }
}

loc_80195064:
{
    r4 = 0x80340000u;
    r3 = 0x80340000u;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r5 = 0;
    r4 = (r4 + 22368);
    r3 = (r3 + 22240);
    r0 = -1;
    r4_addr_0 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_0, r5);
    r3_addr_0 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_0, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8019508C:
{
    r6 = (r6 + 4);
    r7 = (r7 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8019504C;
    }
}

loc_8019509C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80195024 func_80195024 preserves=true fpr_mask=0x00000000
