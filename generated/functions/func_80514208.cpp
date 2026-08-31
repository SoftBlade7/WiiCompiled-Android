#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80514208(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;

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

    goto loc_80514208;

loc_80514208:
{
    r7 = MemoryInline::FlatRead32(r3);
    r8 = 0;
    r6 = 0;
    r0 = MemoryInline::FlatRead16((r7 + 8));
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80514220:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80514250;
    }
}

loc_80514224:
{
    r0 = MemoryInline::FlatRead16((r7 + 10));
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r7 + r0);
    r5_addr_2 = (r5 + r6);
    r5 = MemoryInline::FlatRead32(r5_addr_2);
    r5_addr_3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_3);
    r5 = r5_addr_3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8051423C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80514248;
    }
}

loc_80514240:
{
    r8 = r5;
    goto loc_80514250;
}

loc_80514248:
{
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80514224;
    }
}

loc_80514250:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80514208 func_80514208 preserves=true fpr_mask=0x00000000
