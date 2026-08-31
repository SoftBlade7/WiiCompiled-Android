#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801044C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801044C8;

loc_801044C8:
{
    r5 = MemoryInline::FlatRead32(r3);
    r7 = 0;
    r6 = MemoryInline::FlatRead32((r5 + 1476));
    goto loc_80104508;
}

loc_801044D8:
{
}

loc_801044DC:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r4))) {
        goto loc_80104500;
    }
}

loc_801044E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801044E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801044F4;
    }
}

loc_801044E8:
{
    r0 = MemoryInline::FlatRead32((r6 + 32));
    MemoryInline::FlatWrite32((r5 + 1476), r0);
    goto loc_801044FC;
}

loc_801044F4:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::FlatWrite32((r7 + 32), r0);
}

loc_801044FC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80104428u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80104500:
{
    r7 = r6;
    r6 = MemoryInline::FlatRead32((r6 + 32));
}

loc_80104508:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8010450C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801044D8;
    }
}

loc_80104510:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801044C8 func_801044C8 preserves=true fpr_mask=0x00000000
