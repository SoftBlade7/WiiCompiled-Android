#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080A0F0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8080A0F0;

loc_8080A0F0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    r10 = 1127219200;
    r6 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r1 + 164), r0);
    r7 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r1 + 156), r31);
    r31 = r5;
    MemoryInline::WriteResolved32(guest_range_1, 152u, (r1 + 152), r30);
    r30 = r4;
    r9 = MemoryInline::FlatRead32((r6 + -10448));
    r6 = 0x808B0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 260), 0, 36u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 260));
    r6 = (r6 + -20376);
    r9 = MemoryInline::FlatRead32((r9 + 32));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 264));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r8);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 268));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 292));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 280));
    r4 = PPC_Divw(static_cast<int32_t>(r9), static_cast<int32_t>(r5));
    MemoryInline::WriteResolved32(guest_range_1, 128u, (r1 + 128), r10);
    MemoryInline::WriteResolved32(guest_range_1, 136u, (r1 + 136), r10);
    r4 = (r4 * r5);
    r9 = (r9 - r4);
}

loc_8080A160:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r0))) {
        goto loc_8080A16C;
    }
}

loc_8080A164:
{
    r5 = 0;
    goto loc_8080A19C;
}

loc_8080A16C:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 284));
    r4 = (r0 + r8);
}

loc_8080A178:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r4))) {
        goto loc_8080A184;
    }
}

loc_8080A17C:
{
    r5 = 1;
    goto loc_8080A19C;
}

loc_8080A184:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r5 = 3;
    r4 = (r4 + r8);
}

loc_8080A194:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r4))) {
        goto loc_8080A19C;
    }
}

loc_8080A198:
{
    r5 = 2;
}

loc_8080A19C:
{
}

loc_8080A1A0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_8080A1C0;
    }
}

loc_8080A1A4:
{
}

loc_8080A1A8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8080A1F4;
    }
}

loc_8080A1AC:
{
}

loc_8080A1B0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8080A1FC;
    }
}

loc_8080A1B4:
{
}

loc_8080A1B8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8080A2EC;
    }
}

loc_8080A1BC:
{
    goto loc_8080A3E0;
}

loc_8080A1C0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 272));
    r4 = 1;
}

loc_8080A1CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8080A1D4;
    }
}

loc_8080A1D0:
{
    r4 = -1;
}

loc_8080A1D4:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f2.d = MemoryInline::FlatReadFloat64((r6 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 276));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f4.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8080A3E4;
}

loc_8080A1F4:
{
    f4.d = MemoryInline::FlatReadFloat32(r6);
    goto loc_8080A3E4;
}

loc_8080A1FC:
{
}

loc_8080A200:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r0))) {
        goto loc_8080A21C;
    }
}

loc_8080A204:
{
    r4 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r4);
    f1.d = MemoryInline::FlatReadFloat64((r6 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A294;
}

loc_8080A21C:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 284));
    r10 = (r0 + r8);
}

loc_8080A228:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r10))) {
        goto loc_8080A248;
    }
}

loc_8080A22C:
{
    r4 = (r9 - r0);
    f1.d = MemoryInline::FlatReadFloat64((r6 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A294;
}

loc_8080A248:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
    r4 = (r5 + r8);
}

loc_8080A254:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r4))) {
        goto loc_8080A274;
    }
}

loc_8080A258:
{
    r4 = (r9 - r10);
    f1.d = MemoryInline::FlatReadFloat64((r6 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A294;
}

loc_8080A274:
{
    r4 = (0 - r5);
    f1.d = MemoryInline::FlatReadFloat64((r6 + 16));
    r4 = (r4 - r8);
    r4 = (r4 + r9);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_8080A294:
{
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 272));
    r5 = 1;
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8080A2A8:
{
    r4 = MemoryInline::FlatRead32((r1 + 148));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080A2B4;
    }
}

loc_8080A2B0:
{
    r5 = -1;
}

loc_8080A2B4:
{
    r4 = (r4 * r5);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f3.d = MemoryInline::FlatReadFloat64((r6 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 276));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8080A3E4;
}

loc_8080A2EC:
{
}

loc_8080A2F0:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r0))) {
        goto loc_8080A30C;
    }
}

loc_8080A2F4:
{
    r4 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r4);
    f1.d = MemoryInline::FlatReadFloat64((r6 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A384;
}

loc_8080A30C:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 284));
    r10 = (r0 + r8);
}

loc_8080A318:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r10))) {
        goto loc_8080A338;
    }
}

loc_8080A31C:
{
    r4 = (r9 - r0);
    f1.d = MemoryInline::FlatReadFloat64((r6 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A384;
}

loc_8080A338:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r4 = (r5 + r8);
}

loc_8080A344:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r4))) {
        goto loc_8080A364;
    }
}

loc_8080A348:
{
    r4 = (r9 - r10);
    f1.d = MemoryInline::FlatReadFloat64((r6 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A384;
}

loc_8080A364:
{
    r4 = (0 - r5);
    f1.d = MemoryInline::FlatReadFloat64((r6 + 16));
    r4 = (r4 - r8);
    r4 = (r4 + r9);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_8080A384:
{
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 272));
    r5 = 1;
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8080A398:
{
    r4 = MemoryInline::FlatRead32((r1 + 148));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080A3A4;
    }
}

loc_8080A3A0:
{
    r5 = -1;
}

loc_8080A3A4:
{
    r4 = (r0 - r4);
    r0 = (r0 ^ -2147483648);
    r4 = (r5 * r4);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f3.d = MemoryInline::FlatReadFloat64((r6 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8080A3E4;
}

loc_8080A3E0:
{
    f4.d = MemoryInline::FlatReadFloat32(r6);
}

loc_8080A3E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 24));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8080A3EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080A3F8;
    }
}

loc_8080A3F0:
{
    f4.d = f0.d;
    goto loc_8080A408;
}

loc_8080A3F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 28));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8080A400:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8080A408;
    }
}

loc_8080A404:
{
    f4.d = f0.d;
}

loc_8080A408:
{
    f2.d = std::fabs(f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r6 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 28));
    f0.d = MemoryInline::FlatReadFloat32(r6);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8080A424:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080A42C;
    }
}

loc_8080A428:
{
    goto loc_8080A430;
}

loc_8080A42C:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_8080A430:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 36));
    r3 = (r1 + 80);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 40));
    r4 = (r1 + 20);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    r5 = (r7 + 48);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    ctx->lr = 0x8080A454u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FE14u>(ctx);
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
    r3 = (r1 + 80);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FABCu>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r5 = r31;
    r3 = (r1 + 8);
    r4 = (r1 + 32);
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
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    r0 = MemoryInline::FlatRead32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    r0 = (r0 | 64);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    MemoryInline::FlatWrite32(r30, r0);
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
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

// RECOMP_GUEST_ABI gpr_read=0xE00007FF gpr_write=0xE00007FB gpr_return=0x00000018 fpr_read=0xFC00001F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8080A0F0 func_8080A0F0 preserves=true fpr_mask=0x00000000
