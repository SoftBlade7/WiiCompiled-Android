#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014AC0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014AC0C;

loc_8014AC0C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(255));
}

loc_8014AC10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014AC1C;
    }
}

loc_8014AC14:
{
    r4 = 0x80340000u;
    MemoryInline::FlatWriteRam8((r4 + -27840), static_cast<uint8_t>(r3));
}

loc_8014AC1C:
{
    r3 = 0x80340000u;
    r3 = MemoryInline::FlatRead8((r3 + -27840));
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8014AC0C func_8014AC0C preserves=true fpr_mask=0x00000000
