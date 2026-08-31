#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008BB30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008BB30;

loc_8008BB30:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32(r29);
    r31 = r3;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8008BB60:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8008BB6C;
    }
}

loc_8008BB64:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008BCA4;
}

loc_8008BB6C:
{
}

loc_8008BB70:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8008BBC0;
    }
}

loc_8008BB74:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32(r29);
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8008BB8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008BB98;
    }
}

loc_8008BB90:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008BC9C;
}

loc_8008BB98:
{
    r3 = (r4 + 316);
    r4 = (r1 + 40);
    r5 = 20;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = r30;
    r0 = (r0 | 268435456);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008BC9C;
}

loc_8008BBC0:
{
    r3 = 0;
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8008BBD8;
    }
}

loc_8008BBC8:
{
    r0 = MemoryInline::FlatRead16((r4 + 316));
}

loc_8008BBD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8008BBD8;
    }
}

loc_8008BBD4:
{
    r3 = 1;
}

loc_8008BBD8:
{
}

loc_8008BBDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8008BC24;
    }
}

loc_8008BBE0:
{
    r3 = r30;
    r4 = (r1 + 16);
    r5 = (r1 + 14);
    r6 = (r1 + 12);
    r7 = (r1 + 10);
    r8 = (r1 + 8);
    // inline leaf 0x800ACFF0 (21 guest instruction(s))
}

loc_inl0_0x800ACFF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(127));
}

loc_inl0_0x800ACFF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_0x800AD000;
    }
}

loc_inl0_0x800ACFF8:
{
    r0 = 127;
    goto loc_inl0_0x800AD008;
}

loc_inl0_0x800AD000:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r3 & ~r0);
}

loc_inl0_0x800AD008:
{
    r9 = (r0 * 10);
    r3 = 0x80250000u;
    r3 = (r3 + -19752);
    r3_addr_1 = (r3 + r9);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
    r3 = (r3 + r9);
    MemoryInline::FlatWriteRam16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWriteRam16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWriteRam16(r6, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 6));
    MemoryInline::FlatWriteRam16(r7, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam16(r8, static_cast<uint16_t>(r0));
}

loc_inl0_cont_800ACFF0:
{
    // end of inlined leaf 0x800ACFF0
    r5 = MemoryInline::FlatRead16((r1 + 16));
    r3 = r29;
    r6 = MemoryInline::FlatRead16((r1 + 14));
    r4 = 2;
    r7 = MemoryInline::FlatRead16((r1 + 12));
    r8 = MemoryInline::FlatRead16((r1 + 10));
    r9 = MemoryInline::FlatRead16((r1 + 8));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008BC20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8008C530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8008BC9C;
}

loc_8008BC24:
{
    r0 = 0;
    r3 = 2;
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r3));
    r3 = r30;
    r4 = (r1 + 30);
    r5 = (r1 + 32);
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
    r6 = (r1 + 34);
    r7 = (r1 + 36);
    r8 = (r1 + 38);
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    // inline leaf 0x800ACFF0 (21 guest instruction(s))
}

loc_inl1_0x800ACFF0:
{
}

loc_inl1_0x800ACFF4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(127))) {
        goto loc_inl1_0x800AD000;
    }
}

loc_inl1_0x800ACFF8:
{
    r0 = 127;
    goto loc_inl1_0x800AD008;
}

loc_inl1_0x800AD000:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r3 & ~r0);
}

loc_inl1_0x800AD008:
{
    r9 = (r0 * 10);
    r3 = 0x80250000u;
    r3 = (r3 + -19752);
    r3_addr_2 = (r3 + r9);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r3 = (r3 + r9);
    MemoryInline::FlatWriteRam16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWriteRam16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWriteRam16(r6, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 6));
    MemoryInline::FlatWriteRam16(r7, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam16(r8, static_cast<uint16_t>(r0));
}

loc_inl1_cont_800ACFF0:
{
    // end of inlined leaf 0x800ACFF0
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32(r29);
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8008BC6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008BC78;
    }
}

loc_8008BC70:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008BC9C;
}

loc_8008BC78:
{
    r3 = (r4 + 316);
    r4 = (r1 + 20);
    r5 = 20;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = r30;
    r0 = (r0 | 268435456);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008BC9C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008BCA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC000FFB gpr_write=0xFC000FFB gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8008BB30 func_8008BB30 preserves=true fpr_mask=0x00000000
