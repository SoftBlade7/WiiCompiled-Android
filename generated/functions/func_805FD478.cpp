#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FD478(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805FD478;

loc_805FD478:
{
    r0 = MemoryInline::FlatRead32((r3 + 172));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FD480:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805FD484:
{
    r0 = MemoryInline::FlatRead32((r3 + 232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805FD48C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FD4AC;
    }
}

loc_805FD490:
{
    r0 = MemoryInline::FlatRead8((r3 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FD498:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FD4A4;
    }
}

loc_805FD49C:
{
    r5 = 0;
    goto loc_805FD4B0;
}

loc_805FD4A4:
{
    r5 = 1;
    goto loc_805FD4B0;
}

loc_805FD4AC:
{
    r5 = 0;
}

loc_805FD4B0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 244), r0);
    r4 = MemoryInline::FlatRead32((r3 + 200));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80529E00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFCF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805FD478 func_805FD478 preserves=true fpr_mask=0x00000000
