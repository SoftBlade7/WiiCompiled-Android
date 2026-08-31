#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009DA80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8009DA80;

loc_8009DA80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(40));
}

loc_8009DA8C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009DA9C;
    }
}

loc_8009DA94:
{
    r3 = 0;
    goto loc_8009DADC;
}

loc_8009DA9C:
{
    r3 = (r3 + 8);
    ctx->lr = 0x8009DAA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80095A90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8009DAA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009DAB4;
    }
}

loc_8009DAAC:
{
    r3 = 0;
    goto loc_8009DADC;
}

loc_8009DAB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009DADC;
    }
}

loc_8009DAB8:
{
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r5);
    r4 = 1;
    r0 = 128;
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 30), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 32), r5);
    MemoryInline::FlatWrite32((r3 + 36), r5);
}

loc_8009DADC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009DA80 func_8009DA80 preserves=true fpr_mask=0x00000000
