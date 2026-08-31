#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051FFB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051FFB8;

loc_8051FFB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8051FFBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051FFC8;
    }
}

loc_8051FFC0:
{
    r3 = MemoryInline::FlatRead32((r3 + 2260));
    // inline leaf 0x80197DBC (7 guest instruction(s))
    r0 = (r3 * 1336);
    r3 = 0x80340000u;
    r4 = 1;
    r3 = (r3 + 22496);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1312), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80197DBC
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8051FFC8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2260));
    // inline leaf 0x80197DA0 (7 guest instruction(s))
    r0 = (r3 * 1336);
    r3 = 0x80340000u;
    r4 = 0;
    r3 = (r3 + 22496);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1312), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80197DA0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051FFB8 func_8051FFB8 preserves=true fpr_mask=0x00000000
