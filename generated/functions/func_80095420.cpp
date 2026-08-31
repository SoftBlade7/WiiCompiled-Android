#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80095420(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80095420;

loc_80095420:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 40u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -28392), 0, 8u, true, false);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28388));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    SetCRFloatResident(cr, 0, f2.d, f8.d);
}

loc_80095444:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            r5 = resolved_pair.second;
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r3 + 28), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 32), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 36), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 40), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 44), f3.d);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 48), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 52), f2.d);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 56), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 60), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 64), f0.d);
    }
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009549C;
    }
}

loc_80095498:
{
    goto loc_800954A0;
}

loc_8009549C:
{
    f8.d = f2.d;
}

loc_800954A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 252));
    SetCRFloatResident(cr, 0, f8.d, f0.d);
}

loc_800954A8:
{
    r0 = cr;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
    r29 = (r0 ^ 1);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800954C4:
{
    MemoryInline::FlatWrite32((r3 + 508), r0);
    MemoryInline::FlatWrite32((r3 + 248), r0);
    MemoryInline::FlatWriteFloat32((r3 + 512), f8.d);
    MemoryInline::FlatWriteFloat32((r3 + 252), f8.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800954DC;
    }
}

loc_800954D8:
{
    goto loc_800954F0;
}

loc_800954DC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28388));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800954E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800954EC;
    }
}

loc_800954E8:
{
    goto loc_800954F0;
}

loc_800954EC:
{
    f1.d = f0.d;
}

loc_800954F0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28388));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80095500:
{
    MemoryInline::FlatWriteFloat32((r3 + 516), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 256), f1.d);
    MemoryInline::FlatWrite32((r3 + 520), r0);
    MemoryInline::FlatWrite32((r3 + 260), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80095518;
    }
}

loc_80095514:
{
    goto loc_8009551C;
}

loc_80095518:
{
    f2.d = f0.d;
}

loc_8009551C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28392));
    MemoryInline::FlatWriteFloat32((r3 + 524), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8009552C:
{
    MemoryInline::FlatWriteFloat32((r3 + 264), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80095538;
    }
}

loc_80095534:
{
    goto loc_8009554C;
}

loc_80095538:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28388));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80095540:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80095548;
    }
}

loc_80095544:
{
    goto loc_8009554C;
}

loc_80095548:
{
    f1.d = f0.d;
}

loc_8009554C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28392));
    MemoryInline::FlatWriteFloat32((r3 + 528), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8009555C:
{
    MemoryInline::FlatWriteFloat32((r3 + 268), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80095568;
    }
}

loc_80095564:
{
    goto loc_8009557C;
}

loc_80095568:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28388));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80095570:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80095578;
    }
}

loc_80095574:
{
    goto loc_8009557C;
}

loc_80095578:
{
    f2.d = f0.d;
}

loc_8009557C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28392));
    MemoryInline::FlatWriteFloat32((r3 + 532), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8009558C:
{
    MemoryInline::FlatWriteFloat32((r3 + 272), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80095598;
    }
}

loc_80095594:
{
    goto loc_800955AC;
}

loc_80095598:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28388));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800955A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800955A8;
    }
}

loc_800955A4:
{
    goto loc_800955AC;
}

loc_800955A8:
{
    f1.d = f0.d;
}

loc_800955AC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28392));
    MemoryInline::FlatWriteFloat32((r3 + 536), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800955BC:
{
    MemoryInline::FlatWriteFloat32((r3 + 276), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800955C8;
    }
}

loc_800955C4:
{
    goto loc_800955DC;
}

loc_800955C8:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28388));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800955D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800955D8;
    }
}

loc_800955D4:
{
    goto loc_800955DC;
}

loc_800955D8:
{
    f2.d = f0.d;
}

loc_800955DC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28392));
    MemoryInline::FlatWriteFloat32((r3 + 540), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800955EC:
{
    MemoryInline::FlatWriteFloat32((r3 + 280), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800955F8;
    }
}

loc_800955F4:
{
    goto loc_8009560C;
}

loc_800955F8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28388));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80095600:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80095608;
    }
}

loc_80095604:
{
    goto loc_8009560C;
}

loc_80095608:
{
    f1.d = f0.d;
}

loc_8009560C:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r4 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28388));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8009561C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 284), 0, 276u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 268u, (r3 + 552), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 292), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r3 + 284), r4);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 288), r4);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 296), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_3, 260u, (r3 + 544), r4);
        MemoryInline::WriteResolved32(guest_range_3, 264u, (r3 + 548), r4);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 272u, (r3 + 556), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80095648;
    }
}

loc_80095640:
{
    r3 = 1;
    goto loc_80095720;
}

loc_80095648:
{
    r3 = (r3 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8012B47Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = (r3 + 135);
    r3 = (r31 + 300);
    r30 = (r0 & -32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8012C17Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = (r3 + 135);
    r3 = (r0 & -32);
}

loc_8009566C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r30))) {
        goto loc_80095674;
    }
}

loc_80095670:
{
    r3 = r30;
}

loc_80095674:
{
    r4 = MemoryInline::FlatRead32((r31 + 20));
}

loc_8009567C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80095688;
    }
}

loc_80095680:
{
    r0 = 0;
    goto loc_80095690;
}

loc_80095688:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r0 - r4);
}

loc_80095690:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80095694:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800956A0;
    }
}

loc_80095698:
{
    r3 = 0;
    goto loc_80095720;
}

loc_800956A0:
{
}

loc_800956A4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800956F0;
    }
}

loc_800956A8:
{
    r3 = (r31 + 20);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x800956B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8008D1E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r0 = MemoryInline::FlatRead32((r31 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800956C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800956D0;
    }
}

loc_800956C4:
{
    r3 = (r31 + 300);
    ctx->lr = 0x800956CCu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012C374u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800956D8;
}

loc_800956D0:
{
    r3 = (r31 + 68);
    ctx->lr = 0x800956D8u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012B658u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800956D8:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r29 = r3;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r31 + 20);
    ctx->lr = 0x800956ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8008D240u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    goto loc_80095714;
}

loc_800956F0:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800956F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80095708;
    }
}

loc_800956FC:
{
    r3 = (r31 + 300);
    ctx->lr = 0x80095704u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012C444u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80095710;
}

loc_80095708:
{
    r3 = (r31 + 68);
    ctx->lr = 0x80095710u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012B728u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80095710:
{
    r29 = r3;
}

loc_80095714:
{
    r0 = (0 - r29);
    r0 = (r0 | r29);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_80095720:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80095420 func_80095420 preserves=true fpr_mask=0x00000000
