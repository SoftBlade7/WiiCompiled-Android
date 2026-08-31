#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80804108(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80804108;

loc_80804108:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRam32((r1 + 252), r31);
    MemoryInline::FlatWriteRam32((r1 + 248), r30);
    MemoryInline::FlatWriteRam32((r1 + 244), r29);
    MemoryInline::FlatWriteRam32((r1 + 240), r28);
    r28 = r3;
    ctx->lr = 0x8080412Cu;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081AA58u>(ctx);
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x80804140u;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = 0x808B0000u;
    r6 = r3;
    r30 = (r30 + -20720);
    r3 = (r1 + 104);
    r5 = (r30 + 32);
    r4 = 128;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80804160u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80011938u>(ctx);
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = 0x809C0000u;
    r5 = (r1 + 104);
    r3 = MemoryInline::FlatRead32((r31 + -10440));
    r4 = 1;
    r6 = 0;
    ctx->lr = 0x80804178u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805411FCu>(ctx);
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8080417C:
{
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808041C8;
    }
}

loc_80804184:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x80804198u;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r6 = r3;
    r3 = (r1 + 104);
    r5 = (r30 + 40);
    r4 = 128;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x808041B0u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80011938u>(ctx);
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + -10440));
    r5 = (r1 + 104);
    r4 = 1;
    r6 = 0;
    ctx->lr = 0x808041C4u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805411FCu>(ctx);
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = r3;
}

loc_808041C8:
{
    r3 = 116;
    ctx->lr = 0x808041D0u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808041D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808041E0;
    }
}

loc_808041D8:
{
    r4 = r29;
    ctx->lr = 0x808041E0u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807C4CE8u>(ctx);
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808041E0:
{
    MemoryInline::FlatWrite32((r28 + 372), r3);
    r3 = (r1 + 56);
    r4 = (r28 + 288);
    r5 = (r28 + 276);
    ctx->lr = 0x808041F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = (r1 + 56);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FABCu>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 172));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 256u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r1 + 56));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 96u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r1 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 56u, (r1 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 60u, (r1 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r1 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r1 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 72u, (r1 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 76u, (r1 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 80u, (r1 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 84u, (r1 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 88u, (r1 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 92u, (r1 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r1 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r1 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 96), f0.d);
    r3 = MemoryInline::FlatRead32((r28 + 372));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r1 + 56));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 96u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r1 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 56u, (r1 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 60u, (r1 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r1 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r1 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 72u, (r1 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 76u, (r1 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 80u, (r1 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 84u, (r1 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 88u, (r1 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 92u, (r1 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r3 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r3 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r1 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r3 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r3 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r1 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r3 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r3 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r3 + 96), f0.d);
    r3 = MemoryInline::FlatRead32((r28 + 172));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    r3 = MemoryInline::FlatRead32((r28 + 372));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 240u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_2, 244u, (r1 + 252));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 240u, (r1 + 248));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 232u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 236u, (r1 + 244));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 232u, (r1 + 240));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 252u, (r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80804108 func_80804108 preserves=true fpr_mask=0x00000000
