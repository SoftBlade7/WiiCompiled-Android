#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072D230(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8072D230;

loc_8072D230:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r5 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072D260:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
    r28 = MemoryInline::FlatRead32((r5 + 332));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D278;
    }
}

loc_8072D26C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8072D270:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D2E8;
    }
}

loc_8072D274:
{
    goto loc_8072D4D4;
}

loc_8072D278:
{
    r3 = r28;
    ctx->lr = 0x8072D280u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80733C60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20));
}

loc_8072D284:
{
    r28 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D4D4;
    }
}

loc_8072D28C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8072D2A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r3));
}

loc_8072D2AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8072D2DC;
    }
}

loc_8072D2B0:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8072D2C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_8072D4D4;
}

loc_8072D2DC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    goto loc_8072D4D4;
}

loc_8072D2E8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 12), 0, 32u, true, false);
    r30 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 12));
}

loc_8072D2F0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8072D304;
    }
}

loc_8072D2F4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 36));
}

loc_8072D2FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072D304;
    }
}

loc_8072D300:
{
    goto loc_8072D398;
}

loc_8072D304:
{
    r30 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 16));
}

loc_8072D30C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8072D320;
    }
}

loc_8072D310:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 40));
}

loc_8072D318:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072D320;
    }
}

loc_8072D31C:
{
    goto loc_8072D398;
}

loc_8072D320:
{
    r30 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 20));
    r5 = (r4 + 8);
}

loc_8072D32C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8072D340;
    }
}

loc_8072D330:
{
    r0 = MemoryInline::FlatRead32((r5 + 36));
}

loc_8072D338:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072D340;
    }
}

loc_8072D33C:
{
    goto loc_8072D398;
}

loc_8072D340:
{
    r30 = MemoryInline::FlatRead32((r5 + 16));
}

loc_8072D348:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8072D35C;
    }
}

loc_8072D34C:
{
    r0 = MemoryInline::FlatRead32((r5 + 40));
}

loc_8072D354:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072D35C;
    }
}

loc_8072D358:
{
    goto loc_8072D398;
}

loc_8072D35C:
{
    r30 = MemoryInline::FlatRead32((r5 + 20));
}

loc_8072D364:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8072D378;
    }
}

loc_8072D368:
{
    r0 = MemoryInline::FlatRead32((r5 + 44));
}

loc_8072D370:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072D378;
    }
}

loc_8072D374:
{
    goto loc_8072D398;
}

loc_8072D378:
{
    r30 = MemoryInline::FlatRead32((r5 + 24));
}

loc_8072D380:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8072D394;
    }
}

loc_8072D384:
{
    r0 = MemoryInline::FlatRead32((r5 + 48));
}

loc_8072D38C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8072D394;
    }
}

loc_8072D390:
{
    goto loc_8072D398;
}

loc_8072D394:
{
    r30 = 0;
}

loc_8072D398:
{
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 12));
}

loc_8072D3A0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072D3B4;
    }
}

loc_8072D3A4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 36));
}

loc_8072D3AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D3B4;
    }
}

loc_8072D3B0:
{
    goto loc_8072D448;
}

loc_8072D3B4:
{
    r29 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 16));
}

loc_8072D3BC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072D3D0;
    }
}

loc_8072D3C0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 40));
}

loc_8072D3C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D3D0;
    }
}

loc_8072D3CC:
{
    goto loc_8072D448;
}

loc_8072D3D0:
{
    r4 = (r4 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 12), 0, 40u, true, false);
    r29 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r4 + 12));
}

loc_8072D3DC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072D3F0;
    }
}

loc_8072D3E0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 36));
}

loc_8072D3E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D3F0;
    }
}

loc_8072D3EC:
{
    goto loc_8072D448;
}

loc_8072D3F0:
{
    r29 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 16));
}

loc_8072D3F8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072D40C;
    }
}

loc_8072D3FC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 40));
}

loc_8072D404:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D40C;
    }
}

loc_8072D408:
{
    goto loc_8072D448;
}

loc_8072D40C:
{
    r29 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 20));
}

loc_8072D414:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072D428;
    }
}

loc_8072D418:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r4 + 44));
}

loc_8072D420:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D428;
    }
}

loc_8072D424:
{
    goto loc_8072D448;
}

loc_8072D428:
{
    r29 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 24));
}

loc_8072D430:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072D444;
    }
}

loc_8072D434:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r4 + 48));
}

loc_8072D43C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8072D444;
    }
}

loc_8072D440:
{
    goto loc_8072D448;
}

loc_8072D444:
{
    r29 = 0;
}

loc_8072D448:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = r28;
    ctx->lr = 0x8072D45Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80733CE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072D460:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D4D4;
    }
}

loc_8072D464:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8072D468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D488;
    }
}

loc_8072D46C:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r28 + 416), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 420), r3);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_8072D4D4;
}

loc_8072D488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8072D48C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072D4B0;
    }
}

loc_8072D490:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 416), static_cast<uint8_t>(r0));
    r3 = 2;
    MemoryInline::FlatWrite32((r28 + 420), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 12), r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_8072D4D4;
}

loc_8072D4B0:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072D4B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072D4D4;
    }
}

loc_8072D4BC:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r28 + 416), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 420), r3);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_8072D4D4:
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
// RECOMP_REGISTRATION base 0x8072D230 func_8072D230 preserves=true fpr_mask=0x00000000
