#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800580E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800580E0;

loc_800580E0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 64u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r0 = (r6 & 15);
}

loc_8005810C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005823C;
    }
}

loc_80058110:
{
    r0 = (r6 & 1);
}

loc_80058114:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80058158;
    }
}

loc_80058118:
{
    r7 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r5 + 48));
    r6 = MemoryInline::FlatRead32((r7 + 4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r4 = (r4 & r6);
    MemoryInline::FlatWriteRam32((r1 + 80), r6);
    r0 = (r0 | r4);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r0 = MemoryInline::FlatRead8((r1 + 76));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 77));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 78));
    MemoryInline::FlatWrite8((r7 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 79));
    MemoryInline::FlatWrite8((r7 + 7), static_cast<uint8_t>(r0));
}

loc_80058158:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r0 = (r0 & 4);
}

loc_80058160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800581A4;
    }
}

loc_80058164:
{
    r7 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r5 + 56));
    r6 = MemoryInline::FlatRead32((r7 + 8));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 12));
    r4 = (r4 & r6);
    MemoryInline::FlatWriteRam32((r1 + 80), r6);
    r0 = (r0 | r4);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r0 = MemoryInline::FlatRead8((r1 + 72));
    MemoryInline::FlatWrite8((r7 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 73));
    MemoryInline::FlatWrite8((r7 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 74));
    MemoryInline::FlatWrite8((r7 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 75));
    MemoryInline::FlatWrite8((r7 + 11), static_cast<uint8_t>(r0));
}

loc_800581A4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r0 = (r0 & 2);
}

loc_800581AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800581F0;
    }
}

loc_800581B0:
{
    r7 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r5 + 52));
    r6 = MemoryInline::FlatRead32((r7 + 24));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 8));
    r4 = (r4 & r6);
    MemoryInline::FlatWriteRam32((r1 + 80), r6);
    r0 = (r0 | r4);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = MemoryInline::FlatRead8((r1 + 68));
    MemoryInline::FlatWrite8((r7 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 69));
    MemoryInline::FlatWrite8((r7 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 70));
    MemoryInline::FlatWrite8((r7 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 71));
    MemoryInline::FlatWrite8((r7 + 27), static_cast<uint8_t>(r0));
}

loc_800581F0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r0 = (r0 & 8);
}

loc_800581F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005823C;
    }
}

loc_800581FC:
{
    r6 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r5 + 60));
    r4 = MemoryInline::FlatRead32((r6 + 28));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 16));
    r3 = (r3 & r4);
    MemoryInline::FlatWriteRam32((r1 + 80), r4);
    r0 = (r0 | r3);
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r0 = MemoryInline::FlatRead8((r1 + 64));
    MemoryInline::FlatWrite8((r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 65));
    MemoryInline::FlatWrite8((r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 66));
    MemoryInline::FlatWrite8((r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 67));
    MemoryInline::FlatWrite8((r6 + 31), static_cast<uint8_t>(r0));
}

loc_8005823C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r0 = (r3 & 2032);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80058244:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005857C;
    }
}

loc_80058248:
{
    r0 = (r3 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005824C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800582B8;
    }
}

loc_80058250:
{
    r3 = r30;
    r5 = (r1 + 80);
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_80058264:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80058270;
    }
}

loc_80058268:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
}

loc_80058270:
{
    r6 = MemoryInline::FlatRead32((r31 + 64));
    r5 = (r1 + 60);
    r4 = MemoryInline::FlatRead32((r1 + 80));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r6 = (r6 & r4);
    r4 = 1;
    r0 = (r0 | r6);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r8 = MemoryInline::FlatRead8((r1 + 56));
    r7 = MemoryInline::FlatRead8((r1 + 57));
    r6 = MemoryInline::FlatRead8((r1 + 58));
    r0 = MemoryInline::FlatRead8((r1 + 59));
    MemoryInline::FlatWriteRam8((r1 + 60), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 62), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 63), static_cast<uint8_t>(r0));
    ctx->lr = 0x800582B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80050EA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_800582B8:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800582C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005832C;
    }
}

loc_800582C4:
{
    r3 = r30;
    r5 = (r1 + 80);
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_800582D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800582E4;
    }
}

loc_800582DC:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
}

loc_800582E4:
{
    r6 = MemoryInline::FlatRead32((r31 + 68));
    r5 = (r1 + 52);
    r4 = MemoryInline::FlatRead32((r1 + 80));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r6 = (r6 & r4);
    r4 = 2;
    r0 = (r0 | r6);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r8 = MemoryInline::FlatRead8((r1 + 48));
    r7 = MemoryInline::FlatRead8((r1 + 49));
    r6 = MemoryInline::FlatRead8((r1 + 50));
    r0 = MemoryInline::FlatRead8((r1 + 51));
    MemoryInline::FlatWriteRam8((r1 + 52), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 53), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 54), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 55), static_cast<uint8_t>(r0));
    ctx->lr = 0x8005832Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80050EA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_8005832C:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80058334:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800583A0;
    }
}

