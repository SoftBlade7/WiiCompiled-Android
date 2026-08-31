#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BC138(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800BC138;

loc_800BC138:
{
    // nop
    // nop
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x800BC150u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BCCC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800BC150:
{
    r0 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BC158:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800BC164;
    }
}

loc_800BC15C:
{
    r0 = MemoryInline::FlatRead32((r13 + -32292));
    goto loc_800BC1BC;
}

loc_800BC164:
{
    ctx->lr = 0x800BC168u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800BC16C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC178;
    }
}

loc_800BC170:
{
    r0 = 6;
    goto loc_800BC1BC;
}

loc_800BC178:
{
    r5 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = (r13 + -26976);
}

loc_800BC184:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800BC18C;
    }
}

loc_800BC188:
{
    r3 = (r5 + 6972);
}

loc_800BC18C:
{
    r4 = MemoryInline::FlatRead8(r3);
    r3 = 1;
    r0 = (r4 & 4);
}

loc_800BC198:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC1A8;
    }
}

loc_800BC19C:
{
    r0 = (r4 & 8);
}

loc_800BC1A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC1A8;
    }
}

loc_800BC1A4:
{
    r3 = 0;
}

loc_800BC1A8:
{
}

loc_800BC1AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC1B8;
    }
}

loc_800BC1B0:
{
    r0 = 5;
    goto loc_800BC1BC;
}

loc_800BC1B8:
{
    r0 = MemoryInline::FlatRead32((r5 + 6976));
}

loc_800BC1BC:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_800BC1C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800BC150;
    }
}

loc_800BC1CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BC1D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC354;
    }
}

loc_800BC1D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_800BC1DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC354;
    }
}

loc_800BC1E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_800BC1E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC354;
    }
}

loc_800BC1E8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BC1F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC354;
    }
}

loc_800BC1F4:
{
    r0 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BC1FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800BC208;
    }
}

loc_800BC200:
{
    r0 = MemoryInline::FlatRead32((r13 + -32292));
    goto loc_800BC260;
}

loc_800BC208:
{
    ctx->lr = 0x800BC20Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800BC210:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC21C;
    }
}

loc_800BC214:
{
    r0 = 6;
    goto loc_800BC260;
}

loc_800BC21C:
{
    r5 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = (r13 + -26976);
}

loc_800BC228:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800BC230;
    }
}

loc_800BC22C:
{
    r3 = (r5 + 6972);
}

loc_800BC230:
{
    r4 = MemoryInline::FlatRead8(r3);
    r3 = 1;
    r0 = (r4 & 4);
}

loc_800BC23C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC24C;
    }
}

loc_800BC240:
{
    r0 = (r4 & 8);
}

loc_800BC244:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC24C;
    }
}

loc_800BC248:
{
    r3 = 0;
}

loc_800BC24C:
{
}

loc_800BC250:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC25C;
    }
}

loc_800BC254:
{
    r0 = 5;
    goto loc_800BC260;
}

loc_800BC25C:
{
    r0 = MemoryInline::FlatRead32((r5 + 6976));
}

loc_800BC260:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_800BC26C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800BC1F4;
    }
}

loc_800BC270:
{
    r0 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BC27C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800BC288;
    }
}

loc_800BC280:
{
    r0 = MemoryInline::FlatRead32((r13 + -32292));
    goto loc_800BC2E0;
}

loc_800BC288:
{
    ctx->lr = 0x800BC28Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800BC290:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC29C;
    }
}

loc_800BC294:
{
    r0 = 6;
    goto loc_800BC2E0;
}

loc_800BC29C:
{
    r5 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = (r13 + -26976);
}

loc_800BC2A8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800BC2B0;
    }
}

loc_800BC2AC:
{
    r3 = (r5 + 6972);
}

loc_800BC2B0:
{
    r4 = MemoryInline::FlatRead8(r3);
    r3 = 1;
    r0 = (r4 & 4);
}

loc_800BC2BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC2CC;
    }
}

loc_800BC2C0:
{
    r0 = (r4 & 8);
}

loc_800BC2C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC2CC;
    }
}

loc_800BC2C8:
{
    r3 = 0;
}

loc_800BC2CC:
{
}

loc_800BC2D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC2DC;
    }
}

loc_800BC2D4:
{
    r0 = 5;
    goto loc_800BC2E0;
}

loc_800BC2DC:
{
    r0 = MemoryInline::FlatRead32((r5 + 6976));
}

loc_800BC2E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r13 + -32292), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800BC2EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC304;
    }
}

loc_800BC2F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC2FC;
    }
}

loc_800BC2F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 6984));
    goto loc_800BC308;
}

loc_800BC2FC:
{
    r0 = 0;
    goto loc_800BC308;
}

loc_800BC304:
{
    r0 = MemoryInline::FlatRead32((r13 + -26980));
}

loc_800BC308:
{
    MemoryInline::FlatWrite32((r13 + -26980), r0);
    r0 = MemoryInline::FlatRead8((r3 + 6972));
    MemoryInline::FlatWrite8((r13 + -26976), static_cast<uint8_t>(r0));
    ctx->lr = 0x800BC318u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800BC31C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC324;
    }
}

loc_800BC320:
{
    ctx->lr = 0x800BC324u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD6D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_800BC324:
{
    ctx->lr = 0x800BC328u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD810u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    ctx->lr = 0x800BC334u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80198D58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->lr = 0x800BC340u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80198D58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x800BC34Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80198D58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26984), r0);
}

loc_800BC354:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800BC138 func_800BC138 preserves=true fpr_mask=0x00000000
