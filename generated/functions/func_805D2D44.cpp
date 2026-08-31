#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D2D44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r5_stbu_ea_4 = 0;

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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805D2D44;

loc_805D2D44:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r27);
    MemoryInline::FlatWriteRam32((r1 + 112), r28);
    MemoryInline::FlatWriteRam32((r1 + 116), r29);
    MemoryInline::FlatWriteRam32((r1 + 120), r30);
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r29 = 0x809C0000u;
    r27 = r3;
    r28 = r4;
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    ctx->lr = 0x805D2D68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80656D9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805D2D6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D2D78;
    }
}

loc_805D2D70:
{
    r3 = -1;
    goto loc_805D30F4;
}

loc_805D2D78:
{
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r0 = 1;
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D2DA4;
    }
}

loc_805D2D9C:
{
    r3 = -1;
    goto loc_805D30F4;
}

loc_805D2DA4:
{
    r0 = MemoryInline::FlatRead8((r3 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_805D2DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D2DB8;
    }
}

loc_805D2DB0:
{
    r3 = -1;
    goto loc_805D30F4;
}

loc_805D2DB8:
{
    r3 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r3 + 8456));
    r0 = MemoryInline::FlatRead32((r7 + 2528));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D2DD4;
    }
}

loc_805D2DCC:
{
    r3 = -1;
    goto loc_805D30F4;
}

loc_805D2DD4:
{
    r29 = (r28 * 192);
    r0 = 5;
    r6 = r27;
    r31 = 0;
    r3 = (r7 + r29);
    r4 = MemoryInline::FlatRead32((r3 + 368));
    r5 = MemoryInline::FlatRead32((r3 + 372));
    ctr = r0;
}

loc_805D2DF4:
{
    r0 = MemoryInline::FlatRead32(r6);
    r3 = MemoryInline::FlatRead32((r6 + 4));
    r0 = (r4 ^ r0);
    r3 = (r5 ^ r3);
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805D2E10;
    }
}

loc_805D2E0C:
{
    goto loc_805D2EC0;
}

loc_805D2E10:
{
    r0 = MemoryInline::FlatRead32((r6 + 472));
    r31 = (r31 + 1);
    r3 = MemoryInline::FlatRead32((r6 + 476));
    r0 = (r4 ^ r0);
    r3 = (r5 ^ r3);
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805D2E30;
    }
}

loc_805D2E2C:
{
    goto loc_805D2EC0;
}

loc_805D2E30:
{
    r0 = MemoryInline::FlatRead32((r6 + 944));
    r31 = (r31 + 1);
    r3 = MemoryInline::FlatRead32((r6 + 948));
    r0 = (r4 ^ r0);
    r3 = (r5 ^ r3);
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805D2E50;
    }
}

loc_805D2E4C:
{
    goto loc_805D2EC0;
}

loc_805D2E50:
{
    r0 = MemoryInline::FlatRead32((r6 + 1416));
    r31 = (r31 + 1);
    r3 = MemoryInline::FlatRead32((r6 + 1420));
    r0 = (r4 ^ r0);
    r3 = (r5 ^ r3);
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805D2E70;
    }
}

loc_805D2E6C:
{
    goto loc_805D2EC0;
}

loc_805D2E70:
{
    r0 = MemoryInline::FlatRead32((r6 + 1888));
    r31 = (r31 + 1);
    r3 = MemoryInline::FlatRead32((r6 + 1892));
    r0 = (r4 ^ r0);
    r3 = (r5 ^ r3);
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805D2E90;
    }
}

loc_805D2E8C:
{
    goto loc_805D2EC0;
}

loc_805D2E90:
{
    r0 = MemoryInline::FlatRead32((r6 + 2360));
    r31 = (r31 + 1);
    r3 = MemoryInline::FlatRead32((r6 + 2364));
    r0 = (r4 ^ r0);
    r3 = (r5 ^ r3);
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805D2EB0;
    }
}

loc_805D2EAC:
{
    goto loc_805D2EC0;
}

loc_805D2EB0:
{
    r6 = (r6 + 2832);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805D2DF4;
    }
}

loc_805D2EBC:
{
    r31 = -1;
}

loc_805D2EC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805D2EC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805D2ED0;
    }
}

loc_805D2EC8:
{
    r3 = -1;
    goto loc_805D30F4;
}

loc_805D2ED0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(29));
}

loc_805D2ED4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805D2F00;
    }
}

loc_805D2ED8:
{
    r0 = (r31 * 472);
    r4 = (r27 + r0);
    r27_addr_1 = (r27 + r0);
    r0 = MemoryInline::FlatRead32(r27_addr_1);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D2EF8;
    }
}

loc_805D2EF0:
{
    r30 = (r4 + 8);
    goto loc_805D2F04;
}

loc_805D2EF8:
{
    r30 = 0;
    goto loc_805D2F04;
}

loc_805D2F00:
{
    r30 = 0;
}

loc_805D2F04:
{
    r3 = 0x809C0000u;
    r5 = (r7 + 2504);
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r6 = r28;
    r4 = (r1 + 16);
    r7 = 0;
    ctx->lr = 0x805D2F20u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80529798u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805D2F24:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(29))) {
        goto loc_805D2F60;
    }
}

