#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80517D38(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80517D38;

loc_80517D38:
{
    r6 = MemoryInline::FlatRead8((r3 + 17));
    r7 = 0;
    goto loc_80517D5C;
}

loc_80517D44:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r7 & 255);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80517D54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80517D58:
{
    r7 = (r7 + 1);
}

loc_80517D5C:
{
    r0 = (r7 & 255);
}

loc_80517D64:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_80517D44;
    }
}

loc_80517D68:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_80517D70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80517D74:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r5_addr_3 = (r5 + r6);
    MemoryInline::FlatWrite8(r5_addr_3, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
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
// RECOMP_REGISTRATION base 0x80517D38 func_80517D38 preserves=true fpr_mask=0x00000000
