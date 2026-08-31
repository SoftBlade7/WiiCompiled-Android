#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DBD34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805DBD34;

loc_805DBD34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r3 + 372);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0;
}

loc_805DBD50:
{
    r3 = r31;
    ctx->lr = 0x805DBD58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x805BDF44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805DBD5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DBD68;
    }
}

loc_805DBD60:
{
    r3 = r30;
    goto loc_805DBD7C;
}

loc_805DBD68:
{
    r30 = (r30 + 1);
    r31 = (r31 + 596);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(4));
}

loc_805DBD74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DBD50;
    }
}

loc_805DBD78:
{
    r3 = -1;
}

loc_805DBD7C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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

// RECOMP_GUEST_ABI gpr_read=0xC000000B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805DBD34 func_805DBD34 preserves=true fpr_mask=0x00000000
