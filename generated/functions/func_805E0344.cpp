#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E0344(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805E0344;

loc_805E0344:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRam32((r1 + 236), r27);
    MemoryInline::FlatWriteRam32((r1 + 240), r28);
    MemoryInline::FlatWriteRam32((r1 + 244), r29);
    MemoryInline::FlatWriteRam32((r1 + 248), r30);
    MemoryInline::FlatWriteRam32((r1 + 252), r31);
    r27 = r3;
    r3 = 107;
    ctx->lr = 0x805E0360u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083D44Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = 0;
    MemoryInline::FlatWriteRam32((r3 + 2316), r28);
    MemoryInline::FlatWriteRam32((r3 + 2120), r28);
    r3 = 108;
    ctx->lr = 0x805E0374u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808447CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r3 + 1776), r28);
    r3 = 109;
    ctx->lr = 0x805E0380u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8084DCECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r3 + 1732), r28);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_805E0398:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(128))) {
        goto loc_805E03A4;
    }
}

loc_805E039C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(129));
}

loc_805E03A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805E03B0;
    }
}

loc_805E03A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(127));
}

loc_805E03A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E03BC;
    }
}

loc_805E03AC:
{
    goto loc_805E03C4;
}

loc_805E03B0:
{
    r0 = 49;
    MemoryInline::FlatWriteRam32((r3 + 1736), r0);
    goto loc_805E03C4;
}

loc_805E03BC:
{
    r0 = 48;
    MemoryInline::FlatWriteRam32((r3 + 1736), r0);
}

loc_805E03C4:
{
    r3 = (r1 + 8);
    r4 = (r27 + 112);
    ctx->lr = 0x805E03D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C398u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052E454u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    r31 = 2;
    r29 = 5;
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 5980), r31);
    r0 = 3;
    r4 = (r27 + 112);
    r6 = MemoryInline::FlatRead32((r28 + -10456));
    r3 = MemoryInline::FlatRead32((r6 + 6016));
    r3 = (r3 & -2);
    MemoryInline::FlatWrite32((r6 + 6016), r3);
    r6 = MemoryInline::FlatRead32((r28 + -10456));
    r3 = MemoryInline::FlatRead32((r6 + 6016));
    r3 = (r3 & -3);
    MemoryInline::FlatWrite32((r6 + 6016), r3);
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    MemoryInline::FlatWrite32((r3 + 5984), r29);
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    MemoryInline::FlatWrite32((r3 + 5988), r5);
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    MemoryInline::FlatWrite32((r3 + 3352), r0);
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80531F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = 0x809C0000u;
    r5 = (r1 + 32);
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 392);
    ctx->lr = 0x805E0454u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805FA610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r31 * 240);
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + -10456), 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -10456));
    r31 = 7;
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 3112), r29);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -10456));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 3352), r29);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -10456));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 3592), r29);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -10456));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 3832), r29);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -10456));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 4072), r29);
    r4 = (r31 * 240);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -10456));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 3112), r29);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -10456));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 3352), r29);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -10456));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 3592), r29);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -10456));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 3832), r29);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -10456));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 4072), r29);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + -10456));
    r0 = MemoryInline::FlatRead32((r1 + 192));
    MemoryInline::FlatWrite32((r3 + 5976), r0);
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    ctx->lr = 0x805E04F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E39D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r4 = 107;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x805E050Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80520000u;
    MemoryInline::FlatWrite32((r27 + 104), r31);
    r3 = (r1 + 112);
    r5 = 12;
    r4 = (r4 + -15564);
    r6 = 5;
    ctx->lr = 0x805E0528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = MemoryInline::FlatRead32((r1 + 236));
    r28 = MemoryInline::FlatRead32((r1 + 240));
    r29 = MemoryInline::FlatRead32((r1 + 244));
    r30 = MemoryInline::FlatRead32((r1 + 248));
    r31 = MemoryInline::FlatRead32((r1 + 252));
    r0 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
// RECOMP_REGISTRATION base 0x805E0344 func_805E0344 preserves=true fpr_mask=0x00000000
