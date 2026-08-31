#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009D220(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8009D220;

loc_8009D220:
{
    r9 = MemoryInline::FlatRead32((r5 + 24));
    r7 = 31;
    r0 = (r9 & 1);
}

loc_8009D22C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009D234;
    }
}

loc_8009D230:
{
    r7 = 30;
}

loc_8009D234:
{
    r0 = (r9 & 2);
}

loc_8009D238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009D240;
    }
}

loc_8009D23C:
{
    r7 = (r7 & -3);
}

loc_8009D240:
{
    r0 = (r9 & 4);
}

loc_8009D244:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009D24C;
    }
}

loc_8009D248:
{
    r7 = (r7 & -5);
}

loc_8009D24C:
{
    r0 = (r9 & 8);
}

loc_8009D250:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009D258;
    }
}

loc_8009D254:
{
    r7 = (r7 & -9);
}

loc_8009D258:
{
    r0 = MemoryInline::FlatRead8((r5 + 30));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8009D260:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009D268;
    }
}

loc_8009D264:
{
    r7 = (r7 & -17);
}

loc_8009D268:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x00001281 gpr_return=0x00000000 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8009D220 func_8009D220 preserves=true fpr_mask=0x00000000
