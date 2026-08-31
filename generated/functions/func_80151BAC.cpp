#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80151BAC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];

    goto loc_80151BAC;

loc_80151BAC:
{
    r3 = 0x80150000u;
    r4 = 0x80340000u;
    r3 = (r3 + 7208);
    r11 = 0x80150000u;
    r4 = (r4 + -25816);
    r10 = 0x80150000u;
    r9 = 0x80150000u;
    r8 = 0x80150000u;
    r7 = 0x80150000u;
    r6 = 0x80150000u;
    r5 = 0x80150000u;
    MemoryInline::FlatWriteRam32((r4 + 20), r3);
    r4 = (r4 + 20);
    r0 = 0;
    r11 = (r11 + 7348);
    r10 = (r10 + 7608);
    r9 = (r9 + 7872);
    r8 = (r8 + 8140);
    r7 = (r7 + 8136);
    r6 = (r6 + 8432);
    r5 = (r5 + 9104);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 4), r11);
    r3 = 3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 12), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 16), r9);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 20), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 32), r6);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 36), r5);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8014A060u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE006 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80151BAC func_80151BAC preserves=true fpr_mask=0x00000000
