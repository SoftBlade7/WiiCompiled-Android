#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80132FB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80132FB8;

loc_80132FB8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
    r5 = MemoryInline::FlatRead16((r3 + 8));
    r3 = 0;
}

loc_80132FE0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80132FF4;
    }
}

loc_80132FE4:
{
}

loc_80132FE8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(65520))) {
        goto loc_80132FF4;
    }
}

loc_80132FEC:
{
}

loc_80132FF0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(65524))) {
        goto loc_80133144;
    }
}

loc_80132FF4:
{
    r6 = 0x80330000u;
    r4 = 0x80250000u;
    r6 = (r6 + 24216);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(65524));
}

loc_80133004:
{
    r5 = MemoryInline::FlatRead8((r6 + 112));
    r4 = (r4 + -14440);
    r0 = (r5 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r30 = MemoryInline::FlatRead16(r4_addr_1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80133034;
    }
}

loc_8013301C:
{
    r3 = MemoryInline::FlatRead32((r6 + 20));
    r4 = r30;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80156A78u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80133030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80133094;
    }
}

loc_80133034:
{
}

loc_80133038:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(4608))) {
        goto loc_80133064;
    }
}

loc_8013303C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80133040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80133068;
    }
}

loc_80133044:
{
    r4 = 65536;
    r0 = (r4 + -32767);
    r4 = (r0 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_80133058:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80133068;
    }
}

loc_8013305C:
{
    r29 = 1;
    goto loc_80133068;
}

loc_80133064:
{
    r29 = 1;
}

loc_80133068:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8013306C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80133094;
    }
}

loc_80133070:
{
    r6 = 0x80330000u;
    r4 = 1;
    r6 = (r6 + 24216);
    r3 = MemoryInline::FlatRead8((r6 + 112));
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r3 + -1);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWriteRam32((r6 + 16), r0);
}

loc_80133094:
{
    r30 = 0x80330000u;
    r30 = (r30 + 24216);
    r3 = MemoryInline::FlatRead32((r30 + 20));
    ctx->lr = 0x801330A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r31 = 0;
    MemoryInline::FlatWriteRam32((r30 + 20), r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801330B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801330C4;
    }
}

loc_801330B8:
{
    r3 = (r30 + 26);
    ctx->lr = 0x801330C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013352Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80133204;
}

loc_801330C4:
{
    r3 = 0x80130000u;
    r3 = (r3 + 14544);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013F1B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = 272;
    ctx->lr = 0x801330D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EBB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801330DC:
{
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80133204;
    }
}

loc_801330E4:
{
    r0 = 520;
    r4 = (r30 + 26);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 269u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r3, static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 268u, (r3 + 268), static_cast<uint8_t>(r31));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 16), 0, 17u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 264u, (r3 + 264), r0);
    r3 = (r3 + 8);
    // inline leaf 0x80131D90 (13 guest instruction(s))
    r9 = MemoryInline::ReadResolved8(guest_range_1, 10u, r4);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r4 + 1));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r4 + 2));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r4 + 3));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r4 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 8u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80131D90
    r0 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r30 + 32));
    r31 = (r30 + 32);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80133128;
    }
}

loc_80133114:
{
    r3 = (r30 + 26);
    ctx->lr = 0x8013311Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80139BD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80133120:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80133128;
    }
}

loc_80133124:
{
    r31 = r3;
}

loc_80133128:
{
    r4 = r31;
    r3 = (r29 + 14);
    r5 = 32;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800131E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    ctx->lr = 0x80133140u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013223Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_80133204;
}

loc_80133144:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(65521));
}

loc_80133148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013315C;
    }
}

loc_8013314C:
{
    r0 = (r5 + 10);
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80133158:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8013316C;
    }
}

loc_8013315C:
{
    r3 = 0x80330000u;
    r0 = 0;
    r3 = (r3 + 24216);
    MemoryInline::FlatWriteRam8((r3 + 120), static_cast<uint8_t>(r0));
}

loc_8013316C:
{
    r31 = 0x80330000u;
    r31 = (r31 + 24216);
    r3 = MemoryInline::FlatRead32((r31 + 20));
    ctx->lr = 0x8013317Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = 0;
    r3 = 0x80130000u;
    MemoryInline::FlatWriteRam32((r31 + 20), r0);
    r3 = (r3 + 14544);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013F1B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = 272;
    ctx->lr = 0x80133198u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EBB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8013319C:
{
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80133204;
    }
}

loc_801331A4:
{
    r4 = 520;
    r0 = 1;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 269u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, r3, static_cast<uint16_t>(r4));
    r4 = (r31 + 26);
    MemoryInline::WriteResolved8(guest_range_2, 268u, (r3 + 268), static_cast<uint8_t>(r0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 16), 0, 17u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r31 + 16));
    MemoryInline::WriteResolved32(guest_range_2, 264u, (r3 + 264), r0);
    r3 = (r3 + 8);
    // inline leaf 0x80131D90 (13 guest instruction(s))
    r9 = MemoryInline::ReadResolved8(guest_range_3, 10u, r4);
    r8 = MemoryInline::ReadResolved8(guest_range_3, 11u, (r4 + 1));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 12u, (r4 + 2));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 13u, (r4 + 3));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 14u, (r4 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 15u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 8u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80131D90
    r0 = MemoryInline::ReadResolved8(guest_range_3, 16u, (r31 + 32));
    r30 = (r31 + 32);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801331EC;
    }
}

loc_801331D8:
{
    r3 = (r31 + 26);
    ctx->lr = 0x801331E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80139BD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801331E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801331EC;
    }
}

loc_801331E8:
{
    r30 = r3;
}

loc_801331EC:
{
    r4 = r30;
    r3 = (r29 + 14);
    r5 = 32;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800131E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    ctx->lr = 0x80133204u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013223Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80133204:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80132FB8 func_80132FB8 preserves=true fpr_mask=0x00000000
