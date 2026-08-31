#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80557BB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80557BB8;

loc_80557BB8:
{
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80557BC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80557BC4:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r5 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80557BD8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80557BE8;
    }
}

loc_80557BDC:
{
}

loc_80557BE0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_80557BE8;
    }
}

loc_80557BE4:
{
    r0 = 0;
}

loc_80557BE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80557BEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80557BF8;
    }
}

loc_80557BF0:
{
    r4 = MemoryInline::FlatRead32(r4);
    goto loc_80557BFC;
}

loc_80557BF8:
{
    r4 = 0;
}

loc_80557BFC:
{
    r0 = MemoryInline::FlatRead16((r3 + 56));
    MemoryInline::FlatWrite32((r3 + 32), r4);
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite16((r3 + 56), static_cast<uint16_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80557BB8 func_80557BB8 preserves=true fpr_mask=0x00000000
