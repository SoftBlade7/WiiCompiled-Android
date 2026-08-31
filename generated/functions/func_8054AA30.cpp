#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054AA30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8054AA30;

loc_8054AA30:
{
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r5 + -10416));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054AA58;
    }
}

loc_8054AA40:
{
    r3 = 0x808B0000u;
    r4 = 0x809C0000u;
    r3 = (r3 + 15536);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r4 + -10412), r3);
    MemoryInline::FlatWriteRam8((r5 + -10416), static_cast<uint8_t>(r0));
}

loc_8054AA58:
{
    r3 = 0x809C0000u;
    r3 = (r3 + -10412);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054AA30 func_8054AA30 preserves=true fpr_mask=0x00000000
