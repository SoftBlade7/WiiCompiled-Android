#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014D294(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8014D294;

loc_8014D294:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 2024;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80340000u;
    r3 = (r31 + -27840);
    ctx->lr = 0x8014D2B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    r4 = 1;
    r0 = 2;
    r3 = (r4 * 124);
    r11 = (r31 + -27840);
    r7 = 3;
    r4 = 4;
    r8 = (r11 + r3);
    r5 = (r11 + 376);
    r6 = (r7 * 124);
    r7 = 6;
    r10 = (r8 + 376);
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + 1), 0, 1979u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 383u, (r11 + 384), r10);
    r9 = (r0 * 124);
    r0 = 5;
    r6 = (r11 + r6);
    r8 = (r11 + r9);
    r6 = (r6 + 376);
    r3 = (r4 * 124);
    r4 = 7;
    r8 = (r8 + 376);
    MemoryInline::WriteResolved32(guest_range_0, 507u, (r11 + 508), r8);
    r8 = (r11 + r3);
    r9 = (r0 * 124);
    MemoryInline::WriteResolved32(guest_range_0, 631u, (r11 + 632), r6);
    r10 = (r8 + 376);
    MemoryInline::WriteResolved32(guest_range_0, 755u, (r11 + 756), r10);
    r0 = 8;
    r6 = (r7 * 124);
    r8 = (r11 + r9);
    r7 = 9;
    r8 = (r8 + 376);
    r3 = (r4 * 124);
    r6 = (r11 + r6);
    MemoryInline::WriteResolved32(guest_range_0, 879u, (r11 + 880), r8);
    r4 = (r11 + 1492);
    r6 = (r6 + 376);
    r8 = (r11 + r3);
    r9 = (r0 * 124);
    MemoryInline::WriteResolved32(guest_range_0, 1003u, (r11 + 1004), r6);
    r10 = (r8 + 376);
    MemoryInline::WriteResolved32(guest_range_0, 1127u, (r11 + 1128), r10);
    r3 = 0;
    r6 = (r7 * 124);
    r8 = (r11 + r9);
    r0 = 2;
    r8 = (r8 + 376);
    r6 = (r11 + r6);
    MemoryInline::WriteResolved32(guest_range_0, 1251u, (r11 + 1252), r8);
    r6 = (r6 + 376);
    MemoryInline::WriteResolved32(guest_range_0, 1375u, (r11 + 1376), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1967u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1967u, (r11 + 1968), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1971u, (r11 + 1972), r4);
    }
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r11 + 1), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 1977u, (r11 + 1978), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + -27840), static_cast<uint8_t>(r3));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800000C2 gpr_write=0x80000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8014D294 func_8014D294 preserves=true fpr_mask=0x00000000
