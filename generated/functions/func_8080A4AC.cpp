#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080A4AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    goto loc_8080A4AC;

loc_8080A4AC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    r11 = 1127219200;
    r7 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r1 + 196), r0);
    r8 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 188u, (r1 + 188), r31);
    r31 = r6;
    MemoryInline::WriteResolved32(guest_range_1, 184u, (r1 + 184), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_1, 180u, (r1 + 180), r29);
    r29 = r4;
    r10 = MemoryInline::FlatRead32((r7 + -10448));
    r7 = 0x808B0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 260), 0, 36u, true, false);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 260));
    r7 = (r7 + -20376);
    r10 = MemoryInline::FlatRead32((r10 + 32));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 264));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r9);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 268));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 292));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 280));
    r4 = PPC_Divw(static_cast<int32_t>(r10), static_cast<int32_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 152u, (r1 + 152), r11);
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r1 + 160), r11);
    r4 = (r4 * r5);
    r9 = (r10 - r4);
}

loc_8080A524:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r0))) {
        goto loc_8080A530;
    }
}

loc_8080A528:
{
    r5 = 0;
    goto loc_8080A560;
}

loc_8080A530:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 284));
    r4 = (r0 + r6);
}

loc_8080A53C:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r4))) {
        goto loc_8080A548;
    }
}

loc_8080A540:
{
    r5 = 1;
    goto loc_8080A560;
}

loc_8080A548:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r5 = 3;
    r4 = (r4 + r6);
}

loc_8080A558:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r4))) {
        goto loc_8080A560;
    }
}

loc_8080A55C:
{
    r5 = 2;
}

loc_8080A560:
{
}

loc_8080A564:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_8080A584;
    }
}

loc_8080A568:
{
}

loc_8080A56C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8080A5B8;
    }
}

loc_8080A570:
{
}

loc_8080A574:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8080A5C0;
    }
}

loc_8080A578:
{
}

loc_8080A57C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8080A6B0;
    }
}

loc_8080A580:
{
    goto loc_8080A7A4;
}

loc_8080A584:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 272));
    r4 = 1;
}

loc_8080A590:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8080A598;
    }
}

loc_8080A594:
{
    r4 = -1;
}

loc_8080A598:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    f2.d = MemoryInline::FlatReadFloat64((r7 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 152));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 276));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f4.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8080A7A8;
}

loc_8080A5B8:
{
    f4.d = MemoryInline::FlatReadFloat32(r7);
    goto loc_8080A7A8;
}

loc_8080A5C0:
{
}

loc_8080A5C4:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r0))) {
        goto loc_8080A5E0;
    }
}

loc_8080A5C8:
{
    r4 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 164), r4);
    f1.d = MemoryInline::FlatReadFloat64((r7 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A658;
}

loc_8080A5E0:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 284));
    r10 = (r0 + r6);
}

loc_8080A5EC:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r10))) {
        goto loc_8080A60C;
    }
}

loc_8080A5F0:
{
    r4 = (r9 - r0);
    f1.d = MemoryInline::FlatReadFloat64((r7 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 156), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A658;
}

loc_8080A60C:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
    r4 = (r5 + r6);
}

loc_8080A618:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r4))) {
        goto loc_8080A638;
    }
}

loc_8080A61C:
{
    r4 = (r9 - r10);
    f1.d = MemoryInline::FlatReadFloat64((r7 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 164), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A658;
}

loc_8080A638:
{
    r4 = (0 - r5);
    f1.d = MemoryInline::FlatReadFloat64((r7 + 16));
    r4 = (r4 - r6);
    r4 = (r4 + r9);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 156), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_8080A658:
{
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 272));
    r5 = 1;
    MemoryInline::FlatWriteRamFloat64((r1 + 168), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8080A66C:
{
    r4 = MemoryInline::FlatRead32((r1 + 172));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080A678;
    }
}

loc_8080A674:
{
    r5 = -1;
}

loc_8080A678:
{
    r4 = (r4 * r5);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    f3.d = MemoryInline::FlatReadFloat64((r7 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 152));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 276));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8080A7A8;
}

loc_8080A6B0:
{
}

loc_8080A6B4:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r0))) {
        goto loc_8080A6D0;
    }
}

loc_8080A6B8:
{
    r4 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 164), r4);
    f1.d = MemoryInline::FlatReadFloat64((r7 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A748;
}

loc_8080A6D0:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 284));
    r10 = (r0 + r6);
}

loc_8080A6DC:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r10))) {
        goto loc_8080A6FC;
    }
}

loc_8080A6E0:
{
    r4 = (r9 - r0);
    f1.d = MemoryInline::FlatReadFloat64((r7 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 156), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A748;
}

loc_8080A6FC:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r4 = (r5 + r6);
}

loc_8080A708:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r4))) {
        goto loc_8080A728;
    }
}

loc_8080A70C:
{
    r4 = (r9 - r10);
    f1.d = MemoryInline::FlatReadFloat64((r7 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 164), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A748;
}

loc_8080A728:
{
    r4 = (0 - r5);
    f1.d = MemoryInline::FlatReadFloat64((r7 + 16));
    r4 = (r4 - r6);
    r4 = (r4 + r9);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 156), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_8080A748:
{
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 272));
    r5 = 1;
    MemoryInline::FlatWriteRamFloat64((r1 + 168), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8080A75C:
{
    r4 = MemoryInline::FlatRead32((r1 + 172));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080A768;
    }
}

loc_8080A764:
{
    r5 = -1;
}

loc_8080A768:
{
    r4 = (r0 - r4);
    r0 = (r0 ^ -2147483648);
    r4 = (r5 * r4);
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    f3.d = MemoryInline::FlatReadFloat64((r7 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 152));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8080A7A8;
}

loc_8080A7A4:
{
    f4.d = MemoryInline::FlatReadFloat32(r7);
}

loc_8080A7A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 24));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8080A7B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080A7BC;
    }
}

loc_8080A7B4:
{
    f4.d = f0.d;
    goto loc_8080A7CC;
}

loc_8080A7BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 28));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8080A7C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8080A7CC;
    }
}

loc_8080A7C8:
{
    f4.d = f0.d;
}

loc_8080A7CC:
{
    f2.d = std::fabs(f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r7 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r7 + 28));
    f0.d = MemoryInline::FlatReadFloat32(r7);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8080A7E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080A7F0;
    }
}

loc_8080A7EC:
{
    goto loc_8080A7F4;
}

loc_8080A7F0:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_8080A7F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r7 + 36));
    r3 = (r1 + 104);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 40));
    r4 = (r1 + 44);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    r5 = (r8 + 48);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    ctx->lr = 0x8080A818u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 56);
    r4 = (r1 + 44);
    ctx->lr = 0x8080A824u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r6 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r1 + 20);
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r4 = (r1 + 104);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r5 = 0x802A0000u;
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    r3 = (r1 + 8);
    r4 = (r1 + 56);
    r5 = (r5 + 16688);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r31;
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    ctx->lr = 0x8080A898u;
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
    r0 = MemoryInline::FlatRead32((r1 + 196));
    r31 = MemoryInline::FlatRead32((r1 + 188));
    r30 = MemoryInline::FlatRead32((r1 + 184));
    r29 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 192);
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

// RECOMP_GUEST_ABI gpr_read=0xE00007FF gpr_write=0xE0000FFB gpr_return=0x00000018 fpr_read=0xFC00001F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8080A4AC func_8080A4AC preserves=true fpr_mask=0x00000000