loc_805D2F28:
{
    r0 = (r31 * 472);
    r4 = (r27 + r0);
    r27_addr_3 = (r27 + r0);
    r0 = MemoryInline::FlatRead32(r27_addr_3);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D2F60;
    }
}

loc_805D2F40:
{
    r3 = MemoryInline::FlatRead32((r4 + 464));
    r0 = (r3 + -1);
}

loc_805D2F4C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(25))) {
        goto loc_805D2F58;
    }
}

loc_805D2F50:
{
    r0 = 0;
    goto loc_805D2F64;
}

loc_805D2F58:
{
    r0 = 1;
    goto loc_805D2F64;
}

loc_805D2F60:
{
    r0 = 0;
}

loc_805D2F64:
{
}

loc_805D2F68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D2FEC;
    }
}

loc_805D2F6C:
{
    r0 = 38;
    r5 = (r30 + 33);
    r4 = (r1 + 15);
    ctr = r0;
}

loc_805D2F7C:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_2 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_2, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805D2F7C;
    }
}

loc_805D2F90:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 8456));
    r3 = (r0 + r29);
    r0 = MemoryInline::FlatRead32((r3 + 376));
    MemoryInline::FlatWrite32((r30 + 112), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8456));
    r3 = (r0 + r29);
    r0 = MemoryInline::FlatRead16((r3 + 380));
    MemoryInline::FlatWrite16((r30 + 116), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 8456));
    r3 = (r0 + r29);
    r0 = MemoryInline::FlatRead16((r3 + 382));
    MemoryInline::FlatWrite16((r30 + 118), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + 8456));
    r0 = (r3 + 360);
    r3 = (r0 + r29);
    r29_addr_1 = (r29 + r0);
    r4 = MemoryInline::FlatRead32(r29_addr_1);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 | r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D3020;
    }
}

loc_805D2FE0:
{
    MemoryInline::FlatWrite32((r30 + 20), r3);
    MemoryInline::FlatWrite32((r30 + 16), r4);
    goto loc_805D3020;
}

loc_805D2FEC:
{
    r4 = 0x809C0000u;
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r4 + 8456));
    r4 = (r1 + 16);
    r8 = (r0 + r29);
    r0 = MemoryInline::FlatRead8((r8 + 388));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = MemoryInline::FlatRead32((r8 + 376));
    r6 = MemoryInline::FlatRead16((r8 + 380));
    r7 = MemoryInline::FlatRead16((r8 + 382));
    r9 = MemoryInline::FlatRead32((r8 + 360));
    r10 = MemoryInline::FlatRead32((r8 + 364));
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80519980u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r8 = ctx->gpr[8];
    ctr = ctx->ctr;
}

loc_805D3020:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 8456));
    r3 = (r0 + r29);
    r3 = MemoryInline::FlatRead16((r3 + 384));
}

loc_805D3034:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(9999))) {
        goto loc_805D303C;
    }
}

loc_805D3038:
{
    r3 = 9999;
}

loc_805D303C:
{
    r0 = (r3 & 65535);
}

loc_805D3044:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_805D304C;
    }
}

loc_805D3048:
{
    r3 = 1;
}

loc_805D304C:
{
    MemoryInline::FlatWrite16((r30 + 30), static_cast<uint16_t>(r3));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 8456));
    r3 = (r0 + r29);
    r4 = MemoryInline::FlatRead16((r3 + 386));
}

loc_805D3064:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(9999))) {
        goto loc_805D306C;
    }
}

loc_805D3068:
{
    r4 = 9999;
}

loc_805D306C:
{
    r0 = (r4 & 65535);
}

loc_805D3074:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_805D307C;
    }
}

loc_805D3078:
{
    r4 = 1;
}

loc_805D307C:
{
    r3 = 65536;
    MemoryInline::FlatWrite16((r30 + 32), static_cast<uint16_t>(r4));
    r30 = 0;
    r29 = 0x809C0000u;
    r28 = (r3 + -27664);
}

loc_805D3090:
{
    r4 = MemoryInline::FlatRead32((r29 + -10424));
    r3 = (r27 + 8);
    r0 = MemoryInline::FlatRead16((r4 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D30A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D30B8;
    }
}

loc_805D30A4:
{
    r0 = (r0 & 255);
    r0 = (r28 * r0);
    r4 = (r4 + r0);
    r4 = (r4 + 56);
    goto loc_805D30BC;
}

loc_805D30B8:
{
    r4 = 0;
}

loc_805D30BC:
{
    r0 = (r30 & 65535);
    r0 = (r0 * 448);
    r4 = (r4 + r0);
    r4 = (r4 + 22992);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = (r30 + 1);
    r27 = (r27 + 472);
}

loc_805D30DC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(30))) {
        goto loc_805D3090;
    }
}

loc_805D30E0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl0_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80621410;
}

loc_inl0_return:
{
}

loc_inl0_cont_80621410:
{
    // end of inlined leaf 0x80621410
    r3 = r31;
}

loc_805D30F4:
{
    r27 = MemoryInline::FlatRead32((r1 + 108));
    r28 = MemoryInline::FlatRead32((r1 + 112));
    r29 = MemoryInline::FlatRead32((r1 + 116));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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

// RECOMP_GUEST_ABI gpr_read=0xF80037FB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805D2D44 func_805D2D44 preserves=true fpr_mask=0x00000000
