#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80094030(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80094030;

loc_80094030:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -28476), 0, 8u, true, false);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28472));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    SetCRFloatResident(cr, 0, f2.d, f9.d);
}

loc_80094050:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r3 + 24), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 28), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 32), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 36), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 40), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 44), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 48), r5);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 52), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 56), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 60), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 64), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800940B4;
    }
}

loc_800940B0:
{
    goto loc_800940B8;
}

loc_800940B4:
{
    f9.d = f2.d;
}

loc_800940B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 344));
    SetCRFloatResident(cr, 0, f9.d, f0.d);
}

loc_800940C0:
{
    r0 = cr;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
    r30 = (r0 ^ 1);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800940DC:
{
    MemoryInline::FlatWrite32((r3 + 340), r0);
    MemoryInline::FlatWriteFloat32((r3 + 344), f9.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800940EC;
    }
}

loc_800940E8:
{
    goto loc_80094100;
}

loc_800940EC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28472));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800940F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800940FC;
    }
}

loc_800940F8:
{
    goto loc_80094100;
}

loc_800940FC:
{
    f1.d = f0.d;
}

loc_80094100:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28472));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094110:
{
    MemoryInline::FlatWriteFloat32((r3 + 348), f1.d);
    MemoryInline::FlatWrite32((r3 + 352), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094120;
    }
}

loc_8009411C:
{
    goto loc_80094124;
}

loc_80094120:
{
    f2.d = f0.d;
}

loc_80094124:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28476));
    MemoryInline::FlatWriteFloat32((r3 + 356), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094134:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009413C;
    }
}

loc_80094138:
{
    goto loc_80094150;
}

loc_8009413C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28472));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094144:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009414C;
    }
}

loc_80094148:
{
    goto loc_80094150;
}

loc_8009414C:
{
    f1.d = f0.d;
}

loc_80094150:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28476));
    MemoryInline::FlatWriteFloat32((r3 + 360), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094160:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094168;
    }
}

loc_80094164:
{
    goto loc_8009417C;
}

loc_80094168:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28472));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094170:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094178;
    }
}

loc_80094174:
{
    goto loc_8009417C;
}

loc_80094178:
{
    f2.d = f0.d;
}

loc_8009417C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28476));
    MemoryInline::FlatWriteFloat32((r3 + 364), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8009418C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094194;
    }
}

loc_80094190:
{
    goto loc_800941A8;
}

loc_80094194:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28472));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8009419C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800941A4;
    }
}

loc_800941A0:
{
    goto loc_800941A8;
}

loc_800941A4:
{
    f1.d = f0.d;
}

loc_800941A8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28476));
    MemoryInline::FlatWriteFloat32((r3 + 368), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800941B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800941C0;
    }
}

loc_800941BC:
{
    goto loc_800941D4;
}

loc_800941C0:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28472));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800941C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800941D0;
    }
}

loc_800941CC:
{
    goto loc_800941D4;
}

loc_800941D0:
{
    f2.d = f0.d;
}

loc_800941D4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28476));
    MemoryInline::FlatWriteFloat32((r3 + 372), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800941E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800941EC;
    }
}

loc_800941E8:
{
    goto loc_80094200;
}

loc_800941EC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28472));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800941F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800941FC;
    }
}

loc_800941F8:
{
    goto loc_80094200;
}

loc_800941FC:
{
    f1.d = f0.d;
}

loc_80094200:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28476));
    MemoryInline::FlatWriteFloat32((r3 + 376), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094210:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094218;
    }
}

loc_80094214:
{
    goto loc_8009422C;
}

loc_80094218:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28472));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094220:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094228;
    }
}

loc_80094224:
{
    goto loc_8009422C;
}

loc_80094228:
{
    f2.d = f0.d;
}

loc_8009422C:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r31 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28472));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8009423C:
{
    MemoryInline::FlatWriteFloat32((r3 + 388), f2.d);
    MemoryInline::FlatWrite32((r3 + 380), r31);
    MemoryInline::FlatWrite32((r3 + 384), r31);
    MemoryInline::FlatWriteFloat32((r3 + 392), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80094258;
    }
}

loc_80094250:
{
    r3 = 1;
    goto loc_800942E0;
}

loc_80094258:
{
    r3 = (r3 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x801280B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r3 + 135);
    r3 = (r0 & -32);
}

loc_80094270:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80094278;
    }
}

loc_80094274:
{
    goto loc_80094280;
}

loc_80094278:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r31 = (r0 - r4);
}

loc_80094280:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_80094284:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094290;
    }
}

loc_80094288:
{
    r3 = 0;
    goto loc_800942E0;
}

loc_80094290:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80094294:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800942C8;
    }
}

loc_80094298:
{
    r3 = (r29 + 16);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x800942A8u;
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
    r3 = (r29 + 68);
    ctx->lr = 0x800942B0u;
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
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801282DCu>(ctx);
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
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r29 + 16);
    ctx->lr = 0x800942C4u;
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
    goto loc_800942D4;
}

loc_800942C8:
{
    r3 = (r29 + 68);
    ctx->lr = 0x800942D0u;
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
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801283ACu>(ctx);
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
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r3;
}

loc_800942D4:
{
    r0 = (0 - r30);
    r0 = (r0 | r30);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_800942E0:
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
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80094030 func_80094030 preserves=true fpr_mask=0x00000000
