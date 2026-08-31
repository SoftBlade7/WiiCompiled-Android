#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020116C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020116C;

loc_8020116C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_80201178:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8020119C;
    }
}

loc_80201194:
{
    r29 = 0;
    goto loc_802011A4;
}

loc_8020119C:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r29 = MemoryInline::FlatRead32((r4 + 612));
}

loc_802011A4:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r30 + 12);
    r3 = (r3 + 4);
    // inline leaf 0x801FD640 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 44), r4);
    // end of inlined leaf 0x801FD640
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 608));
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::FlatRead32((r30 + 32));
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead16(r29);
    r0 = MemoryInline::FlatRead32((r3 + 620));
    r3 = MemoryInline::FlatRead8((r29 + 33));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802011DC:
{
    r29 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201234;
    }
}

loc_802011E4:
{
    r3 = r30;
    r4 = (r31 + 12);
    ctx->lr = 0x802011F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F65BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802011F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802011FC;
    }
}

loc_802011F8:
{
    goto loc_80201274;
}

loc_802011FC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 608));
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r29));
    r0 = (r0 * r29);
    r5 = (r3 - r0);
    r0 = (0 - r5);
    r3 = (r0 | r5);
    r0 = (r29 - r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r0 & r3);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80201240;
}

loc_80201234:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 12), r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_80201240:
{
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r3 = 0;
    r0 = MemoryInline::FlatRead16((r4 + 632));
    r0 = (r0 & 3);
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 640));
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r0 = MemoryInline::FlatRead16((r30 + 48));
    MemoryInline::FlatWrite32((r31 + 24), r0);
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead16((r4 + 634));
    MemoryInline::FlatWrite32((r31 + 28), r0);
}

loc_80201274:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8020116C func_8020116C preserves=true fpr_mask=0x00000000
