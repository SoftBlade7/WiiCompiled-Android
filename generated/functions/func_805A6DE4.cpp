#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A6DE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A6DE4;

loc_805A6DE4:
{
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A6DEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805A6DF0:
{
    r4 = MemoryInline::FlatRead16((r3 + 828));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 828), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_805A6E14;
    }
}

loc_805A6E04:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 828), static_cast<uint16_t>(r0));
    r0 = 1;
    goto loc_805A6E18;
}

loc_805A6E14:
{
    r0 = 0;
}

loc_805A6E18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A6E1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805A6E20:
{
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 & -513);
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A6DE4 func_805A6DE4 preserves=true fpr_mask=0x00000000
