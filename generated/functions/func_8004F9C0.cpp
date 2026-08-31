#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004F9C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004F9C0;

loc_8004F9C0:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8004F9C8:
{
    r4 = (r3 + 36);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F9F0;
    }
}

loc_8004F9D0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F9D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F9E4;
    }
}

loc_8004F9DC:
{
    r3 = (r4 + r0);
    goto loc_8004F9E8;
}

loc_8004F9E4:
{
    r3 = 0;
}

loc_8004F9E8:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80172F64u>(ctx);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8004F9F0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F9F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004FA04;
    }
}

loc_8004F9FC:
{
    r5 = (r4 + r0);
    goto loc_8004FA08;
}

loc_8004FA04:
{
    r5 = 0;
}

loc_8004FA08:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = -872349696;
    r0 = 64;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r5));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004F9C0 func_8004F9C0 preserves=true fpr_mask=0x00000000
