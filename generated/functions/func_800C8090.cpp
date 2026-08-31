#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C8090(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C8090;

loc_800C8090:
{
    r0 = 1;
}

loc_800C8098:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r6 = (r0 & 65535);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_800C80B8;
    }
}

loc_800C80A4:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 & r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C80D4;
    }
}

loc_800C80B0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_800C80B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_800C80BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C80D4;
    }
}

loc_800C80C0:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 & r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C80D4;
    }
}

loc_800C80CC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_800C80D4:
{
    r0 = (r4 * 74);
    r3 = (r3 + r0);
    r3 = (r3 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7490u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C8090 func_800C8090 preserves=true fpr_mask=0x00000000
