#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EEBC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800EEBC4;

loc_800EEBC4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_800EEBD0:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    r7 = MemoryInline::FlatRead32((r13 + -26820));
    MemoryInline::FlatWrite32((r7 + 23000), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(27))) {
        goto loc_800EEC10;
    }
}

loc_800EEBE4:
{
    r8 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r8 + 23004));
}

loc_800EEBF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-3))) {
        goto loc_800EEC10;
    }
}

loc_800EEBF4:
{
    r7 = MemoryInline::FlatRead32((r8 + 22996));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(5));
}

loc_800EEBFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EEC10;
    }
}

loc_800EEC00:
{
    r0 = (r7 + 1);
    MemoryInline::FlatWrite32((r8 + 22996), r0);
    MemoryInline::FlatWrite32((r13 + -26816), r4);
    goto loc_800EECDC;
}

loc_800EEC10:
{
    r4 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 22996), r0);
    r4 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r4 + 23004));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800EEC28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800EEC34;
    }
}

loc_800EEC2C:
{
    MemoryInline::FlatWrite32((r13 + -26816), r3);
    goto loc_800EECDC;
}

loc_800EEC34:
{
}

loc_800EEC38:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(27))) {
        goto loc_800EEC4C;
    }
}

loc_800EEC3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-12));
}

loc_800EEC40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800EEC4C;
    }
}

loc_800EEC44:
{
    MemoryInline::FlatWrite32((r13 + -26816), r5);
    goto loc_800EECDC;
}

loc_800EEC4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(27));
}

loc_800EEC50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EEC64;
    }
}

loc_800EEC54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_800EEC58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800EEC64;
    }
}

loc_800EEC5C:
{
    MemoryInline::FlatWrite32((r13 + -26816), r6);
    goto loc_800EECDC;
}

loc_800EEC64:
{
    r4 = 0x80280000u;
    r5 = r0;
    r4 = (r4 + -21552);
    r3 = 16777216;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800EEC7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead32((r13 + -26820));
    r4 = 0x80280000u;
    r5 = 0x802F0000u;
    r3 = 16777216;
    r7 = MemoryInline::FlatRead32((r6 + 23004));
    r4 = (r4 + -21576);
    r6 = (r7 + 4);
    r0 = (-4 - r7);
    r0 = ~(r6 | r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r6 + -29000);
    MemoryInline::FlatWriteRam32((r5 + 7352), r0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800EECB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -26820));
    r3 = 0;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 23348));
    ctr = r12;
    ctx->lr = 0x800EECCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0;
    r0 = 25;
    MemoryInline::FlatWrite32((r13 + -26820), r3);
    MemoryInline::FlatWrite32((r13 + -26816), r0);
}

loc_800EECDC:
{
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
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800EEBC4 func_800EEBC4 preserves=true fpr_mask=0x00000000
