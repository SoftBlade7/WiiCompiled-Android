#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BAFF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801BAFF4;

loc_801BAFF4:
{
    r31 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801BB000:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_801BB008;
    }
}

loc_801BB004:
{
    goto loc_801BB04C;
}

loc_801BB008:
{
    r0 = MemoryInline::FlatRead32((r13 + -24624));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801BB010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BB030;
    }
}

loc_801BB014:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BB040;
    }
}

loc_801BB018:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801BB01C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BB024;
    }
}

loc_801BB020:
{
    goto loc_801BB040;
}

loc_801BB024:
{
    r0 = 30000;
    MemoryInline::FlatWrite32((r13 + -24756), r0);
    goto loc_801BB090;
}

loc_801BB030:
{
    r3 = 65536;
    r0 = (r3 + -20536);
    MemoryInline::FlatWrite32((r13 + -24756), r0);
    goto loc_801BB090;
}

loc_801BB040:
{
    r0 = 15000;
    MemoryInline::FlatWrite32((r13 + -24756), r0);
    goto loc_801BB090;
}

loc_801BB04C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24624));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801BB054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BB078;
    }
}

loc_801BB058:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BB088;
    }
}

loc_801BB05C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801BB060:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BB068;
    }
}

loc_801BB064:
{
    goto loc_801BB088;
}

loc_801BB068:
{
    r3 = 65536;
    r0 = (r3 + -29536);
    MemoryInline::FlatWrite32((r13 + -24756), r0);
    goto loc_801BB090;
}

loc_801BB078:
{
    r3 = 65536;
    r0 = (r3 + -11536);
    MemoryInline::FlatWrite32((r13 + -24756), r0);
    goto loc_801BB090;
}

loc_801BB088:
{
    r0 = 18000;
    MemoryInline::FlatWrite32((r13 + -24756), r0);
}

loc_801BB090:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x4000200B gpr_write=0xC000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801BAFF4 func_801BAFF4 preserves=true fpr_mask=0x00000000
