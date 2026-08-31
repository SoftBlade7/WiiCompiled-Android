#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80529978(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_80529978;

loc_80529978:
{
    r0 = 13;
    r6 = 0;
    r4 = 0;
    ctr = r0;
}

loc_80529988:
{
    r5 = (r3 + r6);
    r6 = (r6 + 1);
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 30), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80529988;
    }
}

loc_805299A0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80529978 func_80529978 preserves=true fpr_mask=0x00000000
