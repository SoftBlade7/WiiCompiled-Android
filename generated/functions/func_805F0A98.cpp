#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F0A98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F0A98;

loc_805F0A98:
{
    r8 = (r3 + 8);
    r4 = 0x808C0000u;
    r4 = (r4 + -25984);
    r7 = 0;
    r6 = -1;
    r0 = 3;
    r10 = r8;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r7);
    r9 = 0;
    r5 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
    }
    ctr = r0;
}

loc_805F0ACC:
{
}

loc_805F0AD0:
{
    MemoryInline::FlatWrite32((r10 + 4), r6);
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(2))) {
        goto loc_805F0AE0;
    }
}

loc_805F0AD8:
{
}

loc_805F0ADC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(8))) {
        goto loc_805F0AE8;
    }
}

loc_805F0AE0:
{
    r4 = (r8 + r9);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805F0AE8:
{
    r4 = (r8 + r9);
    r9 = (r9 + 1);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r7));
}

loc_805F0AF8:
{
    MemoryInline::FlatWrite32((r10 + 8), r6);
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(2))) {
        goto loc_805F0B08;
    }
}

loc_805F0B00:
{
}

loc_805F0B04:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(8))) {
        goto loc_805F0B10;
    }
}

loc_805F0B08:
{
    r4 = (r8 + r9);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805F0B10:
{
    r4 = (r8 + r9);
    r9 = (r9 + 1);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r7));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
}

loc_805F0B20:
{
    MemoryInline::FlatWrite32((r10 + 12), r6);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F0B30;
    }
}

loc_805F0B28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(8));
}

loc_805F0B2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F0B38;
    }
}

loc_805F0B30:
{
    r4 = (r8 + r9);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805F0B38:
{
    r4 = (r8 + r9);
    r9 = (r9 + 1);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r7));
    r10 = (r10 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F0ACC;
    }
}

loc_805F0B4C:
{
    r4 = 0x80890000u;
    r6 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 23712));
    r7 = 0x808C0000u;
    r7 = (r7 + -26064);
    r5 = 0x80000000u;
    r4 = 1;
    r0 = -1;
    MemoryInline::FlatWrite32(r8, r7);
    MemoryInline::FlatWrite32((r8 + 52), r6);
    MemoryInline::FlatWrite32((r8 + 56), r5);
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r3 + 68), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 72), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 80u, (r3 + 80), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r6);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F8 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F0A98 func_805F0A98 preserves=true fpr_mask=0x00000000
