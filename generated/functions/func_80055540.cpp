#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80055540(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80055540;

loc_80055540:
{
    r6 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r6 + 16));
}

loc_8005554C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80055558;
    }
}

loc_80055550:
{
    r0 = (r6 + r0);
    goto loc_8005555C;
}

loc_80055558:
{
    r0 = 0;
}

loc_8005555C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055560:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005558C;
    }
}

loc_80055564:
{
    r5 = (r5 + 1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r5 = (r5_rot_0 & -16);
    r5 = (r0 + r5);
    r5 = MemoryInline::FlatRead32((r5 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80055578:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055584;
    }
}

loc_8005557C:
{
    r5 = (r0 + r5);
    goto loc_80055590;
}

loc_80055584:
{
    r5 = 0;
    goto loc_80055590;
}

loc_8005558C:
{
    r5 = 0;
}

loc_80055590:
{
    r8 = MemoryInline::FlatRead32((r5 + 4));
    r6 = 0x80240000u;
    r7 = MemoryInline::FlatRead32(r3);
    r6 = (r6 + 29856);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(12));
    r0 = (r0_rot_0 & 28);
    r3 = (r8 & 8191);
    r6_addr_0 = (r6 + r0);
    r12 = MemoryInline::FlatRead32(r6_addr_0);
    MemoryInline::FlatWrite32(r4, r3);
    r3 = r4;
    r4 = (r7 + 32);
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEE7F gpr_write=0x000011F9 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80055540 func_80055540 preserves=true fpr_mask=0x00000000
