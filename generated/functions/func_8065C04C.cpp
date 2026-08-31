#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065C04C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8065C04C;

loc_8065C04C:
{
    r6 = 0;
    r0 = 16;
    MemoryInline::FlatWrite32(r4, r6);
    r3 = (r4 + 4);
    r5 = 21;
    MemoryInline::FlatWrite8((r4 + 25), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 26), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 27), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 28), static_cast<uint8_t>(r6));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80000092 gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8065C04C func_8065C04C preserves=true fpr_mask=0x00000000
