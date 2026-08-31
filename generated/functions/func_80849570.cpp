#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80849570(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80849570;

loc_80849570:
{
    r6 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = 0x809C0000u;
    r3 = 0x809C0000u;
    r6 = (r6 + 17720);
    r4 = (r4 + 7812);
    MemoryInline::FlatWriteRam32((r5 + 17856), r6);
    MemoryInline::FlatWriteRam32((r3 + 17860), r4);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000078 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80849570 func_80849570 preserves=true fpr_mask=0x00000000
