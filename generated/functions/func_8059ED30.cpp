#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059ED30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059ED30;

loc_8059ED30:
{
    r5 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead16((r5 + 64));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r5 + 64), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r4 + 6536));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8059ED4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059ED64;
    }
}

loc_8059ED50:
{
    r0 = MemoryInline::FlatRead8((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059ED58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059ED64;
    }
}

loc_8059ED5C:
{
    r0 = MemoryInline::FlatRead8((r4 + 33));
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
}

loc_8059ED64:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80564444u>(ctx);
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

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x00001039 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8059ED30 func_8059ED30 preserves=true fpr_mask=0x00000000
