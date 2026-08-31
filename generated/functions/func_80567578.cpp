#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80567578(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80567578;

loc_80567578:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = (r3 + 6272);
    MemoryInline::FlatWriteRam8((r3 + 24), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 26), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80567578 func_80567578 preserves=true fpr_mask=0x00000000
