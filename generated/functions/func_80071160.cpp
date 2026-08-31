#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80071160(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80071160;

loc_80071160:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r7 = MemoryInline::FlatRead8((r3 + 257));
    r6 = MemoryInline::FlatRead8((r3 + 256));
    r4 = (r7 + 1);
    r7 = MemoryInline::FlatRead32((r3 + 212));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r6));
}

loc_8007119C:
{
    r0 = (r0 * r6);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite8((r3 + 257), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800711E8;
    }
}

loc_800711AC:
{
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 & 4);
}

loc_800711B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800711E8;
    }
}

loc_800711B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 216));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800711C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800711E8;
    }
}

loc_800711C4:
{
    r12 = MemoryInline::FlatRead32(r7);
    r3 = r7;
    r5 = r29;
    r6 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r7 = r31;
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x800711E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800711E8:
{
    r3 = r29;
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8006D790u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = MemoryInline::FlatRead32((r29 + 212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800711FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071238;
    }
}

loc_80071200:
{
    r0 = MemoryInline::FlatRead16((r29 + 218));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071208:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071238;
    }
}

loc_8007120C:
{
    r0 = MemoryInline::FlatRead8((r29 + 216));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071214:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071238;
    }
}

loc_80071218:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r29;
    r6 = r30;
    r7 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = 2;
    ctr = r12;
    ctx->lr = 0x80071238u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071238:
{
    ctx->lr = 0x8007123Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B1870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071240:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800713AC;
    }
}

loc_80071244:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 232), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r29 + 260));
    r0 = (r0 & 1);
}

loc_8007124C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80071304;
    }
}

loc_80071250:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r29 + 258));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 236));
    r4 = (r0 * 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A165Cu>(ctx);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 232), 0, 28u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r29 + 248));
}

loc_80071268:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8007128C;
    }
}

loc_8007126C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r29 + 258));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r29 + 257));
    r3 = (r0 * 36);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r4 * r0);
    r4 = (r5 + r0);
    goto loc_80071290;
}

loc_8007128C:
{
    r4 = 0;
}

loc_80071290:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r29 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80071298:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800712BC;
    }
}

loc_8007129C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r29 + 258));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r5 * r0);
    r10 = (r6 + r0);
    goto loc_800712C0;
}

loc_800712BC:
{
    r10 = 0;
}

loc_800712C0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 232));
    r8 = r31;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r9 = (r1 + 16);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r29 + 258));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r29 + 244));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r29 + 236));
            r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r29 + 240));
        }
    }
    r0 = (r3 + 31);
    r7 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r29 + 258));
    r0 = (r0 & -32);
    r0 = (r11 * r0);
    r3 = (r12 + r0);
    ctx->lr = 0x80071300u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80067270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800713A4;
}

loc_80071304:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r29 + 248));
}

loc_8007130C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80071330;
    }
}

loc_80071310:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r29 + 258));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r29 + 257));
    r3 = (r0 * 36);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r4 * r0);
    r4 = (r5 + r0);
    goto loc_80071334;
}

loc_80071330:
{
    r4 = 0;
}

loc_80071334:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r29 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8007133C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071360;
    }
}

loc_80071340:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r29 + 258));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r5 * r0);
    r10 = (r6 + r0);
    goto loc_80071364;
}

loc_80071360:
{
    r10 = 0;
}

loc_80071364:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 232));
    r8 = r31;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r9 = (r1 + 12);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r29 + 258));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 244));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 236));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 240));
        }
    }
    r0 = (r3 + 31);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r29 + 258));
    r0 = (r0 & -32);
    r0 = (r11 * r0);
    r3 = (r12 + r0);
    ctx->lr = 0x800713A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80066DD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800713A4:
{
    ctx->lr = 0x800713A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B18E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8007144C;
}

loc_800713AC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 232), 0, 28u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r29 + 248));
}

loc_800713B4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800713D8;
    }
}

loc_800713B8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r29 + 258));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r29 + 257));
    r3 = (r0 * 36);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r4 * r0);
    r4 = (r5 + r0);
    goto loc_800713DC;
}

loc_800713D8:
{
    r4 = 0;
}

loc_800713DC:
{
    r6 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r29 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800713E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071408;
    }
}

loc_800713E8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r29 + 258));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r0 = (r5 * r0);
    r10 = (r6 + r0);
    goto loc_8007140C;
}

loc_80071408:
{
    r10 = 0;
}

loc_8007140C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 232));
    r8 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r9 = (r1 + 8);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r29 + 258));
    r11 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r29 + 257));
    r3 = (r0 * 48);
    r12 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r29 + 244));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r29 + 236));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r29 + 240));
        }
    }
    r0 = (r3 + 31);
    r7 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r29 + 258));
    r0 = (r0 & -32);
    r0 = (r11 * r0);
    r3 = (r12 + r0);
    ctx->lr = 0x8007144Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80066AA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8007144C:
{
    r3 = MemoryInline::FlatRead32((r29 + 212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80071454:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071490;
    }
}

loc_80071458:
{
    r0 = MemoryInline::FlatRead16((r29 + 218));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80071460:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071490;
    }
}

loc_80071464:
{
    r0 = MemoryInline::FlatRead8((r29 + 216));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8007146C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80071490;
    }
}

loc_80071470:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r29;
    r6 = r30;
    r7 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x80071490u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80071490:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
// RECOMP_REGISTRATION base 0x80071160 func_80071160 preserves=true fpr_mask=0x00000000
