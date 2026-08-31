#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001E180(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001E180;

loc_8001E180:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRam32((r1 + 220), r31);
    MemoryInline::FlatWriteRam32((r1 + 216), r30);
    MemoryInline::FlatWriteRam32((r1 + 212), r29);
    MemoryInline::FlatWriteRam32((r1 + 208), r28);
    r28 = r3;
    r31 = MemoryInline::FlatRead8((r3 + 20));
    r30 = MemoryInline::FlatRead16((r3 + 24));
    r29 = MemoryInline::FlatRead16((r3 + 28));
    // inline leaf 0x8001D28C (12 guest instruction(s))
}

loc_inl0_0x8001D28C:
{
}

loc_inl0_0x8001D290:
{
    r5 = 0;
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2176))) {
        goto loc_inl0_0x8001D2A0;
    }
}

loc_inl0_0x8001D298:
{
    r5 = 769;
    goto loc_inl0_0x8001D2B4;
}

loc_inl0_0x8001D2A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_inl0_0x8001D2AC:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8001D2B4;
    }
}

loc_inl0_0x8001D2B0:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_inl0_0x8001D2B4:
{
    r3 = r5;
}

loc_inl0_cont_8001D28C:
{
    // end of inlined leaf 0x8001D28C
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r29));
}

loc_8001E1B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001E20C;
    }
}

loc_8001E1BC:
{
    r3 = (r1 + 80);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 128;
    r4 = 64;
    r5 = 20;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 84), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 80);
    MemoryInline::FlatWriteRam32((r1 + 80), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 88), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 92), r6);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->lr = 0x8001E204u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C93Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8001E400;
}

loc_8001E20C:
{
    r3 = r28;
    r4 = 64;
    // inline leaf 0x8001D28C (12 guest instruction(s))
}

loc_inl1_0x8001D28C:
{
}

loc_inl1_0x8001D290:
{
    r5 = 0;
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2176))) {
        goto loc_inl1_0x8001D2A0;
    }
}

loc_inl1_0x8001D298:
{
    r5 = 769;
    goto loc_inl1_0x8001D2B4;
}

loc_inl1_0x8001D2A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_inl1_0x8001D2AC:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8001D2B4;
    }
}

loc_inl1_0x8001D2B0:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_inl1_0x8001D2B4:
{
    r3 = r5;
}

loc_inl1_cont_8001D28C:
{
    // end of inlined leaf 0x8001D28C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8001E21C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E23C;
    }
}

loc_8001E220:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_8001E224:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E25C;
    }
}

loc_8001E228:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_8001E22C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E27C;
    }
}

loc_8001E230:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_8001E234:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E29C;
    }
}

loc_8001E238:
{
    goto loc_8001E2BC;
}

loc_8001E23C:
{
    r3 = r30;
    r4 = r29;
    r5 = r28;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x8001E254u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001F8E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
    goto loc_8001E2C0;
}

loc_8001E25C:
{
    r3 = r30;
    r4 = r29;
    r5 = r28;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x8001E274u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001F9DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
    goto loc_8001E2C0;
}

loc_8001E27C:
{
    r3 = r30;
    r4 = r29;
    r5 = r28;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x8001E294u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001FB18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
    goto loc_8001E2C0;
}

loc_8001E29C:
{
    r3 = r30;
    r4 = r29;
    r5 = r28;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x8001E2B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001FC7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
    goto loc_8001E2C0;
}

loc_8001E2BC:
{
    r31 = 1795;
}

loc_8001E2C0:
{
    r3 = r28;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8001E2D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001E31C;
    }
}

loc_8001E2D4:
{
    r3 = (r1 + 144);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 64;
    r4 = 128;
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
    r0 = (r6 + 1);
    r3 = r28;
    MemoryInline::FlatWriteRam8((r1 + 148), static_cast<uint8_t>(r4));
    r4 = (r1 + 144);
    r5 = 64;
    MemoryInline::FlatWriteRam8((r1 + 152), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam32((r1 + 156), r6);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->lr = 0x8001E318u;
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
    InvokeDirectCpu<0x8001D2BCu>(ctx);
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
    r31 = r3;
}

loc_8001E31C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1794));
}

loc_8001E320:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E388;
    }
}

loc_8001E324:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001E34C;
    }
}

loc_8001E328:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(770));
}

loc_8001E32C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E380;
    }
}

loc_8001E330:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001E340;
    }
}

loc_8001E334:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8001E338:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E3F8;
    }
}

loc_8001E33C:
{
    goto loc_8001E3A8;
}

loc_8001E340:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1793));
}

loc_8001E344:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001E378;
    }
}

loc_8001E348:
{
    goto loc_8001E3A8;
}

loc_8001E34C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1797));
}

loc_8001E350:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001E398;
    }
}

loc_8001E354:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001E364;
    }
}

loc_8001E358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1796));
}

loc_8001E35C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001E390;
    }
}

loc_8001E360:
{
    goto loc_8001E370;
}

loc_8001E364:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1799));
}

loc_8001E368:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001E3A8;
    }
}

loc_8001E36C:
{
    goto loc_8001E3A0;
}

loc_8001E370:
{
    r31 = 18;
    goto loc_8001E3AC;
}

loc_8001E378:
{
    r31 = 20;
    goto loc_8001E3AC;
}

loc_8001E380:
{
    r31 = 2;
    goto loc_8001E3AC;
}

loc_8001E388:
{
    r31 = 21;
    goto loc_8001E3AC;
}

loc_8001E390:
{
    r31 = 33;
    goto loc_8001E3AC;
}

loc_8001E398:
{
    r31 = 34;
    goto loc_8001E3AC;
}

loc_8001E3A0:
{
    r31 = 32;
    goto loc_8001E3AC;
}

loc_8001E3A8:
{
    r31 = 3;
}

loc_8001E3AC:
{
    r3 = (r1 + 16);
    r4 = 0;
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -27520));
    r0 = 128;
    r4 = 64;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r5 = (r3 + 1);
    r3 = (r1 + 16);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = (r5 + 1);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    MemoryInline::FlatWrite32((r13 + -27520), r0);
    ctx->lr = 0x8001E3F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C93Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8001E400;
}

loc_8001E3F8:
{
    r3 = r28;
    ctx->lr = 0x8001E400u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D0F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001E400:
{
    r0 = MemoryInline::FlatRead32((r1 + 228));
    r31 = MemoryInline::FlatRead32((r1 + 220));
    r30 = MemoryInline::FlatRead32((r1 + 216));
    r29 = MemoryInline::FlatRead32((r1 + 212));
    r28 = MemoryInline::FlatRead32((r1 + 208));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8001E180 func_8001E180 preserves=true fpr_mask=0x00000000
