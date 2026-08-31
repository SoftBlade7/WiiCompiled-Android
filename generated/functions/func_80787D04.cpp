#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80787D04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80787D04;

loc_80787D04:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r6 + 12024));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    // inline leaf 0x80787B88 (6 guest instruction(s))
    r0 = (r4 * 96);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // end of inlined leaf 0x80787B88
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80787D04 func_80787D04 preserves=true fpr_mask=0x00000000
