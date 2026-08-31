#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80146614(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80146614;

loc_80146614:
{
    r5 = 0;
    r6 = 3;
    r4 = 5;
    r0 = 16;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80142664u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEF8E gpr_write=0xF00010FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80146614 func_80146614 preserves=true fpr_mask=0x00000000
