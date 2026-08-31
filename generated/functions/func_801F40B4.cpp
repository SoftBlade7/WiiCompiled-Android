#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F40B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F40B4;

loc_801F40B4:
{
    MemoryInline::FlatWriteRam32((r1 + -560), r1);
    r1 = (r1 + -560);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F40C0:
{
    MemoryInline::FlatWriteRam32((r1 + 564), r0);
    MemoryInline::FlatWriteRam32((r1 + 556), r31);
    MemoryInline::FlatWriteRam32((r1 + 552), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 548), r29);
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F40E4;
    }
}

loc_801F40DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F40E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F40EC;
    }
}

loc_801F40E4:
{
    r3 = 1;
    goto loc_801F4264;
}

loc_801F40EC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F1530u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F40F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F40FC;
    }
}

loc_801F40F8:
{
    goto loc_801F4264;
}

loc_801F40FC:
{
    r31 = 0;
    r5 = 0;
    r0 = (r31 * 20);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 9));
}

loc_801F4114:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(5))) {
        goto loc_801F4120;
    }
}

loc_801F4118:
{
}

loc_801F411C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(15))) {
        goto loc_801F4134;
    }
}

loc_801F4120:
{
    r3 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r31 = (r4 + r0);
    goto loc_801F41D4;
}

loc_801F4134:
{
    r5 = 1;
    r0 = (r5 * 20);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 9));
}

loc_801F4148:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(5))) {
        goto loc_801F4154;
    }
}

loc_801F414C:
{
}

loc_801F4150:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(15))) {
        goto loc_801F4168;
    }
}

loc_801F4154:
{
    r3 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r31 = (r4 + r0);
    goto loc_801F41D4;
}

loc_801F4168:
{
    r5 = 2;
    r0 = (r5 * 20);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 9));
}

loc_801F417C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(5))) {
        goto loc_801F4188;
    }
}

loc_801F4180:
{
}

loc_801F4184:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(15))) {
        goto loc_801F419C;
    }
}

loc_801F4188:
{
    r3 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r31 = (r4 + r0);
    goto loc_801F41D4;
}

loc_801F419C:
{
    r5 = 3;
    r0 = (r5 * 20);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 9));
}

loc_801F41B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(5))) {
        goto loc_801F41BC;
    }
}

loc_801F41B4:
{
}

loc_801F41B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(15))) {
        goto loc_801F41D0;
    }
}

loc_801F41BC:
{
    r3 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r31 = (r4 + r0);
    goto loc_801F41D4;
}

loc_801F41D0:
{
    r5 = 4;
}

loc_801F41D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
}

loc_801F41D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F41E4;
    }
}

loc_801F41DC:
{
    r3 = 7;
    goto loc_801F4264;
}

loc_801F41E4:
{
    r3 = r29;
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F2134u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F41F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F41FC;
    }
}

loc_801F41F8:
{
    goto loc_801F4264;
}

loc_801F41FC:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r3 = r29;
    r4 = (r1 + 24);
    r7 = (r1 + 16);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(9) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 9);
    r6 = 1;
    r5 = (r31 * r0);
    ctx->lr = 0x801F421Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F1C1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F4220:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4228;
    }
}

loc_801F4224:
{
    goto loc_801F4264;
}

loc_801F4228:
{
    r3 = r29;
    r4 = (r1 + 24);
    r5 = (r1 + 12);
    ctx->lr = 0x801F4238u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F4280u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F4240:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4258;
    }
}

loc_801F4244:
{
    r4 = r31;
    r5 = r30;
    r3 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F3EE4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801F4260;
}

loc_801F4258:
{
    r3 = 6;
    goto loc_801F4264;
}

loc_801F4260:
{
    r3 = 0;
}

loc_801F4264:
{
    r0 = MemoryInline::FlatRead32((r1 + 564));
    r31 = MemoryInline::FlatRead32((r1 + 556));
    r30 = MemoryInline::FlatRead32((r1 + 552));
    r29 = MemoryInline::FlatRead32((r1 + 548));
    ctx->lr = r0;
    r1 = (r1 + 560);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F40B4 func_801F40B4 preserves=true fpr_mask=0x00000000