loc_80058338:
{
    r3 = r30;
    r5 = (r1 + 80);
    r4 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_8005834C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80058358;
    }
}

loc_80058350:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
}

loc_80058358:
{
    r6 = MemoryInline::FlatRead32((r31 + 72));
    r5 = (r1 + 44);
    r4 = MemoryInline::FlatRead32((r1 + 80));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r6 = (r6 & r4);
    r4 = 3;
    r0 = (r0 | r6);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r8 = MemoryInline::FlatRead8((r1 + 40));
    r7 = MemoryInline::FlatRead8((r1 + 41));
    r6 = MemoryInline::FlatRead8((r1 + 42));
    r0 = MemoryInline::FlatRead8((r1 + 43));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r0));
    ctx->lr = 0x800583A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80050EA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_800583A0:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800583A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80058414;
    }
}

loc_800583AC:
{
    r3 = r30;
    r5 = (r1 + 80);
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050F40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_800583C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800583CC;
    }
}

loc_800583C4:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
}

loc_800583CC:
{
    r6 = MemoryInline::FlatRead32((r31 + 76));
    r5 = (r1 + 36);
    r4 = MemoryInline::FlatRead32((r1 + 80));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r6 = (r6 & r4);
    r4 = 0;
    r0 = (r0 | r6);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r8 = MemoryInline::FlatRead8((r1 + 32));
    r7 = MemoryInline::FlatRead8((r1 + 33));
    r6 = MemoryInline::FlatRead8((r1 + 34));
    r0 = MemoryInline::FlatRead8((r1 + 35));
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r0));
    ctx->lr = 0x80058414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80051000u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_80058414:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005841C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80058488;
    }
}

loc_80058420:
{
    r3 = r30;
    r5 = (r1 + 80);
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050F40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_80058434:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80058440;
    }
}

loc_80058438:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
}

loc_80058440:
{
    r6 = MemoryInline::FlatRead32((r31 + 80));
    r5 = (r1 + 28);
    r4 = MemoryInline::FlatRead32((r1 + 80));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r31 + 36));
    r6 = (r6 & r4);
    r4 = 1;
    r0 = (r0 | r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r8 = MemoryInline::FlatRead8((r1 + 24));
    r7 = MemoryInline::FlatRead8((r1 + 25));
    r6 = MemoryInline::FlatRead8((r1 + 26));
    r0 = MemoryInline::FlatRead8((r1 + 27));
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    ctx->lr = 0x80058488u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80051000u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_80058488:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80058490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800584FC;
    }
}

loc_80058494:
{
    r3 = r30;
    r5 = (r1 + 80);
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050F40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_800584A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800584B4;
    }
}

loc_800584AC:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
}

loc_800584B4:
{
    r6 = MemoryInline::FlatRead32((r31 + 84));
    r5 = (r1 + 20);
    r4 = MemoryInline::FlatRead32((r1 + 80));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r31 + 40));
    r6 = (r6 & r4);
    r4 = 2;
    r0 = (r0 | r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r8 = MemoryInline::FlatRead8((r1 + 16));
    r7 = MemoryInline::FlatRead8((r1 + 17));
    r6 = MemoryInline::FlatRead8((r1 + 18));
    r0 = MemoryInline::FlatRead8((r1 + 19));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    ctx->lr = 0x800584FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80051000u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_800584FC:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80058504:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80058570;
    }
}

loc_80058508:
{
    r3 = r30;
    r5 = (r1 + 80);
    r4 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050F40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8005851C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80058528;
    }
}

loc_80058520:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
}

loc_80058528:
{
    r6 = MemoryInline::FlatRead32((r31 + 88));
    r5 = (r1 + 12);
    r4 = MemoryInline::FlatRead32((r1 + 80));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r31 + 44));
    r6 = (r6 & r4);
    r4 = 3;
    r0 = (r0 | r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r8 = MemoryInline::FlatRead8((r1 + 8));
    r7 = MemoryInline::FlatRead8((r1 + 9));
    r6 = MemoryInline::FlatRead8((r1 + 10));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    ctx->lr = 0x80058570u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80051000u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_80058570:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x8005857Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050470u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8005857C:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800580E0 func_800580E0 preserves=true fpr_mask=0x00000000
