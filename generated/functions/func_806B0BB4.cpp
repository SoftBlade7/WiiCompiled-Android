#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B0BB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806B0BB4;

loc_806B0BB4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r31;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
}

loc_806B0BD8:
{
    r3 = MemoryInline::FlatRead32((r30 + 496));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0BE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0BF8;
    }
}

loc_806B0BE4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r31 + 1836);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x806B0BF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0BF8:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
}

loc_806B0C04:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(44))) {
        goto loc_806B0BD8;
    }
}

loc_806B0C08:
{
    r30 = r31;
    r29 = 0;
}

loc_806B0C10:
{
    r3 = MemoryInline::FlatRead32((r30 + 728));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0C18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0C30;
    }
}

loc_806B0C1C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r31 + 1836);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x806B0C30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0C30:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
}

loc_806B0C3C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(16))) {
        goto loc_806B0C10;
    }
}

loc_806B0C40:
{
    r0 = MemoryInline::FlatRead32((r31 + 292));
}

loc_806B0C48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B0C88;
    }
}

loc_806B0C4C:
{
    r30 = r31;
    r29 = 0;
}

loc_806B0C54:
{
    r3 = MemoryInline::FlatRead32((r30 + 792));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0C5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0C74;
    }
}

loc_806B0C60:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r31 + 1836);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x806B0C74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0C74:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
}

loc_806B0C80:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(18))) {
        goto loc_806B0C54;
    }
}

loc_806B0C84:
{
    goto loc_806B0CC8;
}

loc_806B0C88:
{
}

loc_806B0C8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_806B0CC8;
    }
}

loc_806B0C90:
{
    r30 = r31;
    r29 = 0;
}

loc_806B0C98:
{
    r3 = MemoryInline::FlatRead32((r30 + 792));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0CA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0CB8;
    }
}

loc_806B0CA4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r31 + 1836);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x806B0CB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0CB8:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
}

loc_806B0CC4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(9))) {
        goto loc_806B0C98;
    }
}

loc_806B0CC8:
{
    r0 = MemoryInline::FlatRead32((r31 + 292));
}

loc_806B0CD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B0D14;
    }
}

loc_806B0CD4:
{
    r29 = 0;
    r30 = 0;
}

loc_806B0CDC:
{
    r3 = MemoryInline::FlatRead32((r31 + 1324));
    r3_addr_2 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0CE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0D00;
    }
}

loc_806B0CEC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r31 + 1836);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x806B0D00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0D00:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
}

loc_806B0D0C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(8))) {
        goto loc_806B0CDC;
    }
}

loc_806B0D10:
{
    goto loc_806B0D58;
}

loc_806B0D14:
{
}

loc_806B0D18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_806B0D58;
    }
}

loc_806B0D1C:
{
    r29 = 0;
    r30 = 0;
}

loc_806B0D24:
{
    r3 = MemoryInline::FlatRead32((r31 + 1552));
    r3_addr_4 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0D30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0D48;
    }
}

loc_806B0D34:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r31 + 1836);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x806B0D48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0D48:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
}

loc_806B0D54:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(8))) {
        goto loc_806B0D24;
    }
}

loc_806B0D58:
{
    r0 = MemoryInline::FlatRead32((r31 + 292));
}

loc_806B0D60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B0DA4;
    }
}

loc_806B0D64:
{
    r29 = 0;
    r30 = 0;
}

loc_806B0D6C:
{
    r3 = MemoryInline::FlatRead32((r31 + 1328));
    r3_addr_7 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0D78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0D90;
    }
}

loc_806B0D7C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r31 + 1836);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x806B0D90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0D90:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(36));
}

loc_806B0D9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806B0D6C;
    }
}

loc_806B0DA0:
{
    goto loc_806B0DE8;
}

loc_806B0DA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806B0DA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B0DE8;
    }
}

loc_806B0DAC:
{
    r29 = 0;
    r30 = 0;
}

loc_806B0DB4:
{
    r3 = MemoryInline::FlatRead32((r31 + 1556));
    r3_addr_9 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B0DC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0DD8;
    }
}

loc_806B0DC4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r31 + 1836);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x806B0DD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0DD8:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(28));
}

loc_806B0DE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806B0DB4;
    }
}

loc_806B0DE8:
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806B0BB4 func_806B0BB4 preserves=true fpr_mask=0x00000000
