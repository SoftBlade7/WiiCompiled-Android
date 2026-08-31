#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80071120(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;

    goto loc_80071120;

loc_80071120:
{
    r4 = r3;
    r12 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r4 + 204));
    r3 = r5;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r5 = (r0 & 536870912);
    r0 = (r0 & 1073741824);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r5 = (r5_rot_0 & 134217727);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r6 = (r6_rot_0 & 134217727);
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFAE gpr_write=0x00001079 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80071120 func_80071120 preserves=true fpr_mask=0x00000000
