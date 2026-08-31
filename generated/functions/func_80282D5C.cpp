#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80282D5C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r27 = ctx->gpr[27];

    goto loc_80282D5C;

loc_80282D5C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r19 + 25852), 0, 288u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 284u, (r19 + 26136));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 284u, (r19 + 26136));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 276u, (r19 + 26128));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 284u, (r19 + 26136));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 228u, (r19 + 26080));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 236u, (r19 + 26088));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 244u, (r19 + 26096));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 252u, (r19 + 26104));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 260u, (r19 + 26112));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 268u, (r19 + 26120));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r19 + 25908));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r19 + 25908));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r19 + 25900));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r19 + 25908));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r19 + 25852));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r19 + 25860));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r19 + 25868));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r19 + 25876));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r19 + 25884));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r19 + 25892));
    // nop
    r14 = (r11 ^ 30305);
    r9 = (r3 ^ 1679818752);
    r15 = (r27 | 28013);
    r14 = (r11 | 25600);
    ctx->lr = 0x80282DC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[9] = r9;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    InvokeDirectCpu<0x0049445Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r19 = ctx->gpr[19];
    r27 = ctx->gpr[27];
    ctx->gpr[0] = r0;
    ctx->gpr[9] = r9;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    InvokeDirectCpu<0x8097A138u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r19 = ctx->gpr[19];
    r27 = ctx->gpr[27];
    ctx->gpr[0] = r0;
    ctx->gpr[9] = r9;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x08080DF8 gpr_write=0x0000C201 gpr_return=0x00000000 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80282D5C func_80282D5C preserves=true fpr_mask=0x00000000
