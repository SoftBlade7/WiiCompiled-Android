#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F2384(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F2384;

loc_805F2384:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_805F239C:
{
    r28 = r3;
    r29 = r4;
    r26 = r5;
    r30 = r6;
    r31 = r7;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F23BC;
    }
}

loc_805F23B4:
{
    r3 = -1;
    goto loc_805F2930;
}

loc_805F23BC:
{
    r0 = (r5 & 1);
}

loc_805F23C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F23D0;
    }
}

loc_805F23C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    goto loc_805F23F4;
}

loc_805F23D0:
{
    r0 = (r5 & 2);
}

loc_805F23D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F23E8;
    }
}

loc_805F23D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    goto loc_805F23F4;
}

loc_805F23E8:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 23712));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
}

loc_805F23F4:
{
    r0 = (r5 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F23F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2408;
    }
}

loc_805F23FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    goto loc_805F2428;
}

loc_805F2408:
{
    r0 = (r5 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F240C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F241C;
    }
}

loc_805F2410:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = (-(f0.d));
    goto loc_805F2424;
}

loc_805F241C:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
}

loc_805F2424:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
}

loc_805F2428:
{
    r3 = (r1 + 40);
    ctx->lr = 0x805F2430u;
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
    InvokeDirectCpu<0x80243A00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(10));
}

loc_805F2434:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F292C;
    }
}

loc_805F2438:
{
    r3 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -26224);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x805F292Cu:
        goto loc_805F292C;
        break;
    case 0x805F2450u:
        goto loc_805F2450;
        break;
    case 0x805F26A4u:
        goto loc_805F26A4;
        break;
    default:
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
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

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
    goto loc_805F2930;
}

loc_805F26A4:
{
}

loc_805F26A8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(5))) {
        goto loc_805F26C8;
    }
}

loc_805F26AC:
{
}

loc_805F26B0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(9))) {
        goto loc_805F272C;
    }
}

loc_805F26B4:
{
}

loc_805F26B8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(6))) {
        goto loc_805F2794;
    }
}

loc_805F26BC:
{
}

loc_805F26C0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(10))) {
        goto loc_805F27FC;
    }
}

loc_805F26C4:
{
    goto loc_805F2864;
}

loc_805F26C8:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r26 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F26E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F26F4;
    }
}

loc_805F26E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F26F0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F26F8;
    }
}

loc_805F26F4:
{
    r26 = 1;
}

loc_805F26F8:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    r27 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2710:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2724;
    }
}

loc_805F2714:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2720:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F2864;
    }
}

loc_805F2724:
{
    r27 = 1;
    goto loc_805F2864;
}

loc_805F272C:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2744:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F2758;
    }
}

loc_805F2748:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2754:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F275C;
    }
}

loc_805F2758:
{
    r0 = 1;
}

loc_805F275C:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    r26 = (0 - r0);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    r27 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2778:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F278C;
    }
}

loc_805F277C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2788:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F2864;
    }
}

loc_805F278C:
{
    r27 = 1;
    goto loc_805F2864;
}

loc_805F2794:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r26 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F27AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F27C0;
    }
}

loc_805F27B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F27BC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F27C4;
    }
}

loc_805F27C0:
{
    r26 = 1;
}

loc_805F27C4:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F27DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F27F0;
    }
}

loc_805F27E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F27EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F27F4;
    }
}

loc_805F27F0:
{
    r0 = 1;
}

loc_805F27F4:
{
    r27 = (0 - r0);
    goto loc_805F2864;
}

loc_805F27FC:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2814:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F2828;
    }
}

loc_805F2818:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2824:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F282C;
    }
}

loc_805F2828:
{
    r0 = 1;
}

loc_805F282C:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    r26 = (0 - r0);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2848:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F285C;
    }
}

loc_805F284C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2858:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F2860;
    }
}

loc_805F285C:
{
    r0 = 1;
}

loc_805F2860:
{
    r27 = (0 - r0);
}

loc_805F2864:
{
    f3.d = MemoryInline::FlatReadFloat32((r29 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_805F286C:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F2900;
    }
}

loc_805F28A0:
{
}

loc_805F28A4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_805F2900;
    }
}

loc_805F28A8:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_805F28B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F28EC;
    }
}

loc_805F28B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
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

loc_805F28EC:
{
    f0.d = PPC_Fctiwz(f4.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    r3 = (r3 + -2147483648);
    goto loc_805F2930;
}

loc_805F2900:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805F2904:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F2910;
    }
}

loc_805F2908:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805F290C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2924;
    }
}

loc_805F2910:
{
    f0.d = PPC_Fctiwz(f4.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword1;
    r3 = (r3 + -2147483648);
    goto loc_805F2930;
}

loc_805F2924:
{
    r3 = -1;
    goto loc_805F2930;
}

loc_805F292C:
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0000FF gpr_write=0xFC00083B gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F2384 func_805F2384 preserves=true fpr_mask=0x00000000
