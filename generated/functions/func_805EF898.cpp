#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EF898(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805EF898;

loc_805EF898:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x805EF8B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805EEF20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r4 = 0;
}

loc_805EF8BC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805EF8C8;
    }
}

loc_805EF8C0:
{
    r4 = (r4 | 1);
    goto loc_805EF8D8;
}

loc_805EF8C8:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
}

loc_805EF8D0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805EF8D8;
    }
}

loc_805EF8D4:
{
    r4 = (r4 | 2);
}

loc_805EF8D8:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
}

loc_805EF8E0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805EF8EC;
    }
}

loc_805EF8E4:
{
    r4 = (r4 | 4);
    goto loc_805EF8FC;
}

loc_805EF8EC:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
}

loc_805EF8F4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805EF8FC;
    }
}

loc_805EF8F8:
{
    r4 = (r4 | 8);
}

loc_805EF8FC:
{
    r0 = MemoryInline::FlatRead32((r31 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_805EF904:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805EF918;
    }
}

loc_805EF908:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 56), r0);
    goto loc_805EF944;
}

loc_805EF918:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805EF91C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EF928;
    }
}

loc_805EF920:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805EF924:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805EF934;
    }
}

loc_805EF928:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 56), r0);
    goto loc_805EF940;
}

loc_805EF934:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 56), r0);
}

loc_805EF940:
{
    MemoryInline::FlatWrite32((r31 + 52), r4);
}

loc_805EF944:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x805EF898 func_805EF898 preserves=true fpr_mask=0x00000000
