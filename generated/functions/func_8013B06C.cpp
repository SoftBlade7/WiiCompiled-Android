#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013B06C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013B06C;

loc_8013B06C:
{
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013B074:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8013B078:
{
    r4 = 0x80330000u;
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r4 = (r4 + 25208);
    MemoryInline::FlatWriteRam8((r4 + 1589), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWriteRam8((r4 + 1588), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWriteRam8((r4 + 1587), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::FlatWriteRam8((r4 + 1586), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 5));
    MemoryInline::FlatWriteRam8((r4 + 1585), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWriteRam8((r4 + 1584), static_cast<uint8_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013B06C func_8013B06C preserves=true fpr_mask=0x00000000
