#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80517CE4(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80517CE4;

loc_80517CE4:
{
    r6 = MemoryInline::FlatRead8((r3 + 16));
    r7 = 0;
    goto loc_80517D08;
}

loc_80517CF0:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r7 & 255);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80517D00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80517D04:
{
    r7 = (r7 + 1);
}

loc_80517D08:
{
    r0 = (r7 & 255);
}

loc_80517D10:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_80517CF0;
    }
}

loc_80517D14:
{
    r0 = MemoryInline::FlatRead8((r3 + 18));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_80517D1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80517D20:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r5_addr_3 = (r5 + r6);
    MemoryInline::FlatWrite8(r5_addr_3, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r3 + 16));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80517CE4 func_80517CE4 preserves=true fpr_mask=0x00000000
