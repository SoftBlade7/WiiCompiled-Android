#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F9F54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F9F54;

loc_801F9F54:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F9F60:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F9F88;
    }
}

loc_801F9F80:
{
    r3 = 10;
    goto loc_801FA260;
}

loc_801F9F88:
{
    r28 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801F9F90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F9F9C;
    }
}

loc_801F9F94:
{
    r3 = 0;
    goto loc_801FA260;
}

loc_801F9F9C:
{
    r0 = MemoryInline::FlatRead8((r3 + 104));
    r6 = (r28 + -1);
    r7 = MemoryInline::FlatRead32((r3 + 60));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_801F9FB0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801FA1A4;
    }
}

loc_801F9FB4:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r9 = MemoryInline::FlatRead32((r3 + 64));
    r8 = MemoryInline::FlatRead8((r6 + 6));
    r10 = MemoryInline::FlatRead32((r6 + 48));
    r0 = PPC_Divwu(static_cast<uint32_t>(r7), static_cast<uint32_t>(r8));
    r4 = MemoryInline::FlatRead8((r6 + 33));
    r5 = (r9 - r10);
    r4 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r4 = (r4 + 2);
    r0 = (r0 * r8);
    r0 = (r7 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F9FEC;
    }
}

loc_801F9FE4:
{
}

loc_801F9FE8:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(1))) {
        goto loc_801FA04C;
    }
}

loc_801F9FEC:
{
    r0 = MemoryInline::FlatRead32((r6 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801F9FF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FA010;
    }
}

loc_801F9FF8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32(r3);
}

loc_801FA004:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801FA044;
    }
}

loc_801FA008:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(r9));
}

loc_801FA00C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801FA044;
    }
}

loc_801FA010:
{
    r3 = r6;
    r5 = r4;
    r6 = (r1 + 16);
    ctx->lr = 0x801FA020u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801FCCE0u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FA024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FA02C;
    }
}

loc_801FA028:
{
    goto loc_801FA260;
}

loc_801FA02C:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FA038:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FA050;
    }
}

loc_801FA03C:
{
    r3 = 14;
    goto loc_801FA260;
}

loc_801FA044:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    goto loc_801FA050;
}

loc_801FA04C:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_801FA050:
{
    r4 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r30 + 60));
    r4 = (r4 + -1);
    r6 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32(r30, r4);
    MemoryInline::FlatWrite32((r30 + 60), r0);
    r0 = MemoryInline::FlatRead32((r6 + 28));
}

loc_801FA074:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801FA098;
    }
}

loc_801FA078:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = MemoryInline::FlatRead32(r3);
}

loc_801FA084:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801FA0CC;
    }
}

loc_801FA088:
{
    r3 = MemoryInline::FlatRead32((r6 + 48));
    r0 = MemoryInline::FlatRead32((r30 + 64));
}

loc_801FA094:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_801FA0CC;
    }
}

loc_801FA098:
{
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r3 = MemoryInline::FlatRead8((r6 + 6));
    r0 = MemoryInline::FlatRead8((r6 + 33));
    r5 = (r4 + -2);
    r6 = MemoryInline::FlatRead32((r6 + 48));
    r3 = (r3 + -1);
    r4 = MemoryInline::FlatRead32((r30 + 60));
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 + r0);
    r3 = (r4 & r3);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_801FA0D8;
}

loc_801FA0CC:
{
    r3 = MemoryInline::FlatRead32((r30 + 64));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 64), r0);
}

loc_801FA0D8:
{
    r3 = MemoryInline::FlatRead32((r30 + 64));
    r29 = MemoryInline::FlatRead32(r30);
    r0 = (r3 + 65536);
    r4 = MemoryInline::FlatRead16((r30 + 70));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FA0EC:
{
    r0 = (r29 & r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_1 & 65504);
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FA104;
    }
}

loc_801FA0FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801FA100:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FA198;
    }
}

loc_801FA104:
{
    MemoryInline::FlatWrite32(r30, r29);
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x801FA114u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F8880u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FA118:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FA134;
    }
}

loc_801FA120:
{
    MemoryInline::FlatWrite32(r30, r29);
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x801FA130u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F8880u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801FA18C;
}

loc_801FA134:
{
    r5 = MemoryInline::FlatRead32((r30 + 64));
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FA140:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FA14C;
    }
}

loc_801FA144:
{
    r4 = 16;
    goto loc_801FA17C;
}

loc_801FA14C:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r30 + 72);
    r6 = MemoryInline::FlatRead16((r30 + 68));
    r8 = (r1 + 12);
    r7 = 32;
    r9 = 0;
    ctx->lr = 0x801FA168u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80205058u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r4 = 17;
}

loc_801FA174:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(32))) {
        goto loc_801FA17C;
    }
}

loc_801FA178:
{
    r4 = r3;
}

loc_801FA17C:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r31 = (r4 & r0);
}

loc_801FA18C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801FA190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FA198;
    }
}

loc_801FA194:
{
    goto loc_801FA19C;
}

loc_801FA198:
{
    r31 = 0;
}

loc_801FA19C:
{
    r3 = r31;
    goto loc_801FA260;
}

loc_801FA1A4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r6));
}

loc_801FA1A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FA1C4;
    }
}

loc_801FA1AC:
{
    r5 = MemoryInline::FlatRead32((r3 + 64));
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FA1B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FA1C4;
    }
}

loc_801FA1BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801FA1C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FA258;
    }
}

loc_801FA1C4:
{
    MemoryInline::FlatWrite32(r3, r6);
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x801FA1D4u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F8880u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FA1D8:
{
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FA1F4;
    }
}

loc_801FA1E0:
{
    MemoryInline::FlatWrite32(r30, r28);
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x801FA1F0u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F8880u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801FA24C;
}

loc_801FA1F4:
{
    r5 = MemoryInline::FlatRead32((r30 + 64));
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FA200:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FA20C;
    }
}

loc_801FA204:
{
    r4 = 16;
    goto loc_801FA23C;
}

loc_801FA20C:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r30 + 72);
    r6 = MemoryInline::FlatRead16((r30 + 68));
    r8 = (r1 + 8);
    r7 = 32;
    r9 = 0;
    ctx->lr = 0x801FA228u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80205058u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = 17;
}

loc_801FA234:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(32))) {
        goto loc_801FA23C;
    }
}

loc_801FA238:
{
    r4 = r3;
}

loc_801FA23C:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r29 = (r4 & r0);
}

loc_801FA24C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801FA250:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FA258;
    }
}

loc_801FA254:
{
    goto loc_801FA25C;
}

loc_801FA258:
{
    r29 = 0;
}

loc_801FA25C:
{
    r3 = r29;
}

loc_801FA260:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F9F54 func_801F9F54 preserves=true fpr_mask=0x00000000
