#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80635AC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80635AC8;

loc_80635AC8:
{
    r6 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r6 + -1);
}

loc_80635AD4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80635B00;
    }
}

loc_80635AD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80635ADC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80635AEC;
    }
}

loc_80635AE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(3));
}

loc_80635AE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80635B20;
    }
}

loc_80635AE8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80635AEC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    MemoryInline::FlatWrite32((r3 + 28), r4);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80635B00:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r6 = 2;
    MemoryInline::FlatWrite32((r3 + 48), r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80635B10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80635B14:
{
    MemoryInline::FlatWrite32((r3 + 28), r4);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80635B20:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80635AC8 func_80635AC8 preserves=true fpr_mask=0x00000000
