#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80521198(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80521198;

loc_80521198:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805211BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80521210;
    }
}

loc_805211C0:
{
    r3 = r0;
    ctx->lr = 0x805211C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052570Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_805211D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(44))) {
        goto loc_80521210;
    }
}

loc_805211D4:
{
    r3 = MemoryInline::FlatRead8((r30 + 20));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r30 + 20), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80521210;
    }
}

loc_805211EC:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r4 = MemoryInline::FlatRead32((r30 + 24));
    ctx->lr = 0x805211F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052564Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 44;
    r3 = -1;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 16), r4);
    MemoryInline::FlatWrite8((r30 + 20), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r30 + 24), r0);
}

loc_80521210:
{
    r3 = MemoryInline::FlatRead32((r30 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80521218:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80521220;
    }
}

loc_8052121C:
{
    ctx->lr = 0x80521220u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052570Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80521220:
{
}

loc_80521224:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80521270;
    }
}

loc_80521228:
{
    r0 = MemoryInline::FlatRead8((r30 + 198));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80521230:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80521454;
    }
}

loc_80521234:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052123C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052125C;
    }
}

loc_80521240:
{
    ctx->lr = 0x80521244u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805255BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 44;
    r3 = 0;
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 16), r4);
    MemoryInline::FlatWrite32((r30 + 24), r3);
    MemoryInline::FlatWrite8((r30 + 20), static_cast<uint8_t>(r0));
}

loc_8052125C:
{
    r3 = MemoryInline::FlatRead32((r30 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80521264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80521454;
    }
}

loc_80521268:
{
    ctx->lr = 0x8052126Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805255BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80521454;
}

loc_80521270:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r9 = MemoryInline::FlatRead16((r30 + 44));
    r8 = MemoryInline::FlatRead16((r30 + 46));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80521280:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 52));
    r7 = MemoryInline::FlatRead8((r30 + 56));
    r6 = MemoryInline::FlatRead8((r30 + 57));
    r5 = MemoryInline::FlatRead8((r30 + 58));
    r4 = MemoryInline::FlatRead8((r30 + 59));
    r0 = MemoryInline::FlatRead8((r30 + 60));
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 68), 0, 17u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, (r30 + 68), r9);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r30 + 70), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r30 + 72), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r30 + 76), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r30 + 80), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r30 + 81), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r30 + 82), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r30 + 83), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 16u, (r30 + 84), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805212D8;
    }
}

loc_805212C4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805212D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805212DC;
}

loc_805212D8:
{
    r3 = -1;
}

loc_805212DC:
{
}

loc_805212E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_805212F8;
    }
}

loc_805212E4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r0 = MemoryInline::FlatRead8((r3 + 5772));
}

loc_805212F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80521348;
    }
}

loc_805212F8:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 17u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 8));
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 44), 0, 17u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r30 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r30 + 46), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r30 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r30 + 52), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 20));
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r30 + 56), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 21));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r30 + 57), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 14u, (r30 + 58), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 23));
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r30 + 59), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 24));
    MemoryInline::WriteResolved8(guest_range_3, 16u, (r30 + 60), static_cast<uint8_t>(r0));
    goto loc_80521384;
}

loc_80521348:
{
    r0 = MemoryInline::FlatRead8((r30 + 60));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -832));
    r4 = 0;
    r3 = 7;
    r0 = (r0 & -129);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 46), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteFloat32((r30 + 52), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    MemoryInline::FlatWrite8((r30 + 56), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 57), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 58), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 59), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 60), static_cast<uint8_t>(r0));
}

loc_80521384:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r0 = MemoryInline::FlatRead8((r3 + 16726));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80521394:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80521448;
    }
}

loc_80521398:
{
    r0 = MemoryInline::FlatRead8((r30 + 60));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
}

loc_805213A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805213B0;
    }
}

loc_805213A4:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_2 & 1);
}

loc_805213AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805213B8;
    }
}

loc_805213B0:
{
    r0 = 0;
    goto loc_805213FC;
}

loc_805213B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 48));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805213C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805213D0;
    }
}

loc_805213C8:
{
    r0 = 0;
    goto loc_805213FC;
}

loc_805213D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805213DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805213E8;
    }
}

loc_805213E0:
{
    r0 = 0;
    goto loc_805213FC;
}

loc_805213E8:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r0 = MemoryInline::FlatRead16((r30 + 68));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
}

loc_805213FC:
{
}

loc_80521400:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80521414;
    }
}

loc_80521404:
{
    r3 = MemoryInline::FlatRead16((r30 + 194));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 194), static_cast<uint16_t>(r0));
    goto loc_8052141C;
}

loc_80521414:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 194), static_cast<uint16_t>(r0));
}

loc_8052141C:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead8((r3 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80521428:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052143C;
    }
}

loc_8052142C:
{
    r3 = MemoryInline::FlatRead16((r30 + 196));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 196), static_cast<uint16_t>(r0));
    goto loc_80521454;
}

loc_8052143C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 196), static_cast<uint16_t>(r0));
    goto loc_80521454;
}

loc_80521448:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 194), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 196), static_cast<uint16_t>(r0));
}

loc_80521454:
{
    r3 = MemoryInline::FlatRead16((r30 + 92));
    r6 = MemoryInline::FlatRead16((r30 + 94));
    f8.d = MemoryInline::FlatReadFloat32((r30 + 96));
    f7.d = MemoryInline::FlatReadFloat32((r30 + 100));
    f6.d = MemoryInline::FlatReadFloat32((r30 + 104));
    f5.d = MemoryInline::FlatReadFloat32((r30 + 108));
    r5 = MemoryInline::FlatRead8((r30 + 112));
    r4 = MemoryInline::FlatRead8((r30 + 113));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 116));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 120));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 124));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 132));
    r0 = MemoryInline::FlatRead8((r30 + 136));
    MemoryInline::FlatWrite16((r30 + 144), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r30 + 8));
    MemoryInline::FlatWrite16((r30 + 146), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteFloat32((r30 + 148), f8.d);
    MemoryInline::FlatWriteFloat32((r30 + 152), f7.d);
    MemoryInline::FlatWriteFloat32((r30 + 156), f6.d);
    MemoryInline::FlatWriteFloat32((r30 + 160), f5.d);
    MemoryInline::FlatWrite8((r30 + 164), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r30 + 165), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteFloat32((r30 + 168), f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 172), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 176), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 180), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 184), f0.d);
    MemoryInline::FlatWrite8((r30 + 188), static_cast<uint8_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 32), 0, 45u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r3 + 32));
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r3 + 34));
    MemoryInline::FlatWrite16((r30 + 94), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r3 + 36));
    MemoryInline::FlatWriteFloat32((r30 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r3 + 40));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r3 + 44));
    MemoryInline::FlatWriteFloat32((r30 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r3 + 48));
    MemoryInline::FlatWriteFloat32((r30 + 108), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r3 + 52));
    MemoryInline::FlatWrite8((r30 + 112), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r3 + 53));
    MemoryInline::FlatWrite8((r30 + 113), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r3 + 56));
    MemoryInline::FlatWriteFloat32((r30 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r3 + 60));
    MemoryInline::FlatWriteFloat32((r30 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r3 + 64));
    MemoryInline::FlatWriteFloat32((r30 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r3 + 68));
    MemoryInline::FlatWriteFloat32((r30 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r3 + 72));
    MemoryInline::FlatWriteFloat32((r30 + 132), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 44u, (r3 + 76));
    MemoryInline::FlatWrite8((r30 + 136), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 198), static_cast<uint8_t>(r31));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80521198 func_80521198 preserves=true fpr_mask=0x00000000
