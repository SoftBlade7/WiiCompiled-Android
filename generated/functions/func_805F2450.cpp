#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F2450(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805F2450;

loc_805F2450:
{
}

loc_805F2454:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(1))) {
        goto loc_805F2474;
    }
}

loc_805F2458:
{
}

loc_805F245C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(2))) {
        goto loc_805F24AC;
    }
}

loc_805F2460:
{
}

loc_805F2464:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(4))) {
        goto loc_805F24E8;
    }
}

loc_805F2468:
{
}

loc_805F246C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(8))) {
        goto loc_805F2520;
    }
}

loc_805F2470:
{
    goto loc_805F2558;
}

loc_805F2474:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    r27 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    r26 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2490:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F24A4;
    }
}

loc_805F2494:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F24A0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F2558;
    }
}

loc_805F24A4:
{
    r26 = 1;
    goto loc_805F2558;
}

loc_805F24AC:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    r27 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F24C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F24DC;
    }
}

loc_805F24CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F24D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F24E0;
    }
}

loc_805F24DC:
{
    r0 = 1;
}

loc_805F24E0:
{
    r26 = (0 - r0);
    goto loc_805F2558;
}

loc_805F24E8:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r27 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2500:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2514;
    }
}

loc_805F2504:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2510:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F2518;
    }
}

loc_805F2514:
{
    r27 = 1;
}

loc_805F2518:
{
    r26 = 0;
    goto loc_805F2558;
}

loc_805F2520:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2538:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F254C;
    }
}

loc_805F253C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2548:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F2550;
    }
}

loc_805F254C:
{
    r0 = 1;
}

loc_805F2550:
{
    r27 = (0 - r0);
    r26 = 0;
}

loc_805F2558:
{
    r3 = 0x809C0000u;
}

loc_805F2560:
{
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = MemoryInline::FlatRead32(r3);
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_805F2580;
    }
}

loc_805F256C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    goto loc_805F25D0;
}

loc_805F2580:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805F2584:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F25C8;
    }
}

loc_805F2588:
{
    r3 = (r27 ^ -2147483648);
    r0 = 1127219200;
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f3.d = MemoryInline::FlatReadFloat64((r4 + 23928));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 1008));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    goto loc_805F25D0;
}

loc_805F25C8:
{
    r3 = -1;
    goto loc_805F2930;
}

loc_805F25D0:
{
}

loc_805F25D4:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_805F25EC;
    }
}

loc_805F25D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    goto loc_805F263C;
}

loc_805F25EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805F25F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2634;
    }
}

loc_805F25F4:
{
    r3 = (r26 ^ -2147483648);
    r0 = 1127219200;
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f3.d = MemoryInline::FlatReadFloat64((r4 + 23928));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 1012));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 20));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    goto loc_805F263C;
}

loc_805F2634:
{
    r3 = -1;
    goto loc_805F2930;
}

loc_805F263C:
{
    f4.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f3.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F2664:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F269C;
    }
}

loc_805F2668:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_805F2930;
}

loc_805F269C:
{
    r3 = -1;
}

loc_805F2930:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC00003B gpr_write=0xFC00083B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F2450 func_805F2450 preserves=true fpr_mask=0x00000000
