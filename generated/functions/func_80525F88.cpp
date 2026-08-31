#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80525F88(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80525F88;

loc_80525F88:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r9 = 0;
    r5 = -1;
    r8 = 0x80890000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 163u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r4);
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 8), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 9), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 160u, (r3 + 164), static_cast<uint8_t>(r9));
    r8 = (r8 + -672);
    r7 = MemoryInline::FlatRead8(r8);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    r6 = MemoryInline::FlatRead8((r8 + 1));
    r5 = MemoryInline::FlatRead8((r8 + 2));
    r4 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 92u, (r3 + 96), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 93u, (r3 + 97), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 94u, (r3 + 98), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 95u, (r3 + 99), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 100), r9);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_0, 161u, (r3 + 165), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 162u, (r3 + 166), static_cast<uint8_t>(r9));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x000003F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80525F88 func_80525F88 preserves=true fpr_mask=0x00000000
