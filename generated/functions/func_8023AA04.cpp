#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023AA04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023AA04;

loc_8023AA04:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -27736));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8019E770u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023AA28:
{
    MemoryInline::FlatWrite32((r31 + 12), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023AA40;
    }
}

loc_8023AA30:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_8023AA64;
}

loc_8023AA40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-12));
}

loc_8023AA44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023AA58;
    }
}

loc_8023AA48:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_8023AA64;
}

loc_8023AA58:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r3 = 0;
}

loc_8023AA64:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000200A gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023AA04 func_8023AA04 preserves=true fpr_mask=0x00000000
