#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80094DA0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80094DA0;

loc_80094DA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 40u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -28416), 0, 8u, true, false);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28412));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    SetCRFloatResident(cr, 0, f2.d, f8.d);
}

loc_80094DC0:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
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
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r3 + 24), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 28), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 32), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 36), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 40), f3.d);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 44), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 48), f2.d);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 52), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 56), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 60), f0.d);
    }
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094E1C;
    }
}

loc_80094E18:
{
    goto loc_80094E20;
}

loc_80094E1C:
{
    f8.d = f2.d;
}

loc_80094E20:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 248));
    SetCRFloatResident(cr, 0, f8.d, f0.d);
}

loc_80094E28:
{
    r0 = cr;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
    r30 = (r0 ^ 1);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094E44:
{
    MemoryInline::FlatWrite32((r3 + 244), r0);
    MemoryInline::FlatWriteFloat32((r3 + 248), f8.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094E54;
    }
}

loc_80094E50:
{
    goto loc_80094E68;
}

loc_80094E54:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28412));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094E5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094E64;
    }
}

loc_80094E60:
{
    goto loc_80094E68;
}

loc_80094E64:
{
    f1.d = f0.d;
}

loc_80094E68:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28412));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094E78:
{
    MemoryInline::FlatWriteFloat32((r3 + 252), f1.d);
    MemoryInline::FlatWrite32((r3 + 256), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094E88;
    }
}

loc_80094E84:
{
    goto loc_80094E8C;
}

loc_80094E88:
{
    f2.d = f0.d;
}

loc_80094E8C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28416));
    MemoryInline::FlatWriteFloat32((r3 + 260), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094E9C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094EA4;
    }
}

loc_80094EA0:
{
    goto loc_80094EB8;
}

loc_80094EA4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28412));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094EAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094EB4;
    }
}

loc_80094EB0:
{
    goto loc_80094EB8;
}

loc_80094EB4:
{
    f1.d = f0.d;
}

loc_80094EB8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28416));
    MemoryInline::FlatWriteFloat32((r3 + 264), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094EC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094ED0;
    }
}

loc_80094ECC:
{
    goto loc_80094EE4;
}

loc_80094ED0:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28412));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094ED8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094EE0;
    }
}

loc_80094EDC:
{
    goto loc_80094EE4;
}

loc_80094EE0:
{
    f2.d = f0.d;
}

loc_80094EE4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28416));
    MemoryInline::FlatWriteFloat32((r3 + 268), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094EF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094EFC;
    }
}

loc_80094EF8:
{
    goto loc_80094F10;
}

loc_80094EFC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28412));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094F04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094F0C;
    }
}

loc_80094F08:
{
    goto loc_80094F10;
}

loc_80094F0C:
{
    f1.d = f0.d;
}

loc_80094F10:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28416));
    MemoryInline::FlatWriteFloat32((r3 + 272), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094F20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094F28;
    }
}

loc_80094F24:
{
    goto loc_80094F3C;
}

loc_80094F28:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28412));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094F30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094F38;
    }
}

loc_80094F34:
{
    goto loc_80094F3C;
}

loc_80094F38:
{
    f2.d = f0.d;
}

loc_80094F3C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28416));
    MemoryInline::FlatWriteFloat32((r3 + 276), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094F4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094F54;
    }
}

loc_80094F50:
{
    goto loc_80094F68;
}

loc_80094F54:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28412));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094F5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094F64;
    }
}

loc_80094F60:
{
    goto loc_80094F68;
}

loc_80094F64:
{
    f1.d = f0.d;
}

loc_80094F68:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r31 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28412));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80094F78:
{
    MemoryInline::FlatWriteFloat32((r3 + 288), f1.d);
    MemoryInline::FlatWrite32((r3 + 280), r31);
    MemoryInline::FlatWrite32((r3 + 284), r31);
    MemoryInline::FlatWriteFloat32((r3 + 292), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80094F94;
    }
}

loc_80094F8C:
{
    r3 = 1;
    goto loc_8009501C;
}

loc_80094F94:
{
    r3 = (r3 + 64);
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
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r3 + 135);
    r3 = (r0 & -32);
}

loc_80094FAC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80094FB4;
    }
}

loc_80094FB0:
{
    goto loc_80094FBC;
}

loc_80094FB4:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r31 = (r0 - r4);
}

loc_80094FBC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_80094FC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094FCC;
    }
}

loc_80094FC4:
{
    r3 = 0;
    goto loc_8009501C;
}

loc_80094FCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80094FD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80095004;
    }
}

loc_80094FD4:
{
    r3 = (r29 + 16);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x80094FE4u;
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
    r3 = (r29 + 64);
    ctx->lr = 0x80094FECu;
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
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r29 + 16);
    ctx->lr = 0x80095000u;
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
    goto loc_80095010;
}

loc_80095004:
{
    r3 = (r29 + 64);
    ctx->lr = 0x8009500Cu;
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
    r30 = r3;
}

loc_80095010:
{
    r0 = (0 - r30);
    r0 = (r0 | r30);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_8009501C:
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
// RECOMP_REGISTRATION base 0x80094DA0 func_80094DA0 preserves=true fpr_mask=0x00000000
