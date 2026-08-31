#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F0440(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_805F0494_loc_0 = 0;
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805F0440;

loc_805F0440:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F0444:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0468;
    }
}

loc_805F044C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805F0450:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0470;
    }
}

loc_805F0454:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_805F0458:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0478;
    }
}

loc_805F045C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_805F0460:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0480;
    }
}

loc_805F0464:
{
    goto loc_805F0484;
}

loc_805F0468:
{
    r0 = 1;
    goto loc_805F0484;
}

loc_805F0470:
{
    r0 = 2;
    goto loc_805F0484;
}

loc_805F0478:
{
    r0 = 3;
    goto loc_805F0484;
}

loc_805F0480:
{
    r0 = 4;
}

loc_805F0484:
{
    r0 = (r0 * 24);
    r3 = 0x80890000u;
    r3 = (r3 + 23744);
    r8 = (r3 + r0);
    addr_lhax_805F0494_loc_0 = (r3 + r0);
    r7 = MemoryInline::FlatRead16(addr_lhax_805F0494_loc_0);
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = MemoryInline::FlatRead16((r8 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r3 = MemoryInline::FlatRead16((r8 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r8 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r7));
    r7 = MemoryInline::FlatRead16((r8 + 8));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r6));
    r6 = MemoryInline::FlatRead16((r8 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r8 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r8 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x000001C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F0440 func_805F0440 preserves=true fpr_mask=0x00000000
