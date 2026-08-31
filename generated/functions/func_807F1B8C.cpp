#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F1B8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807F1B8C;

loc_807F1B8C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = r3;
    r4 = r3;
    r6 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F1BA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F1BE8;
    }
}

loc_807F1BA8:
{
    r0 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F1BB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F1BD8;
    }
}

loc_807F1BB4:
{
    r0 = MemoryInline::FlatRead32((r5 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807F1BBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F1BD8;
    }
}

loc_807F1BC0:
{
    r4 = 1;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r4));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_807F1BD8:
{
    r5 = (r5 + 4);
    r6 = (r6 + 1);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807F1BA8;
    }
}

loc_807F1BE8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807F1B8C func_807F1B8C preserves=true fpr_mask=0x00000000
