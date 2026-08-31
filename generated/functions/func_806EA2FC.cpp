#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EA2FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806EA2FC;

loc_806EA2FC:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 220), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 2512);
    MemoryInline::FlatWriteRam32((r1 + 216), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 212), r29);
    r5 = MemoryInline::FlatRead32((r3 + 1028));
    MemoryInline::FlatWriteRam32((r1 + 176), r0);
}

loc_806EA338:
{
    MemoryInline::FlatWriteRam32((r1 + 184), r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(-1))) {
        goto loc_806EA374;
    }
}

loc_806EA340:
{
    r4 = MemoryInline::FlatRead32((r3 + 188));
    r0 = (r5 + 10);
}

loc_806EA34C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_806EA374;
    }
}

loc_806EA350:
{
    r0 = MemoryInline::FlatRead8((r3 + 1024));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EA358:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806EA374;
    }
}

loc_806EA35C:
{
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 184), r4);
    MemoryInline::FlatWrite8((r3 + 1036), static_cast<uint8_t>(r0));
    ctx->lr = 0x806EA370u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806EB184u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806EA6A0;
}

loc_806EA374:
{
    r4 = MemoryInline::FlatRead32((r3 + 188));
}

loc_806EA37C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(10))) {
        goto loc_806EA390;
    }
}

loc_806EA380:
{
    r0 = MemoryInline::FlatRead8((r3 + 1024));
}

loc_806EA388:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806EA390;
    }
}

loc_806EA38C:
{
    MemoryInline::FlatWrite32((r3 + 1028), r4);
}

loc_806EA390:
{
    r5 = MemoryInline::FlatRead32((r3 + 1028));
}

loc_806EA398:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(-1))) {
        goto loc_806EA3D4;
    }
}

loc_806EA39C:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
    r4 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 80));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 29992));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1040));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 944));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 944), f0.d);
    goto loc_806EA414;
}

loc_806EA3D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
    r4 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat64((r31 + 80));
    r0 = (r0 - r5);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 1040));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 29992));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 944));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 944), f0.d);
}

loc_806EA414:
{
    r0 = MemoryInline::FlatRead32((r3 + 1028));
}

loc_806EA41C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_806EA464;
    }
}

loc_806EA420:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 80));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1048));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 1044));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1016));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1012));
    f4.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1052));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 1016), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 1012), f0.d);
    goto loc_806EA4E8;
}

loc_806EA464:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1012));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f1.d = std::fabs(f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806EA474:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806EA4C0;
    }
}

loc_806EA478:
{
    f0.d = PPC_Fctiwz(f2.d);
    r4 = -1240793088;
    r4 = (r4 + 24759);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 56));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f0.d);
    r0 = fctiwzword0;
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r4 + r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 360);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1012), f0.d);
}

loc_806EA4C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1052));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 1012));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1016));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 1012), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 1016), f0.d);
}

loc_806EA4E8:
{
    r5 = MemoryInline::FlatRead32((r3 + 1028));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(-1));
}

loc_806EA4F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EA500;
    }
}

loc_806EA4F4:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r3 + 1020), r0);
    goto loc_806EA518;
}

loc_806EA500:
{
    r4 = MemoryInline::FlatRead32((r3 + 188));
    r0 = (r5 + 16);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806EA50C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806EA518;
    }
}

loc_806EA510:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 1020), r0);
}

loc_806EA518:
{
    r0 = MemoryInline::FlatRead32((r3 + 1020));
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 56));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = f31.d;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x806EA554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x806EA55Cu;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 88), 0, 928u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 88));
    r3 = 0x802A0000u;
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 92));
    r29 = (r3 + 16640);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 156u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r1 + 132), r0);
    r5 = r29;
    f4.d = MemoryInline::FlatReadFloat32((r3 + 16640));
    r3 = (r1 + 80);
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 128), r4);
    r4 = (r1 + 20);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 96));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 100));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 120u, (r1 + 140), r0);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 136), r6);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 64));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r30 + 104));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r30 + 108));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 128u, (r1 + 148), r0);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 144), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r30 + 112));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r30 + 116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r1 + 156), r0);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 152), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 120));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r1 + 164), r0);
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r1 + 160), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r30 + 128));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r30 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r1 + 172), r0);
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 168), r6);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r1 + 140), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r1 + 156), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 152u, (r1 + 172), f2.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 924u, (r30 + 1012));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 20), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 28), f0.d);
    ctx->lr = 0x806EA608u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 1016));
    r5 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 64));
    r3 = (r1 + 32);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r4 = (r1 + 8);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    ctx->lr = 0x806EA634u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 80);
    r4 = (r1 + 32);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    r3 = (r1 + 128);
    r4 = (r1 + 80);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f0.d = MemoryInline::FlatReadFloat32((r30 + 940));
    r29 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 944));
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 948));
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f0.d);
    r30 = MemoryInline::FlatRead32((r30 + 8));
}

loc_806EA674:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806EA680:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806EA690;
    }
}

loc_806EA684:
{
    r5 = (r1 + 128);
    r4 = 0;
    ctx->lr = 0x806EA690u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_806EA690:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(2));
}

loc_806EA69C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806EA674;
    }
}

loc_806EA6A0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 244));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 224));
    r31 = MemoryInline::FlatRead32((r1 + 220));
    r30 = MemoryInline::FlatRead32((r1 + 216));
    r29 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806EA2FC func_806EA2FC preserves=false fpr_mask=0x80000000
