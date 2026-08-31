#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F5CBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F5CBC;

loc_801F5CBC:
{
    r0 = MemoryInline::FlatRead32((r3 + 5600));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F5CC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801F5CC8:
{
    r5 = MemoryInline::FlatRead16(r4);
    r6 = 0;
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 12), r6);
    r5 = (r5 & 65532);
    MemoryInline::FlatWrite32((r4 + 16), r6);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r4 + 24), r0);
    MemoryInline::FlatWrite32((r4 + 28), r6);
    r5 = MemoryInline::FlatRead32((r3 + 5600));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_801F5CF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F5D04;
    }
}

loc_801F5CF8:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::FlatWrite32((r3 + 5600), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_801F5D04:
{
    r0 = MemoryInline::FlatRead32((r5 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801F5D0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801F5D10:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r5 = MemoryInline::FlatRead32((r4 + 36));
    MemoryInline::FlatWrite32((r5 + 32), r0);
    r0 = MemoryInline::FlatRead32((r4 + 36));
    r5 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::FlatWrite32((r5 + 36), r0);
    r5 = MemoryInline::FlatRead32((r3 + 5600));
    MemoryInline::FlatWrite32((r4 + 32), r5);
    r3 = MemoryInline::FlatRead32((r3 + 5600));
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32((r4 + 36), r0);
    MemoryInline::FlatWrite32((r5 + 36), r4);
    r3 = MemoryInline::FlatRead32((r4 + 36));
    MemoryInline::FlatWrite32((r3 + 32), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F5CBC func_801F5CBC preserves=true fpr_mask=0x00000000
