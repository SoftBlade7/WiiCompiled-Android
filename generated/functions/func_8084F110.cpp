#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8084F110(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8084F110;

loc_8084F110:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 2;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 116), r31);
    ctx->lr = 0x8084F148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = 0x808B0000u;
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r5 + -7740));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = 1;
    ctx->lr = 0x8084F164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80838884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = 0x809C0000u;
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + -10456), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r6 = (r4 * 240);
    r4 = 6;
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r29 = 0;
    r30 = 0;
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3300), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3540), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3780), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4020), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4260), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4500), r31);
    r6 = (r4 * 240);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3300), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3540), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 3780), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4020), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4260), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 4500), r31);
}

loc_8084F230:
{
    r3 = MemoryInline::FlatRead32((r28 + 72));
    r3_addr_2 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctx->lr = 0x8084F23Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x805BDF44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8084F240:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084F264;
    }
}

loc_8084F244:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = MemoryInline::FlatRead32((r28 + 72));
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    r4_addr_2 = (r4 + r30);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    ctr = r12;
    ctx->lr = 0x8084F264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
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
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8084F264:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_8084F270:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8084F230;
    }
}

loc_8084F274:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8084F110 func_8084F110 preserves=true fpr_mask=0x00000000
