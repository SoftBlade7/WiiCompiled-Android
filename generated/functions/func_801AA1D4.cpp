#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AA1D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AA1D4;

loc_801AA1D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r30 + 712));
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801AA1FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA2FC;
    }
}

loc_801AA200:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AA214;
    }
}

loc_801AA204:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801AA208:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA220;
    }
}

loc_801AA20C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AA238;
    }
}

loc_801AA210:
{
    goto loc_801AA2FC;
}

loc_801AA214:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_801AA218:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AA2FC;
    }
}

loc_801AA21C:
{
    goto loc_801AA244;
}

loc_801AA220:
{
    r0 = MemoryInline::FlatRead32((r30 + 716));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AA228:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801AA308;
    }
}

loc_801AA22C:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A9960u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801AA308;
}

loc_801AA238:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25316), r0);
    goto loc_801AA308;
}

loc_801AA244:
{
    r4 = MemoryInline::FlatRead32((r30 + 736));
    r5 = MemoryInline::FlatRead32((r30 + 740));
}

loc_801AA250:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801AA260;
    }
}

loc_801AA254:
{
    r3 = MemoryInline::FlatRead32((r30 + 732));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    goto loc_801AA264;
}

loc_801AA260:
{
    MemoryInline::FlatWrite32((r4 + 740), r5);
}

loc_801AA264:
{
}

loc_801AA268:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801AA278;
    }
}

loc_801AA26C:
{
    r3 = MemoryInline::FlatRead32((r30 + 732));
    MemoryInline::FlatWrite32(r3, r4);
    goto loc_801AA27C;
}

loc_801AA278:
{
    MemoryInline::FlatWrite32((r5 + 736), r4);
}

loc_801AA27C:
{
    r0 = MemoryInline::FlatRead32((r30 + 716));
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 732), r3);
}

loc_801AA28C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801AA308;
    }
}

loc_801AA290:
{
    r3 = MemoryInline::FlatRead32((r30 + 752));
}

loc_801AA298:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801AA308;
    }
}

loc_801AA29C:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_801AA2A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 716));
}

loc_801AA2A8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801AA308;
    }
}

loc_801AA2AC:
{
    r4 = MemoryInline::FlatRead32((r3 + 724));
    r5 = MemoryInline::FlatRead32((r3 + 756));
    goto loc_801AA2D8;
}

loc_801AA2B8:
{
    r6 = MemoryInline::FlatRead32(r5);
}

loc_801AA2C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801AA2D4;
    }
}

loc_801AA2C4:
{
    r0 = MemoryInline::FlatRead32((r6 + 720));
}

loc_801AA2CC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_801AA2D4;
    }
}

loc_801AA2D0:
{
    r4 = r0;
}

loc_801AA2D4:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
}

loc_801AA2D8:
{
}

loc_801AA2DC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801AA2B8;
    }
}

loc_801AA2E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 720));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_801AA2E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA308;
    }
}

loc_801AA2EC:
{
    ctx->lr = 0x801AA2F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A9A04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AA2F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AA2A0;
    }
}

loc_801AA2F8:
{
    goto loc_801AA308;
}

loc_801AA2FC:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801AA394;
}

loc_801AA308:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r0 = MemoryInline::FlatRead16((r30 + 714));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AA318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA360;
    }
}

loc_801AA31C:
{
    r4 = MemoryInline::FlatRead32((r30 + 764));
    r5 = MemoryInline::FlatRead32((r30 + 768));
}

loc_801AA328:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801AA338;
    }
}

loc_801AA32C:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 224), r5);
    goto loc_801AA33C;
}

loc_801AA338:
{
    MemoryInline::FlatWrite32((r4 + 768), r5);
}

loc_801AA33C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801AA340:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AA350;
    }
}

loc_801AA344:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 220), r4);
    goto loc_801AA354;
}

loc_801AA350:
{
    MemoryInline::FlatWrite32((r5 + 764), r4);
}

loc_801AA354:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 712), static_cast<uint16_t>(r0));
    goto loc_801AA368;
}

loc_801AA360:
{
    r0 = 8;
    MemoryInline::FlatWrite16((r30 + 712), static_cast<uint16_t>(r0));
}

loc_801AA368:
{
    r3 = r30;
    ctx->lr = 0x801AA370u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A8088u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r30 + 744);
    ctx->lr = 0x801AA378u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AAAA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r13 + -25316));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AA380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA38C;
    }
}

loc_801AA384:
{
    r3 = 0;
    ctx->lr = 0x801AA38Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A9C08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AA38C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801AA394:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AA1D4 func_801AA1D4 preserves=true fpr_mask=0x00000000
