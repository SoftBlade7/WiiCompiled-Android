#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FA00C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800FA00C;

loc_800FA00C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r7);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r8);
    r3 = (r1 + 8);
    ctx->lr = 0x800FA03Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F254Cu>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r10 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r6 = MemoryInline::FlatRead32((r10 + 16));
    r4 = 0x80280000u;
    r7 = MemoryInline::FlatRead32((r10 + 12));
    r3 = (r1 + 16);
    r8 = MemoryInline::FlatRead32((r10 + 8));
    r4 = (r4 + -20784);
    r9 = MemoryInline::FlatRead32((r10 + 4));
    r5 = (r5 + 1900);
    r10 = MemoryInline::FlatRead32(r10);
    r6 = (r6 + 1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800FA074u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800FA080:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FA0CC;
    }
}

loc_800FA084:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800FA094u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA098:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA0A4;
    }
}

loc_800FA09C:
{
    r0 = 0;
    goto loc_800FA0BC;
}

loc_800FA0A4:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA0AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA0B4;
    }
}

loc_800FA0B0:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA0B4:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800FA0BC:
{
}

loc_800FA0C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA0CC;
    }
}

loc_800FA0C4:
{
    r5 = 0;
    goto loc_800FA0EC;
}

loc_800FA0CC:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA0EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800FA0F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FA33C;
    }
}

loc_800FA0F4:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800FA100:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA15C;
    }
}

loc_800FA108:
{
    r3 = 1;
    goto loc_800FA190;
}

loc_800FA114:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800FA124u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA128:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA134;
    }
}

loc_800FA12C:
{
    r0 = 0;
    goto loc_800FA14C;
}

loc_800FA134:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA13C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA144;
    }
}

loc_800FA140:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA144:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800FA14C:
{
}

loc_800FA150:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA15C;
    }
}

loc_800FA154:
{
    r3 = 0;
    goto loc_800FA190;
}

loc_800FA15C:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800FA16C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FA114;
    }
}

loc_800FA170:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r30;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA190:
{
}

loc_800FA194:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800FA33C;
    }
}

loc_800FA198:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800FA1A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FA1F0;
    }
}

loc_800FA1A8:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800FA1B8u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA1BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA1C8;
    }
}

loc_800FA1C0:
{
    r0 = 0;
    goto loc_800FA1E0;
}

loc_800FA1C8:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA1D0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA1D8;
    }
}

loc_800FA1D4:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA1D8:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800FA1E0:
{
}

loc_800FA1E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA1F0;
    }
}

loc_800FA1E8:
{
    r5 = 0;
    goto loc_800FA210;
}

loc_800FA1F0:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA210:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800FA214:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FA33C;
    }
}

loc_800FA218:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800FA224:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA280;
    }
}

loc_800FA22C:
{
    r3 = 1;
    goto loc_800FA2B4;
}

loc_800FA238:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800FA248u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA24C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA258;
    }
}

loc_800FA250:
{
    r0 = 0;
    goto loc_800FA270;
}

loc_800FA258:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA260:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA268;
    }
}

loc_800FA264:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA268:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800FA270:
{
}

loc_800FA274:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA280;
    }
}

loc_800FA278:
{
    r3 = 0;
    goto loc_800FA2B4;
}

loc_800FA280:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800FA290:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FA238;
    }
}

loc_800FA294:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r31;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA2B4:
{
}

loc_800FA2B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800FA33C;
    }
}

loc_800FA2BC:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800FA2C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FA314;
    }
}

loc_800FA2CC:
{
    r28 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r28;
    ctx->lr = 0x800FA2DCu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA2E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA2EC;
    }
}

loc_800FA2E4:
{
    r0 = 0;
    goto loc_800FA304;
}

loc_800FA2EC:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA2F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA2FC;
    }
}

loc_800FA2F8:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA2FC:
{
    MemoryInline::FlatWrite32((r29 + 8), r28);
    r0 = 1;
}

loc_800FA304:
{
}

loc_800FA308:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA314;
    }
}

loc_800FA30C:
{
    r5 = 0;
    goto loc_800FA334;
}

loc_800FA314:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA334:
{
}

loc_800FA338:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800FA344;
    }
}

loc_800FA33C:
{
    r0 = 0;
    goto loc_800FA348;
}

loc_800FA344:
{
    r0 = 1;
}

loc_800FA348:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FA34C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FA750;
    }
}

loc_800FA350:
{
    r3 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800FA35C:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA3B8;
    }
}

loc_800FA364:
{
    r3 = 1;
    goto loc_800FA3EC;
}

loc_800FA370:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800FA380u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA384:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA390;
    }
}

loc_800FA388:
{
    r0 = 0;
    goto loc_800FA3A8;
}

loc_800FA390:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA398:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA3A0;
    }
}

