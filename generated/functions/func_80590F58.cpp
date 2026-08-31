#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80590F58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80590F58;

loc_80590F58:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80590F64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80590F68:
{
    // inline leaf 0x805A6DCC (6 guest instruction(s))
    r4 = MemoryInline::FlatRead16((r3 + 820));
    r0 = 60;
    MemoryInline::FlatWrite16((r3 + 828), static_cast<uint16_t>(r0));
    r0 = (r4 | 512);
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x805A6DCC
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80590F58 func_80590F58 preserves=true fpr_mask=0x00000000
