#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80194F94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80194F94;

loc_80194F94:
{
    r6 = MemoryInline::FlatRead32((r13 + -25584));
    r8 = 0x80340000u;
    r5 = MemoryInline::FlatRead32((r13 + -25580));
    r9 = 0x80340000u;
    r6 = (r6 + 1);
    r0 = 32;
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r13 + -25584), r6);
    r8 = (r8 + 22368);
    r9 = (r9 + 22240);
    MemoryInline::FlatWrite32((r13 + -25580), r5);
    r7 = 0;
    ctr = r0;
}

loc_80194FC8:
{
    r0 = MemoryInline::FlatRead32(r8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80194FD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80195000;
    }
}

loc_80194FD4:
{
    r0 = MemoryInline::FlatRead32(r9);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80194FDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80195000;
    }
}

loc_80194FE0:
{
    r6 = 0x80340000u;
    r5 = 0x80340000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = (r6 + 22368);
    r5 = (r5 + 22240);
    r6_addr_0 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_0, r3);
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_0, r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80195000:
{
    r8 = (r8 + 4);
    r9 = (r9 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80194FC8;
    }
}

loc_80195010:
{
    ctx->gpr[0] = r0;
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

// RECOMP_GUEST_ABI gpr_read=0x00002399 gpr_write=0x000003E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80194F94 func_80194F94 preserves=true fpr_mask=0x00000000
