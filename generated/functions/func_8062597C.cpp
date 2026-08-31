#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8062597C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8062597C;

loc_8062597C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x80625994u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8060197Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r3 = 0x808E0000u;
    r4 = 0x808B0000u;
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 104u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 82u, (r31 + 82), static_cast<uint8_t>(r0));
    r3 = (r3 + -22768);
    r4 = (r4 + 11588);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r3);
    r3 = (r31 + 128);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r31 + 72), r4);
    MemoryInline::WriteResolved16(guest_range_0, 76u, (r31 + 76), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 78u, (r31 + 78), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 80u, (r31 + 80), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 84u, (r31 + 84), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r31 + 100), r0);
    ctx->lr = 0x806259D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805EF240u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r3 = 0x808C0000u;
    r0 = 72;
    r3 = (r3 + -8328);
    MemoryInline::FlatWrite32(r31, r3);
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 68), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFE0E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8062597C func_8062597C preserves=true fpr_mask=0x00000000
