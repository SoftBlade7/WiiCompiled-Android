#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807451D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807451D8;

loc_807451D8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 128);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r4 = MemoryInline::FlatRead32((r3 + 188));
    r30 = 0x808A0000u;
    r31 = 0x808D0000u;
    r26 = r3;
    r29 = MemoryInline::FlatRead32((r4 + 8));
    r30 = (r30 + 11144);
    r27 = MemoryInline::FlatRead32(r4);
    r31 = (r31 + -18960);
    r28 = MemoryInline::FlatRead32((r29 + 20));
    r3 = (r1 + 32);
    r4 = r28;
    ctx->lr = 0x8074522Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073CB7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = r27;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r5 = r3;
    r3 = (r1 + 56);
    r4 = (r1 + 32);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r3 = r27;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    r4 = MemoryInline::FlatRead32((r3 + 116));
    r0 = MemoryInline::FlatRead32((r3 + 120));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r0 = MemoryInline::FlatRead32((r3 + 124));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f30.d = MemoryInline::FlatReadFloat32((r28 + 44));
    ctx->lr = 0x8074528Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r26 + 196));
    f31.d = f1.d;
    r3 = MemoryInline::FlatRead32((r26 + 188));
    r27 = 0;
    r25 = MemoryInline::FlatRead8((r4 + 12));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r6 = MemoryInline::FlatRead32(r3);
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r26 + 200);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r26 + 200), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r26 + 204), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r26 + 208), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8074530Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r26 + 244));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 8));
}

loc_80745318:
{
    MemoryInline::FlatWriteFloat32((r26 + 224), f2.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80745334;
    }
}

loc_80745320:
{
}

loc_80745324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_807453D0;
    }
}

loc_80745328:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8074532C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074542C;
    }
}

loc_80745330:
{
    goto loc_807454FC;
}

loc_80745334:
{
    r3 = MemoryInline::FlatRead32((r26 + 248));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 248), r3);
    r0 = MemoryInline::FlatRead16((r31 + 38));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80745348:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80745354;
    }
}

loc_8074534C:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 4));
    goto loc_80745368;
}

loc_80745354:
{
    r0 = MemoryInline::FlatRead16((r31 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8074535C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80745364;
    }
}

loc_80745360:
{
    goto loc_80745368;
}

loc_80745364:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 12));
}

loc_80745368:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80745370:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807453AC;
    }
}

loc_80745378:
{
    f0.d = PPC_Fctiwz(f30.d);
    r3 = MemoryInline::FlatRead32((r26 + 244));
    r4 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 80), r4);
    r0 = (r3 + 1);
    f1.d = MemoryInline::FlatReadFloat64((r30 + 24));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r3 = fctiwzword0;
    MemoryInline::FlatWrite32((r26 + 244), r0);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 84), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_807453AC:
{
    SetCRFloatResident(cr, 0, f30.d, f2.d);
}

loc_807453B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807453BC;
    }
}

loc_807453B4:
{
    f30.d = f2.d;
    goto loc_807454FC;
}

loc_807453BC:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_807453C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807454FC;
    }
}

loc_807453C8:
{
    f30.d = f0.d;
    goto loc_807454FC;
}

loc_807453D0:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_807453D8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807453EC;
    }
}

loc_807453E0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 244), r0);
    goto loc_807454FC;
}

loc_807453EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8074540Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80745414:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807454FC;
    }
}

loc_80745418:
{
    r3 = MemoryInline::FlatRead32((r26 + 244));
    f30.d = MemoryInline::FlatReadFloat32(r30);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 244), r0);
    goto loc_807454FC;
}

loc_8074542C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80745454:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80745460:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8074546C;
    }
}

loc_80745464:
{
    r3 = (r1 + 56);
    ctx->lr = 0x8074546Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8074546C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80745494:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807454A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807454AC;
    }
}

loc_807454A4:
{
    r3 = (r1 + 44);
    ctx->lr = 0x807454ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_807454AC:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_807454B4:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807454EC;
    }
}

loc_807454E0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 244), r0);
    goto loc_807454FC;
}

loc_807454EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807454F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807454FC;
    }
}

loc_807454F8:
{
    r27 = 1;
}

loc_807454FC:
{
    r3 = r28;
    ctx->lr = 0x80745504u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073D934u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r28 + 44), f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80745524:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80745530;
    }
}

loc_80745528:
{
    f2.d = f0.d;
    goto loc_80745540;
}

loc_80745530:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80745538:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80745540;
    }
}

loc_8074553C:
{
    f2.d = f0.d;
}

loc_80745540:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = MemoryInline::FlatRead32((r26 + 192));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x8074555Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80743858u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f31 = ctx->fpr[31];
    r3 = r29;
    // inline leaf 0x8073BA70 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 4));
    // end of inlined leaf 0x8073BA70
}

loc_80745568:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80745570;
    }
}

loc_8074556C:
{
    r27 = 1;
}

loc_80745570:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80745574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80745588;
    }
}

loc_80745578:
{
    r3 = r26;
    r4 = (r26 + 56);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_807455A4;
}

loc_80745588:
{
    r3 = MemoryInline::FlatRead32((r26 + 248));
    r0 = MemoryInline::FlatRead16((r31 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80745594:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807455A4;
    }
}

loc_80745598:
{
    r3 = r26;
    r4 = (r26 + 144);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_807455A4:
{
    r3 = r26;
    ctx->lr = 0x807455ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80744DACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807455B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80745624;
    }
}

loc_807455B4:
{
    r4 = MemoryInline::FlatRead32((r26 + 188));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1);
}

loc_807455CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807455D8;
    }
}

loc_807455D0:
{
    r0 = 0;
    goto loc_8074561C;
}

loc_807455D8:
{
    r3 = MemoryInline::FlatRead32((r26 + 236));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 236), r0);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    // inline leaf 0x8073BA70 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 4));
    // end of inlined leaf 0x8073BA70
}

loc_807455F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807455FC;
    }
}

loc_807455F4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 236), r0);
}

loc_807455FC:
{
    r3 = MemoryInline::FlatRead16((r31 + 48));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r26 + 236));
}

loc_80745608:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_80745618;
    }
}

loc_8074560C:
{
    MemoryInline::FlatWrite32((r26 + 236), r3);
    r0 = 1;
    goto loc_8074561C;
}

loc_80745618:
{
    r0 = 0;
}

loc_8074561C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80745620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80745630;
    }
}

loc_80745624:
{
    r3 = r26;
    r4 = (r26 + 144);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_80745630:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 100), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 128);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 128));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE00007F gpr_write=0xFE00087B gpr_return=0x00000018 fpr_read=0xC000001F fpr_write=0xC000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807451D8 func_807451D8 preserves=false fpr_mask=0xC0000000
