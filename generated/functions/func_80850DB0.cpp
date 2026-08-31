#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80850DB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80850DB0;

loc_80850DB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 2018;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWrite32((r3 + 996), r0);
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052E454u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r6 = MemoryInline::FlatRead32((r31 + -10456));
    r4 = 0x809C0000u;
    r0 = 1;
    r3 = r30;
    r5 = MemoryInline::FlatRead32((r6 + 6016));
    r5 = (r5 & -2);
    MemoryInline::FlatWrite32((r6 + 6016), r5);
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 292), r0);
    ctx->lr = 0x80850E08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 72));
    r0 = 7;
    r6 = 0x808B0000u;
    r3 = r30;
    r7 = MemoryInline::FlatRead32(r4);
    r4 = (r1 + 8);
    r5 = 1;
    MemoryInline::FlatWrite32((r7 + 576), r0);
    r0 = MemoryInline::FlatRead32((r6 + -7064));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x80850E34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + -10456), 0, 4u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r0 = 2;
    r6 = 0;
    r4 = 5;
    r5 = MemoryInline::FlatRead32((r7 + 6016));
    r3 = -1;
    r5 = (r5 & -3);
    MemoryInline::FlatWrite32((r7 + 6016), r5);
    ctr = r0;
}

loc_80850E58:
{
    r5 = (r6 & 255);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r5 = (r5 * 240);
    r6 = (r6 + 6);
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3112), r4);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3108), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3104), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3300), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3352), r4);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3348), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3344), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3540), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3592), r4);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3588), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3584), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3780), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3832), r4);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3828), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 3824), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 4020), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 4072), r4);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 4068), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 4064), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 4260), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 4312), r4);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 4308), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 4304), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + -10456));
    r5 = (r7 + r5);
    MemoryInline::FlatWrite32((r5 + 4500), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80850E58;
    }
}

loc_80850F88:
{
    r31 = 0x809C0000u;
    r4 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = (r4 + -7024);
    r3 = MemoryInline::FlatRead32((r30 + 3252));
    r4 = (r4 + 140);
    r6 = MemoryInline::FlatRead32((r5 + 152));
    r7 = 2;
    r5 = MemoryInline::FlatRead32((r30 + 68));
    r6 = MemoryInline::FlatRead8((r6 + 1256));
    ctx->lr = 0x80850FB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063E3DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 96), r0);
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    // inline leaf 0x805E32AC (6 guest instruction(s))
    r0 = 0;
    r4 = 2;
    MemoryInline::FlatWrite32((r3 + 112), r4);
    MemoryInline::FlatWrite32((r3 + 104), r0);
    MemoryInline::FlatWrite32((r3 + 108), r0);
    // end of inlined leaf 0x805E32AC
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 116), r0);
    r0 = MemoryInline::FlatRead32((r30 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80850FE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80851008;
    }
}

loc_80850FEC:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 85;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80851008u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80851008:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r4 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 296));
}

loc_8085101C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8085104C;
    }
}

loc_80851020:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_80851024:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085104C;
    }
}

loc_80851028:
{
    r12 = MemoryInline::FlatRead32(r30);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r30 + r0);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    r4 = MemoryInline::FlatRead32((r4 + 3220));
    ctr = r12;
    ctx->lr = 0x80851048u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808510F0;
}

loc_8085104C:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80851054:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(85))) {
        goto loc_80851060;
    }
}

loc_80851058:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(87));
}

loc_8085105C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80851084;
    }
}

loc_80851060:
{
}

loc_80851064:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(91))) {
        goto loc_80851070;
    }
}

loc_80851068:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(93));
}

loc_8085106C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808510A0;
    }
}

loc_80851070:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(122));
}

loc_80851074:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808510D8;
    }
}

loc_80851078:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(124));
}

loc_8085107C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808510BC;
    }
}

loc_80851080:
{
    goto loc_808510D8;
}

loc_80851084:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r30 + 3236));
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x8085109Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808510F0;
}

loc_808510A0:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r30 + 3240));
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x808510B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808510F0;
}

loc_808510BC:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r30 + 3244));
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x808510D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808510F0;
}

loc_808510D8:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r30 + 3220));
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x808510F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808510F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80850DB0 func_80850DB0 preserves=true fpr_mask=0x00000000