loc_800FA39C:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA3A0:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800FA3A8:
{
}

loc_800FA3AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA3B8;
    }
}

loc_800FA3B0:
{
    r3 = 0;
    goto loc_800FA3EC;
}

loc_800FA3B8:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800FA3C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FA370;
    }
}

loc_800FA3CC:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 16);
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA3EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FA3F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FA750;
    }
}

loc_800FA3F4:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800FA400:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FA44C;
    }
}

loc_800FA404:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800FA414u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA418:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA424;
    }
}

loc_800FA41C:
{
    r0 = 0;
    goto loc_800FA43C;
}

loc_800FA424:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA42C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA434;
    }
}

loc_800FA430:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA434:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800FA43C:
{
}

loc_800FA440:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA44C;
    }
}

loc_800FA444:
{
    r5 = 0;
    goto loc_800FA46C;
}

loc_800FA44C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_9 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_9, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA46C:
{
}

loc_800FA470:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800FA73C;
    }
}

loc_800FA474:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800FA480:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FA4CC;
    }
}

loc_800FA484:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800FA494u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA498:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA4A4;
    }
}

loc_800FA49C:
{
    r0 = 0;
    goto loc_800FA4BC;
}

loc_800FA4A4:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA4AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA4B4;
    }
}

loc_800FA4B0:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA4B4:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800FA4BC:
{
}

loc_800FA4C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA4CC;
    }
}

loc_800FA4C4:
{
    r5 = 0;
    goto loc_800FA4EC;
}

loc_800FA4CC:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 47;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_11 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_11, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA4EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800FA4F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FA73C;
    }
}

loc_800FA4F4:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800FA500:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA55C;
    }
}

loc_800FA508:
{
    r3 = 1;
    goto loc_800FA590;
}

loc_800FA514:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800FA524u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA528:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA534;
    }
}

loc_800FA52C:
{
    r0 = 0;
    goto loc_800FA54C;
}

loc_800FA534:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA53C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA544;
    }
}

loc_800FA540:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA544:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800FA54C:
{
}

loc_800FA550:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA55C;
    }
}

loc_800FA554:
{
    r3 = 0;
    goto loc_800FA590;
}

loc_800FA55C:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800FA56C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FA514;
    }
}

loc_800FA570:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r30;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA590:
{
}

loc_800FA594:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800FA73C;
    }
}

loc_800FA598:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800FA5A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FA5F0;
    }
}

loc_800FA5A8:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800FA5B8u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA5BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA5C8;
    }
}

loc_800FA5C0:
{
    r0 = 0;
    goto loc_800FA5E0;
}

loc_800FA5C8:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA5D0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA5D8;
    }
}

loc_800FA5D4:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA5D8:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800FA5E0:
{
}

loc_800FA5E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA5F0;
    }
}

loc_800FA5E8:
{
    r5 = 0;
    goto loc_800FA610;
}

loc_800FA5F0:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_13 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_13, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA610:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800FA614:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FA73C;
    }
}

loc_800FA618:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800FA624:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA680;
    }
}

loc_800FA62C:
{
    r3 = 1;
    goto loc_800FA6B4;
}

loc_800FA638:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800FA648u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA64C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA658;
    }
}

loc_800FA650:
{
    r0 = 0;
    goto loc_800FA670;
}

loc_800FA658:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA660:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA668;
    }
}

loc_800FA664:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA668:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800FA670:
{
}

loc_800FA674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA680;
    }
}

loc_800FA678:
{
    r3 = 0;
    goto loc_800FA6B4;
}

loc_800FA680:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r30));
}

loc_800FA690:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FA638;
    }
}

loc_800FA694:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r31;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA6B4:
{
}

loc_800FA6B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800FA73C;
    }
}

loc_800FA6BC:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800FA6C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FA714;
    }
}

loc_800FA6CC:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800FA6DCu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA6E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA6EC;
    }
}

loc_800FA6E4:
{
    r0 = 0;
    goto loc_800FA704;
}

loc_800FA6EC:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800FA6F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA6FC;
    }
}

loc_800FA6F8:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FA6FC:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800FA704:
{
}

loc_800FA708:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FA714;
    }
}

loc_800FA70C:
{
    r5 = 0;
    goto loc_800FA734;
}

loc_800FA714:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_15 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_15, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800FA734:
{
}

loc_800FA738:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800FA744;
    }
}

loc_800FA73C:
{
    r0 = 0;
    goto loc_800FA748;
}

loc_800FA744:
{
    r0 = 1;
}

loc_800FA748:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FA74C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FA758;
    }
}

loc_800FA750:
{
    r3 = 0;
    goto loc_800FA75C;
}

loc_800FA758:
{
    r3 = 1;
}

loc_800FA75C:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800FA00C func_800FA00C preserves=true fpr_mask=0x00000000
