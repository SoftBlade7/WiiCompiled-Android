#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020BA14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020BA14;

loc_8020BA14:
{
    r0 = 0;
    r11 = (r3 & 31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_8020BA1C:
{
    MemoryInline::FlatWrite32(r8, r0);
    MemoryInline::FlatWrite32(r6, r0);
    MemoryInline::FlatWrite32(r9, r0);
    MemoryInline::FlatWrite32(r7, r0);
    MemoryInline::FlatWrite32(r5, r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020BA4C;
    }
}

loc_8020BA34:
{
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32(r6, r3);
    MemoryInline::FlatWrite32(r7, r4);
    MemoryInline::FlatWrite32(r8, r0);
    MemoryInline::FlatWrite32(r9, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8020BA4C:
{
    r10 = (r4 + -32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_8020BA50:
{
    r0 = (32 - r11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r11) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32(r5, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020BA68;
    }
}

loc_8020BA5C:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32(r6, r0);
    MemoryInline::FlatWrite32(r7, r10);
}

loc_8020BA68:
{
    r0 = (r3 + r4);
    MemoryInline::FlatWrite32(r9, r11);
    r0 = (r0 - r11);
    MemoryInline::FlatWrite32(r8, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000C01 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8020BA14 func_8020BA14 preserves=true fpr_mask=0x00000000
