#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080F04C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8080F04C;

loc_8080F04C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    r5 = (r5 + -19864);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + 24136);
    r7 = MemoryInline::FlatRead8((r3 + 17160));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_8080F080:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8080F090;
    }
}

loc_8080F088:
{
    r6 = MemoryInline::FlatRead32((r31 + 64));
    goto loc_8080F0D0;
}

loc_8080F090:
{
    r8 = MemoryInline::FlatRead16(r31);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r6 = (r8 + r3);
    r3 = (r0 + r6);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
}

loc_8080F0B4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r8))) {
        goto loc_8080F0C0;
    }
}

loc_8080F0B8:
{
    r6 = 1;
    goto loc_8080F0D0;
}

loc_8080F0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r6));
}

loc_8080F0C4:
{
    r6 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080F0D0;
    }
}

loc_8080F0CC:
{
    r6 = 2;
}

loc_8080F0D0:
{
}

loc_8080F0D4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8080F0E4;
    }
}

loc_8080F0D8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17156));
    goto loc_8080F124;
}

loc_8080F0E4:
{
    r8 = MemoryInline::FlatRead16(r31);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r7 = (r8 + r3);
    r3 = (r0 + r7);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r3 = (r4 - r0);
}

loc_8080F108:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r8))) {
        goto loc_8080F110;
    }
}

loc_8080F10C:
{
    goto loc_8080F124;
}

loc_8080F110:
{
}

loc_8080F114:
{
    r0 = (r3 - r7);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r7))) {
        goto loc_8080F120;
    }
}

loc_8080F11C:
{
    r0 = (r3 - r8);
}

loc_8080F120:
{
    r3 = r0;
}

loc_8080F124:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 132u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 32));
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_8080F130:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080F13C;
    }
}

loc_8080F134:
{
    f4.d = f1.d;
    goto loc_8080F14C;
}

loc_8080F13C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r5 + 120));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8080F144:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8080F14C;
    }
}

loc_8080F148:
{
    f4.d = f0.d;
}

loc_8080F14C:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 120u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 124u, (r5 + 124));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r5 + 120));
        }
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(2));
}

loc_8080F15C:
{
    MemoryInline::FlatWriteRamFloat32((r31 + 32), f4.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f5.d = PpcFmulsInline(f0.d, f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080F228;
    }
}

loc_8080F16C:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r5 + 88));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_8080F184:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080F1B4;
    }
}

loc_8080F188:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r5 + 128));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8080F228;
}

loc_8080F1B4:
{
    r4 = MemoryInline::FlatRead16((r31 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8080F1DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080F1F8;
    }
}

loc_8080F1E0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r5 + 128));
    f1.d = PpcFmulsInline(f0.d, f3.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8080F228;
}

loc_8080F1F8:
{
    r0 = (r4 - r3);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r5 + 128));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
}

loc_8080F228:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800001FF gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8080F04C func_8080F04C preserves=true fpr_mask=0x00000000
