#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ED5C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800ED5C0;

loc_800ED5C0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(25));
}

loc_800ED5C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ED5DC;
    }
}

loc_800ED5CC:
{
    r0 = 26;
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800ED5DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED5E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5EC;
    }
}

loc_800ED5E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_800ED5E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ED5F4;
    }
}

loc_800ED5EC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800ED5F4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002001 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800ED5C0 func_800ED5C0 preserves=true fpr_mask=0x00000000
