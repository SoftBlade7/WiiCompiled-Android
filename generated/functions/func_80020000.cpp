#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80020000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_mtcrf_preserve_0 = 0;
    uint32_t r3_mtcrf_src_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;

    goto loc_80020000;

loc_80020000:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r2 + 13), static_cast<uint8_t>(r3));
    // mfspr 275 unsupported @ 0x80020008
    r3 = PPC_ReadSpr(275);
    r3_mtcrf_src_0 = (r3 & -1);
    r3_mtcrf_preserve_0 = (cr & 0);
    cr = (r3_mtcrf_preserve_0 | r3_mtcrf_src_0);
    // mfspr 273 unsupported @ 0x80020010
    r2 = PPC_ReadSpr(273);
    // mfspr 274 unsupported @ 0x80020014
    r3 = PPC_ReadSpr(274);
    ctx->gpr[2] = r2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x0000000C gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80020000 func_80020000 preserves=true fpr_mask=0x00000000
