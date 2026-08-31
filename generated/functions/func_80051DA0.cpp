#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051DA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80051DA0;

loc_80051DA0:
{
    r4 = MemoryInline::FlatRead32(r3);
    r10 = 0;
    r5 = 1;
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 44));
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80051DBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80051DC0:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_80051DCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80051DD8;
    }
}

loc_80051DD0:
{
    r0 = (r4 + r0);
    goto loc_80051DDC;
}

loc_80051DD8:
{
    r0 = 0;
}

loc_80051DDC:
{
    r9 = (r0 + r10);
    r7 = (r4 + 64);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(64)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80051DE4:
{
    MemoryInline::FlatWrite32((r9 + 8), r6);
    r8 = (r4 + 324);
    MemoryInline::FlatWrite32((r9 + 12), r6);
    r0 = MemoryInline::FlatRead32((r9 + 16));
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80051E10;
    }
}

loc_80051DF8:
{
}

loc_80051DFC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_80051E10;
    }
}

loc_80051E00:
{
    r4 = MemoryInline::FlatRead32(r7);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_80051E10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80051E14:
{
    r0 = MemoryInline::FlatRead32((r9 + 16));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80051E34;
    }
}

loc_80051E1C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_80051E20:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80051E34;
    }
}

loc_80051E24:
{
    r4 = MemoryInline::FlatRead32(r8);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite32(r8, r0);
}

loc_80051E34:
{
    r10 = (r10 + 52);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80051DC0;
    }
}

loc_80051E3C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80051DA0 func_80051DA0 preserves=true fpr_mask=0x00000000
